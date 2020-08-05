#ifndef __STITCHPHI_H__
#define __STITCHPHI_H__ 

#include "algo_top.h"
#include <algorithm>
#include <utility>

#include "algo_top_parameters.h"
#include "../../../../include/objects.h"
#include "../../../../include/stitchTower.h"

using namespace std;

void stitchInPhi(TowersInEta inA, TowersInEta inB, TowersInEta &outA, TowersInEta &outB){
#pragma HLS PIPELINE II=9
#pragma HLS INLINE

   for(int teta=0; teta<TOWERS_IN_ETA-1; teta++){
#pragma HLS LOOP UNROLL
      outA.towers[teta]   = inA.towers[teta];
      outB.towers[teta+1] = inB.towers[teta+1];
   }
   stitchNeighbors(stitch_in_phi, inA.towers[TOWERS_IN_ETA-1], inB.towers[0], outA.towers[TOWERS_IN_ETA-1], outB.towers[0]);

}

#endif /*!__STITCHPHI_H__ */
