#include "algo_top_parameters.h"
#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "objects.h"
#include "stitchTowers.h"

using namespace std;
using namespace algo;


TowersInEta unpackInputLink(hls::stream<algo::axiword> &link) {
#pragma HLS INTERFACE axis port=link
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME
#pragma HLS INLINE

  TowersInEta tEta_;
  ap_uint<576> bigWord;

#ifndef __SYNTHESIS__
  // Avoid simulation warnings
  if (link.empty()) return tEta_ ;
#endif

  bigWord = link.read().data;

  for(size_t tEta=0, start=0, end=31; tEta<17; tEta++, start +=32, end +=32){
#pragma LOOP UNROLL
    tEta_.towers[tEta] = Tower(bigWord(end, start));
  }
  return tEta_;
}

//hls::stream<algo::axiword> packOutput(TowersInEta tEta_ )hls::stream<algo::axiword> packOutput(TowersInEta tEta_ ){
bool packOutput(TowersInEta tEta_, hls::stream<algo::axiword> &olink){
#pragma HLS INTERFACE axis port=link
#pragma HLS PIPELINE II=N_OUTPUT_WORDS_PER_FRAME
#pragma HLS INLINE

  ap_uint<576> outBigWord;

  for(size_t tEta=0, start=0, end=31; tEta<17; tEta++, start +=32, end +=32){
#pragma LOOP UNROLL
    outBigWord(end, start) = (ap_uint<32>) tEta_.towers[tEta].data;
  }

  axiword r; r.last = 0; r.user = 0;
  r.data = outBigWord;
  olink.write(r);

  return true;
}

void algo_top(hls::stream<algo::axiword> link_in[N_INPUT_LINKS], hls::stream<algo::axiword> link_out[N_OUTPUT_LINKS]) {
#pragma HLS INTERFACE axis port=link_in
#pragma HLS INTERFACE axis port=link_out
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME

#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0

  // Step 1: Unpack links
  TowersInEta towersInPhi[TOWERS_IN_PHI];
#pragma HLS ARRAY_PARTITION variable=towersInPhi  complete dim=0

  for (size_t ilink = 0; ilink < N_INPUT_LINKS; ilink++) {
#pragma LOOP UNROLL
    //#pragma HLS latency min=6 max=6
    towersInPhi[ilink] = unpackInputLink(link_in[ilink]);
  }


  // Step 2: Stitch accross phi boundaries
  TowersInEta stitchedInPhi[TOWERS_IN_PHI];
#pragma HLS ARRAY_PARTITION variable=stitchedInPhi  complete dim=0

  for(size_t tphi = 0; tphi < TOWERS_IN_PHI-4; tphi += 4){
#pragma LOOP UNROLL
    stitchedInPhi[tphi+1] = towersInPhi[tphi+1];
    stitchedInPhi[tphi+2] = towersInPhi[tphi+2];

#ifndef __SYNTHESIS__  
    cout<<"tphi = "<<tphi+3<<", "<<tphi+4<<":--"<<endl;
#endif
    stitchInEta(towersInPhi[tphi+3], towersInPhi[tphi+4], stitchedInPhi[tphi+3], stitchedInPhi[tphi+4]);
  }
  stitchedInPhi[0]               = towersInPhi[0];
  stitchedInPhi[TOWERS_IN_PHI-1] = towersInPhi[TOWERS_IN_PHI-1];
  stitchedInPhi[TOWERS_IN_PHI-2] = towersInPhi[TOWERS_IN_PHI-2];
  stitchedInPhi[TOWERS_IN_PHI-3] = towersInPhi[TOWERS_IN_PHI-3];

#ifndef __SYNTHESIS__  
  for(int tphi=0; tphi<TOWERS_IN_PHI; tphi++){
    for(int teta=0; teta<TOWERS_IN_ETA; teta++){

      if(stitchedInPhi[tphi].towers[teta].cluster_et() != 0 )
	cout<<std::dec<<"Pos: [tphi, teta] = ["<<tphi<<", "<<teta<<"]: "<<stitchedInPhi[tphi].towers[teta].toString()<<"  "<<std::hex<<stitchedInPhi[tphi].towers[teta].data<<endl;
    }
  }
#endif


  // Step 4: Pack the outputs
  for (size_t i = 0; i < N_OUTPUT_LINKS; i++) {
#pragma LOOP UNROLL
    packOutput(stitchedInPhi[i], link_out[i]);

  }

}
