#include "algo_top_parameters.h"
#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "objects.h"
#include "stitchTowers.h"

using namespace std;
using namespace algo;


void unpackInputLink(hls::stream<algo::axiword> &link, Tower towersInEta[TOWERS_IN_ETA]) {
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME
#pragma HLS INTERFACE axis port=link
#pragma HLS ARRAY_PARTITION variable=towersInEta complete dim=0
#pragma HLS INLINE

  ap_uint<576> word_576b_;

#ifndef __SYNTHESIS__
  // Avoid simulation warnings
  if (link.empty()) return ;
#endif

  word_576b_ = link.read().data;

  towersInEta[0] = Tower(word_576b_( 31,   0));
  towersInEta[1] = Tower(word_576b_( 63,  32));
  towersInEta[2] = Tower(word_576b_( 95,  64));
  towersInEta[3] = Tower(word_576b_(127,  96));
  towersInEta[4] = Tower(word_576b_(159, 128));
  towersInEta[5] = Tower(word_576b_(191, 160));
  towersInEta[6] = Tower(word_576b_(223, 192));
  towersInEta[7] = Tower(word_576b_(255, 224));
  towersInEta[8] = Tower(word_576b_(287, 256));
  towersInEta[9] = Tower(word_576b_(319, 288));
  towersInEta[10] = Tower(word_576b_(351, 320));
  towersInEta[11] = Tower(word_576b_(383, 352));
  towersInEta[12] = Tower(word_576b_(415, 384));
  towersInEta[13] = Tower(word_576b_(447, 416));
  towersInEta[14] = Tower(word_576b_(479, 448));
  towersInEta[15] = Tower(word_576b_(511, 480));
  towersInEta[16] = Tower(word_576b_(543, 512));

  return;

}

bool packOutput(Tower towersInEta[TOWERS_IN_ETA], hls::stream<algo::axiword> &olink){
#pragma HLS PIPELINE II=N_OUTPUT_WORDS_PER_FRAME
#pragma HLS INTERFACE axis port=link
#pragma HLS INLINE

  ap_uint<576> word_576b_;

  word_576b_( 31,   0) = (ap_uint<32>) towersInEta[0].data;
  word_576b_( 63,  32) = (ap_uint<32>) towersInEta[1].data;
  word_576b_( 95,  64) = (ap_uint<32>) towersInEta[2].data;
  word_576b_(127,  96) = (ap_uint<32>) towersInEta[3].data;
  word_576b_(159, 128) = (ap_uint<32>) towersInEta[4].data;
  word_576b_(191, 160) = (ap_uint<32>) towersInEta[5].data;
  word_576b_(223, 192) = (ap_uint<32>) towersInEta[6].data;
  word_576b_(255, 224) = (ap_uint<32>) towersInEta[7].data;
  word_576b_(287, 256) = (ap_uint<32>) towersInEta[8].data;
  word_576b_(319, 288) = (ap_uint<32>) towersInEta[9].data;
  word_576b_(351, 320) = (ap_uint<32>) towersInEta[10].data;
  word_576b_(383, 352) = (ap_uint<32>) towersInEta[11].data;
  word_576b_(415, 384) = (ap_uint<32>) towersInEta[12].data;
  word_576b_(447, 416) = (ap_uint<32>) towersInEta[13].data;
  word_576b_(479, 448) = (ap_uint<32>) towersInEta[14].data;
  word_576b_(511, 480) = (ap_uint<32>) towersInEta[15].data;
  word_576b_(543, 512) = (ap_uint<32>) towersInEta[16].data;
  word_576b_(575, 544) = (ap_uint<32>) 0;

  axiword r; r.last = 0; r.user = 0;
  r.data = word_576b_;
  olink.write(r);

  return true;
}


void algo_top(hls::stream<axiword> link_in[N_INPUT_LINKS], hls::stream<axiword> link_out[N_OUTPUT_LINKS]) {
#pragma HLS INTERFACE axis port=link_in
#pragma HLS INTERFACE axis port=link_out
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME

#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0

  // Unpack links
  Tower towers[TOWERS_IN_PHI][TOWERS_IN_ETA];
#pragma HLS ARRAY_PARTITION variable=towers complete dim=0
  for (size_t tPhi = 0; tPhi < TOWERS_IN_PHI; tPhi++) {
#pragma HLS LOOP UNROLL
    unpackInputLink(link_in[tPhi], towers[tPhi]);
  }

  // Stitch Towers
  Tower stitchedTowers[TOWERS_IN_PHI][TOWERS_IN_ETA];
#pragma HLS ARRAY_PARTITION variable=stitchedTowers  complete dim=0
  for (size_t tPhi = 0; tPhi < TOWERS_IN_PHI; tPhi++) {
#pragma HLS LOOP UNROLL
    for (size_t tEta = 0; tEta < TOWERS_IN_ETA; tEta++) {
#pragma HLS LOOP UNROLL
      stitchedTowers[tPhi][tEta] = towers[tPhi][tEta];
    }
  }
  for (size_t tEta = 0; tEta < TOWERS_IN_ETA; tEta++) {
#pragma HLS LOOP UNROLL
    stitchTowers(stitchInEta, towers[3][tEta], towers[4][tEta], stitchedTowers[3][tEta], stitchedTowers[4][tEta]);
    stitchTowers(stitchInEta, towers[7][tEta], towers[8][tEta], stitchedTowers[7][tEta], stitchedTowers[8][tEta]);
    stitchTowers(stitchInEta, towers[11][tEta], towers[12][tEta], stitchedTowers[11][tEta], stitchedTowers[12][tEta]);
    stitchTowers(stitchInEta, towers[15][tEta], towers[16][tEta], stitchedTowers[15][tEta], stitchedTowers[16][tEta]);
    stitchTowers(stitchInEta, towers[19][tEta], towers[20][tEta], stitchedTowers[19][tEta], stitchedTowers[20][tEta]);
    stitchTowers(stitchInEta, towers[23][tEta], towers[24][tEta], stitchedTowers[23][tEta], stitchedTowers[24][tEta]);
    stitchTowers(stitchInEta, towers[27][tEta], towers[28][tEta], stitchedTowers[27][tEta], stitchedTowers[28][tEta]);
  }

  // Pack the outputs

  for (size_t tPhi = 0; tPhi < TOWERS_IN_PHI; tPhi++) {
#pragma HLS LOOP UNROLL
    packOutput(stitchedTowers[tPhi], link_out[tPhi]);
  }

}
