#ifndef __STITCHTOWERS_H__
#define __STITCHTOWERS_H__ 

#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "algo_top_parameters.h"
#include "objects.h"

using namespace std;

bool mergeNeighbors(bool stitch, ap_uint<10> Ai_et, ap_uint<10> Bi_et, ap_uint<10> &Ao_et, ap_uint<10> &Bo_et){
#pragma HLS PIPELINE II=2

  ap_uint<12> _etSum = Ai_et + Bi_et;
  ap_uint<10> _peggedEtSum = (_etSum > 0x3FF) ? (ap_uint<10>)0x3FF : (ap_uint<10>) _etSum;

  if(stitch){ 

#ifndef __SYNTHESIS__
    cout<<" merging neighbors..."<<Ai_et<<" with "<<Bi_et<<endl;
#endif

    if(Ai_et >= Bi_et){
      Ao_et = _peggedEtSum;
      Bo_et = 0;
    } else{
      Ao_et = 0;
      Bo_et = _peggedEtSum;
    }
  } else{
    Ao_et = Ai_et;
    Bo_et = Bi_et;
  }

  return true;
}

bool stitchInEta(TowersInEta inA, TowersInEta inB, TowersInEta &outA, TowersInEta &outB){
#pragma HLS PIPELINE II=2

  for(size_t teta=0; teta < TOWERS_IN_ETA; teta++){
#pragma LOOP UNROLL

    ap_uint<10> outA_clusterEt;
    ap_uint<10> outB_clusterEt;


    bool doEtaStitching = (
	inA.towers[teta].peak_eta() == inB.towers[teta].peak_eta() && 
	inA.towers[teta].peak_phi() == 4 && 
	inB.towers[teta].peak_phi() == 0 );

    mergeNeighbors(doEtaStitching, inA.towers[teta].cluster_et(), inB.towers[teta].cluster_et(), outA_clusterEt, outB_clusterEt);

    outA.towers[teta] = Tower(outA_clusterEt, inA.towers[teta].tower_et(), inA.towers[teta].peak_phi(), inA.towers[teta].peak_eta(), inA.towers[teta].peak_time(), inA.towers[teta].hOe());
    outB.towers[teta] = Tower(outB_clusterEt, inB.towers[teta].tower_et(), inB.towers[teta].peak_phi(), inB.towers[teta].peak_eta(), inB.towers[teta].peak_time(), inB.towers[teta].hOe());

#ifndef __SYNTHESIS__
    if(doEtaStitching){
    cout<<"merging  in eta"<<endl;
      cout<<std::dec<<"--- inA: teta="<<teta<<"  "<<inA.towers[teta].toString()<<endl;
      cout<<std::dec<<"--- inB: teta="<<teta<<"  "<<inB.towers[teta].toString()<<endl;
      cout<<std::dec<<"++++++++++ oA: teta="<<teta<<"  "<<outA.towers[teta].toString()<<endl;
      cout<<std::dec<<"++++++++++ oB: teta="<<teta<<"  "<<outB.towers[teta].toString()<<endl;
      cout<<endl;
    }
#endif

  }

  return true;
};

bool stitchInPhi(TowersInEta inA, TowersInEta inB, TowersInEta &outA, TowersInEta &outB){
#pragma HLS PIPELINE II=2

  for(size_t teta=0; teta < TOWERS_IN_ETA-1; teta++){
#pragma LOOP UNROLL
    outA.towers[teta]   = inA.towers[teta]; 
    outB.towers[teta+1] = inB.towers[teta+1]; 
  }

  ap_uint<10> outA_clusterEt = 0;
  ap_uint<10> outB_clusterEt = 0;

  bool doPhiStitching = (
      inA.towers[TOWERS_IN_ETA-1].peak_phi() == inB.towers[0].peak_phi() &&
      inA.towers[TOWERS_IN_ETA-1].peak_eta() == 4 &&
      inB.towers[0].peak_eta() == 0 );

  mergeNeighbors(doPhiStitching, inA.towers[TOWERS_IN_ETA-1].cluster_et(), inB.towers[0].cluster_et(), outA_clusterEt, outB_clusterEt);

  outA.towers[TOWERS_IN_ETA-1] = Tower(outA_clusterEt, inA.towers[TOWERS_IN_ETA-1].tower_et(), inA.towers[TOWERS_IN_ETA-1].peak_phi(), inA.towers[TOWERS_IN_ETA-1].peak_eta(), inA.towers[TOWERS_IN_ETA-1].peak_time(), inA.towers[TOWERS_IN_ETA-1].hOe());
  outB.towers[0] = Tower(outB_clusterEt, inB.towers[0].tower_et(), inB.towers[0].peak_phi(), inB.towers[0].peak_eta(), inB.towers[0].peak_time(), inB.towers[0].hOe());

#ifndef __SYNTHESIS__
  if(doPhiStitching){
    cout<<"merging  in phi"<<endl;
    cout<<std::dec<<"--- inA: teta="<<TOWERS_IN_ETA-1<<"  "<<inA.towers[TOWERS_IN_ETA-1].toString()<<endl;
    cout<<std::dec<<"--- inB: teta="<<0<<"  "<<inB.towers[0].toString()<<endl;
    cout<<std::dec<<"++++++++++ oA: teta="<<TOWERS_IN_ETA-1<<"  "<<outA.towers[TOWERS_IN_ETA-1].toString()<<endl;
    cout<<std::dec<<"++++++++++ oB: teta="<<0<<"  "<<outB.towers[0].toString()<<endl;
    cout<<endl;
  }
#endif


  return true;
}

#endif /*!__STITCHTOWERS_H__ */
