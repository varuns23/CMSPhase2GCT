#include "GCT.hh"

using namespace std;

bool GCT(
      uint16_t peakEta_Neg     [NClustersPerEtaHalf],
      uint16_t peakPhi_Neg     [NClustersPerEtaHalf],
      uint16_t towerEta_Neg    [NClustersPerEtaHalf],
      uint16_t towerPhi_Neg    [NClustersPerEtaHalf],
      uint16_t ClusterET_Neg   [NClustersPerEtaHalf],
      uint16_t peakEta_Pos     [NClustersPerEtaHalf],
      uint16_t peakPhi_Pos     [NClustersPerEtaHalf],
      uint16_t towerEta_Pos    [NClustersPerEtaHalf],
      uint16_t towerPhi_Pos    [NClustersPerEtaHalf],
      uint16_t ClusterET_Pos   [NClustersPerEtaHalf],
      uint16_t outpeakEta_Neg  [NoutClustersPerEtaHalf],
      uint16_t outpeakPhi_Neg  [NoutClustersPerEtaHalf],
      uint16_t outtowerEta_Neg [NoutClustersPerEtaHalf],
      uint16_t outtowerPhi_Neg [NoutClustersPerEtaHalf],
      uint16_t outClusterET_Neg[NoutClustersPerEtaHalf],
      uint16_t outpeakEta_Pos  [NoutClustersPerEtaHalf],
      uint16_t outpeakPhi_Pos  [NoutClustersPerEtaHalf],
      uint16_t outtowerEta_Pos [NoutClustersPerEtaHalf],
      uint16_t outtowerPhi_Pos [NoutClustersPerEtaHalf],
      uint16_t outClusterET_Pos[NoutClustersPerEtaHalf]){

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


   uint16_t tower_peakEta_Neg  [NinGCTPhi][NGCTEta]; 
   uint16_t tower_peakPhi_Neg  [NinGCTPhi][NGCTEta];
   uint16_t tower_ClusterET_Neg[NinGCTPhi][NGCTEta];
   uint16_t tower_peakEta_Pos  [NinGCTPhi][NGCTEta];
   uint16_t tower_peakPhi_Pos  [NinGCTPhi][NGCTEta];
   uint16_t tower_ClusterET_Pos[NinGCTPhi][NGCTEta];

   uint16_t mergedtower_peakEta_Neg  [NinGCTPhi][NGCTEta]; 
   uint16_t mergedtower_peakPhi_Neg  [NinGCTPhi][NGCTEta];
   uint16_t mergedtower_ClusterET_Neg[NinGCTPhi][NGCTEta];
   uint16_t mergedtower_peakEta_Pos  [NinGCTPhi][NGCTEta];
   uint16_t mergedtower_peakPhi_Pos  [NinGCTPhi][NGCTEta];
   uint16_t mergedtower_ClusterET_Pos[NinGCTPhi][NGCTEta];

#pragma HLS ARRAY_PARTITION variable=tower_peakEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=tower_peakPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=tower_ClusterET_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=tower_peakEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=tower_peakPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=tower_ClusterET_Pos complete dim=0

#pragma HLS ARRAY_PARTITION variable=mergedtower_peakEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtower_peakPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtower_ClusterET_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtower_peakEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtower_peakPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=mergedtower_ClusterET_Pos complete dim=0


   for(uint16_t itower = 0; itower<NinGCTPhi; itower++){
#pragma HLS UNROLL
      for(uint16_t iEta = 0; iEta<NGCTEta; iEta++){
#pragma HLS UNROLL
	 //peak Eta and Phi initialized to 7 as it the maximum for 3bit word and 
	 //both peak eta and phi can only have a maximum of 4 (0-4).

	 tower_peakEta_Neg  [itower][iEta] = 7;
	 tower_peakPhi_Neg  [itower][iEta] = 7;
	 tower_ClusterET_Neg[itower][iEta] = 0;
	 tower_peakEta_Pos  [itower][iEta] = 7;
	 tower_peakPhi_Pos  [itower][iEta] = 7;
	 tower_ClusterET_Pos[itower][iEta] = 0;

	 mergedtower_peakEta_Neg  [itower][iEta] = 7;
	 mergedtower_peakPhi_Neg  [itower][iEta] = 7;
	 mergedtower_ClusterET_Neg[itower][iEta] = 0;
	 mergedtower_peakEta_Pos  [itower][iEta] = 7;
	 mergedtower_peakPhi_Pos  [itower][iEta] = 7;
	 mergedtower_ClusterET_Pos[itower][iEta] = 0;
      }
   }

   for(uint16_t icluster = 0; icluster<NClustersPerEtaHalf; icluster++){
#pragma HLS UNROLL
      if(ClusterET_Neg[icluster] > 0){
	 tower_peakEta_Neg   [towerPhi_Neg[icluster]] [towerEta_Neg[icluster]] = peakEta_Neg     [icluster];
	 tower_peakPhi_Neg   [towerPhi_Neg[icluster]] [towerEta_Neg[icluster]] = peakPhi_Neg     [icluster];
	 tower_ClusterET_Neg [towerPhi_Neg[icluster]] [towerEta_Neg[icluster]] = ClusterET_Neg   [icluster];
      }
      if(ClusterET_Pos[icluster] > 0){
	 tower_peakEta_Pos   [towerPhi_Pos[icluster]] [towerEta_Pos[icluster]] = peakEta_Pos     [icluster];
	 tower_peakPhi_Pos   [towerPhi_Pos[icluster]] [towerEta_Pos[icluster]] = peakPhi_Pos     [icluster];
	 tower_ClusterET_Pos [towerPhi_Pos[icluster]] [towerEta_Pos[icluster]] = ClusterET_Pos   [icluster];
      }
   }

   //   for(uint16_t itPhi=0; itPhi<NinGCTPhi; itPhi++){
   //#pragma HLS UNROLL
   //      for(uint16_t itEta=0; itEta<NGCTEta; itEta++){
   //#pragma HLS UNROLL
   //	 std::cout<<tower_ClusterET_Neg[itPhi][itEta]<<" "<<setw(4);
   //	 std::cout<<itPhi<<" "<<setw(4);
   //	 std::cout<<itEta<<" "<<setw(4);
   //	 std::cout<<tower_peakPhi_Neg[itPhi][itEta]<<" "<<setw(4);
   //	 std::cout<<tower_peakEta_Neg[itPhi][itEta]<<" "<<setw(7);
   //
   //	 std::cout<<mergedtower_ClusterET_Neg[itPhi][itEta]<<" "<<setw(4);
   //	 std::cout<<itPhi<<" "<<setw(4);
   //	 std::cout<<itEta<<" "<<setw(4);
   //	 std::cout<<mergedtower_peakPhi_Neg[itPhi][itEta]<<" "<<setw(4);
   //	 std::cout<<mergedtower_peakEta_Neg[itPhi][itEta]<<endl;
   //      }
   //      std::cout<<" ----- "<<std::endl;
   //   }


   merge_acrossphi(
	 tower_peakEta_Neg,
	 tower_peakPhi_Neg,
	 tower_ClusterET_Neg,
	 mergedtower_peakEta_Neg,
	 mergedtower_peakPhi_Neg,
	 mergedtower_ClusterET_Neg
	 );

   //   for(uint16_t itPhi=0; itPhi<NinGCTPhi; itPhi++){
   //#pragma HLS UNROLL
   //      for(uint16_t itEta=0; itEta<NGCTEta; itEta++){
   //#pragma HLS UNROLL
   //	 if(mergedtower_peakEta_Neg[itPhi][itEta] == 7) continue;
   //	 std::cout<<mergedtower_ClusterET_Neg[itPhi][itEta]<<" "<<setw(4);
   //	 std::cout<<itPhi<<" "<<setw(4);
   //	 std::cout<<itEta<<" "<<setw(4);
   //	 std::cout<<mergedtower_peakPhi_Neg[itPhi][itEta]<<" "<<setw(4);
   //	 std::cout<<mergedtower_peakEta_Neg[itPhi][itEta]<<endl;
   //      }
   //      std::cout<<" ----- "<<std::endl;
   //   }


   merge_acrossphi(
	 tower_peakEta_Pos,
	 tower_peakPhi_Pos,
	 tower_ClusterET_Pos,
	 mergedtower_peakEta_Pos,
	 mergedtower_peakPhi_Pos,
	 mergedtower_ClusterET_Pos
	 );

   //--   for(uint16_t itPhi=0; itPhi<NinGCTPhi; itPhi++){
   //--#pragma HLS UNROLL
   //--      for(uint16_t itEta=0; itEta<NGCTEta; itEta++){
   //--#pragma HLS UNROLL
   //--	 if(mergedtower_peakEta_Pos[itPhi][itEta] == 7) continue;
   //--	 std::cout<<mergedtower_ClusterET_Pos[itPhi][itEta]<<" "<<setw(4);
   //--	 std::cout<<itPhi<<" "<<setw(4);
   //--	 std::cout<<itEta<<" "<<setw(4);
   //--	 std::cout<<mergedtower_peakEta_Pos[itPhi][itEta]<<" "<<setw(4);
   //--	 std::cout<<mergedtower_peakPhi_Pos[itPhi][itEta]<<endl;
   //--      }
   //--   }
   //--

   uint16_t oClus_Neg = 0;
   uint16_t oClus_Pos = 0;
   for(uint16_t otPhi=4; otPhi<NinGCTPhi-4; otPhi++){
#pragma HLS UNROLL
      for(uint16_t otEta=0; otEta<NGCTEta; otEta++){
   #pragma HLS UNROLL
	 if(mergedtower_peakEta_Neg[otPhi][otEta] != 7){ 
	    outpeakEta_Neg     [oClus_Neg] = mergedtower_peakEta_Neg   [otPhi][otEta]; 
	    outpeakPhi_Neg     [oClus_Neg] = mergedtower_peakPhi_Neg   [otPhi][otEta];
	    outtowerEta_Neg    [oClus_Neg] = otPhi;
	    outtowerPhi_Neg    [oClus_Neg] = otEta;
	    outClusterET_Neg   [oClus_Neg] = mergedtower_ClusterET_Neg [otPhi][otEta];
	 oClus_Neg++;
	 }

	 if(mergedtower_peakEta_Pos[otPhi][otEta] != 7){ 
	    outpeakEta_Pos     [oClus_Pos] = mergedtower_peakEta_Pos   [otPhi][otEta]; 
	    outpeakPhi_Pos     [oClus_Pos] = mergedtower_peakPhi_Pos   [otPhi][otEta];
	    outtowerEta_Pos    [oClus_Pos] = otPhi;
	    outtowerPhi_Pos    [oClus_Pos] = otEta;
	    outClusterET_Pos   [oClus_Pos] = mergedtower_ClusterET_Pos [otPhi][otEta];
	 oClus_Pos++;
	 }
      }
   }



//--   for(uint16_t oCl=0; oCl<NoutClustersPerEtaHalf; oCl++){
//--#pragma HLS UNROLL
//--
//--      std::cout<<outClusterET_Neg [oCl]<<" "<<setw(3);
//--      std::cout<<outpeakEta_Neg   [oCl]<<" "<<setw(3);
//--      std::cout<<outpeakPhi_Neg   [oCl]<<" "<<setw(3);
//--      std::cout<<outtowerEta_Neg  [oCl]<<" "<<setw(3);
//--      std::cout<<outtowerPhi_Neg  [oCl]<<" ||"<<setw(7);
//--
//--      std::cout<<outClusterET_Pos [oCl]<<" "<<setw(3);
//--      std::cout<<outpeakEta_Pos   [oCl]<<" "<<setw(3);
//--      std::cout<<outpeakPhi_Pos   [oCl]<<" "<<setw(3);
//--      std::cout<<outtowerEta_Pos  [oCl]<<" "<<setw(3);
//--      std::cout<<outtowerPhi_Pos  [oCl]<<" "<<endl;
//--   }



   return true;
}


