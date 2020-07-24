#ifndef __STITCHTOWERS_H__
#define __STITCHTOWERS_H__ 

#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "algo_top_parameters.h"
#include "objects.h"

using namespace std;

static const size_t stitch_in_eta = 0;
static const size_t stitch_in_phi = 1;

void stitchNeighbors(size_t stitchType, Tower inA, Tower inB, Tower &outA, Tower &outB) {
#pragma HLS PIPELINE II=9
#pragma HLS INLINE

  bool etaStitch = (stitchType == stitch_in_eta  && 
	            inA.peak_eta() == inB.peak_eta() &&  
		    inA.peak_phi() == 4 && 
		    inB.peak_phi() == 0
		    );
  bool phiStitch = (stitchType == stitch_in_phi && 
	            inA.peak_phi() == inB.peak_phi() &&  
		    inA.peak_eta() == 4 && 
		    inB.peak_eta() == 0
		    );

  if(etaStitch || phiStitch){
#ifndef __SYNTHESIS__
    cout<<" merging neighbors..."<<inA.cluster_et()<<" with "<<inB.cluster_et()<<endl;
#endif

    ap_uint<12> cEtSum = inA.cluster_et() + inB.cluster_et();
    ap_uint<10> pegged_cEtSum = (cEtSum > 0x3FF) ? (ap_uint<10>)0x3FF : (ap_uint<10>) cEtSum;

    if(inA.cluster_et() > inB.cluster_et()){
       ap_uint<12> tEtSum = inA.tower_et() + inB.cluster_et();
       ap_uint<10> pegged_tEtSum = (tEtSum > 0x3FF) ? (ap_uint<10>)0x3FF : (ap_uint<10>) tEtSum;
       ap_uint<10> tEt_leftOver = inB.tower_et() - inB.cluster_et();

       outA = Tower(pegged_cEtSum, pegged_tEtSum, inA.peak_phi(), inA.peak_eta(), inA.peak_time(), inA.hOe());
       outB = Tower(            0,  tEt_leftOver, inB.peak_phi(), inB.peak_eta(), inB.peak_time(), inB.hOe());
    }
    else{
       ap_uint<12> tEtSum = inB.tower_et() + inA.cluster_et();
       ap_uint<10> pegged_tEtSum = (tEtSum > 0x3FF) ? (ap_uint<10>)0x3FF : (ap_uint<10>) tEtSum;
       ap_uint<10> tEt_leftOver = inA.tower_et() - inA.cluster_et();

       outA = Tower(            0,  tEt_leftOver, inA.peak_phi(), inA.peak_eta(), inA.peak_time(), inA.hOe());
       outB = Tower(pegged_cEtSum, pegged_tEtSum, inB.peak_phi(), inB.peak_eta(), inB.peak_time(), inB.hOe());
    }
  }
  else{
     outA = inA;
     outB = inB;
  }


#ifndef __SYNTHESIS__
  if(etaStitch || phiStitch){
     if(etaStitch)  cout<<"merging  in eta"<<endl;
     if(phiStitch)  cout<<"merging  in phi"<<endl;
     cout<<std::dec<<"--- inA: "<<inA.toString()<<endl;
     cout<<std::dec<<"--- inB: "<<inB.toString()<<endl;
     cout<<std::dec<<"++++++++++ oA: "<<outA.toString()<<endl;
     cout<<std::dec<<"++++++++++ oB: "<<outB.toString()<<endl;
     cout<<endl;
  }
#endif

}

