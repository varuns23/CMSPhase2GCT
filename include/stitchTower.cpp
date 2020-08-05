#include "stitchTower.h"

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
