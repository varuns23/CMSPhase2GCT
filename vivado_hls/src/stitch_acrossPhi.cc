#include "stitch_acrossEta.hh"
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

#pragma HLS ARRAY_PARTITION variable=stitched_peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerEta_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_towerPhi_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=stitched_ClusterET_ complete dim=0
 
   for(uint16_t iRegion=1; iRegion<NRCTRegionsPerEtaHalf-1; iRegion++){
#pragma HLS UNROLL
      for(uint16_t icluster=0; icluster<NClustersPerRCTRegion; icluster++){
#pragma HLS UNROLL

	 toStitch_peakEta_   [icluster] = peakEta_  [iRegion][icluster]; 
	 toStitch_peakPhi_   [icluster] = peakPhi_  [iRegion][icluster];
	 toStitch_towerEta_  [icluster] = towerEta_ [iRegion][icluster];
	 toStitch_towerPhi_  [icluster] = towerPhi_ [iRegion][icluster];
	 toStitch_ClusterET_ [icluster] = ClusterET_[iRegion][icluster];
      }
   }



   return true;
}

//-   for(uint16_t iRegion=0; iRegion<NRCTRegionsPerEtaHalf; iRegion++){
//-#pragma HLS UNROLL
//-      for(uint16_t iClus=0; iClus<NClustersPerRCTRegion; iClus++){
//-#pragma HLS UNROLL
//-	 outpeakEta_   [iRegion][iClus] = peakEta_   [iRegion][iClus];  
//-	 outpeakPhi_   [iRegion][iClus] = peakPhi_   [iRegion][iClus]; 
//-	 outtowerEta_  [iRegion][iClus] = towerEta_  [iRegion][iClus]; 
//-	 outtowerPhi_  [iRegion][iClus] = towerPhi_  [iRegion][iClus]; 
//-	 outClusterET_ [iRegion][iClus] = ClusterET_ [iRegion][iClus];
//-      }
//-   }
//-  
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

