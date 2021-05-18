#include <algorithm>
#include <utility>

#include <cstdlib>
#include <sstream>

#include <ap_axi_sdata.h>
#include <ap_int.h>
#include <hls_stream.h>

#include "phi_stitch.h"
#include "objects.h"

using namespace std;

#define ETA_STITCH false
#define PHI_STITCH true

void stitch(bool stitchDir, Tower Ai, Tower Bi, Tower &Ao, Tower &Bo) {

#pragma HLS STABLE variable=stitchDir
#pragma HLS PIPELINE
#pragma HLS INLINE

	ap_uint<11> clustered_et_sum = Ai.clustered_et + Bi.clustered_et;

	ap_uint<10> clustered_et_pegged = (clustered_et_sum > 0x3FF) ? (ap_uint<10> ) 0x3FF : (ap_uint<10> ) clustered_et_sum;

	// stitchDir == true -> eta stitch, stitchDir == false -> phi stitch
	bool etaStitch = ETA_STITCH && (Ai.peak_phi == 4 && Bi.peak_phi == 0) && (Ai.peak_eta == Bi.peak_eta);
	bool phiStitch = PHI_STITCH && (Ai.peak_eta == 4 && Bi.peak_eta == 0) && (Ai.peak_phi == Bi.peak_phi);

	if (etaStitch || phiStitch) {
#ifndef __SYNTHESIS__
	   cout<<" stitching ... "<<endl;
#endif
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
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME

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

void algoStream(hls::stream<inputWord> link_in[N_INPUT_LINKS], hls::stream<outputWord> link_out[N_OUTPUT_LINKS]) {

#pragma HLS INTERFACE axis port=link_in
#pragma HLS INTERFACE axis port=link_out

#pragma HLS PIPELINE II=N_WORDS_PER_FRAME

#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0

	Tower twrs[N_INPUT_LINKS][TOWERS_IN_ETA];
	Tower twrsStitched[N_INPUT_LINKS][TOWERS_IN_ETA];

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
	for (size_t phi = 0; phi < N_INPUT_LINKS; phi++) {
#pragma LOOP UNROLL
		for (size_t eta = 0; eta < TOWERS_IN_ETA; eta++) {
#pragma LOOP UNROLL
			twrsStitched[phi][eta] = twrs[phi][eta];
		}
	}

	stitch(PHI_STITCH, twrs[0][16], twrs[18][0], twrsStitched[0][16], twrsStitched[18][0]);
	stitch(PHI_STITCH, twrs[1][16], twrs[19][0], twrsStitched[1][16], twrsStitched[19][0]);
	stitch(PHI_STITCH, twrs[2][16], twrs[20][0], twrsStitched[2][16], twrsStitched[20][0]);
	stitch(PHI_STITCH, twrs[3][16], twrs[21][0], twrsStitched[3][16], twrsStitched[21][0]);
	stitch(PHI_STITCH, twrs[4][16], twrs[22][0], twrsStitched[4][16], twrsStitched[22][0]);
	stitch(PHI_STITCH, twrs[5][16], twrs[23][0], twrsStitched[5][16], twrsStitched[23][0]);
	stitch(PHI_STITCH, twrs[6][16], twrs[24][0], twrsStitched[6][16], twrsStitched[24][0]);
	stitch(PHI_STITCH, twrs[7][16], twrs[25][0], twrsStitched[7][16], twrsStitched[25][0]);
	stitch(PHI_STITCH, twrs[8][16], twrs[26][0], twrsStitched[8][16], twrsStitched[26][0]);
	stitch(PHI_STITCH, twrs[9][16], twrs[27][0], twrsStitched[9][16], twrsStitched[27][0]);
	stitch(PHI_STITCH, twrs[10][16], twrs[28][0], twrsStitched[10][16], twrsStitched[28][0]);
	stitch(PHI_STITCH, twrs[11][16], twrs[29][0], twrsStitched[11][16], twrsStitched[29][0]);
	stitch(PHI_STITCH, twrs[12][16], twrs[30][0], twrsStitched[12][16], twrsStitched[30][0]);
//---|	stitch(PHI_STITCH, twrs[13][16], twrs[31][0], twrsStitched[13][16], twrsStitched[31][0]);
//---|	stitch(PHI_STITCH, twrs[14][16], twrs[32][0], twrsStitched[14][16], twrsStitched[32][0]);
//---|	stitch(PHI_STITCH, twrs[15][16], twrs[33][0], twrsStitched[15][16], twrsStitched[33][0]);
//---|	stitch(PHI_STITCH, twrs[16][16], twrs[34][0], twrsStitched[16][16], twrsStitched[34][0]);
//---|	stitch(PHI_STITCH, twrs[17][16], twrs[35][0], twrsStitched[17][16], twrsStitched[35][0]);
//-| 	// now stitch in eta, look only for the towers that need stitching
//-| 	for (size_t phi = 0; phi < TOWERS_IN_PHI; phi++) {
//-| #pragma LOOP UNROLL
//-| 	   size_t negPhi = phi+TOWERS_IN_PHI;
//-| 	   size_t posPhi = phi;
//-| 	   stitch(PHI_STITCH, twrs[posPhi][16], twrs[negPhi][0], twrsStitched[posPhi][16], twrsStitched[negPhi][0]);
//-| 	}

#ifndef __SYNTHESIS__
	for(size_t phi=0; phi < TOWERS_IN_PHI; phi++){
	   size_t pPhi = phi;
	   size_t nPhi = phi+TOWERS_IN_PHI;

	      if(twrs[pPhi][16].clustered_et>0 || twrs[nPhi][0].clustered_et>0){
		 cout<<"[(+17,"<< pPhi <<") ("<< twrs[pPhi][16].peak_eta <<","<< twrs[pPhi][16].peak_phi <<")] = "<< twrs[pPhi][16].clustered_et <<" --> "<<twrsStitched[pPhi][16].clustered_et<<"  ||  ";
		 cout<<"[(-1," << nPhi <<") ("<< twrs[nPhi][0].peak_eta  <<","<< twrs[nPhi][0].peak_phi <<")] = " << twrs[nPhi][0].clustered_et  <<" --> "<<twrsStitched[nPhi][0].clustered_et<<endl;

	   }            
	}               
#endif 


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
