#include "algo_top_parameters.h"
#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "stitchPhi.h"

using namespace std;
using namespace algo;


TowersInEta unpackInputLink(hls::stream<algo::axiword576> &link) {
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME
#pragma HLS INTERFACE axis port=link
#pragma HLS INLINE

  TowersInEta tEta_;
  ap_uint<576> word_576b_;

#ifndef __SYNTHESIS__
  // Avoid simulation warnings
  if (link.empty()) return tEta_ ;
#endif

  word_576b_ = link.read().data;

  tEta_.towers[0]  = Tower(word_576b_( 31,   0));
  tEta_.towers[1]  = Tower(word_576b_( 63,  32));
  tEta_.towers[2]  = Tower(word_576b_( 95,  64));
  tEta_.towers[3]  = Tower(word_576b_(127,  96));
  tEta_.towers[4]  = Tower(word_576b_(159, 128));
  tEta_.towers[5]  = Tower(word_576b_(191, 160));
  tEta_.towers[6]  = Tower(word_576b_(223, 192));
  tEta_.towers[7]  = Tower(word_576b_(255, 224));
  tEta_.towers[8]  = Tower(word_576b_(287, 256));
  tEta_.towers[9]  = Tower(word_576b_(319, 288));
  tEta_.towers[10] = Tower(word_576b_(351, 320));
  tEta_.towers[11] = Tower(word_576b_(383, 352));
  tEta_.towers[12] = Tower(word_576b_(415, 384));
  tEta_.towers[13] = Tower(word_576b_(447, 416));
  tEta_.towers[14] = Tower(word_576b_(479, 448));
  tEta_.towers[15] = Tower(word_576b_(511, 480));
  tEta_.towers[16] = Tower(word_576b_(543, 512));

  return tEta_;
}

bool packOutput(TowersInEta tEta_, hls::stream<algo::axiword576> &olink){
#pragma HLS PIPELINE II=N_OUTPUT_WORDS_PER_FRAME
#pragma HLS INTERFACE axis port=link
#pragma HLS INLINE

  ap_uint<576> word_576b_;

  word_576b_( 31,   0) = (ap_uint<32>) tEta_.towers[0].data;
  word_576b_( 63,  32) = (ap_uint<32>) tEta_.towers[1].data;
  word_576b_( 95,  64) = (ap_uint<32>) tEta_.towers[2].data;
  word_576b_(127,  96) = (ap_uint<32>) tEta_.towers[3].data;
  word_576b_(159, 128) = (ap_uint<32>) tEta_.towers[4].data;
  word_576b_(191, 160) = (ap_uint<32>) tEta_.towers[5].data;
  word_576b_(223, 192) = (ap_uint<32>) tEta_.towers[6].data;
  word_576b_(255, 224) = (ap_uint<32>) tEta_.towers[7].data;
  word_576b_(287, 256) = (ap_uint<32>) tEta_.towers[8].data;
  word_576b_(319, 288) = (ap_uint<32>) tEta_.towers[9].data;
  word_576b_(351, 320) = (ap_uint<32>) tEta_.towers[10].data;
  word_576b_(383, 352) = (ap_uint<32>) tEta_.towers[11].data;
  word_576b_(415, 384) = (ap_uint<32>) tEta_.towers[12].data;
  word_576b_(447, 416) = (ap_uint<32>) tEta_.towers[13].data;
  word_576b_(479, 448) = (ap_uint<32>) tEta_.towers[14].data;
  word_576b_(511, 480) = (ap_uint<32>) tEta_.towers[15].data;
  word_576b_(543, 512) = (ap_uint<32>) tEta_.towers[16].data;
  word_576b_(575, 544) = (ap_uint<32>) 0;

  axiword576 r; r.last = 0; r.user = 0;
  r.data = word_576b_;
  olink.write(r);

  return true;
}


void algo_top(hls::stream<axiword576> link_in[N_INPUT_LINKS], hls::stream<axiword576> link_out[N_OUTPUT_LINKS]) {
#pragma HLS INTERFACE axis port=link_in
#pragma HLS INTERFACE axis port=link_out
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME

#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0


  // Step 1: Unpack links
  TowersInEta towersInPosEta[TOWERS_IN_PHI];
  TowersInEta towersInNegEta[TOWERS_IN_PHI];
#pragma HLS ARRAY_PARTITION variable=towersInPosEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=towersInNegEta complete dim=0

  for (size_t ilink = 0; ilink < N_INPUT_LINKS/2; ilink++) {
#pragma LOOP UNROLL
#pragma HLS latency min=1
     size_t iPosEta = ilink;
     size_t iNegEta = ilink + (N_INPUT_LINKS/2);
     towersInPosEta[ilink] = unpackInputLink(link_in[iPosEta]);
     towersInNegEta[ilink] = unpackInputLink(link_in[iNegEta]);
  }

 #ifndef __SYNTHESIS__  
   for(int tphi=0; tphi<TOWERS_IN_PHI; tphi++){
     for(int teta=0; teta<TOWERS_IN_ETA; teta++){
 
       if(towersInPosEta[tphi].towers[teta].cluster_et() != 0 )
 	cout<<std::dec<<"Pos [tphi, teta] = ["<<tphi<<", "<<teta<<"]: "<<towersInPosEta[tphi].towers[teta].toString()<<endl;
      if(towersInNegEta[tphi].towers[teta].cluster_et() != 0 )
 	cout<<std::dec<<"Neg [tphi, teta] = ["<<tphi<<", "<<teta<<"]: "<<towersInNegEta[tphi].towers[teta].toString()<<endl;
     }
   }
 #endif

  // Step 2: Stitch accross phi boundaries
  TowersInEta stitchedTowersInPosEta[TOWERS_IN_PHI];
  TowersInEta stitchedTowersInNegEta[TOWERS_IN_PHI];
#pragma HLS ARRAY_PARTITION variable=stitchedTowersInPosEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitchedTowersInNegEta complete dim=0

  for(int tphi=0; tphi<TOWERS_IN_PHI; tphi++){
#pragma HLS LOOP UNROLL
     stitchInPhi(towersInPosEta[tphi], towersInNegEta[tphi], stitchedTowersInPosEta[tphi], stitchedTowersInNegEta[tphi]);
  }


  // Step 3: Pack the outputs
  for (size_t olink = 0; olink < N_OUTPUT_LINKS/2; olink++) {
#pragma LOOP UNROLL
#pragma HLS latency min=1
     size_t oPosEta = olink;
     size_t oNegEta = olink + (N_OUTPUT_LINKS/2);

    packOutput(stitchedTowersInPosEta[olink], link_out[oPosEta]);
    packOutput(stitchedTowersInNegEta[olink], link_out[oNegEta]);
  }
}
