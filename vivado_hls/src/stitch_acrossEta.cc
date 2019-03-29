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

   for(uint16_t rPhi=1; rPhi<NRCTRegionsPerEtaHalf-1; rPhi++){
#pragma HLS UNROLL

      for(uint16_t iClusters = 0; iClusters<NClustersPerRCTRegion; iClusters++){
#pragma HLS UNROLL

	 toStitch_peakEtaNeg_   [iClusters] = peakEtaNeg_   [rPhi][iClusters];
	 toStitch_peakPhiNeg_   [iClusters] = peakPhiNeg_   [rPhi][iClusters];
	 toStitch_towerEtaNeg_  [iClusters] = towerEtaNeg_  [rPhi][iClusters];
	 toStitch_towerPhiNeg_  [iClusters] = towerPhiNeg_  [rPhi][iClusters];
	 toStitch_ClusterETNeg_ [iClusters] = ClusterETNeg_ [rPhi][iClusters];
	 toStitch_peakEtaPos_   [iClusters] = peakEtaPos_   [rPhi][iClusters];
	 toStitch_peakPhiPos_   [iClusters] = peakPhiPos_   [rPhi][iClusters];
	 toStitch_towerEtaPos_  [iClusters] = towerEtaPos_  [rPhi][iClusters];
	 toStitch_towerPhiPos_  [iClusters] = towerPhiPos_  [rPhi][iClusters];
	 toStitch_ClusterETPos_ [iClusters] = ClusterETPos_ [rPhi][iClusters];
      }


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

      for(uint16_t iclus=0; iclus<NClustersPerRCTRegion; iclus++){
#pragma HLS UNROLL
	 outpeakEtaNeg_   [rPhi][iclus] = stitched_peakEtaNeg_   [iclus] ;
	 outpeakPhiNeg_   [rPhi][iclus] = stitched_peakPhiNeg_   [iclus] ;
	 outtowerEtaNeg_  [rPhi][iclus] = stitched_towerEtaNeg_  [iclus] ;
	 outtowerPhiNeg_  [rPhi][iclus] = stitched_towerPhiNeg_  [iclus] ;
	 outClusterETNeg_ [rPhi][iclus] = stitched_ClusterETNeg_ [iclus] ;
	 outpeakEtaPos_   [rPhi][iclus] = stitched_peakEtaPos_   [iclus] ;
	 outpeakPhiPos_   [rPhi][iclus] = stitched_peakPhiPos_   [iclus] ;
	 outtowerEtaPos_  [rPhi][iclus] = stitched_towerEtaPos_  [iclus] ;
	 outtowerPhiPos_  [rPhi][iclus] = stitched_towerPhiPos_  [iclus] ;
	 outClusterETPos_ [rPhi][iclus] = stitched_ClusterETPos_ [iclus] ;

      }

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

