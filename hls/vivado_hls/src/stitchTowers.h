#ifndef __STITCHTOWERS_H__
#define __STITCHTOWERS_H__ 

#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "algo_top_parameters.h"
#include "objects.h"

using namespace std;

static const size_t stitchInEta = 0;
static const size_t stitchInPhi = 1;

void stitchTowers(size_t stitchType, Tower inA, Tower inB, Tower &outA, Tower &outB) {
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME
  bool stitch = false;
  if (stitchType == stitchInEta) {
    stitch = (inA.peak_eta() == inB.peak_eta() && 
	      inA.peak_phi() == 4 && 
	      inB.peak_phi() == 0 );
  }
  else {
    stitch = (inA.peak_phi() == inB.peak_phi() &&
	      inA.peak_eta() == 4 &&
	      inB.peak_eta() == 0 );
  }
  if (stitch) {
    ap_uint<10> Ai_cet = inA.cluster_et();
    ap_uint<10> Bi_cet = inB.cluster_et();
    ap_uint<12> _cetSum = Ai_cet + Bi_cet;
    ap_uint<10> _peggedCEtSum = (_cetSum > 0x3FF) ? (ap_uint<10>)0x3FF : (ap_uint<10>) _cetSum;
    ap_uint<10> Ai_tet = inA.tower_et();
    ap_uint<10> Bi_tet = inB.tower_et();
    if(Ai_cet >= Bi_cet) {
      ap_uint<10> Ao_cet = _peggedCEtSum;
      ap_uint<12> _tetSum = Ai_tet + Bi_cet;
      ap_uint<10> Ao_tet = (_tetSum > 0x3FF) ? (ap_uint<10>)0x3FF : (ap_uint<10>) _tetSum;
      ap_uint<10> Bo_cet = 0;
      ap_uint<10> Bo_tet = Bi_tet - Bi_cet;
      outA = Tower(Ao_cet, Ao_tet, inA.peak_phi(), inA.peak_eta(), inA.peak_time(), inA.hOe());
      outB = Tower(Bo_cet, Bo_tet, inB.peak_phi(), inB.peak_eta(), inB.peak_time(), inB.hOe());
    } else {
      ap_uint<10> Ao_cet = 0;
      ap_uint<10> Ao_tet = Ai_tet - Ai_cet;
      ap_uint<10> Bo_cet = _peggedCEtSum;
      ap_uint<12> _tetSum = Bi_tet + Ai_cet;
      ap_uint<10> Bo_tet = (_tetSum > 0x3FF) ? (ap_uint<10>)0x3FF : (ap_uint<10>) _tetSum;
      outA = Tower(Ao_cet, Ao_tet, inA.peak_phi(), inA.peak_eta(), inA.peak_time(), inA.hOe());
      outB = Tower(Bo_cet, Bo_tet, inB.peak_phi(), inB.peak_eta(), inB.peak_time(), inB.hOe());
    }
  } else{
    outA = inA;
    outB = inB;
  }
  return;
}
#endif /*!__STITCHTOWERS_H__ */
