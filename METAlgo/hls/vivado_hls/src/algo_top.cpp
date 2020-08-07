#include "algo_top_parameters.h"
#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "../../../../include/objects.h"
using namespace std;
using namespace algo;


void unpackInputLink(hls::stream<algo::axiword576> &ilink, Tower towers[TOWERS_IN_ETA/2]) {
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME
#pragma HLS ARRAY_PARTITION variable=towers complete dim=0
#pragma HLS INTERFACE axis port=ilink
#pragma HLS INLINE

  ap_uint<576> word_576b_;

#ifndef __SYNTHESIS__
  // Avoid simulation warnings
  if (link.empty()) return;
#endif

  word_576b_ = ilink.read().data;

  towers[0]  = Tower(word_576b_( 31,   0));
  towers[1]  = Tower(word_576b_( 63,  32));
  towers[2]  = Tower(word_576b_( 95,  64));
  towers[3]  = Tower(word_576b_(127,  96));
  towers[4]  = Tower(word_576b_(159, 128));
  towers[5]  = Tower(word_576b_(191, 160));
  towers[6]  = Tower(word_576b_(223, 192));
  towers[7]  = Tower(word_576b_(255, 224));
  towers[8]  = Tower(word_576b_(287, 256));
  towers[9]  = Tower(word_576b_(319, 288));
  towers[10] = Tower(word_576b_(351, 320));
  towers[11] = Tower(word_576b_(383, 352));
  towers[12] = Tower(word_576b_(415, 384));
  towers[13] = Tower(word_576b_(447, 416));
  towers[14] = Tower(word_576b_(479, 448));
  towers[15] = Tower(word_576b_(511, 480));
  towers[16] = Tower(word_576b_(543, 512));

  return;
}

void packOutput(Tower towers[TOWERS_IN_ETA/2], hls::stream<algo::axiword576> &olink){
#pragma HLS PIPELINE II=N_OUTPUT_WORDS_PER_FRAME
#pragma HLS ARRAY_PARTITION variable=towers complete dim=0
#pragma HLS INTERFACE axis port=olink
#pragma HLS INLINE

  ap_uint<576> word_576b_;

  word_576b_( 31,   0) = (ap_uint<32>) towers[0].data;
  word_576b_( 63,  32) = (ap_uint<32>) towers[1].data;
  word_576b_( 95,  64) = (ap_uint<32>) towers[2].data;
  word_576b_(127,  96) = (ap_uint<32>) towers[3].data;
  word_576b_(159, 128) = (ap_uint<32>) towers[4].data;
  word_576b_(191, 160) = (ap_uint<32>) towers[5].data;
  word_576b_(223, 192) = (ap_uint<32>) towers[6].data;
  word_576b_(255, 224) = (ap_uint<32>) towers[7].data;
  word_576b_(287, 256) = (ap_uint<32>) towers[8].data;
  word_576b_(319, 288) = (ap_uint<32>) towers[9].data;
  word_576b_(351, 320) = (ap_uint<32>) towers[10].data;
  word_576b_(383, 352) = (ap_uint<32>) towers[11].data;
  word_576b_(415, 384) = (ap_uint<32>) towers[12].data;
  word_576b_(447, 416) = (ap_uint<32>) towers[13].data;
  word_576b_(479, 448) = (ap_uint<32>) towers[14].data;
  word_576b_(511, 480) = (ap_uint<32>) towers[15].data;
  word_576b_(543, 512) = (ap_uint<32>) towers[16].data;
  word_576b_(575, 544) = (ap_uint<32>) 0;

  axiword576 r; r.last = 0; r.user = 0;
  r.data = word_576b_;
  
  olink.write(rPos);

  return ;
}


void algo_top(hls::stream<axiword576> link_in[N_INPUT_LINKS], hls::stream<axiword576> link_out[N_OUTPUT_LINKS]) {
#pragma HLS INTERFACE axis port=link_in
#pragma HLS INTERFACE axis port=link_out
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME

#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0


  // Step 1: Unpack links
  // Input is 64 links carrying 32phix34eta towers
  Towers towers[TOWERS_IN_PHI][TOWERS_IN_ETA];
#pragma HLS ARRAY_PARTITION variable=towers complete dim=0
     
  for (size_t ilink = 0; ilink < N_INPUT_LINKS/2; ilink++) {
#pragma LOOP UNROLL
#pragma HLS latency min=1
    size_t iPosEta = ilink;
    size_t iNegEta = ilink+N_INPUT_LINKS/2;
    unpackInputLink(link_in[iNegEta], &towers[ilink][0]);
    unpackInputLink(link_in[iPosEta], &towers[ilink][TOWERS_IN_ETA/2]);
  }


  // Step 2: MET Algo goes here


  // Step 3: Pack the outputs
  for (size_t olink = 0; olink < N_OUTPUT_LINKS/2; olink++) {
#pragma LOOP UNROLL
#pragma HLS latency min=1
    size_t iPosEta = olink;              
    size_t iNegEta = olink + (N_OUTPUT_LINKS/2);
    packOutput(&towers[olink][0], link_out[iNegEta]);
    packOutput(&towers[olink][TOWERS_IN_ETA/2], link_out[iPosEta]);
  }
}
