#include "stitch_acrossEta.hh"
#include "GCT.hh"
#include <iostream>

bool stitch_acrossEta(
      uint16_t peakEtaNeg_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t peakPhiNeg_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerEtaNeg_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerPhiNeg_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t ClusterETNeg_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t peakEtaPos_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t peakPhiPos_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerEtaPos_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerPhiPos_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t ClusterETPos_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakEtaNeg_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakPhiNeg_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outtowerEtaNeg_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outtowerPhiNeg_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outClusterETNeg_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakEtaPos_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakPhiPos_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outtowerEtaPos_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outtowerPhiPos_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outClusterETPos_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion]
){

#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable=peakEtaNeg_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhiNeg_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEtaNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhiNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterETNeg_ complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakEtaPos_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhiPos_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEtaPos_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhiPos_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterETPos_ complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEtaNeg_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhiNeg_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEtaNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhiNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterETNeg_ complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakEtaPos_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhiPos_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEtaPos_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhiPos_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterETPos_ complete dim=0

   uint16_t toStitch_peakEtaNeg_   [NClustersPerRCTRegion]; 
   uint16_t toStitch_peakPhiNeg_   [NClustersPerRCTRegion];
   uint16_t toStitch_towerEtaNeg_  [NClustersPerRCTRegion];
   uint16_t toStitch_towerPhiNeg_  [NClustersPerRCTRegion];
   uint16_t toStitch_ClusterETNeg_ [NClustersPerRCTRegion];
   uint16_t toStitch_peakEtaPos_   [NClustersPerRCTRegion];
   uint16_t toStitch_peakPhiPos_   [NClustersPerRCTRegion];
   uint16_t toStitch_towerEtaPos_  [NClustersPerRCTRegion];
   uint16_t toStitch_towerPhiPos_  [NClustersPerRCTRegion];
   uint16_t toStitch_ClusterETPos_ [NClustersPerRCTRegion];

   uint16_t stitched_peakEtaNeg_   [NClustersPerRCTRegion]; 
   uint16_t stitched_peakPhiNeg_   [NClustersPerRCTRegion];
   uint16_t stitched_towerEtaNeg_  [NClustersPerRCTRegion];
   uint16_t stitched_towerPhiNeg_  [NClustersPerRCTRegion];
   uint16_t stitched_ClusterETNeg_ [NClustersPerRCTRegion];
   uint16_t stitched_peakEtaPos_   [NClustersPerRCTRegion];
   uint16_t stitched_peakPhiPos_   [NClustersPerRCTRegion];
   uint16_t stitched_towerEtaPos_  [NClustersPerRCTRegion];
   uint16_t stitched_towerPhiPos_  [NClustersPerRCTRegion];
   uint16_t stitched_ClusterETPos_ [NClustersPerRCTRegion];

#pragma HLS ARRAY_PARTITION variable=toStitch_peakEtaNeg_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_peakPhiNeg_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_towerEtaNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_towerPhiNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_ClusterETNeg_ complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_peakEtaPos_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_peakPhiPos_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_towerEtaPos_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_towerPhiPos_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_ClusterETPos_ complete dim=0

#pragma HLS ARRAY_PARTITION variable=stitched_peakEtaNeg_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_peakPhiNeg_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerEtaNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerPhiNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_ClusterETNeg_ complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_peakEtaPos_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_peakPhiPos_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerEtaPos_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerPhiPos_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_ClusterETPos_ complete dim=0


   for(uint16_t rPhi=1; rPhi<NRCTRegionsPerEtaHalf-1; rPhi++){
#pragma HLS UNROLL

      for(uint16_t iClusters = 0; iClusters<NClustersPerRCTRegion; iClusters++){
#pragma HLS UNROLL

	 stitched_peakEtaNeg_   [iClusters] = 0; 
	 stitched_peakPhiNeg_   [iClusters] = 0;
	 stitched_towerEtaNeg_  [iClusters] = 0;
	 stitched_towerPhiNeg_  [iClusters] = 0;
	 stitched_ClusterETNeg_ [iClusters] = 0;
	 stitched_peakEtaPos_   [iClusters] = 0;
	 stitched_peakPhiPos_   [iClusters] = 0;
	 stitched_towerEtaPos_  [iClusters] = 0;
	 stitched_towerPhiPos_  [iClusters] = 0;
	 stitched_ClusterETPos_ [iClusters] = 0;
      }

      //send 12 clusters to next functions for stitching 
      //for now hardcoded to check performance
      //Check once this works in a for loop
      toStitch_peakEtaNeg_   [0] = peakEtaNeg_   [rPhi][0];
      toStitch_peakPhiNeg_   [0] = peakPhiNeg_   [rPhi][0];
      toStitch_towerEtaNeg_  [0] = towerEtaNeg_  [rPhi][0];
      toStitch_towerPhiNeg_  [0] = towerPhiNeg_  [rPhi][0];
      toStitch_ClusterETNeg_ [0] = ClusterETNeg_ [rPhi][0];
      toStitch_peakEtaPos_   [0] = peakEtaPos_   [rPhi][0];
      toStitch_peakPhiPos_   [0] = peakPhiPos_   [rPhi][0];
      toStitch_towerEtaPos_  [0] = towerEtaPos_  [rPhi][0];
      toStitch_towerPhiPos_  [0] = towerPhiPos_  [rPhi][0];
      toStitch_ClusterETPos_ [0] = ClusterETPos_ [rPhi][0];

      toStitch_peakEtaNeg_   [1] = peakEtaNeg_   [rPhi][1];
      toStitch_peakPhiNeg_   [1] = peakPhiNeg_   [rPhi][1];
      toStitch_towerEtaNeg_  [1] = towerEtaNeg_  [rPhi][1];
      toStitch_towerPhiNeg_  [1] = towerPhiNeg_  [rPhi][1];
      toStitch_ClusterETNeg_ [1] = ClusterETNeg_ [rPhi][1];
      toStitch_peakEtaPos_   [1] = peakEtaPos_   [rPhi][1];
      toStitch_peakPhiPos_   [1] = peakPhiPos_   [rPhi][1];
      toStitch_towerEtaPos_  [1] = towerEtaPos_  [rPhi][1];
      toStitch_towerPhiPos_  [1] = towerPhiPos_  [rPhi][1];
      toStitch_ClusterETPos_ [1] = ClusterETPos_ [rPhi][1];

      toStitch_peakEtaNeg_   [2] = peakEtaNeg_   [rPhi][2];
      toStitch_peakPhiNeg_   [2] = peakPhiNeg_   [rPhi][2];
      toStitch_towerEtaNeg_  [2] = towerEtaNeg_  [rPhi][2];
      toStitch_towerPhiNeg_  [2] = towerPhiNeg_  [rPhi][2];
      toStitch_ClusterETNeg_ [2] = ClusterETNeg_ [rPhi][2];
      toStitch_peakEtaPos_   [2] = peakEtaPos_   [rPhi][2];
      toStitch_peakPhiPos_   [2] = peakPhiPos_   [rPhi][2];
      toStitch_towerEtaPos_  [2] = towerEtaPos_  [rPhi][2];
      toStitch_towerPhiPos_  [2] = towerPhiPos_  [rPhi][2];
      toStitch_ClusterETPos_ [2] = ClusterETPos_ [rPhi][2];

      toStitch_peakEtaNeg_   [3] = peakEtaNeg_   [rPhi][3];
      toStitch_peakPhiNeg_   [3] = peakPhiNeg_   [rPhi][3];
      toStitch_towerEtaNeg_  [3] = towerEtaNeg_  [rPhi][3];
      toStitch_towerPhiNeg_  [3] = towerPhiNeg_  [rPhi][3];
      toStitch_ClusterETNeg_ [3] = ClusterETNeg_ [rPhi][3];
      toStitch_peakEtaPos_   [3] = peakEtaPos_   [rPhi][3];
      toStitch_peakPhiPos_   [3] = peakPhiPos_   [rPhi][3];
      toStitch_towerEtaPos_  [3] = towerEtaPos_  [rPhi][3];
      toStitch_towerPhiPos_  [3] = towerPhiPos_  [rPhi][3];
      toStitch_ClusterETPos_ [3] = ClusterETPos_ [rPhi][3];

      toStitch_peakEtaNeg_   [4] = peakEtaNeg_   [rPhi][4];
      toStitch_peakPhiNeg_   [4] = peakPhiNeg_   [rPhi][4];
      toStitch_towerEtaNeg_  [4] = towerEtaNeg_  [rPhi][4];
      toStitch_towerPhiNeg_  [4] = towerPhiNeg_  [rPhi][4];
      toStitch_ClusterETNeg_ [4] = ClusterETNeg_ [rPhi][4];
      toStitch_peakEtaPos_   [4] = peakEtaPos_   [rPhi][4];
      toStitch_peakPhiPos_   [4] = peakPhiPos_   [rPhi][4];
      toStitch_towerEtaPos_  [4] = towerEtaPos_  [rPhi][4];
      toStitch_towerPhiPos_  [4] = towerPhiPos_  [rPhi][4];
      toStitch_ClusterETPos_ [4] = ClusterETPos_ [rPhi][4];

      toStitch_peakEtaNeg_   [5] = peakEtaNeg_   [rPhi][5];
      toStitch_peakPhiNeg_   [5] = peakPhiNeg_   [rPhi][5];
      toStitch_towerEtaNeg_  [5] = towerEtaNeg_  [rPhi][5];
      toStitch_towerPhiNeg_  [5] = towerPhiNeg_  [rPhi][5];
      toStitch_ClusterETNeg_ [5] = ClusterETNeg_ [rPhi][5];
      toStitch_peakEtaPos_   [5] = peakEtaPos_   [rPhi][5];
      toStitch_peakPhiPos_   [5] = peakPhiPos_   [rPhi][5];
      toStitch_towerEtaPos_  [5] = towerEtaPos_  [rPhi][5];
      toStitch_towerPhiPos_  [5] = towerPhiPos_  [rPhi][5];
      toStitch_ClusterETPos_ [5] = ClusterETPos_ [rPhi][5];

      toStitch_peakEtaNeg_   [6] = peakEtaNeg_   [rPhi][6];
      toStitch_peakPhiNeg_   [6] = peakPhiNeg_   [rPhi][6];
      toStitch_towerEtaNeg_  [6] = towerEtaNeg_  [rPhi][6];
      toStitch_towerPhiNeg_  [6] = towerPhiNeg_  [rPhi][6];
      toStitch_ClusterETNeg_ [6] = ClusterETNeg_ [rPhi][6];
      toStitch_peakEtaPos_   [6] = peakEtaPos_   [rPhi][6];
      toStitch_peakPhiPos_   [6] = peakPhiPos_   [rPhi][6];
      toStitch_towerEtaPos_  [6] = towerEtaPos_  [rPhi][6];
      toStitch_towerPhiPos_  [6] = towerPhiPos_  [rPhi][6];
      toStitch_ClusterETPos_ [6] = ClusterETPos_ [rPhi][6];

      toStitch_peakEtaNeg_   [7] = peakEtaNeg_   [rPhi][7];
      toStitch_peakPhiNeg_   [7] = peakPhiNeg_   [rPhi][7];
      toStitch_towerEtaNeg_  [7] = towerEtaNeg_  [rPhi][7];
      toStitch_towerPhiNeg_  [7] = towerPhiNeg_  [rPhi][7];
      toStitch_ClusterETNeg_ [7] = ClusterETNeg_ [rPhi][7];
      toStitch_peakEtaPos_   [7] = peakEtaPos_   [rPhi][7];
      toStitch_peakPhiPos_   [7] = peakPhiPos_   [rPhi][7];
      toStitch_towerEtaPos_  [7] = towerEtaPos_  [rPhi][7];
      toStitch_towerPhiPos_  [7] = towerPhiPos_  [rPhi][7];
      toStitch_ClusterETPos_ [7] = ClusterETPos_ [rPhi][7];

      toStitch_peakEtaNeg_   [8] = peakEtaNeg_   [rPhi][8];
      toStitch_peakPhiNeg_   [8] = peakPhiNeg_   [rPhi][8];
      toStitch_towerEtaNeg_  [8] = towerEtaNeg_  [rPhi][8];
      toStitch_towerPhiNeg_  [8] = towerPhiNeg_  [rPhi][8];
      toStitch_ClusterETNeg_ [8] = ClusterETNeg_ [rPhi][8];
      toStitch_peakEtaPos_   [8] = peakEtaPos_   [rPhi][8];
      toStitch_peakPhiPos_   [8] = peakPhiPos_   [rPhi][8];
      toStitch_towerEtaPos_  [8] = towerEtaPos_  [rPhi][8];
      toStitch_towerPhiPos_  [8] = towerPhiPos_  [rPhi][8];
      toStitch_ClusterETPos_ [8] = ClusterETPos_ [rPhi][8];

      toStitch_peakEtaNeg_   [9] = peakEtaNeg_   [rPhi][9];
      toStitch_peakPhiNeg_   [9] = peakPhiNeg_   [rPhi][9];
      toStitch_towerEtaNeg_  [9] = towerEtaNeg_  [rPhi][9];
      toStitch_towerPhiNeg_  [9] = towerPhiNeg_  [rPhi][9];
      toStitch_ClusterETNeg_ [9] = ClusterETNeg_ [rPhi][9];
      toStitch_peakEtaPos_   [9] = peakEtaPos_   [rPhi][9];
      toStitch_peakPhiPos_   [9] = peakPhiPos_   [rPhi][9];
      toStitch_towerEtaPos_  [9] = towerEtaPos_  [rPhi][9];
      toStitch_towerPhiPos_  [9] = towerPhiPos_  [rPhi][9];
      toStitch_ClusterETPos_ [9] = ClusterETPos_ [rPhi][9];

      toStitch_peakEtaNeg_   [10] = peakEtaNeg_   [rPhi][10];
      toStitch_peakPhiNeg_   [10] = peakPhiNeg_   [rPhi][10];
      toStitch_towerEtaNeg_  [10] = towerEtaNeg_  [rPhi][10];
      toStitch_towerPhiNeg_  [10] = towerPhiNeg_  [rPhi][10];
      toStitch_ClusterETNeg_ [10] = ClusterETNeg_ [rPhi][10];
      toStitch_peakEtaPos_   [10] = peakEtaPos_   [rPhi][10];
      toStitch_peakPhiPos_   [10] = peakPhiPos_   [rPhi][10];
      toStitch_towerEtaPos_  [10] = towerEtaPos_  [rPhi][10];
      toStitch_towerPhiPos_  [10] = towerPhiPos_  [rPhi][10];
      toStitch_ClusterETPos_ [10] = ClusterETPos_ [rPhi][10];

      toStitch_peakEtaNeg_   [11] = peakEtaNeg_   [rPhi][11];
      toStitch_peakPhiNeg_   [11] = peakPhiNeg_   [rPhi][11];
      toStitch_towerEtaNeg_  [11] = towerEtaNeg_  [rPhi][11];
      toStitch_towerPhiNeg_  [11] = towerPhiNeg_  [rPhi][11];
      toStitch_ClusterETNeg_ [11] = ClusterETNeg_ [rPhi][11];
      toStitch_peakEtaPos_   [11] = peakEtaPos_   [rPhi][11];
      toStitch_peakPhiPos_   [11] = peakPhiPos_   [rPhi][11];
      toStitch_towerEtaPos_  [11] = towerEtaPos_  [rPhi][11];
      toStitch_towerPhiPos_  [11] = towerPhiPos_  [rPhi][11];
      toStitch_ClusterETPos_ [11] = ClusterETPos_ [rPhi][11];

      get_stitchedClustersInEta( 
	    toStitch_peakEtaNeg_  , 
	    toStitch_peakPhiNeg_  , 
	    toStitch_towerEtaNeg_ , 
	    toStitch_towerPhiNeg_ , 
	    toStitch_ClusterETNeg_, 
	    toStitch_peakEtaPos_  , 
	    toStitch_peakPhiPos_  , 
	    toStitch_towerEtaPos_ , 
	    toStitch_towerPhiPos_ , 
	    toStitch_ClusterETPos_, 
	    stitched_peakEtaNeg_  , 
	    stitched_peakPhiNeg_  , 
	    stitched_towerEtaNeg_ , 
	    stitched_towerPhiNeg_ , 
	    stitched_ClusterETNeg_, 
	    stitched_peakEtaPos_  , 
	    stitched_peakPhiPos_  , 
	    stitched_towerEtaPos_ , 
	    stitched_towerPhiPos_ , 
	    stitched_ClusterETPos_ 
	       );

      //----------
      //Put back stitched 12 clusters  
      //for now hardcoded to check performance
      //Check once this works in a for loop
      outpeakEtaNeg_   [rPhi][0] = stitched_peakEtaNeg_   [0] ;
      outpeakPhiNeg_   [rPhi][0] = stitched_peakPhiNeg_   [0] ;
      outtowerEtaNeg_  [rPhi][0] = stitched_towerEtaNeg_  [0] ;
      outtowerPhiNeg_  [rPhi][0] = stitched_towerPhiNeg_  [0] ;
      outClusterETNeg_ [rPhi][0] = stitched_ClusterETNeg_ [0] ;
      outpeakEtaPos_   [rPhi][0] = stitched_peakEtaPos_   [0] ;
      outpeakPhiPos_   [rPhi][0] = stitched_peakPhiPos_   [0] ;
      outtowerEtaPos_  [rPhi][0] = stitched_towerEtaPos_  [0] ;
      outtowerPhiPos_  [rPhi][0] = stitched_towerPhiPos_  [0] ;
      outClusterETPos_ [rPhi][0] = stitched_ClusterETPos_ [0] ;

      outpeakEtaNeg_   [rPhi][1] = stitched_peakEtaNeg_   [1] ;
      outpeakPhiNeg_   [rPhi][1] = stitched_peakPhiNeg_   [1] ;
      outtowerEtaNeg_  [rPhi][1] = stitched_towerEtaNeg_  [1] ;
      outtowerPhiNeg_  [rPhi][1] = stitched_towerPhiNeg_  [1] ;
      outClusterETNeg_ [rPhi][1] = stitched_ClusterETNeg_ [1] ;
      outpeakEtaPos_   [rPhi][1] = stitched_peakEtaPos_   [1] ;
      outpeakPhiPos_   [rPhi][1] = stitched_peakPhiPos_   [1] ;
      outtowerEtaPos_  [rPhi][1] = stitched_towerEtaPos_  [1] ;
      outtowerPhiPos_  [rPhi][1] = stitched_towerPhiPos_  [1] ;
      outClusterETPos_ [rPhi][1] = stitched_ClusterETPos_ [1] ;

      outpeakEtaNeg_   [rPhi][2] = stitched_peakEtaNeg_   [2] ;
      outpeakPhiNeg_   [rPhi][2] = stitched_peakPhiNeg_   [2] ;
      outtowerEtaNeg_  [rPhi][2] = stitched_towerEtaNeg_  [2] ;
      outtowerPhiNeg_  [rPhi][2] = stitched_towerPhiNeg_  [2] ;
      outClusterETNeg_ [rPhi][2] = stitched_ClusterETNeg_ [2] ;
      outpeakEtaPos_   [rPhi][2] = stitched_peakEtaPos_   [2] ;
      outpeakPhiPos_   [rPhi][2] = stitched_peakPhiPos_   [2] ;
      outtowerEtaPos_  [rPhi][2] = stitched_towerEtaPos_  [2] ;
      outtowerPhiPos_  [rPhi][2] = stitched_towerPhiPos_  [2] ;
      outClusterETPos_ [rPhi][2] = stitched_ClusterETPos_ [2] ;

      outpeakEtaNeg_   [rPhi][3] = stitched_peakEtaNeg_   [3] ;
      outpeakPhiNeg_   [rPhi][3] = stitched_peakPhiNeg_   [3] ;
      outtowerEtaNeg_  [rPhi][3] = stitched_towerEtaNeg_  [3] ;
      outtowerPhiNeg_  [rPhi][3] = stitched_towerPhiNeg_  [3] ;
      outClusterETNeg_ [rPhi][3] = stitched_ClusterETNeg_ [3] ;
      outpeakEtaPos_   [rPhi][3] = stitched_peakEtaPos_   [3] ;
      outpeakPhiPos_   [rPhi][3] = stitched_peakPhiPos_   [3] ;
      outtowerEtaPos_  [rPhi][3] = stitched_towerEtaPos_  [3] ;
      outtowerPhiPos_  [rPhi][3] = stitched_towerPhiPos_  [3] ;
      outClusterETPos_ [rPhi][3] = stitched_ClusterETPos_ [3] ;

      outpeakEtaNeg_   [rPhi][4] = stitched_peakEtaNeg_   [4] ;
      outpeakPhiNeg_   [rPhi][4] = stitched_peakPhiNeg_   [4] ;
      outtowerEtaNeg_  [rPhi][4] = stitched_towerEtaNeg_  [4] ;
      outtowerPhiNeg_  [rPhi][4] = stitched_towerPhiNeg_  [4] ;
      outClusterETNeg_ [rPhi][4] = stitched_ClusterETNeg_ [4] ;
      outpeakEtaPos_   [rPhi][4] = stitched_peakEtaPos_   [4] ;
      outpeakPhiPos_   [rPhi][4] = stitched_peakPhiPos_   [4] ;
      outtowerEtaPos_  [rPhi][4] = stitched_towerEtaPos_  [4] ;
      outtowerPhiPos_  [rPhi][4] = stitched_towerPhiPos_  [4] ;
      outClusterETPos_ [rPhi][4] = stitched_ClusterETPos_ [4] ;

      outpeakEtaNeg_   [rPhi][5] = stitched_peakEtaNeg_   [5] ;
      outpeakPhiNeg_   [rPhi][5] = stitched_peakPhiNeg_   [5] ;
      outtowerEtaNeg_  [rPhi][5] = stitched_towerEtaNeg_  [5] ;
      outtowerPhiNeg_  [rPhi][5] = stitched_towerPhiNeg_  [5] ;
      outClusterETNeg_ [rPhi][5] = stitched_ClusterETNeg_ [5] ;
      outpeakEtaPos_   [rPhi][5] = stitched_peakEtaPos_   [5] ;
      outpeakPhiPos_   [rPhi][5] = stitched_peakPhiPos_   [5] ;
      outtowerEtaPos_  [rPhi][5] = stitched_towerEtaPos_  [5] ;
      outtowerPhiPos_  [rPhi][5] = stitched_towerPhiPos_  [5] ;
      outClusterETPos_ [rPhi][5] = stitched_ClusterETPos_ [5] ;

      outpeakEtaNeg_   [rPhi][6] = stitched_peakEtaNeg_   [6] ;
      outpeakPhiNeg_   [rPhi][6] = stitched_peakPhiNeg_   [6] ;
      outtowerEtaNeg_  [rPhi][6] = stitched_towerEtaNeg_  [6] ;
      outtowerPhiNeg_  [rPhi][6] = stitched_towerPhiNeg_  [6] ;
      outClusterETNeg_ [rPhi][6] = stitched_ClusterETNeg_ [6] ;
      outpeakEtaPos_   [rPhi][6] = stitched_peakEtaPos_   [6] ;
      outpeakPhiPos_   [rPhi][6] = stitched_peakPhiPos_   [6] ;
      outtowerEtaPos_  [rPhi][6] = stitched_towerEtaPos_  [6] ;
      outtowerPhiPos_  [rPhi][6] = stitched_towerPhiPos_  [6] ;
      outClusterETPos_ [rPhi][6] = stitched_ClusterETPos_ [6] ;

      outpeakEtaNeg_   [rPhi][7] = stitched_peakEtaNeg_   [7] ;
      outpeakPhiNeg_   [rPhi][7] = stitched_peakPhiNeg_   [7] ;
      outtowerEtaNeg_  [rPhi][7] = stitched_towerEtaNeg_  [7] ;
      outtowerPhiNeg_  [rPhi][7] = stitched_towerPhiNeg_  [7] ;
      outClusterETNeg_ [rPhi][7] = stitched_ClusterETNeg_ [7] ;
      outpeakEtaPos_   [rPhi][7] = stitched_peakEtaPos_   [7] ;
      outpeakPhiPos_   [rPhi][7] = stitched_peakPhiPos_   [7] ;
      outtowerEtaPos_  [rPhi][7] = stitched_towerEtaPos_  [7] ;
      outtowerPhiPos_  [rPhi][7] = stitched_towerPhiPos_  [7] ;
      outClusterETPos_ [rPhi][7] = stitched_ClusterETPos_ [7] ;

      outpeakEtaNeg_   [rPhi][8] = stitched_peakEtaNeg_   [8] ;
      outpeakPhiNeg_   [rPhi][8] = stitched_peakPhiNeg_   [8] ;
      outtowerEtaNeg_  [rPhi][8] = stitched_towerEtaNeg_  [8] ;
      outtowerPhiNeg_  [rPhi][8] = stitched_towerPhiNeg_  [8] ;
      outClusterETNeg_ [rPhi][8] = stitched_ClusterETNeg_ [8] ;
      outpeakEtaPos_   [rPhi][8] = stitched_peakEtaPos_   [8] ;
      outpeakPhiPos_   [rPhi][8] = stitched_peakPhiPos_   [8] ;
      outtowerEtaPos_  [rPhi][8] = stitched_towerEtaPos_  [8] ;
      outtowerPhiPos_  [rPhi][8] = stitched_towerPhiPos_  [8] ;
      outClusterETPos_ [rPhi][8] = stitched_ClusterETPos_ [8] ;

      outpeakEtaNeg_   [rPhi][9] = stitched_peakEtaNeg_   [9] ;
      outpeakPhiNeg_   [rPhi][9] = stitched_peakPhiNeg_   [9] ;
      outtowerEtaNeg_  [rPhi][9] = stitched_towerEtaNeg_  [9] ;
      outtowerPhiNeg_  [rPhi][9] = stitched_towerPhiNeg_  [9] ;
      outClusterETNeg_ [rPhi][9] = stitched_ClusterETNeg_ [9] ;
      outpeakEtaPos_   [rPhi][9] = stitched_peakEtaPos_   [9] ;
      outpeakPhiPos_   [rPhi][9] = stitched_peakPhiPos_   [9] ;
      outtowerEtaPos_  [rPhi][9] = stitched_towerEtaPos_  [9] ;
      outtowerPhiPos_  [rPhi][9] = stitched_towerPhiPos_  [9] ;
      outClusterETPos_ [rPhi][9] = stitched_ClusterETPos_ [9] ;

      outpeakEtaNeg_   [rPhi][10] = stitched_peakEtaNeg_   [10] ;
      outpeakPhiNeg_   [rPhi][10] = stitched_peakPhiNeg_   [10] ;
      outtowerEtaNeg_  [rPhi][10] = stitched_towerEtaNeg_  [10] ;
      outtowerPhiNeg_  [rPhi][10] = stitched_towerPhiNeg_  [10] ;
      outClusterETNeg_ [rPhi][10] = stitched_ClusterETNeg_ [10] ;
      outpeakEtaPos_   [rPhi][10] = stitched_peakEtaPos_   [10] ;
      outpeakPhiPos_   [rPhi][10] = stitched_peakPhiPos_   [10] ;
      outtowerEtaPos_  [rPhi][10] = stitched_towerEtaPos_  [10] ;
      outtowerPhiPos_  [rPhi][10] = stitched_towerPhiPos_  [10] ;
      outClusterETPos_ [rPhi][10] = stitched_ClusterETPos_ [10] ;

      outpeakEtaNeg_   [rPhi][11] = stitched_peakEtaNeg_   [11] ;
      outpeakPhiNeg_   [rPhi][11] = stitched_peakPhiNeg_   [11] ;
      outtowerEtaNeg_  [rPhi][11] = stitched_towerEtaNeg_  [11] ;
      outtowerPhiNeg_  [rPhi][11] = stitched_towerPhiNeg_  [11] ;
      outClusterETNeg_ [rPhi][11] = stitched_ClusterETNeg_ [11] ;
      outpeakEtaPos_   [rPhi][11] = stitched_peakEtaPos_   [11] ;
      outpeakPhiPos_   [rPhi][11] = stitched_peakPhiPos_   [11] ;
      outtowerEtaPos_  [rPhi][11] = stitched_towerEtaPos_  [11] ;
      outtowerPhiPos_  [rPhi][11] = stitched_towerPhiPos_  [11] ;
      outClusterETPos_ [rPhi][11] = stitched_ClusterETPos_ [11] ;

      //-----------

   }

   return true;
}

