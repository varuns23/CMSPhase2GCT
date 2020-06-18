#include "algo_top_parameters.h"
#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "objects.h"
#include "stitchTowers.h"

using namespace std;
using namespace algo;


TowersInEta unpackInputLink(hls::stream<algo::axiword> &link) {
  //#pragma HLS PIPELINE II=N_WORDS_PER_FRAME   
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME
#pragma HLS INTERFACE axis port=link
#pragma HLS INLINE

  TowersInEta tEta_;
  ap_uint<64> word[N_WORDS_PER_FRAME];
#pragma HLS ARRAY_PARTITION variable=word complete dim=1

  for (size_t i = 0; i < N_WORDS_PER_FRAME; i++) {
#ifndef __SYNTHESIS__
    // Avoid simulation warnings
    if (link.empty()) continue;
#endif
    word[i] = link.read().data;
  }

  tEta_.towers[0] = Tower(word[0](31,  0));
  tEta_.towers[1] = Tower(word[0](63, 32));
  tEta_.towers[2] = Tower(word[1](31,  0));
  tEta_.towers[3] = Tower(word[1](63, 32));
  tEta_.towers[4] = Tower(word[2](31,  0));
  tEta_.towers[5] = Tower(word[2](63, 32));
  tEta_.towers[6] = Tower(word[3](31,  0));
  tEta_.towers[7] = Tower(word[3](63, 32));
  tEta_.towers[8] = Tower(word[4](31,  0));
  tEta_.towers[9] = Tower(word[4](63, 32));
  tEta_.towers[10] = Tower(word[5](31,  0));
  tEta_.towers[11] = Tower(word[5](63, 32));
  tEta_.towers[12] = Tower(word[6](31,  0));
  tEta_.towers[13] = Tower(word[6](63, 32));
  tEta_.towers[14] = Tower(word[7](31,  0));
  tEta_.towers[15] = Tower(word[7](63, 32));
  tEta_.towers[16] = Tower(word[8](31,  0));

  return tEta_;
}



//hls::stream<algo::axiword> packOutput(TowersInEta tEta_ )hls::stream<algo::axiword> packOutput(TowersInEta tEta_ ){
bool packOutput(TowersInEta tEta_, hls::stream<algo::axiword> &olink){
#pragma HLS PIPELINE II=N_OUTPUT_WORDS_PER_FRAME
#pragma HLS INTERFACE axis port=link
#pragma HLS INLINE

//  hls::stream<algo::axiword> olink;
  
  ap_uint<64> outWord[N_OUTPUT_WORDS_PER_FRAME];
#pragma HLS ARRAY_PARTITION variable=outWord complete dim=1

  outWord[0] = (((ap_uint<64>) tEta_.towers[1].data) << 32) | (ap_uint<64>) tEta_.towers[0].data; 
  outWord[1] = (((ap_uint<64>) tEta_.towers[3].data) << 32) | (ap_uint<64>) tEta_.towers[2].data; 
  outWord[2] = (((ap_uint<64>) tEta_.towers[5].data) << 32) | (ap_uint<64>) tEta_.towers[4].data; 
  outWord[3] = (((ap_uint<64>) tEta_.towers[7].data) << 32) | (ap_uint<64>) tEta_.towers[6].data; 
  outWord[4] = (((ap_uint<64>) tEta_.towers[9].data) << 32) | (ap_uint<64>) tEta_.towers[8].data; 
  outWord[5] = (((ap_uint<64>) tEta_.towers[11].data) << 32) | (ap_uint<64>) tEta_.towers[10].data; 
  outWord[6] = (((ap_uint<64>) tEta_.towers[13].data) << 32) | (ap_uint<64>) tEta_.towers[12].data; 
  outWord[7] = (((ap_uint<64>) tEta_.towers[15].data) << 32) | (ap_uint<64>) tEta_.towers[14].data; 
  outWord[8] = (ap_uint<64>) tEta_.towers[16].data; 

    for(size_t o=0; o<N_OUTPUT_WORDS_PER_FRAME; ++o){
#pragma LOOP UNROLL
      axiword r; r.last = 0; r.user = 0;
      r.data = outWord[o];
      olink.write(r);
    }

  //return olink;
  return true;
}


