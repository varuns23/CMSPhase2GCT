#include "stitch_acrossPhi.hh"
#include "GCT.hh"
#include <iostream>

bool stitch_acrossPhi(
      uint16_t peakEta_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],     
      uint16_t peakPhi_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerEta_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerPhi_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t ClusterET_[NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakEta_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakPhi_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outtowerEta_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outtowerPhi_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outClusterET_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion]
      ){

#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable=peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_ complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEta_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_  complete dim=0  

   uint16_t toStitch_peakEta_   [NClustersPerRCTRegion]; 
   uint16_t toStitch_peakPhi_   [NClustersPerRCTRegion];
   uint16_t toStitch_towerEta_  [NClustersPerRCTRegion];
   uint16_t toStitch_towerPhi_  [NClustersPerRCTRegion];
   uint16_t toStitch_ClusterET_ [NClustersPerRCTRegion];

   uint16_t left_peakEta_   [NClustersPerRCTRegion]; 
   uint16_t left_peakPhi_   [NClustersPerRCTRegion];
   uint16_t left_towerEta_  [NClustersPerRCTRegion];
   uint16_t left_towerPhi_  [NClustersPerRCTRegion];
   uint16_t left_ClusterET_ [NClustersPerRCTRegion];

   uint16_t right_peakEta_   [NClustersPerRCTRegion]; 
   uint16_t right_peakPhi_   [NClustersPerRCTRegion];
   uint16_t right_towerEta_  [NClustersPerRCTRegion];
   uint16_t right_towerPhi_  [NClustersPerRCTRegion];
   uint16_t right_ClusterET_ [NClustersPerRCTRegion];

   uint16_t stitched_peakEta_   [NClustersPerRCTRegion]; 
   uint16_t stitched_peakPhi_   [NClustersPerRCTRegion];
   uint16_t stitched_towerEta_  [NClustersPerRCTRegion];
   uint16_t stitched_towerPhi_  [NClustersPerRCTRegion];
   uint16_t stitched_ClusterET_ [NClustersPerRCTRegion];

#pragma HLS ARRAY_PARTITION variable=toStitch_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_ClusterET_ complete dim=0

#pragma HLS ARRAY_PARTITION variable=left_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_ClusterET_ complete dim=0

#pragma HLS ARRAY_PARTITION variable=right_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_ClusterET_ complete dim=0

#pragma HLS ARRAY_PARTITION variable=stitched_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_ClusterET_ complete dim=0

   for(uint16_t iclus=0; iclus<NClustersPerRCTRegion; iclus++){
#pragma HLS UNROLL
      stitched_peakEta_   [iclus] = 0;
      stitched_peakPhi_   [iclus] = 0;
      stitched_towerEta_  [iclus] = 0;
      stitched_towerPhi_  [iclus] = 0;
      stitched_ClusterET_ [iclus] = 0;   
   }

   for(uint16_t iRegion=1; iRegion<NRCTRegionsPerEtaHalf-1; iRegion++){
#pragma HLS UNROLL
      for(uint16_t icluster=0; icluster<NClustersPerRCTRegion; icluster++){
#pragma HLS UNROLL
	 toStitch_peakEta_   [icluster] = peakEta_  [iRegion][icluster]; 
	 toStitch_peakPhi_   [icluster] = peakPhi_  [iRegion][icluster];
	 toStitch_towerEta_  [icluster] = towerEta_ [iRegion][icluster];
	 toStitch_towerPhi_  [icluster] = towerPhi_ [iRegion][icluster];
	 toStitch_ClusterET_ [icluster] = ClusterET_[iRegion][icluster];

	 left_peakEta_   [icluster] = peakEta_  [iRegion-1][icluster]; 
	 left_peakPhi_   [icluster] = peakPhi_  [iRegion-1][icluster];
	 left_towerEta_  [icluster] = towerEta_ [iRegion-1][icluster];
	 left_towerPhi_  [icluster] = towerPhi_ [iRegion-1][icluster];
	 left_ClusterET_ [icluster] = ClusterET_[iRegion-1][icluster];

	 right_peakEta_   [icluster] = peakEta_  [iRegion+1][icluster]; 
	 right_peakPhi_   [icluster] = peakPhi_  [iRegion+1][icluster];
	 right_towerEta_  [icluster] = towerEta_ [iRegion+1][icluster];
	 right_towerPhi_  [icluster] = towerPhi_ [iRegion+1][icluster];
	 right_ClusterET_ [icluster] = ClusterET_[iRegion+1][icluster];
      }

      get_stitchedClustersInPhi(
	    toStitch_peakEta_  ,  
	    toStitch_peakPhi_  ,
	    toStitch_towerEta_ ,
	    toStitch_towerPhi_ ,
	    toStitch_ClusterET_,
	    left_peakEta_  ,  
	    left_peakPhi_  ,
	    left_towerEta_ ,
	    left_towerPhi_ ,
	    left_ClusterET_,
	    right_peakEta_  , 
	    right_peakPhi_  ,
	    right_towerEta_ ,
	    right_towerPhi_ ,
	    right_ClusterET_,
	    stitched_peakEta_  , 
	    stitched_peakPhi_  ,
	    stitched_towerEta_ ,
	    stitched_towerPhi_ ,
	    stitched_ClusterET_
	       );


      for(uint16_t oclus=0; oclus<NClustersPerRCTRegion; oclus++){
#pragma HLS UNROLL
	 outpeakEta_   [iRegion][oclus] = stitched_peakEta_   [oclus];
	 outpeakPhi_   [iRegion][oclus] = stitched_peakPhi_   [oclus];
	 outtowerEta_  [iRegion][oclus] = stitched_towerEta_  [oclus];
	 outtowerPhi_  [iRegion][oclus] = stitched_towerPhi_  [oclus];
	 outClusterET_ [iRegion][oclus] = stitched_ClusterET_ [oclus];   
      }

   }

   return true;
}

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
){
#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable=toStitch_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=toStitch_ClusterET_ complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_peakEta_       complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_peakPhi_       complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_towerEta_      complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_towerPhi_      complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_ClusterET_     complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_peakEta_      complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_peakPhi_      complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_towerEta_     complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_towerPhi_     complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_ClusterET_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_ClusterET_ complete dim=0

   uint16_t _preStitched_peakEta   [NClustersPerRCTRegion]; 
   uint16_t _preStitched_peakPhi   [NClustersPerRCTRegion];
   uint16_t _preStitched_ClusterET [NClustersPerRCTRegion];

#pragma HLS ARRAY_PARTITION variable= _preStitched_peakEta   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _preStitched_peakPhi   complete dim=0 
#pragma HLS ARRAY_PARTITION variable= _preStitched_ClusterET complete dim=0 


   for(uint16_t iclus=0; iclus<NClustersPerRCTRegion; iclus++){
#pragma HLS UNROLL

      stitched_peakEta_   [iclus] = toStitch_peakEta_  [iclus];
      stitched_peakPhi_   [iclus] = toStitch_peakPhi_  [iclus];
      stitched_towerEta_  [iclus] = toStitch_towerEta_ [iclus];
      stitched_towerPhi_  [iclus] = toStitch_towerPhi_ [iclus];
      stitched_ClusterET_ [iclus] = toStitch_ClusterET_[iclus];

      _preStitched_peakEta   [iclus] = toStitch_peakEta_  [iclus]; 
      _preStitched_peakPhi   [iclus] = toStitch_peakPhi_  [iclus];
      _preStitched_ClusterET [iclus] = toStitch_ClusterET_[iclus];
   } 

   for(uint16_t icluster = 0; icluster < NClustersPerRCTRegion; icluster++){
#pragma HLS UNROLL

      if(   toStitch_towerPhi_[icluster]%4 == 0 &&
	    toStitch_peakPhi_ [icluster] == 0
	){
	 get_leftStitchInPhi(
	       toStitch_peakEta_  [icluster], 
	       toStitch_peakPhi_  [icluster],
	       toStitch_towerEta_ [icluster],
	       toStitch_towerPhi_ [icluster],
	       toStitch_ClusterET_[icluster],
	       &_preStitched_peakEta   [icluster],
	       &_preStitched_peakPhi   [icluster],
	       &_preStitched_ClusterET [icluster],
	       left_peakEta_   , 
	       left_peakPhi_   , 
	       left_towerEta_  , 
	       left_towerPhi_  , 
	       left_ClusterET_ 
	       );

	 stitched_peakEta_   [icluster] = _preStitched_peakEta   [icluster]; 
	 stitched_peakPhi_   [icluster] = _preStitched_peakPhi   [icluster];
	 stitched_ClusterET_ [icluster] = _preStitched_ClusterET [icluster];
      }

      if(   toStitch_towerPhi_[icluster]%4 == 3 &&
	    toStitch_peakPhi_ [icluster] == 4
	){
	 get_rightStitchInPhi(
	       toStitch_peakEta_  [icluster], 
	       toStitch_peakPhi_  [icluster],
	       toStitch_towerEta_ [icluster],
	       toStitch_towerPhi_ [icluster],
	       toStitch_ClusterET_[icluster],
	       &_preStitched_peakEta   [icluster],
	       &_preStitched_peakPhi   [icluster],
	       &_preStitched_ClusterET [icluster],
	       right_peakEta_   , 
	       right_peakPhi_   , 
	       right_towerEta_  , 
	       right_towerPhi_  , 
	       right_ClusterET_ 
	       );

	 stitched_peakEta_   [icluster] = _preStitched_peakEta   [icluster]; 
	 stitched_peakPhi_   [icluster] = _preStitched_peakPhi   [icluster];
	 stitched_ClusterET_ [icluster] = _preStitched_ClusterET [icluster];
      }

   }

   return true;
}

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
      ){
#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable=left_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=left_ClusterET_ complete dim=0

   for(uint16_t nClus = 0; nClus<NClustersPerRCTRegion; nClus++){
#pragma HLS UNROLL

      if(   left_towerPhi_ [nClus]%4 == 3 &&
	    left_peakPhi_  [nClus] == 4   &&
	    left_towerEta_ [nClus] == toStitch_towerEta_ &&
	    left_peakEta_  [nClus] == toStitch_peakEta_
	){

	 mergeClusters(
	       toStitch_peakEta_, toStitch_peakPhi_, toStitch_ClusterET_,
	       left_peakEta_[nClus], left_peakPhi_[nClus], left_ClusterET_[nClus],
	       _preStitched_peakEta, _preStitched_peakPhi, _preStitched_ClusterET
	       );
      }
   }

   return true;
}