bool get_stitchedClustersInEta( 
      uint16_t _toStitch_peakEtaNeg   [NClustersPerRCTRegion], 
      uint16_t _toStitch_peakPhiNeg   [NClustersPerRCTRegion], 
      uint16_t _toStitch_towerEtaNeg  [NClustersPerRCTRegion], 
      uint16_t _toStitch_towerPhiNeg  [NClustersPerRCTRegion], 
      uint16_t _toStitch_ClusterETNeg [NClustersPerRCTRegion], 
      uint16_t _toStitch_peakEtaPos   [NClustersPerRCTRegion], 
      uint16_t _toStitch_peakPhiPos   [NClustersPerRCTRegion], 
      uint16_t _toStitch_towerEtaPos  [NClustersPerRCTRegion], 
      uint16_t _toStitch_towerPhiPos  [NClustersPerRCTRegion], 
      uint16_t _toStitch_ClusterETPos [NClustersPerRCTRegion], 
      uint16_t _stitched_peakEtaNeg   [NClustersPerRCTRegion], 
      uint16_t _stitched_peakPhiNeg   [NClustersPerRCTRegion], 
      uint16_t _stitched_towerEtaNeg  [NClustersPerRCTRegion], 
      uint16_t _stitched_towerPhiNeg  [NClustersPerRCTRegion], 
      uint16_t _stitched_ClusterETNeg [NClustersPerRCTRegion], 
      uint16_t _stitched_peakEtaPos   [NClustersPerRCTRegion], 
      uint16_t _stitched_peakPhiPos   [NClustersPerRCTRegion], 
      uint16_t _stitched_towerEtaPos  [NClustersPerRCTRegion], 
      uint16_t _stitched_towerPhiPos  [NClustersPerRCTRegion], 
      uint16_t _stitched_ClusterETPos [NClustersPerRCTRegion] 
){

#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable= _toStitch_peakEtaNeg   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_peakPhiNeg   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_towerEtaNeg  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_towerPhiNeg  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_ClusterETNeg complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_peakEtaPos   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_peakPhiPos   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_towerEtaPos  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_towerPhiPos  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_ClusterETPos complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_peakEtaNeg   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_peakPhiNeg   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_towerEtaNeg  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_towerPhiNeg  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_ClusterETNeg complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_peakEtaPos   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_peakPhiPos   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_towerEtaPos  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_towerPhiPos  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _stitched_ClusterETPos complete dim=0

   uint16_t _preStitched_peakEtaNeg   [NClustersPerRCTRegion]; 
   uint16_t _preStitched_peakPhiNeg   [NClustersPerRCTRegion];
   uint16_t _preStitched_ClusterETNeg [NClustersPerRCTRegion];
   uint16_t _preStitched_peakEtaPos   [NClustersPerRCTRegion];
   uint16_t _preStitched_peakPhiPos   [NClustersPerRCTRegion];
   uint16_t _preStitched_ClusterETPos [NClustersPerRCTRegion];

#pragma HLS ARRAY_PARTITION variable= _preStitched_peakEtaNeg   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _preStitched_peakPhiNeg   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _preStitched_ClusterETNeg complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _preStitched_peakEtaPos   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _preStitched_peakPhiPos   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _preStitched_ClusterETPos complete dim=0

   for(uint16_t iniClusters=0; iniClusters<NClustersPerRCTRegion; iniClusters++){
#pragma HLS UNROLL 
      _stitched_peakEtaNeg   [iniClusters] = _toStitch_peakEtaNeg   [iniClusters]; 
      _stitched_peakPhiNeg   [iniClusters] = _toStitch_peakPhiNeg   [iniClusters];
      _stitched_towerEtaNeg  [iniClusters] = _toStitch_towerEtaNeg  [iniClusters];
      _stitched_towerPhiNeg  [iniClusters] = _toStitch_towerPhiNeg  [iniClusters];
      _stitched_ClusterETNeg [iniClusters] = _toStitch_ClusterETNeg [iniClusters];
      _stitched_peakEtaPos   [iniClusters] = _toStitch_peakEtaPos   [iniClusters];
      _stitched_peakPhiPos   [iniClusters] = _toStitch_peakPhiPos   [iniClusters];
      _stitched_towerEtaPos  [iniClusters] = _toStitch_towerEtaPos  [iniClusters];
      _stitched_towerPhiPos  [iniClusters] = _toStitch_towerPhiPos  [iniClusters];
      _stitched_ClusterETPos [iniClusters] = _toStitch_ClusterETPos [iniClusters];

      _preStitched_peakEtaNeg   [iniClusters] = _toStitch_peakEtaNeg   [iniClusters]; 
      _preStitched_peakPhiNeg   [iniClusters] = _toStitch_peakPhiNeg   [iniClusters];
      _preStitched_ClusterETNeg [iniClusters] = _toStitch_ClusterETNeg [iniClusters];
      _preStitched_peakEtaPos   [iniClusters] = _toStitch_peakEtaPos   [iniClusters];
      _preStitched_peakPhiPos   [iniClusters] = _toStitch_peakPhiPos   [iniClusters];
      _preStitched_ClusterETPos [iniClusters] = _toStitch_ClusterETPos [iniClusters];
   }


   for(uint16_t icluster = 0; icluster < NClustersPerRCTRegion; icluster++){
#pragma HLS UNROLL
      if( _toStitch_towerEtaNeg[icluster] ==  NGCTEta && _toStitch_peakEtaNeg[icluster] == 0){
	 get_EtaStitchInNegEta(
	       _toStitch_peakEtaNeg   [icluster], 
	       _toStitch_peakPhiNeg   [icluster],
	       _toStitch_towerEtaNeg  [icluster],
	       _toStitch_towerPhiNeg  [icluster],
	       _toStitch_ClusterETNeg [icluster],
	       &_preStitched_peakEtaNeg   [icluster],
	       &_preStitched_peakPhiNeg   [icluster],
	       &_preStitched_ClusterETNeg [icluster],
	       _toStitch_peakEtaPos,   
	       _toStitch_peakPhiPos,   
	       _toStitch_towerEtaPos,  
	       _toStitch_towerPhiPos,  
	       _toStitch_ClusterETPos 
	       );
	 _stitched_peakEtaNeg   [icluster] = _preStitched_peakEtaNeg   [icluster]; 
	 _stitched_peakPhiNeg   [icluster] = _preStitched_peakPhiNeg   [icluster];
	 _stitched_ClusterETNeg [icluster] = _preStitched_ClusterETNeg [icluster];

      }

      if( _toStitch_towerEtaPos[icluster] ==  NGCTEta-1 && _toStitch_peakEtaPos[icluster] == 4){
	 get_EtaStitchInPosEta(
	       _toStitch_peakEtaPos   [icluster], 
	       _toStitch_peakPhiPos   [icluster],
	       _toStitch_towerEtaPos  [icluster],
	       _toStitch_towerPhiPos  [icluster],
	       _toStitch_ClusterETPos [icluster],
	       &_preStitched_peakEtaPos   [icluster],
	       &_preStitched_peakPhiPos   [icluster],
	       &_preStitched_ClusterETPos [icluster],
	       _toStitch_peakEtaNeg,   
	       _toStitch_peakPhiNeg,   
	       _toStitch_towerEtaNeg,  
	       _toStitch_towerPhiNeg,  
	       _toStitch_ClusterETNeg 
	       );
	 _stitched_peakEtaPos   [icluster] = _preStitched_peakEtaPos   [icluster]; 
	 _stitched_peakPhiPos   [icluster] = _preStitched_peakPhiPos   [icluster];
	 _stitched_ClusterETPos [icluster] = _preStitched_ClusterETPos [icluster];

      }

      //- 	 for(uint16_t neigh = 0; neigh < NClustersPerRCTRegion; neigh++){
      //- #pragma HLS UNROLL
      //- 
      //- 	    if(   _toStitch_towerEtaPos[neigh] ==  NGCTEta-1 &&
      //- 		  _toStitch_peakEtaPos [neigh] ==  4 && 
      //- 		  _toStitch_towerPhiPos[neigh] == _toStitch_towerPhiNeg[icluster]  && 
      //- 		  _toStitch_peakPhiPos [neigh] == _toStitch_peakPhiNeg[icluster]
      //- 	      ){
      //- 
      //- 	       mergeClusters(
      //- 		     _toStitch_peakEtaNeg[icluster], _toStitch_peakPhiNeg[icluster], _toStitch_ClusterETNeg[icluster],
      //- 		     _toStitch_peakEtaPos[neigh],    _toStitch_peakPhiPos[neigh],    _toStitch_ClusterETPos[neigh],
      //- 		     &_preStitched_peakEtaNeg[icluster], &_preStitched_peakPhiNeg[icluster], &_preStitched_ClusterETNeg[icluster],
      //- 		     &_preStitched_peakEtaPos[neigh],    &_preStitched_peakPhiPos[neigh],    &_preStitched_ClusterETPos[neigh]
      //- 		     );
      //- 	    }
      //- 	 }
   }

   return true;
}