void algo_top(hls::stream<algo::axiword> link_in[N_INPUT_LINKS], hls::stream<algo::axiword> link_out[N_OUTPUT_LINKS]) {
#pragma HLS INTERFACE axis port=link_in
#pragma HLS INTERFACE axis port=link_out
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME
//#pragma HLS PIPELINE II=12 //k

#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0


  // Step 1: Unpack links
  TowersInEta towersInPhiPosEta[TOWERS_IN_PHI];
  TowersInEta towersInPhiNegEta[TOWERS_IN_PHI];
#pragma HLS ARRAY_PARTITION variable=towersInPhiPosEta  complete dim=0
#pragma HLS ARRAY_PARTITION variable=towersInPhiNegEta  complete dim=0

  for (size_t ilink = 0; ilink < N_INPUT_LINKS/2; ilink++) {
#pragma LOOP UNROLL
    //#pragma HLS latency min=6 max=6
    towersInPhiPosEta[ilink] = unpackInputLink(link_in[ilink]);
    towersInPhiNegEta[ilink] = unpackInputLink(link_in[ilink + (N_INPUT_LINKS/2)]);
  }


  // Step 2: Stitch accross phi boundaries
  TowersInEta stitchedInPhiPosEta[TOWERS_IN_PHI];
  TowersInEta stitchedInPhiNegEta[TOWERS_IN_PHI];
#pragma HLS ARRAY_PARTITION variable=stitchedInPhiPosEta  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitchedInPhiNegEta  complete dim=0

  for(size_t tphi = 0; tphi < TOWERS_IN_PHI-4; tphi += 4){
#pragma LOOP UNROLL
    stitchedInPhiPosEta[tphi+1] = towersInPhiPosEta[tphi+1];
    stitchedInPhiPosEta[tphi+2] = towersInPhiPosEta[tphi+2];

    stitchedInPhiNegEta[tphi+1] = towersInPhiNegEta[tphi+1];
    stitchedInPhiNegEta[tphi+2] = towersInPhiNegEta[tphi+2];

#ifndef __SYNTHESIS__  
    cout<<"tphi = "<<tphi+3<<", "<<tphi+4<<":--"<<endl;
#endif
    stitchInEta(towersInPhiPosEta[tphi+3], towersInPhiPosEta[tphi+4], stitchedInPhiPosEta[tphi+3], stitchedInPhiPosEta[tphi+4]);
    stitchInEta(towersInPhiNegEta[tphi+3], towersInPhiNegEta[tphi+4], stitchedInPhiNegEta[tphi+3], stitchedInPhiNegEta[tphi+4]);
  }
  stitchedInPhiPosEta[0]               = towersInPhiPosEta[0];
  stitchedInPhiPosEta[TOWERS_IN_PHI-1] = towersInPhiPosEta[TOWERS_IN_PHI-1];
  stitchedInPhiPosEta[TOWERS_IN_PHI-2] = towersInPhiPosEta[TOWERS_IN_PHI-2];
  stitchedInPhiPosEta[TOWERS_IN_PHI-3] = towersInPhiPosEta[TOWERS_IN_PHI-3];

  stitchedInPhiNegEta[0]               = towersInPhiNegEta[0];
  stitchedInPhiNegEta[TOWERS_IN_PHI-1] = towersInPhiNegEta[TOWERS_IN_PHI-1];
  stitchedInPhiNegEta[TOWERS_IN_PHI-2] = towersInPhiNegEta[TOWERS_IN_PHI-2];
  stitchedInPhiNegEta[TOWERS_IN_PHI-3] = towersInPhiNegEta[TOWERS_IN_PHI-3];


  // Step 3: stitch accross eta boundaries
  TowersInEta stitchedPosEta[TOWERS_IN_PHI];
  TowersInEta stitchedNegEta[TOWERS_IN_PHI];
#pragma HLS ARRAY_PARTITION variable=stitchedPosEta  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitchedNegEta  complete dim=0

  for(int tphi=0; tphi<TOWERS_IN_PHI; tphi++){
#pragma LOOP UNROLL

#ifndef __SYNTHESIS__  
    cout<<"tphi = "<<tphi<<endl;;
#endif
    stitchInPhi(stitchedInPhiPosEta[tphi], stitchedInPhiNegEta[tphi],  stitchedPosEta[tphi],  stitchedNegEta[tphi]);
  }

#ifndef __SYNTHESIS__  
  for(int tphi=0; tphi<TOWERS_IN_PHI; tphi++){
    for(int teta=0; teta<TOWERS_IN_ETA; teta++){

      if(stitchedPosEta[tphi].towers[teta].cluster_et() != 0 )
	cout<<std::dec<<"Pos: [tphi, teta] = ["<<tphi<<", "<<teta<<"]: "<<stitchedPosEta[tphi].towers[teta].toString()<<"  "<<std::hex<<stitchedPosEta[tphi].towers[teta].data<<endl;
     if(stitchedNegEta[tphi].towers[teta].cluster_et() != 0 )
	cout<<std::dec<<"Neg: [tphi, teta] = ["<<tphi<<", "<<teta+TOWERS_IN_ETA<<"]: "<<stitchedNegEta[tphi].towers[teta].toString()<<"  "<<std::hex<<stitchedNegEta[tphi].towers[teta].data<<endl;
    }
  }
#endif

  // Step 4: Pack the outputs
  for (size_t i = 0; i < N_OUTPUT_LINKS/2; i++) {
#pragma LOOP UNROLL

//    link_out[i]                    = packOutput(stitchedPosEta[i], );
//    link_out[i + N_OUTPUT_LINKS/2] = packOutput(stitchedNegEta[i + N_OUTPUT_LINKS/2]);

    packOutput(stitchedPosEta[i], link_out[i]);
    packOutput(stitchedNegEta[i], link_out[i + N_OUTPUT_LINKS/2] );

  }
}