bool merge_acrossphi(
      uint16_t peakEta_  [NinGCTPhi][NGCTEta],
      uint16_t peakPhi_  [NinGCTPhi][NGCTEta],
      uint16_t ClusterET_[NinGCTPhi][NGCTEta],
      uint16_t outpeakEta_   [NinGCTPhi][NGCTEta],
      uint16_t outpeakPhi_   [NinGCTPhi][NGCTEta],
      uint16_t outClusterET_ [NinGCTPhi][NGCTEta]
      ){
#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable=peakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_ complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEta_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_  complete dim=0  

   uint16_t toMergepeakEta_  [NinGCTPhi][NGCTEta]; 
   uint16_t toMergepeakPhi_  [NinGCTPhi][NGCTEta];
   uint16_t toMergeClusterET_[NinGCTPhi][NGCTEta];
#pragma HLS ARRAY_PARTITION variable=toMergepeakEta_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMergepeakPhi_   complete dim=0
#pragma HLS ARRAY_PARTITION variable=toMergeClusterET_ complete dim=0



   for(uint16_t itPhi=0; itPhi<NinGCTPhi; itPhi++){
#pragma HLS UNROLL
      for(uint16_t itEta=0; itEta<NGCTEta; itEta++){
#pragma HLS UNROLL
toMergepeakEta_   [itPhi][itEta] = peakEta_   [itPhi][itEta];  
toMergepeakPhi_   [itPhi][itEta] = peakPhi_   [itPhi][itEta]; 
toMergeClusterET_ [itPhi][itEta] = ClusterET_ [itPhi][itEta];
      }
   }


   // tPhi starts from 4 to skip the overlappign RCT card on the left
   // and ends  4 tphi earlier to skip the overlappign RCT card on the right
   for(uint16_t tPhi=4; tPhi<NinGCTPhi-4; tPhi+=4){
#pragma HLS UNROLL
      for(uint16_t tEta=0; tEta<NGCTEta; tEta++){
#pragma HLS UNROLL


	 //stitching on the left:
	 uint16_t lBoundary_tPhi  = tPhi;
	 uint16_t lBoundary_ntPhi = tPhi-1;
	 if(peakPhi_[lBoundary_tPhi][tEta] == 0 && peakPhi_[lBoundary_ntPhi][tEta] == 4){

	    mergeClustersInEta(
		  peakEta_[lBoundary_tPhi][tEta],  peakPhi_[lBoundary_tPhi][tEta],  ClusterET_[lBoundary_tPhi][tEta],
		  peakEta_[lBoundary_ntPhi][tEta], peakPhi_[lBoundary_ntPhi][tEta], ClusterET_[lBoundary_ntPhi][tEta],
		  &toMergepeakEta_[lBoundary_tPhi][tEta],  &toMergepeakPhi_[lBoundary_tPhi][tEta],  &toMergeClusterET_[lBoundary_tPhi][tEta],
		  &toMergepeakEta_[lBoundary_ntPhi][tEta], &toMergepeakPhi_[lBoundary_ntPhi][tEta], &toMergeClusterET_[lBoundary_ntPhi][tEta]
		  );
	 }

	 //stitching on the right:
	 uint16_t rBoundary_tPhi  = tPhi+3;
	 uint16_t rBoundary_ntPhi = tPhi+4;
	 if(peakPhi_[rBoundary_tPhi][tEta] == 4 && peakPhi_[rBoundary_ntPhi][tEta] == 0){

	    mergeClustersInEta(
		  peakEta_[rBoundary_tPhi][tEta],  peakPhi_[rBoundary_tPhi][tEta],  ClusterET_[rBoundary_tPhi][tEta],
		  peakEta_[rBoundary_ntPhi][tEta], peakPhi_[rBoundary_ntPhi][tEta], ClusterET_[rBoundary_ntPhi][tEta],
		  &toMergepeakEta_[rBoundary_tPhi][tEta],  &toMergepeakPhi_[rBoundary_tPhi][tEta],  &toMergeClusterET_[rBoundary_tPhi][tEta],
		  &toMergepeakEta_[rBoundary_ntPhi][tEta], &toMergepeakPhi_[rBoundary_ntPhi][tEta], &toMergeClusterET_[rBoundary_ntPhi][tEta]
		  );
	 }
      }
   }
   
   for(uint16_t itPhi=0; itPhi<NinGCTPhi; itPhi++){
#pragma HLS UNROLL
      for(uint16_t itEta=0; itEta<NGCTEta; itEta++){
#pragma HLS UNROLL
	 outpeakEta_   [itPhi][itEta] = toMergepeakEta_   [itPhi][itEta];  
	 outpeakPhi_   [itPhi][itEta] = toMergepeakPhi_   [itPhi][itEta]; 
	 outClusterET_ [itPhi][itEta] = toMergeClusterET_ [itPhi][itEta];
      }
   }

   return true;
}

