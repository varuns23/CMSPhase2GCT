#include "GCT.hh"
#include "stitch_acrossEta.hh"
#include "stitch_acrossPhi.hh"
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

   uint16_t toMerge_peakEta_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_peakPhi_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_towerEta_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_towerPhi_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t toMerge_ClusterET_Pos [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

#pragma HLS ARRAY_PARTITION variable=toMerge_peakEta_Neg    complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_peakPhi_Neg    complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_towerEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_towerPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_ClusterET_Neg  complete dim=0

#pragma HLS ARRAY_PARTITION variable=toMerge_peakEta_Pos    complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_peakPhi_Pos    complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_towerEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_towerPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMerge_ClusterET_Pos  complete dim=0

   uint16_t mergedpeakEta_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedpeakPhi_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedtowerEta_Neg  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedtowerPhi_Neg  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedClusterET_Neg [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

   uint16_t mergedpeakEta_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedpeakPhi_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedtowerEta_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedtowerPhi_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t mergedClusterET_Pos [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

#pragma HLS ARRAY_PARTITION variable=mergedpeakEta_Neg    complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedpeakPhi_Neg    complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtowerEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtowerPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedClusterET_Neg  complete dim=0

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
	 toMerge_towerPhi_Neg  [inPhi][inCluster] = 40;
	 toMerge_ClusterET_Neg [inPhi][inCluster] = 0;

	 toMerge_peakEta_Pos   [inPhi][inCluster] = 0;
	 toMerge_peakPhi_Pos   [inPhi][inCluster] = 0;
	 toMerge_towerEta_Pos  [inPhi][inCluster] = 0;
	 toMerge_towerPhi_Pos  [inPhi][inCluster] = 40;
	 toMerge_ClusterET_Pos [inPhi][inCluster] = 0;

	 mergedpeakEta_Neg   [inPhi][inCluster] = 0;
	 mergedpeakPhi_Neg   [inPhi][inCluster] = 0;
	 mergedtowerEta_Neg  [inPhi][inCluster] = 0;
	 mergedtowerPhi_Neg  [inPhi][inCluster] = 40;
	 mergedClusterET_Neg [inPhi][inCluster] = 0;

	 mergedpeakEta_Pos   [inPhi][inCluster] = 0;
	 mergedpeakPhi_Pos   [inPhi][inCluster] = 0;
	 mergedtowerEta_Pos  [inPhi][inCluster] = 0;
	 mergedtowerPhi_Pos  [inPhi][inCluster] = 40;
	 mergedClusterET_Pos [inPhi][inCluster] = 0;

	 /*
	    cout<<ClusterET_Pos [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<std::hex<< ClusterET_Pos [inPhi][inCluster]<<std::dec<<" "<<setw(5);
	 cout<<towerPhi_Pos  [inPhi][inCluster]<<" "<<setw(5);
	 cout<<towerEta_Pos  [inPhi][inCluster]<<" "<<setw(5);
	 cout<<peakPhi_Pos   [inPhi][inCluster]<<" "<<setw(5);
	 cout<<peakEta_Pos   [inPhi][inCluster]<<" +++++++  ";
	 //	 
	 cout<<ClusterET_Neg [inPhi][inCluster]<<" "<<setw(5);
	 //    	 cout<<std::hex<< ClusterET_Neg [inPhi][inCluster]<<std::dec<<" "<<setw(5);
	 cout<<towerPhi_Neg  [inPhi][inCluster]<<" "<<setw(5);
	 cout<<towerEta_Neg  [inPhi][inCluster]<<" "<<setw(5);
	 cout<<peakPhi_Neg   [inPhi][inCluster]<<" "<<setw(5);
	 cout<<peakEta_Neg   [inPhi][inCluster]<<endl;
	 //    	 cout<<"------------------------------------"<<endl;
	 */
      }
   }

   //merge across phi in negative eta
   stitch_acrossPhi(
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
   stitch_acrossPhi(
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
   stitch_acrossEta(
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
	 outtowerPhi_Neg  [ii][jj] = mergedtowerPhi_Neg  [ii+1][jj]-4;
	 outClusterET_Neg [ii][jj] = mergedClusterET_Neg [ii+1][jj];

	 outpeakEta_Pos   [ii][jj] = mergedpeakEta_Pos   [ii+1][jj];
	 outpeakPhi_Pos   [ii][jj] = mergedpeakPhi_Pos   [ii+1][jj];
	 outtowerEta_Pos  [ii][jj] = mergedtowerEta_Pos  [ii+1][jj];
	 outtowerPhi_Pos  [ii][jj] = mergedtowerPhi_Pos  [ii+1][jj]-4;
	 outClusterET_Pos [ii][jj] = mergedClusterET_Pos [ii+1][jj];

	 //-	 outpeakEta_Neg   [ii][jj] = toMerge_peakEta_Neg   [ii+1][jj];
	 //-	 outpeakPhi_Neg   [ii][jj] = toMerge_peakPhi_Neg   [ii+1][jj];
	 //-	 outtowerEta_Neg  [ii][jj] = toMerge_towerEta_Neg  [ii+1][jj];
	 //-	 outtowerPhi_Neg  [ii][jj] = toMerge_towerPhi_Neg  [ii+1][jj]-4;
	 //-	 outClusterET_Neg [ii][jj] = toMerge_ClusterET_Neg [ii+1][jj];
	 //-
	 //-	 outpeakEta_Pos   [ii][jj] = toMerge_peakEta_Pos   [ii+1][jj];
	 //-	 outpeakPhi_Pos   [ii][jj] = toMerge_peakPhi_Pos   [ii+1][jj];
	 //-	 outtowerEta_Pos  [ii][jj] = toMerge_towerEta_Pos  [ii+1][jj];
	 //-	 outtowerPhi_Pos  [ii][jj] = toMerge_towerPhi_Pos  [ii+1][jj]-4;
	 //-	 outClusterET_Pos [ii][jj] = toMerge_ClusterET_Pos [ii+1][jj];

	/* 
	    cout<<outClusterET_Pos [ii][jj]<<" "<<setw(5);
	 //    	 cout<<std::hex<< ClusterET_Pos [ii][jj]<<std::dec<<" "<<setw(5);
	 cout<<outtowerPhi_Pos  [ii][jj]<<" "<<setw(5);
	 cout<<outtowerEta_Pos  [ii][jj]<<" "<<setw(5);
	 cout<<outpeakPhi_Pos   [ii][jj]<<" "<<setw(5);
	 cout<<outpeakEta_Pos   [ii][jj]<<" +++++++  ";
	 //      
	 cout<<outClusterET_Neg [ii][jj]<<" "<<setw(5);
	 //    	 cout<<std::hex<< ClusterET_Neg [ii][jj]<<std::dec<<" "<<setw(5);
	 cout<<outtowerPhi_Neg  [ii][jj]<<" "<<setw(5);
	 cout<<outtowerEta_Neg  [ii][jj]<<" "<<setw(5);
	 cout<<outpeakPhi_Neg   [ii][jj]<<" "<<setw(5);
	 cout<<outpeakEta_Neg   [ii][jj]<<endl;
	 //    	 cout<<"------------------------------------"<<endl;
	*/
      }
   }

   return true;
}

bool mergeClusters(
      uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
      uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
      uint16_t *eta1, uint16_t *phi1, uint16_t *cet1
      //      uint16_t *eta2, uint16_t *phi2, uint16_t *cet2
      ){
#pragma HLS PIPELINE II=3

   if(icet1 > icet2) {
      // Merge 2 in to 1, and set 2 to remnant energy centered in tower
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = icet1 + icet2;
      //      *eta2 = 2;//ieta2
      //      *phi2 = 2;//iphi2
      //      *cet2 = 0;//should be towerEt-icet2

   }
   else {
      // Merge 1 in to 2, and set 1 to remnant energy centered in tower
      //      *eta2 = ieta2;
      //      *phi2 = iphi2;
      //     *cet2 = icet2 + icet1;
      *eta1 = 2;//ieta1;
      *phi1 = 2;//iphi1;
      *cet1 = 0;//should be towerEt-icet1
   }

   return true;
}
