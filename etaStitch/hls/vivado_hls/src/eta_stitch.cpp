#include <algorithm>
#include <utility>

#include "eta_stitch.h"
#include "eta_stitch_parameters.h"
#include "objects.h"

#include <cstdlib>
#include <sstream>

#include <ap_axi_sdata.h>
#include <ap_int.h>
#include <hls_stream.h>

using namespace std;

#define ETA_STITCH true
#define PHI_STITCH false

void stitch(bool stitchDir, Tower Ai, Tower Bi, Tower &Ao, Tower &Bo) {

#pragma HLS STABLE variable=stitchDir
#pragma HLS PIPELINE
#pragma HLS INLINE

	ap_uint<11> clustered_et_sum = Ai.clustered_et + Bi.clustered_et;

	ap_uint<10> clustered_et_pegged = (clustered_et_sum > 0x3FF) ? (ap_uint<10> ) 0x3FF : (ap_uint<10> ) clustered_et_sum;

	// stitchDir == true -> eta stitch, stitchDir == false -> phi stitch
	bool etaStitch = ETA_STITCH && (Ai.peak_eta == 4 && Bi.peak_eta == 0) && (Ai.peak_phi == Bi.peak_phi);
	bool phiStitch = PHI_STITCH && (Ai.peak_phi == 4 && Bi.peak_phi == 0) && (Ai.peak_eta == Bi.peak_eta);

	if (etaStitch || phiStitch) {
		if (Ai.clustered_et > Bi.clustered_et) {
			Ao.clustered_et = clustered_et_pegged;
			Bo.clustered_et = 0;
		} else {
			Ao.clustered_et = 0;
			Bo.clustered_et = clustered_et_pegged;
		}
	} else {
		Ao.clustered_et = Ai.clustered_et;
		Bo.clustered_et = Bi.clustered_et;
	}

	Ao.peak_eta = Ai.peak_eta;
	Ao.peak_phi = Ai.peak_phi;
	Ao.peak_time = Ai.peak_time;
	Ao.total_et = Ai.total_et;

	Bo.peak_eta = Bi.peak_eta;
	Bo.peak_phi = Bi.peak_phi;
	Bo.peak_time = Bi.peak_time;
	Bo.total_et = Bi.total_et;
}

void processInputStream(hls::stream<inputWord> &link_data, Tower twrs[TOWERS_IN_ETA]) {

#pragma HLS ARRAY_PARTITION variable=twrs complete dim=1

#pragma HLS INTERFACE axis port=link_data
#pragma HLS INLINE
#pragma HLS PIPELINE II=9

	ap_uint<64> data[N_WORDS_PER_FRAME];
#pragma HLS ARRAY_PARTITION variable=data complete dim=1

	for (size_t i = 0; i < N_WORDS_PER_FRAME; i++) {
#ifndef __SYNTHESIS__
		// Avoid simulation warnings
		if (link_data.empty())
			continue;
#endif
		data[i] = link_data.read().data;
	}

	twrs[0] = Tower(data[0](31, 0));
	twrs[1] = Tower(data[0](63, 32));
	twrs[2] = Tower(data[1](31, 0));
	twrs[3] = Tower(data[1](63, 32));
	twrs[4] = Tower(data[2](31, 0));
	twrs[5] = Tower(data[2](63, 32));
	twrs[6] = Tower(data[3](31, 0));
	twrs[7] = Tower(data[3](63, 32));
	twrs[8] = Tower(data[4](31, 0));
	twrs[9] = Tower(data[4](63, 32));
	twrs[10] = Tower(data[5](31, 0));
	twrs[11] = Tower(data[5](63, 32));
	twrs[12] = Tower(data[6](31, 0));
	twrs[13] = Tower(data[6](63, 32));
	twrs[14] = Tower(data[7](31, 0));
	twrs[15] = Tower(data[7](63, 32));
	twrs[16] = Tower(data[8](31, 0));
}

