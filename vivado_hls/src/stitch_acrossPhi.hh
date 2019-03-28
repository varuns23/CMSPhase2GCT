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

bool merge_acrossphi(
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


#endif