bool get_EtaStitchInNegEta(
      uint16_t _Neg_peakEta,
      uint16_t _Neg_peakPhi,
      uint16_t _Neg_towerEta,
      uint16_t _Neg_towerPhi,
      uint16_t _Neg_ClusterET,
      uint16_t *_stitched_Neg_peakEta,
      uint16_t *_stitched_Neg_peakPhi,
      uint16_t *_stitched_Neg_ClusterET,
      uint16_t _toStitch_peakEtaPos  [NClustersPerRCTRegion],   
      uint16_t _toStitch_peakPhiPos  [NClustersPerRCTRegion],   
      uint16_t _toStitch_towerEtaPos [NClustersPerRCTRegion],  
      uint16_t _toStitch_towerPhiPos [NClustersPerRCTRegion],  
      uint16_t _toStitch_ClusterETPos[NClustersPerRCTRegion]
      ){
#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable= _toStitch_peakEtaPos   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_peakPhiPos   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_towerEtaPos  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_towerPhiPos  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_ClusterETPos complete dim=0

   for(uint16_t nClus = 0; nClus<NClustersPerRCTRegion; nClus++){
#pragma HLS UNROLL
   
      if(   _toStitch_towerEtaPos [nClus] == NGCTEta-1 &&
	    _toStitch_peakEtaPos  [nClus] == 4 &&
	    _toStitch_towerPhiPos [nClus] == _Neg_towerPhi &&
	    _toStitch_peakPhiPos  [nClus] == _Neg_peakPhi
	){
	 mergeClusters(
	       _Neg_peakEta, _Neg_peakPhi, _Neg_ClusterET,
	       _toStitch_peakEtaPos[nClus], _toStitch_peakPhiPos[nClus], _toStitch_ClusterETPos[nClus],
	       _stitched_Neg_peakEta, _stitched_Neg_peakPhi, _stitched_Neg_ClusterET
	       );
      }
   }

   return true;
}

