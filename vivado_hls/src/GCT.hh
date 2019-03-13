#ifndef GCT_hh
#define GCT_hh

#include <stdint.h>
#include <unistd.h>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#include <ap_int.h>
#include <ap_fixed.h>

//According to one GCT card
const uint16_t NCrystalsPerEtaPhi = 5;

const uint16_t NGCTEta = 5; //CTP7: 5*2; VU9p: 17*2
//const uint16_t NinGCTPhi = 32; //VU9P: 6*4 + 1*4 + 1*4  either side
const uint16_t NinGCTPhi = 24; //VU9P: 4*4 + 1*4 + 1*4  either side
//const uint16_t NinGCTPhi = 12; //TEST: 1*4 + 1*4 + 1*4  either side

//const uint16_t NoutGCTPhi = 24; //VU9P: 6*4 
const uint16_t NoutGCTPhi = 16; //CTP7: 4*4 
//const uint16_t NoutGCTPhi = 4; //TEST: 1*4 + 1*4 + 1*4  either side

const uint16_t NClustersPerPhi = 3;
const uint16_t NRCTPhi = 4;

const uint16_t NRCTRegionsPerEtaHalf = 6; //1 + 4 + 1; VU9P: 1+6+1
const uint16_t NClustersPerRCTRegion = 12;

const uint16_t NClustersPerEtaHalf =  NRCTRegionsPerEtaHalf * NClustersPerRCTRegion;

const uint16_t NoutRCTRegions = 4; //4; VU9P: 6
const uint16_t NoutClustersPerRCTRegion = 12; //8 after sorting
const uint16_t NoutClustersPerEtaHalf = NoutRCTRegions * NoutClustersPerRCTRegion; 


bool GCT(
      uint16_t _peakEta_Neg   [NClustersPerEtaHalf],
      uint16_t _peakPhi_Neg   [NClustersPerEtaHalf],
      uint16_t _towerEta_Neg  [NClustersPerEtaHalf],
      uint16_t _towerPhi_Neg  [NClustersPerEtaHalf],
      uint16_t _ClusterET_Neg [NClustersPerEtaHalf],
      uint16_t _peakEta_Pos   [NClustersPerEtaHalf],
      uint16_t _peakPhi_Pos   [NClustersPerEtaHalf],
      uint16_t _towerEta_Pos  [NClustersPerEtaHalf],
      uint16_t _towerPhi_Pos  [NClustersPerEtaHalf],
      uint16_t _ClusterET_Pos [NClustersPerEtaHalf],
      uint16_t _outpeakEta_Neg   [NoutClustersPerEtaHalf],
      uint16_t _outpeakPhi_Neg   [NoutClustersPerEtaHalf],
      uint16_t _outtowerEta_Neg  [NoutClustersPerEtaHalf],
      uint16_t _outtowerPhi_Neg  [NoutClustersPerEtaHalf],
      uint16_t _outClusterET_Neg [NoutClustersPerEtaHalf],
      uint16_t _outpeakEta_Pos   [NoutClustersPerEtaHalf],
      uint16_t _outpeakPhi_Pos   [NoutClustersPerEtaHalf],
      uint16_t _outtowerEta_Pos  [NoutClustersPerEtaHalf],
      uint16_t _outtowerPhi_Pos  [NoutClustersPerEtaHalf],
      uint16_t _outClusterET_Pos [NoutClustersPerEtaHalf]
);


bool merge_acrossPhi(
      uint16_t _peakEta   [NinGCTPhi][NGCTEta],
      uint16_t _peakPhi   [NinGCTPhi][NGCTEta],
      uint16_t _ClusterET [NinGCTPhi][NGCTEta],
      uint16_t _outpeakEta   [NinGCTPhi][NGCTEta],
      uint16_t _outpeakPhi   [NinGCTPhi][NGCTEta],
      uint16_t _outClusterET [NinGCTPhi][NGCTEta]
      );


bool merge_acrossEta(
      uint16_t _peakEta_Neg   [NinGCTPhi][NGCTEta],
      uint16_t _peakPhi_Neg   [NinGCTPhi][NGCTEta],
      uint16_t _ClusterET_Neg [NinGCTPhi][NGCTEta],
      uint16_t _peakEta_Pos   [NinGCTPhi][NGCTEta],
      uint16_t _peakPhi_Pos   [NinGCTPhi][NGCTEta],
      uint16_t _ClusterET_Pos [NinGCTPhi][NGCTEta],
      uint16_t _outpeakEta_Neg   [NinGCTPhi][NGCTEta],
      uint16_t _outpeakPhi_Neg   [NinGCTPhi][NGCTEta],
      uint16_t _outClusterET_Neg [NinGCTPhi][NGCTEta],
      uint16_t _outpeakEta_Pos   [NinGCTPhi][NGCTEta],
      uint16_t _outpeakPhi_Pos   [NinGCTPhi][NGCTEta],
      uint16_t _outClusterET_Pos [NinGCTPhi][NGCTEta]
      );

bool mergeClustersInEta(
      uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
      uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
      uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
      uint16_t *eta2, uint16_t *phi2, uint16_t *cet2
      );

bool mergeClustersInPhi(
      uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
      uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
      uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
      uint16_t *eta2, uint16_t *phi2, uint16_t *cet2
      );

#endif
