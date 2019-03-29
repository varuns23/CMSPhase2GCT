#ifndef stitch_acrossPhi_hh
#define stitch_acrossPhi_hh


#include <stdint.h>
#include <unistd.h>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#include <ap_int.h>
#include <ap_fixed.h>

#include "GCT.hh"

using namespace std;

bool stitch_acrossPhi(
      uint16_t peakEta   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t peakPhi   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerEta  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerPhi  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t ClusterET [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakEta   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakPhi   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outtowerEta  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outtowerPhi  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outClusterET [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion]
);

bool get_stitchedClustersInPhi(
     uint16_t toStitch_peakEta_  [NClustersPerRCTRegion],  
     uint16_t toStitch_peakPhi_  [NClustersPerRCTRegion],
     uint16_t toStitch_towerEta_ [NClustersPerRCTRegion],
     uint16_t toStitch_towerPhi_ [NClustersPerRCTRegion],
     uint16_t toStitch_ClusterET_[NClustersPerRCTRegion],
     uint16_t left_peakEta_      [NClustersPerRCTRegion],  
     uint16_t left_peakPhi_      [NClustersPerRCTRegion],
     uint16_t left_towerEta_     [NClustersPerRCTRegion],
     uint16_t left_towerPhi_     [NClustersPerRCTRegion],
     uint16_t left_ClusterET_    [NClustersPerRCTRegion],
     uint16_t right_peakEta_     [NClustersPerRCTRegion], 
     uint16_t right_peakPhi_     [NClustersPerRCTRegion],
     uint16_t right_towerEta_    [NClustersPerRCTRegion],
     uint16_t right_towerPhi_    [NClustersPerRCTRegion],
     uint16_t right_ClusterET_   [NClustersPerRCTRegion],
     uint16_t stitched_peakEta_  [NClustersPerRCTRegion], 
     uint16_t stitched_peakPhi_  [NClustersPerRCTRegion],
     uint16_t stitched_towerEta_ [NClustersPerRCTRegion],
     uint16_t stitched_towerPhi_ [NClustersPerRCTRegion],
     uint16_t stitched_ClusterET_[NClustersPerRCTRegion]
);

bool get_leftStitchInPhi(
     uint16_t toStitch_peakEta_  ,
     uint16_t toStitch_peakPhi_  ,
     uint16_t toStitch_towerEta_ ,
     uint16_t toStitch_towerPhi_ ,
     uint16_t toStitch_ClusterET_,
     uint16_t *_preStitched_peakEta   ,
     uint16_t *_preStitched_peakPhi   ,
     uint16_t *_preStitched_ClusterET ,
     uint16_t left_peakEta_   [NClustersPerRCTRegion], 
     uint16_t left_peakPhi_   [NClustersPerRCTRegion], 
     uint16_t left_towerEta_  [NClustersPerRCTRegion], 
     uint16_t left_towerPhi_  [NClustersPerRCTRegion], 
     uint16_t left_ClusterET_ [NClustersPerRCTRegion]
);

bool get_rightStitchInPhi(
     uint16_t toStitch_peakEta_  ,
     uint16_t toStitch_peakPhi_  ,
     uint16_t toStitch_towerEta_ ,
     uint16_t toStitch_towerPhi_ ,
     uint16_t toStitch_ClusterET_,
     uint16_t *_preStitched_peakEta   ,
     uint16_t *_preStitched_peakPhi   ,
     uint16_t *_preStitched_ClusterET ,
     uint16_t right_peakEta_   [NClustersPerRCTRegion], 
     uint16_t right_peakPhi_   [NClustersPerRCTRegion], 
     uint16_t right_towerEta_  [NClustersPerRCTRegion], 
     uint16_t right_towerPhi_  [NClustersPerRCTRegion], 
     uint16_t right_ClusterET_ [NClustersPerRCTRegion]
);


#endif