bool get_rightStitchInPhi(
      uint16_t  toStitch_peakEta_  ,
      uint16_t  toStitch_peakPhi_  ,
      uint16_t  toStitch_towerEta_ ,
      uint16_t  toStitch_towerPhi_ ,
      uint16_t  toStitch_ClusterET_,
      uint16_t  *_preStitched_peakEta   ,
      uint16_t  *_preStitched_peakPhi   ,
      uint16_t  *_preStitched_ClusterET ,
      uint16_t  right_peakEta_   [NClustersPerRCTRegion], 
      uint16_t  right_peakPhi_   [NClustersPerRCTRegion], 
      uint16_t  right_towerEta_  [NClustersPerRCTRegion], 
      uint16_t  right_towerPhi_  [NClustersPerRCTRegion], 
      uint16_t  right_ClusterET_ [NClustersPerRCTRegion]
      ){
#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable=right_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=right_ClusterET_ complete dim=0

   for(uint16_t nClus = 0; nClus<NClustersPerRCTRegion; nClus++){
#pragma HLS UNROLL

      if(   right_towerPhi_ [nClus]%4 == 0 &&
	    right_peakPhi_  [nClus] == 0   &&
	    right_towerEta_ [nClus] == toStitch_towerEta_ &&
	    right_peakEta_  [nClus] == toStitch_peakEta_
	){

	 mergeClusters(
	       toStitch_peakEta_, toStitch_peakPhi_, toStitch_ClusterET_,
	       right_peakEta_[nClus], right_peakPhi_[nClus], right_ClusterET_[nClus],
	       _preStitched_peakEta, _preStitched_peakPhi, _preStitched_ClusterET
	       );
      }
   }

   return true;
}