//-- bool merge_acrossphi(
//--       uint16_t peakEta_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],     
//--       uint16_t peakPhi_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
//--       uint16_t towerEta_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
//--       uint16_t towerPhi_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
//--       uint16_t ClusterET_[NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
//--       uint16_t outpeakEta_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
//--       uint16_t outpeakPhi_   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
//--       uint16_t outtowerEta_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
//--       uint16_t outtowerPhi_  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion],
//--       uint16_t outClusterET_ [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion]
//--       ){
//-- #pragma HLS PIPELINE II=3
//-- #pragma HLS ARRAY_PARTITION variable=peakEta_   complete dim=0
//-- #pragma HLS ARRAY_PARTITION variable=peakPhi_   complete dim=0
//-- #pragma HLS ARRAY_PARTITION variable=towerEta_  complete dim=0
//-- #pragma HLS ARRAY_PARTITION variable=towerPhi_  complete dim=0
//-- #pragma HLS ARRAY_PARTITION variable=ClusterET_ complete dim=0
//-- 
//-- #pragma HLS ARRAY_PARTITION variable=outpeakEta_    complete dim=0
//-- #pragma HLS ARRAY_PARTITION variable=outpeakPhi_    complete dim=0
//-- #pragma HLS ARRAY_PARTITION variable=outtowerEta_   complete dim=0
//-- #pragma HLS ARRAY_PARTITION variable=outtowerPhi_   complete dim=0
//-- #pragma HLS ARRAY_PARTITION variable=outClusterET_  complete dim=0  
//-- 
//--    for(uint16_t iRegion=0; iRegion<NRCTRegionsPerEtaHalf; iRegion++){
//-- #pragma HLS UNROLL
//--       for(uint16_t iClus=0; iClus<NClustersPerRCTRegion; iClus++){
//-- #pragma HLS UNROLL
//-- 	 outpeakEta_   [iRegion][iClus] = peakEta_   [iRegion][iClus];  
//-- 	 outpeakPhi_   [iRegion][iClus] = peakPhi_   [iRegion][iClus]; 
//-- 	 outtowerEta_  [iRegion][iClus] = towerEta_  [iRegion][iClus]; 
//-- 	 outtowerPhi_  [iRegion][iClus] = towerPhi_  [iRegion][iClus]; 
//-- 	 outClusterET_ [iRegion][iClus] = ClusterET_ [iRegion][iClus];
//--       }
//--    }
//-- 
//--    //overlapping cards are not used for merging accross phi.
//--    for(uint16_t rPhi=1; rPhi<NRCTRegionsPerEtaHalf-1; rPhi++){
//-- #pragma HLS UNROLL
//--       for(uint16_t icluster=0; icluster<NClustersPerRCTRegion; icluster++){
//-- #pragma HLS UNROLL
//-- 	 if(   ((towerPhi_[rPhi][icluster])%4 == 0   && peakPhi_[rPhi][icluster] == 0) ||
//-- 	       ((towerPhi_[rPhi][icluster]+1)%4 == 0 && peakPhi_[rPhi][icluster] == 4 )){ 
//-- 
//-- 	    for(uint16_t iNcluster=0; iNcluster<NClustersPerRCTRegion; iNcluster++){
//-- #pragma HLS UNROLL
//-- 	       uint16_t leftNeighbour = rPhi-1;
//-- 	       uint16_t rightNeighbour = rPhi+1;
//-- 
//-- 	       //stitching with the left side card
//-- 	       if(   (towerPhi_[rPhi][icluster])%4 == 0   && peakPhi_[rPhi][icluster] == 0 &&
//-- 		     (towerPhi_[leftNeighbour][iNcluster]+1)%4 == 0 &&
//-- 		     peakPhi_[leftNeighbour][iNcluster] == 4        &&
//-- 		     towerEta_[leftNeighbour][iNcluster] == towerEta_[rPhi][icluster] &&
//-- 		     peakEta_[leftNeighbour][iNcluster] == peakEta_[rPhi][icluster]){
//-- 
//-- 		  mergeClustersInEta(
//-- 			peakEta_[rPhi][icluster], peakPhi_[rPhi][icluster], ClusterET_[rPhi][icluster], 
//-- 			peakEta_[leftNeighbour][iNcluster], peakPhi_[leftNeighbour][iNcluster], ClusterET_[leftNeighbour][iNcluster], 
//-- 			&outpeakEta_[rPhi][icluster], &outpeakPhi_[rPhi][icluster], &outClusterET_[rPhi][icluster], 
//-- 			&outpeakEta_[leftNeighbour][iNcluster], &outpeakPhi_[leftNeighbour][iNcluster], &outClusterET_[leftNeighbour][iNcluster] 
//-- 			);
//-- 	       }
//-- 
//-- 	       //stitching with the right side card
//-- 	       if(   (towerPhi_[rPhi][icluster]+1)%4 == 0   && peakPhi_[rPhi][icluster] == 4 &&
//-- 		     (towerPhi_[rightNeighbour][iNcluster])%4 == 0 &&
//-- 		     peakPhi_[rightNeighbour][iNcluster] == 0        &&
//-- 		     towerEta_[rightNeighbour][iNcluster] == towerEta_[rPhi][icluster] &&
//-- 		     peakEta_[rightNeighbour][iNcluster] == peakEta_[rPhi][icluster]){
//-- 
//-- 		  mergeClustersInEta(
//-- 			peakEta_[rPhi][icluster], peakPhi_[rPhi][icluster], ClusterET_[rPhi][icluster], 
//-- 			peakEta_[rightNeighbour][iNcluster], peakPhi_[rightNeighbour][iNcluster], ClusterET_[rightNeighbour][iNcluster], 
//-- 			&outpeakEta_[rPhi][icluster], &outpeakPhi_[rPhi][icluster], &outClusterET_[rPhi][icluster], 
//-- 			&outpeakEta_[rightNeighbour][iNcluster], &outpeakPhi_[rightNeighbour][iNcluster], &outClusterET_[rightNeighbour][iNcluster] 
//-- 			);
//-- 	       }
//-- 	    }
//-- 	 }
//--       }
//--    }
//-- }
//-- 
bool mergeClustersInEta(
      uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
      uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
      uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
      uint16_t *eta2, uint16_t *phi2, uint16_t *cet2){
   // Check that the clusters are neighbors in eta

#pragma HLS PIPELINE II=3

   if(ieta1 == ieta2) {
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
   }
   else{
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = icet1;
      *eta2 = ieta2;
      *phi2 = iphi2;
      *cet2 = icet2;

   }
   return true;
}
//-- 
//-- bool mergeClustersInPhi(
//--       uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
//--       uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
//--       uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
//--       uint16_t *eta2, uint16_t *phi2, uint16_t *cet2){
//-- #pragma HLS PIPELINE II=3
//-- 
//--    if(icet1 > icet2) {
//--       // Merge 2 in to 1, and set 2 to remnant energy centered in tower
//--       *eta1 = ieta1;
//--       *phi1 = iphi1;
//--       *cet1 = icet1 + icet2;
//--       *eta2 = 2;//ieta2
//--       *phi2 = 2;//iphi2
//--       *cet2 = 0;//should be towerEt-icet2
//-- 
//--    }
//--    else {
//--       // Merge 1 in to 2, and set 1 to remnant energy centered in tower
//--       *eta2 = ieta2;
//--       *phi2 = iphi2;
//--       *cet2 = icet2 + icet1;
//--       *eta1 = 2;//ieta1;
//--       *phi1 = 2;//iphi1;
//--       *cet1 = 0;//should be towerEt-icet1
//--    }
//-- 
//--    return true;
//-- }
//-- 
