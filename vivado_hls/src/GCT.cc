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
       uint16_t outClusterET_Pos[NoutClustersPerEtaHalf]
 ){
 
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
 
 #pragma HLS ARRAY_PARTITION variable=tower_peakEta_Neg   complete dim=0
 #pragma HLS ARRAY_PARTITION variable=tower_peakPhi_Neg   complete dim=0
 #pragma HLS ARRAY_PARTITION variable=tower_ClusterET_Neg complete dim=0
 #pragma HLS ARRAY_PARTITION variable=tower_peakEta_Pos   complete dim=0
 #pragma HLS ARRAY_PARTITION variable=tower_peakPhi_Pos   complete dim=0
 #pragma HLS ARRAY_PARTITION variable=tower_ClusterET_Pos complete dim=0
 
    uint16_t mergedInEta_peakEta_Neg  [NinGCTPhi][NGCTEta]; 
    uint16_t mergedInEta_peakPhi_Neg  [NinGCTPhi][NGCTEta];
    uint16_t mergedInEta_ClusterET_Neg[NinGCTPhi][NGCTEta];
    uint16_t mergedInEta_peakEta_Pos  [NinGCTPhi][NGCTEta];
    uint16_t mergedInEta_peakPhi_Pos  [NinGCTPhi][NGCTEta];
    uint16_t mergedInEta_ClusterET_Pos[NinGCTPhi][NGCTEta];
 
 #pragma HLS ARRAY_PARTITION variable=mergedInEta_peakEta_Neg   complete dim=0
 #pragma HLS ARRAY_PARTITION variable=mergedInEta_peakPhi_Neg   complete dim=0
 #pragma HLS ARRAY_PARTITION variable=mergedInEta_ClusterET_Neg complete dim=0
 #pragma HLS ARRAY_PARTITION variable=mergedInEta_peakEta_Pos   complete dim=0
 #pragma HLS ARRAY_PARTITION variable=mergedInEta_peakPhi_Pos   complete dim=0
 #pragma HLS ARRAY_PARTITION variable=mergedInEta_ClusterET_Pos complete dim=0
 
    uint16_t mergedtower_peakEta_Neg  [NinGCTPhi][NGCTEta]; 
    uint16_t mergedtower_peakPhi_Neg  [NinGCTPhi][NGCTEta];
    uint16_t mergedtower_ClusterET_Neg[NinGCTPhi][NGCTEta];
    uint16_t mergedtower_peakEta_Pos  [NinGCTPhi][NGCTEta];
    uint16_t mergedtower_peakPhi_Pos  [NinGCTPhi][NGCTEta];
    uint16_t mergedtower_ClusterET_Pos[NinGCTPhi][NGCTEta];
 
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
 
 	 mergedInEta_peakEta_Neg  [itower][iEta] = 7;
 	 mergedInEta_peakPhi_Neg  [itower][iEta] = 7;
 	 mergedInEta_ClusterET_Neg[itower][iEta] = 0;
 	 mergedInEta_peakEta_Pos  [itower][iEta] = 7;
 	 mergedInEta_peakPhi_Pos  [itower][iEta] = 7;
 	 mergedInEta_ClusterET_Pos[itower][iEta] = 0;
 
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
 
    merge_acrossPhi(
 	 tower_peakEta_Neg,
 	 tower_peakPhi_Neg,
 	 tower_ClusterET_Neg,
 	 mergedInEta_peakEta_Neg,
 	 mergedInEta_peakPhi_Neg,
 	 mergedInEta_ClusterET_Neg
 	 );
 
    merge_acrossPhi(
 	 tower_peakEta_Pos,
 	 tower_peakPhi_Pos,
 	 tower_ClusterET_Pos,
 	 mergedInEta_peakEta_Pos,
 	 mergedInEta_peakPhi_Pos,
 	 mergedInEta_ClusterET_Pos
 	 );
 
//--    for(uint16_t itPhi=0; itPhi<NinGCTPhi; itPhi++){
//--#pragma HLS UNROLL
//--       for(uint16_t itEta=0; itEta<NGCTEta; itEta++){
//--#pragma HLS UNROLL
//--	  if(mergedInEta_peakEta_Pos[itPhi][itEta] == 7) continue;
//--	  std::cout<<mergedInEta_ClusterET_Pos[itPhi][itEta]<<" "<<setw(4);
//--	  std::cout<<itEta<<" "<<setw(4);
//--	  std::cout<<itPhi<<" "<<setw(4);
//--	  std::cout<<mergedInEta_peakEta_Pos[itPhi][itEta]<<" "<<setw(4);
//--	  std::cout<<mergedInEta_peakPhi_Pos[itPhi][itEta]<<"  || "<<setw(5);
//--	  
//--	  std::cout<<mergedInEta_ClusterET_Neg[itPhi][itEta]<<" "<<setw(4);
//--	  std::cout<<itEta<<" "<<setw(4);
//--	  std::cout<<itPhi<<" "<<setw(4);
//--	  std::cout<<mergedInEta_peakEta_Neg[itPhi][itEta]<<" "<<setw(4);
//--	  std::cout<<mergedInEta_peakPhi_Neg[itPhi][itEta]<<endl;
//--       }
//--    }

    merge_acrossEta(
 	 mergedInEta_peakEta_Neg,
 	 mergedInEta_peakPhi_Neg,
 	 mergedInEta_ClusterET_Neg,
 	 mergedInEta_peakEta_Pos,
 	 mergedInEta_peakPhi_Pos,
 	 mergedInEta_ClusterET_Pos,
 	 mergedtower_peakEta_Neg,
 	 mergedtower_peakPhi_Neg,
 	 mergedtower_ClusterET_Neg,
 	 mergedtower_peakEta_Pos,
 	 mergedtower_peakPhi_Pos,
 	 mergedtower_ClusterET_Pos
 	 );
 
 

    uint16_t oClus_Neg = 0;
    uint16_t oClus_Pos = 0;
    for(uint16_t otPhi=4; otPhi<NinGCTPhi-4; otPhi++){
#pragma HLS UNROLL
       for(uint16_t otEta=0; otEta<NGCTEta; otEta++){
#pragma HLS UNROLL
	  if(mergedtower_peakEta_Neg[otPhi][otEta] != 7){ 
	     outpeakEta_Neg     [oClus_Neg] = mergedtower_peakEta_Neg   [otPhi][otEta]; 
	     outpeakPhi_Neg     [oClus_Neg] = mergedtower_peakPhi_Neg   [otPhi][otEta];
	     outtowerEta_Neg    [oClus_Neg] = otEta;
	     outtowerPhi_Neg    [oClus_Neg] = otPhi;
	     outClusterET_Neg   [oClus_Neg] = mergedtower_ClusterET_Neg [otPhi][otEta];
	     oClus_Neg++;
	  }

	  if(mergedtower_peakEta_Pos[otPhi][otEta] != 7){ 
	     outpeakEta_Pos     [oClus_Pos] = mergedtower_peakEta_Pos   [otPhi][otEta]; 
	     outpeakPhi_Pos     [oClus_Pos] = mergedtower_peakPhi_Pos   [otPhi][otEta];
	     outtowerEta_Pos    [oClus_Pos] = otEta;
	     outtowerPhi_Pos    [oClus_Pos] = otPhi;
	     outClusterET_Pos   [oClus_Pos] = mergedtower_ClusterET_Pos [otPhi][otEta];
	     oClus_Pos++;
	  }
       }
    }



//    for(uint16_t oCl=0; oCl<NoutClustersPerEtaHalf; oCl++){
//#pragma HLS UNROLL
//
//       std::cout<<outClusterET_Pos [oCl]<<" "<<setw(3);
//       std::cout<<outtowerEta_Pos  [oCl]<<" "<<setw(3);
//       std::cout<<outtowerPhi_Pos  [oCl]<<" "<<setw(3);
//       std::cout<<outpeakEta_Pos   [oCl]<<" "<<setw(3);
//       std::cout<<outpeakPhi_Pos   [oCl]<<" ||"<<setw(7);
//
//       std::cout<<outClusterET_Neg [oCl]<<" "<<setw(3);
//       std::cout<<outtowerEta_Neg  [oCl]<<" "<<setw(3);
//       std::cout<<outtowerPhi_Neg  [oCl]<<" "<<setw(3);
//       std::cout<<outpeakEta_Neg   [oCl]<<" "<<setw(3);
//       std::cout<<outpeakPhi_Neg   [oCl]<<" "<<endl;
//    }



    return true;
 }