//-     //overlapping cards are not used for merging accross phi.
//-     for(uint16_t rPhi=1; rPhi<NRCTRegionsPerEtaHalf-1; rPhi++){
//-  #pragma HLS UNROLL
//-        for(uint16_t icluster=0; icluster<NClustersPerRCTRegion; icluster++){
//-  #pragma HLS UNROLL
//-  	 if(   ((towerPhi_[rPhi][icluster])%4 == 0   && peakPhi_[rPhi][icluster] == 0) ||
//-  	       ((towerPhi_[rPhi][icluster]+1)%4 == 0 && peakPhi_[rPhi][icluster] == 4 )){ 
//-  
//-  	    for(uint16_t iNcluster=0; iNcluster<NClustersPerRCTRegion; iNcluster++){
//-  #pragma HLS UNROLL
//-  	       uint16_t leftNeighbour = rPhi-1;
//-  	       uint16_t rightNeighbour = rPhi+1;
//-  
//-  	       //stitching with the left side card
//-  	       if(   (towerPhi_[rPhi][icluster])%4 == 0   && peakPhi_[rPhi][icluster] == 0 &&
//-  		     (towerPhi_[leftNeighbour][iNcluster]+1)%4 == 0 &&
//-  		     peakPhi_[leftNeighbour][iNcluster] == 4        &&
//-  		     towerEta_[leftNeighbour][iNcluster] == towerEta_[rPhi][icluster] &&
//-  		     peakEta_[leftNeighbour][iNcluster] == peakEta_[rPhi][icluster]){
//-  
//-  		  mergeClustersInEta(
//-  			peakEta_[rPhi][icluster], peakPhi_[rPhi][icluster], ClusterET_[rPhi][icluster], 
//-  			peakEta_[leftNeighbour][iNcluster], peakPhi_[leftNeighbour][iNcluster], ClusterET_[leftNeighbour][iNcluster], 
//-  			&outpeakEta_[rPhi][icluster], &outpeakPhi_[rPhi][icluster], &outClusterET_[rPhi][icluster], 
//-  			&outpeakEta_[leftNeighbour][iNcluster], &outpeakPhi_[leftNeighbour][iNcluster], &outClusterET_[leftNeighbour][iNcluster] 
//-  			);
//-  	       }
//-  
//-  	       //stitching with the right side card
//-  	       if(   (towerPhi_[rPhi][icluster]+1)%4 == 0   && peakPhi_[rPhi][icluster] == 4 &&
//-  		     (towerPhi_[rightNeighbour][iNcluster])%4 == 0 &&
//-  		     peakPhi_[rightNeighbour][iNcluster] == 0        &&
//-  		     towerEta_[rightNeighbour][iNcluster] == towerEta_[rPhi][icluster] &&
//-  		     peakEta_[rightNeighbour][iNcluster] == peakEta_[rPhi][icluster]){
//-  
//-  		  mergeClustersInEta(
//-  			peakEta_[rPhi][icluster], peakPhi_[rPhi][icluster], ClusterET_[rPhi][icluster], 
//-  			peakEta_[rightNeighbour][iNcluster], peakPhi_[rightNeighbour][iNcluster], ClusterET_[rightNeighbour][iNcluster], 
//-  			&outpeakEta_[rPhi][icluster], &outpeakPhi_[rPhi][icluster], &outClusterET_[rPhi][icluster], 
//-  			&outpeakEta_[rightNeighbour][iNcluster], &outpeakPhi_[rightNeighbour][iNcluster], &outClusterET_[rightNeighbour][iNcluster] 
//-  			);
//-  	       }
//-  	    }
//-  	 }
//-        }
//-     }
//-  
//-    return true;
//- }