void processOutputStream(Tower twrs[TOWERS_IN_ETA], hls::stream<outputWord> &link_data) {

#pragma HLS ARRAY_PARTITION variable=twrs complete dim=0
#pragma HLS INTERFACE axis port=link_data

#pragma HLS INLINE

	outputWord tmp;
	tmp.user = 0;
	tmp.last = 1;

	tmp.data(31, 0) = (ap_uint<32> ) twrs[0];
	tmp.data(63, 32) = (ap_uint<32> ) twrs[1];
	link_data.write(tmp);

	tmp.data(31, 0) = (ap_uint<32> ) twrs[2];
	tmp.data(63, 32) = (ap_uint<32> ) twrs[3];
	link_data.write(tmp);

	tmp.data(31, 0) = (ap_uint<32> ) twrs[4];
	tmp.data(63, 32) = (ap_uint<32> ) twrs[5];
	link_data.write(tmp);

	tmp.data(31, 0) = (ap_uint<32> ) twrs[6];
	tmp.data(63, 32) = (ap_uint<32> ) twrs[7];
	link_data.write(tmp);

	tmp.data(31, 0) = (ap_uint<32> ) twrs[8];
	tmp.data(63, 32) = (ap_uint<32> ) twrs[9];
	link_data.write(tmp);

	tmp.data(31, 0) = (ap_uint<32> ) twrs[10];
	tmp.data(63, 32) = (ap_uint<32> ) twrs[11];
	link_data.write(tmp);

	tmp.data(31, 0) = (ap_uint<32> ) twrs[12];
	tmp.data(63, 32) = (ap_uint<32> ) twrs[13];
	link_data.write(tmp);

	tmp.data(31, 0) = (ap_uint<32> ) twrs[14];
	tmp.data(63, 32) = (ap_uint<32> ) twrs[15];
	link_data.write(tmp);

	tmp.data(31, 0) = (ap_uint<32> ) twrs[16];
	tmp.data(63, 32) = 0;
	link_data.write(tmp);

}

void etaStitchStream(hls::stream<inputWord> link_in[N_INPUT_LINKS], hls::stream<outputWord> link_out[N_OUTPUT_LINKS]) {

#pragma HLS INTERFACE axis port=link_in
#pragma HLS INTERFACE axis port=link_out

#pragma HLS PIPELINE II=N_WORDS_PER_FRAME

#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0

	Tower twrs[TOWERS_IN_PHI][TOWERS_IN_ETA];
	Tower twrsStitched[TOWERS_IN_PHI][TOWERS_IN_ETA];

#pragma HLS ARRAY_PARTITION variable=twrs complete dim=0
#pragma HLS ARRAY_PARTITION variable=twrsStitched complete dim=0

	inputUnpack: for (size_t lnk = 0; lnk < N_INPUT_LINKS; lnk++) {
#pragma LOOP UNROLL
		Tower twrs_tmp[TOWERS_IN_ETA];
#pragma HLS ARRAY_PARTITION variable=twrs_tmp complete dim=0

		processInputStream(link_in[lnk], twrs_tmp);
		tmp1: for (size_t eta = 0; eta < TOWERS_IN_ETA; eta++) {
#pragma LOOP UNROLL
			twrs[lnk][eta] = twrs_tmp[eta];
		}
	}

// make a copy of all towers, we'll overwrite only neighboring towers with stitched version
	for (size_t phi = 0; phi < TOWERS_IN_PHI; phi++) {
#pragma LOOP UNROLL
		for (size_t eta = 0; eta < TOWERS_IN_ETA; eta++) {
#pragma LOOP UNROLL
			twrsStitched[phi][eta] = twrs[phi][eta];
		}
	}

	// now stitch in eta, look only for the towers that need stitching
	for (size_t eta = 0; eta < TOWERS_IN_ETA; eta++) {
#pragma LOOP UNROLL
		stitch(ETA_STITCH, twrs[3][eta], twrs[4][eta], twrsStitched[3][eta], twrsStitched[4][eta]);
		stitch(ETA_STITCH, twrs[7][eta], twrs[8][eta], twrsStitched[7][eta], twrsStitched[8][eta]);
		stitch(ETA_STITCH, twrs[11][eta], twrs[12][eta], twrsStitched[11][eta], twrsStitched[12][eta]);
		stitch(ETA_STITCH, twrs[15][eta], twrs[16][eta], twrsStitched[15][eta], twrsStitched[16][eta]);
		stitch(ETA_STITCH, twrs[19][eta], twrs[20][eta], twrsStitched[19][eta], twrsStitched[20][eta]);
		stitch(ETA_STITCH, twrs[23][eta], twrs[24][eta], twrsStitched[23][eta], twrsStitched[24][eta]);
		stitch(ETA_STITCH, twrs[27][eta], twrs[28][eta], twrsStitched[27][eta], twrsStitched[28][eta]);
	}

	outputPack: for (size_t lnk = 0; lnk < N_INPUT_LINKS; lnk++) {
#pragma LOOP UNROLL
		Tower twrs_tmp[TOWERS_IN_ETA];
#pragma HLS ARRAY_PARTITION variable=twrs_tmp complete dim=0

		for (size_t eta = 0; eta < TOWERS_IN_ETA; eta++) {
#pragma LOOP UNROLL
			twrs_tmp[eta] = twrsStitched[lnk][eta];

		}

		processOutputStream(twrs_tmp, link_out[lnk]);

	}
}
