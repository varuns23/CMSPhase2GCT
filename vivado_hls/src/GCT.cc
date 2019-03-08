#include "GCT.hh"
#include <iostream>

using namespace std;


bool GCT(
      uint16_t peakEta_Neg     [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t peakPhi_Neg     [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerEta_Neg    [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerPhi_Neg    [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t ClusterET_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t peakEta_Pos     [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t peakPhi_Pos     [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerEta_Pos    [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t towerPhi_Pos    [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t ClusterET_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
      uint16_t outpeakEta_Neg  [NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outpeakPhi_Neg  [NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outtowerEta_Neg [NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outtowerPhi_Neg [NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outClusterET_Neg[NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outpeakEta_Pos  [NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outpeakPhi_Pos  [NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outtowerEta_Pos [NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outtowerPhi_Pos [NoutRCTRegions][NClustersPerRCTRegion],
      uint16_t outClusterET_Pos[NoutRCTRegions][NClustersPerRCTRegion]){

#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable=peakEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_Neg  complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_Neg  complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_Neg complete dim=0

#pragma HLS ARRAY_PARTITION variable=peakEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_Pos  complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_Pos  complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_Pos complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_Neg  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_Neg  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_Neg complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_Pos  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_Pos  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_Pos complete dim=0

   uint16_t toMerge_peakEta_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_peakPhi_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_towerEta_Neg  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_towerPhi_Neg  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_ClusterET_Neg [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

   uint16_t mergedpeakEta_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedpeakPhi_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedtowerEta_Neg  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedtowerPhi_Neg  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedClusterET_Neg [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

#pragma HLS ARRAY_PARTITION variable=toMerge_peakEta_Neg    complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_peakPhi_Neg    complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_towerEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_towerPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_ClusterET_Neg  complete dim=0

#pragma HLS ARRAY_PARTITION variable=mergedpeakEta_Neg    complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedpeakPhi_Neg    complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtowerEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtowerPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedClusterET_Neg  complete dim=0

   uint16_t toMerge_peakEta_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_peakPhi_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_towerEta_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_towerPhi_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_ClusterET_Pos [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

   uint16_t mergedpeakEta_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedpeakPhi_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedtowerEta_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedtowerPhi_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedClusterET_Pos [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

#pragma HLS ARRAY_PARTITION variable=toMerge_peakEta_Pos    complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_peakPhi_Pos    complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_towerEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_towerPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_ClusterET_Pos  complete dim=0

#pragma HLS ARRAY_PARTITION variable=mergedpeakEta_Pos    complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedpeakPhi_Pos    complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtowerEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtowerPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedClusterET_Pos  complete dim=0


   for(int inPhi=0; inPhi<NRCTRegionsPerEtaHalf; ++inPhi){
#pragma HLS UNROLL
      for(int inCluster=0; inCluster<NClustersPerRCTRegion; ++inCluster){
#pragma HLS UNROLL

	 toMerge_peakEta_Neg   [inPhi][inCluster] = 0;
	 toMerge_peakPhi_Neg   [inPhi][inCluster] = 0;
	 toMerge_towerEta_Neg  [inPhi][inCluster] = 0;
	 toMerge_towerPhi_Neg  [inPhi][inCluster] = 0;
	 toMerge_ClusterET_Neg [inPhi][inCluster] = 0;

	 toMerge_peakEta_Pos   [inPhi][inCluster] = 0;
	 toMerge_peakPhi_Pos   [inPhi][inCluster] = 0;
	 toMerge_towerEta_Pos  [inPhi][inCluster] = 0;
	 toMerge_towerPhi_Pos  [inPhi][inCluster] = 0;
	 toMerge_ClusterET_Pos [inPhi][inCluster] = 0;

	 mergedpeakEta_Neg   [inPhi][inCluster] = 0;
	 mergedpeakPhi_Neg   [inPhi][inCluster] = 0;
	 mergedtowerEta_Neg  [inPhi][inCluster] = 0;
	 mergedtowerPhi_Neg  [inPhi][inCluster] = 0;
	 mergedClusterET_Neg [inPhi][inCluster] = 0;

	 mergedpeakEta_Pos   [inPhi][inCluster] = 0;
	 mergedpeakPhi_Pos   [inPhi][inCluster] = 0;
	 mergedtowerEta_Pos  [inPhi][inCluster] = 0;
	 mergedtowerPhi_Pos  [inPhi][inCluster] = 0;
	 mergedClusterET_Pos [inPhi][inCluster] = 0;

	 //      cout<<ClusterET_Pos [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<std::hex<< ClusterET_Pos [inPhi][inCluster]<<std::dec<<" "<<setw(5);
	 //    	 cout<<towerPhi_Pos  [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<towerEta_Pos  [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<peakPhi_Pos   [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<peakEta_Pos   [inPhi][inCluster]<<" +++++++  ";
	 //	 
	 //	 cout<<ClusterET_Neg [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<std::hex<< ClusterET_Neg [inPhi][inCluster]<<std::dec<<" "<<setw(5);
	 //    	 cout<<towerPhi_Neg  [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<towerEta_Neg  [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<peakPhi_Neg   [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<peakEta_Neg   [inPhi][inCluster]<<endl;
	 //    	 cout<<"------------------------------------"<<endl;
      }
   }

   //merge across phi in negative eta
   merge_acrossphi(
	 peakEta_Neg,
	 peakPhi_Neg,
	 towerEta_Neg,
	 towerPhi_Neg,
	 ClusterET_Neg,
	 toMerge_peakEta_Neg,
	 toMerge_peakPhi_Neg,
	 toMerge_towerEta_Neg,
	 toMerge_towerPhi_Neg,
	 toMerge_ClusterET_Neg
	 );

   //merge across phi in positive eta
   merge_acrossphi(
	 peakEta_Pos,
	 peakPhi_Pos,
	 towerEta_Pos,
	 towerPhi_Pos,
	 ClusterET_Pos,
	 toMerge_peakEta_Pos,
	 toMerge_peakPhi_Pos,
	 toMerge_towerEta_Pos,
	 toMerge_towerPhi_Pos,
	 toMerge_ClusterET_Pos
	 );



   //merge across eta
   merge_acrosseta(
	 toMerge_peakEta_Neg,
	 toMerge_peakPhi_Neg,
	 toMerge_towerEta_Neg,
	 toMerge_towerPhi_Neg,
	 toMerge_ClusterET_Neg,
	 toMerge_peakEta_Pos,
	 toMerge_peakPhi_Pos,
	 toMerge_towerEta_Pos,
	 toMerge_towerPhi_Pos,
	 toMerge_ClusterET_Pos,
	 mergedpeakEta_Neg,
	 mergedpeakPhi_Neg,
	 mergedtowerEta_Neg,
	 mergedtowerPhi_Neg,
	 mergedClusterET_Neg,
	 mergedpeakEta_Pos,
	 mergedpeakPhi_Pos,
	 mergedtowerEta_Pos,
	 mergedtowerPhi_Pos,
	 mergedClusterET_Pos
	    );

   for(int ii =0; ii<NoutRCTRegions; ++ii){
#pragma HLS UNROLL
      for(int jj=0; jj<NClustersPerRCTRegion; ++jj){
#pragma HLS UNROLL

	 outpeakEta_Neg   [ii][jj] = mergedpeakEta_Neg   [ii+1][jj];
	 outpeakPhi_Neg   [ii][jj] = mergedpeakPhi_Neg   [ii+1][jj];
	 outtowerEta_Neg  [ii][jj] = mergedtowerEta_Neg  [ii+1][jj];
	 outtowerPhi_Neg  [ii][jj] = mergedtowerPhi_Neg  [ii+1][jj];
	 outClusterET_Neg [ii][jj] = mergedClusterET_Neg [ii+1][jj];

	 outpeakEta_Pos   [ii][jj] = mergedpeakEta_Pos   [ii+1][jj];
	 outpeakPhi_Pos   [ii][jj] = mergedpeakPhi_Pos   [ii+1][jj];
	 outtowerEta_Pos  [ii][jj] = mergedtowerEta_Pos  [ii+1][jj];
	 outtowerPhi_Pos  [ii][jj] = mergedtowerPhi_Pos  [ii+1][jj];
	 outClusterET_Pos [ii][jj] = mergedClusterET_Pos [ii+1][jj];

      }
   }


   return true;
}


bool merge_acrosseta(
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

   for(uint16_t rPhi=0; rPhi<NRCTRegionsPerEtaHalf; rPhi++){
#pragma HLS UNROLL
      for(uint16_t icluster=0; icluster<NClustersPerRCTRegion; icluster++){

	 outpeakEtaNeg_  [rPhi][icluster] = peakEtaNeg_   [rPhi][icluster];
	 outpeakPhiNeg_  [rPhi][icluster] = peakPhiNeg_   [rPhi][icluster];
	 outtowerEtaNeg_ [rPhi][icluster] = towerEtaNeg_  [rPhi][icluster];
	 outtowerPhiNeg_ [rPhi][icluster] = towerPhiNeg_  [rPhi][icluster];
	 outClusterETNeg_[rPhi][icluster] = ClusterETNeg_ [rPhi][icluster];
	 outpeakEtaPos_  [rPhi][icluster] = peakEtaPos_   [rPhi][icluster];
	 outpeakPhiPos_  [rPhi][icluster] = peakPhiPos_   [rPhi][icluster];
	 outtowerEtaPos_ [rPhi][icluster] = towerEtaPos_  [rPhi][icluster];
	 outtowerPhiPos_ [rPhi][icluster] = towerPhiPos_  [rPhi][icluster];
	 outClusterETPos_[rPhi][icluster] = ClusterETPos_ [rPhi][icluster];

      }
   }

   //overlapping cards are not used for merging accross eta.
   for(uint16_t rPhi=1; rPhi<NRCTRegionsPerEtaHalf-1; rPhi++){
#pragma HLS UNROLL
      for(uint16_t icluster=0; icluster<NClustersPerRCTRegion; icluster++){
#pragma HLS UNROLL
	 if( towerEtaPos_[rPhi][icluster] == NGCTEta-1 && peakEtaPos_[rPhi][icluster] == 4 ){
	    for(uint16_t iNcluster=0; iNcluster<NClustersPerRCTRegion; iNcluster++){
#pragma HLS UNROLL
	       if(   towerEtaNeg_[rPhi][iNcluster] == NGCTEta  &&
		     peakEtaNeg_[rPhi][iNcluster] == 0         &&
		     towerPhiNeg_[rPhi][iNcluster] == towerPhiPos_[rPhi][icluster]  &&
		     peakPhiNeg_[rPhi][iNcluster] == peakPhiPos_[rPhi][icluster]){

		  mergeClustersInPhi( 
			peakEtaPos_[rPhi][icluster], peakPhiPos_[rPhi][icluster], ClusterETPos_[rPhi][icluster],
			peakEtaNeg_[rPhi][iNcluster], peakPhiNeg_[rPhi][iNcluster], ClusterETNeg_[rPhi][iNcluster],
			&outpeakEtaPos_[rPhi][icluster], &outpeakPhiPos_[rPhi][icluster], &outClusterETPos_[rPhi][icluster],
			&outpeakEtaNeg_[rPhi][iNcluster], &outpeakPhiNeg_[rPhi][iNcluster], &outClusterETNeg_[rPhi][iNcluster]
			);

	       }
	    }
	 }
      }
   }
}

bool merge_acrossphi(
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

   for(uint16_t iRegion=0; iRegion<NRCTRegionsPerEtaHalf; iRegion++){
#pragma HLS UNROLL
      for(uint16_t iClus=0; iClus<NClustersPerRCTRegion; iClus++){
#pragma HLS UNROLL
	 outpeakEta_   [iRegion][iClus] = peakEta_   [iRegion][iClus];  
	 outpeakPhi_   [iRegion][iClus] = peakPhi_   [iRegion][iClus]; 
	 outtowerEta_  [iRegion][iClus] = towerEta_  [iRegion][iClus]; 
	 outtowerPhi_  [iRegion][iClus] = towerPhi_  [iRegion][iClus]; 
	 outClusterET_ [iRegion][iClus] = ClusterET_ [iRegion][iClus];
      }
   }

   //overlapping cards are not used for merging accross phi.
   for(uint16_t rPhi=1; rPhi<NRCTRegionsPerEtaHalf-1; rPhi++){
#pragma HLS UNROLL
      for(uint16_t icluster=0; icluster<NClustersPerRCTRegion; icluster++){
#pragma HLS UNROLL
	 if(   ((towerPhi_[rPhi][icluster])%4 == 0   && peakPhi_[rPhi][icluster] == 0) ||
	       ((towerPhi_[rPhi][icluster]+1)%4 == 0 && peakPhi_[rPhi][icluster] == 4 )){ 

	    for(uint16_t iNcluster=0; iNcluster<NClustersPerRCTRegion; iNcluster++){
#pragma HLS UNROLL
	       uint16_t leftNeighbour = rPhi-1;
	       uint16_t rightNeighbour = rPhi+1;

	       //stitching with the left side card
	       if(   (towerPhi_[rPhi][icluster])%4 == 0   && peakPhi_[rPhi][icluster] == 0 &&
		     (towerPhi_[leftNeighbour][iNcluster]+1)%4 == 0 &&
		     peakPhi_[leftNeighbour][iNcluster] == 4        &&
		     towerEta_[leftNeighbour][iNcluster] == towerEta_[rPhi][icluster] &&
		     peakEta_[leftNeighbour][iNcluster] == peakEta_[rPhi][icluster]){

		  mergeClustersInEta(
			peakEta_[rPhi][icluster], peakPhi_[rPhi][icluster], ClusterET_[rPhi][icluster], 
			peakEta_[leftNeighbour][iNcluster], peakPhi_[leftNeighbour][iNcluster], ClusterET_[leftNeighbour][iNcluster], 
			&outpeakEta_[rPhi][icluster], &outpeakPhi_[rPhi][icluster], &outClusterET_[rPhi][icluster], 
			&outpeakEta_[leftNeighbour][iNcluster], &outpeakPhi_[leftNeighbour][iNcluster], &outClusterET_[leftNeighbour][iNcluster] 
			);
	       }

	       //stitching with the right side card
	       if(   (towerPhi_[rPhi][icluster]+1)%4 == 0   && peakPhi_[rPhi][icluster] == 4 &&
		     (towerPhi_[rightNeighbour][iNcluster])%4 == 0 &&
		     peakPhi_[rightNeighbour][iNcluster] == 0        &&
		     towerEta_[rightNeighbour][iNcluster] == towerEta_[rPhi][icluster] &&
		     peakEta_[rightNeighbour][iNcluster] == peakEta_[rPhi][icluster]){

		  mergeClustersInEta(
			peakEta_[rPhi][icluster], peakPhi_[rPhi][icluster], ClusterET_[rPhi][icluster], 
			peakEta_[rightNeighbour][iNcluster], peakPhi_[rightNeighbour][iNcluster], ClusterET_[rightNeighbour][iNcluster], 
			&outpeakEta_[rPhi][icluster], &outpeakPhi_[rPhi][icluster], &outClusterET_[rPhi][icluster], 
			&outpeakEta_[rightNeighbour][iNcluster], &outpeakPhi_[rightNeighbour][iNcluster], &outClusterET_[rightNeighbour][iNcluster] 
			);
	       }
	    }
	 }
      }
   }
}

bool mergeClustersInEta(
      uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
      uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
      uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
      uint16_t *eta2, uint16_t *phi2, uint16_t *cet2){
   // Check that the clusters are neighbors in eta

#pragma HLS PIPELINE II=3

   if(icet1 > icet2) {
      // Merge 2 in to 1, and set 2 to remnant energy centered in tower
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = icet1 + icet2;
      *eta2 = 2; //ieta2
      *phi2 = 2; //iphi2
      *cet2 = 0; //should be towerEt-icet2

   }
   else {
      // Merge 1 in to 2, and set 1 to remnant energy centered in tower
      *eta2 = ieta2;
      *phi2 = iphi2;
      *cet2 = icet2 + icet1;
      *eta1 = 2; //ieta1
      *phi1 = 2; //iphi1
      *cet1 = 0; ///should be towerEt-icet1
   }
   return true;
}

bool mergeClustersInPhi(
      uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
      uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
      uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
      uint16_t *eta2, uint16_t *phi2, uint16_t *cet2){
#pragma HLS PIPELINE II=3

   if(icet1 > icet2) {
      // Merge 2 in to 1, and set 2 to remnant energy centered in tower
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = icet1 + icet2;
      *eta2 = 2;//ieta2
      *phi2 = 2;//iphi2
      *cet2 = 0;//should be towerEt-icet2

   }
   else {
      // Merge 1 in to 2, and set 1 to remnant energy centered in tower
      *eta2 = ieta2;
      *phi2 = iphi2;
      *cet2 = icet2 + icet1;
      *eta1 = 2;//ieta1;
      *phi1 = 2;//iphi1;
      *cet1 = 0;//should be towerEt-icet1
   }

   return true;
}