void stitchInEta(TowersInEta inA, TowersInEta inB, TowersInEta &outA, TowersInEta &outB){
#pragma HLS PIPELINE II=9
#pragma HLS INLINE

   stitchNeighbors(stitch_in_eta, inA.towers[0], inB.towers[0], outA.towers[0], outB.towers[0]);
   stitchNeighbors(stitch_in_eta, inA.towers[1], inB.towers[1], outA.towers[1], outB.towers[1]);
   stitchNeighbors(stitch_in_eta, inA.towers[2], inB.towers[2], outA.towers[2], outB.towers[2]);
   stitchNeighbors(stitch_in_eta, inA.towers[3], inB.towers[3], outA.towers[3], outB.towers[3]);
   stitchNeighbors(stitch_in_eta, inA.towers[4], inB.towers[4], outA.towers[4], outB.towers[4]);
   stitchNeighbors(stitch_in_eta, inA.towers[5], inB.towers[5], outA.towers[5], outB.towers[5]);
   stitchNeighbors(stitch_in_eta, inA.towers[6], inB.towers[6], outA.towers[6], outB.towers[6]);
   stitchNeighbors(stitch_in_eta, inA.towers[7], inB.towers[7], outA.towers[7], outB.towers[7]);
   stitchNeighbors(stitch_in_eta, inA.towers[8], inB.towers[8], outA.towers[8], outB.towers[8]);
   stitchNeighbors(stitch_in_eta, inA.towers[9], inB.towers[9], outA.towers[9], outB.towers[9]);
   stitchNeighbors(stitch_in_eta, inA.towers[10], inB.towers[10], outA.towers[10], outB.towers[10]);
   stitchNeighbors(stitch_in_eta, inA.towers[11], inB.towers[11], outA.towers[11], outB.towers[11]);
   stitchNeighbors(stitch_in_eta, inA.towers[12], inB.towers[12], outA.towers[12], outB.towers[12]);
   stitchNeighbors(stitch_in_eta, inA.towers[13], inB.towers[13], outA.towers[13], outB.towers[13]);
   stitchNeighbors(stitch_in_eta, inA.towers[14], inB.towers[14], outA.towers[14], outB.towers[14]);
   stitchNeighbors(stitch_in_eta, inA.towers[15], inB.towers[15], outA.towers[15], outB.towers[15]);
   stitchNeighbors(stitch_in_eta, inA.towers[16], inB.towers[16], outA.towers[16], outB.towers[16]);

}

void mergeInEta(TowersInEta towersInPhi_[TOWERS_IN_PHI], TowersInEta etaStitched_[TOWERS_IN_PHI]){
#pragma HLS ARRAY_PARTITION variable=towersInPhi_
#pragma HLS ARRAY_PARTITION variable=etaStitched_
#pragma HLS PIPELINE II=9
#pragma HLS INLINE

   etaStitched_[0] = towersInPhi_[0];
   etaStitched_[1] = towersInPhi_[1];
   etaStitched_[2] = towersInPhi_[2];
   stitchInEta(towersInPhi_[3], towersInPhi_[4], etaStitched_[3], etaStitched_[4]);
   etaStitched_[5] = towersInPhi_[5];
   etaStitched_[6] = towersInPhi_[6];
   stitchInEta(towersInPhi_[7], towersInPhi_[8], etaStitched_[7], etaStitched_[8]);
   etaStitched_[9] = towersInPhi_[9];
   etaStitched_[10] = towersInPhi_[10];
   stitchInEta(towersInPhi_[11], towersInPhi_[12], etaStitched_[11], etaStitched_[12]);
   etaStitched_[13] = towersInPhi_[13];
   etaStitched_[14] = towersInPhi_[14];
   stitchInEta(towersInPhi_[15], towersInPhi_[16], etaStitched_[15], etaStitched_[16]);
   etaStitched_[17] = towersInPhi_[17];
   etaStitched_[18] = towersInPhi_[18];
   stitchInEta(towersInPhi_[19], towersInPhi_[20], etaStitched_[19], etaStitched_[20]);
   etaStitched_[21] = towersInPhi_[21];
   etaStitched_[22] = towersInPhi_[22];
   stitchInEta(towersInPhi_[23], towersInPhi_[24], etaStitched_[23], etaStitched_[24]);
   etaStitched_[25] = towersInPhi_[25];
   etaStitched_[26] = towersInPhi_[26];
   stitchInEta(towersInPhi_[27], towersInPhi_[28], etaStitched_[27], etaStitched_[28]);
   etaStitched_[29] = towersInPhi_[29];
   etaStitched_[30] = towersInPhi_[30];
   etaStitched_[31] = towersInPhi_[31];
}


#endif /*!__STITCHTOWERS_H__ */