bool get_EtaStitchInPosEta(
      uint16_t _Pos_peakEta,
      uint16_t _Pos_peakPhi,
      uint16_t _Pos_towerEta,
      uint16_t _Pos_towerPhi,
      uint16_t _Pos_ClusterET,
      uint16_t *_stitched_Pos_peakEta,
      uint16_t *_stitched_Pos_peakPhi,
      uint16_t *_stitched_Pos_ClusterET,
      uint16_t _toStitch_peakEtaNeg  [NClustersPerRCTRegion],   
      uint16_t _toStitch_peakPhiNeg  [NClustersPerRCTRegion],   
      uint16_t _toStitch_towerEtaNeg [NClustersPerRCTRegion],  
      uint16_t _toStitch_towerPhiNeg [NClustersPerRCTRegion],  
      uint16_t _toStitch_ClusterETNeg[NClustersPerRCTRegion]
      ){
#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable= _toStitch_peakEtaNeg   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_peakPhiNeg   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_towerEtaNeg  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_towerPhiNeg  complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _toStitch_ClusterETNeg complete dim=0

   for(uint16_t nClus = 0; nClus<NClustersPerRCTRegion; nClus++){
#pragma HLS UNROLL

      if(   _toStitch_towerEtaNeg [nClus] == NGCTEta &&
	    _toStitch_peakEtaNeg  [nClus] == 0 &&
	    _toStitch_towerPhiNeg [nClus] == _Pos_towerPhi &&
	    _toStitch_peakPhiNeg  [nClus] == _Pos_peakPhi
	){
	 mergeClusters(
	       _Pos_peakEta, _Pos_peakPhi, _Pos_ClusterET,
	       _toStitch_peakEtaNeg[nClus], _toStitch_peakPhiNeg[nClus], _toStitch_ClusterETNeg[nClus],
	       _stitched_Pos_peakEta, _stitched_Pos_peakPhi, _stitched_Pos_ClusterET
	       );
      }
   }

   return true;
}