bool merge_acrossPhi(
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

bool merge_acrossEta(
      uint16_t peakEtaNeg_   [NinGCTPhi][NGCTEta],
      uint16_t peakPhiNeg_   [NinGCTPhi][NGCTEta],
      uint16_t clusterETNeg_ [NinGCTPhi][NGCTEta],
      uint16_t peakEtaPos_   [NinGCTPhi][NGCTEta],
      uint16_t peakPhiPos_   [NinGCTPhi][NGCTEta],
      uint16_t clusterETPos_ [NinGCTPhi][NGCTEta],
      uint16_t outpeakEtaNeg_   [NinGCTPhi][NGCTEta],
      uint16_t outpeakPhiNeg_   [NinGCTPhi][NGCTEta],
      uint16_t outclusterETNeg_ [NinGCTPhi][NGCTEta],
      uint16_t outpeakEtaPos_   [NinGCTPhi][NGCTEta],
      uint16_t outpeakPhiPos_   [NinGCTPhi][NGCTEta],
      uint16_t outclusterETPos_ [NinGCTPhi][NGCTEta]
      ){
#pragma HLS PIPELINE II=3 
#pragma HLS ARRAY_PARTITION variable=peakEtaNeg_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhiNeg_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=clusterETNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakEtaPos_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhiPos_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=clusterETPos_  complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEtaNeg_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhiNeg_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=outclusterETNeg_  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakEtaPos_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhiPos_    complete dim=0
#pragma HLS ARRAY_PARTITION variable=outclusterETPos_  complete dim=0

   for(uint16_t itPhi=0; itPhi<NinGCTPhi; itPhi++){
#pragma HLS UNROLL
      for(uint16_t itEta=0; itEta<NGCTEta; itEta++){
#pragma HLS UNROLL
	 outpeakEtaNeg_   [itPhi][itEta] = peakEtaNeg_   [itPhi][itEta];  
	 outpeakPhiNeg_   [itPhi][itEta] = peakPhiNeg_   [itPhi][itEta]; 
	 outclusterETNeg_ [itPhi][itEta] = clusterETNeg_ [itPhi][itEta];
	 outpeakEtaPos_   [itPhi][itEta] = peakEtaPos_   [itPhi][itEta];  
	 outpeakPhiPos_   [itPhi][itEta] = peakPhiPos_   [itPhi][itEta]; 
	 outclusterETPos_ [itPhi][itEta] = clusterETPos_ [itPhi][itEta];
      }
   }

   for(uint16_t tPhi=4; tPhi<NinGCTPhi-4; tPhi++){
#pragma HLS UNROLL

      uint16_t posBoundary_tEta = NGCTEta-1;
      uint16_t negBoundary_tEta = 0;

      if(peakEtaPos_[tPhi][posBoundary_tEta] == 4 && peakEtaNeg_[tPhi][negBoundary_tEta] == 0){

	 mergeClustersInPhi(
	       peakEtaPos_[tPhi][posBoundary_tEta], peakPhiPos_[tPhi][posBoundary_tEta], clusterETPos_[tPhi][posBoundary_tEta],
	       peakEtaNeg_[tPhi][negBoundary_tEta], peakPhiNeg_[tPhi][negBoundary_tEta], clusterETNeg_[tPhi][negBoundary_tEta],
	       &outpeakEtaPos_[tPhi][posBoundary_tEta], &outpeakPhiPos_[tPhi][posBoundary_tEta], &outclusterETPos_[tPhi][posBoundary_tEta],
	       &outpeakEtaNeg_[tPhi][negBoundary_tEta], &outpeakPhiNeg_[tPhi][negBoundary_tEta], &outclusterETNeg_[tPhi][negBoundary_tEta]
	       );
      }
   }


   return true;
}

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

bool mergeClustersInPhi(
      uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
      uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
      uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
      uint16_t *eta2, uint16_t *phi2, uint16_t *cet2){
#pragma HLS PIPELINE II=3

   if(iphi1 == iphi2) {
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
   }
   else {
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = icet1;
      *eta2 = ieta2;
      *phi2 = iphi2;
      *cet2 = icet2;
   }

   return true;
}

