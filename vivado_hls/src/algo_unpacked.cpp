#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

#include "../../../../../APx_Gen0_Algo/VivadoHls/null_algo_unpacked/vivado_hls/src/algo_unpacked.h"   // This is where you should have had hls_algo - if not find the header file and fix this - please do not copy this file as that defines the interface
#include "GCT.hh"


/*
 * algo_unpacked interface exposes fully unpacked input and output link data.
 * This version assumes use of 10G 8b10b links, and thus providing 192bits/BX/link.
 *
 * !!! N.B.: Do NOT use the first bytes of link_in/link_out (i.e. link_in/link_out[].range(7,0)
 * as this portion is reserved for transmission of 8b10b input/output link alignment markers.
 *
 * The remaining 184 bits are available for algorithm use.
 *
 * !!! N.B. 2: make sure to assign every bit of link_out[] data. First byte should be assigned zero.
 */

void algo_unpacked(ap_uint<192> link_in[N_CH_IN], ap_uint<192> link_out[N_CH_OUT]){
   
   // !!! Retain these 4 #pragma directives below in your algo_unpacked implementation !!!
#pragma HLS ARRAY_PARTITION variable=link_in  complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0
#pragma HLS PIPELINE II=3
#pragma HLS INTERFACE ap_ctrl_hs port=return


   // null algo specific pragma: avoid fully combinatorial algo by specifying min latency
   // otherwise algorithm clock input (ap_clk) gets optimized away
#pragma HLS latency min=3

   for (int lnk = 0; lnk < N_CH_OUT; lnk++) {
#pragma HLS UNROLL
      link_out[lnk] = 0;
   }

#ifndef ALGO_PASSTHROUGH

   static bool first = false; //true- to print info

   uint16_t peakEta_Pos   [NClustersPerEtaHalf];
   uint16_t peakPhi_Pos   [NClustersPerEtaHalf];
   uint16_t towerEta_Pos  [NClustersPerEtaHalf];
   uint16_t towerPhi_Pos  [NClustersPerEtaHalf];
   uint16_t ClusterET_Pos [NClustersPerEtaHalf];

   uint16_t peakEta_Neg   [NClustersPerEtaHalf];
   uint16_t peakPhi_Neg   [NClustersPerEtaHalf];
   uint16_t towerEta_Neg  [NClustersPerEtaHalf];
   uint16_t towerPhi_Neg  [NClustersPerEtaHalf];
   uint16_t ClusterET_Neg [NClustersPerEtaHalf];

   //Check whether this dim has to be 0 or 1. For RCT its 1 in case of input crystal ET
#pragma HLS ARRAY_PARTITION variable=peakEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_Pos  complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_Pos  complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_Pos complete dim=0

#pragma HLS ARRAY_PARTITION variable=peakEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_Neg  complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_Neg  complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_Neg complete dim=0

   //INPUT LINKS:
   for(int iCluster = 0; iCluster < NClustersPerEtaHalf; iCluster++){
#pragma HLS UNROLL
      int inlink = (iCluster/NClustersPerPhi);
      int iRCTCard = (iCluster/NClustersPerRCTRegion);

      if(inlink > N_CH_IN){
	 std::cout<< "Input info exceed # of links"<<std::endl;
	 exit(1);
      }

      //bit 0-8(reserved), 8-31(unused), 
      //Word-1: 32-34(peakEta), 35-37(peakPhi), 38-42(towerEta), 43-44(towerPhi), 45-54(ET) 
      //Word-2: 64-66(peakEta), 67-69(peakPhi), 70-74(towerEta), 75-76(towerPhi), 77-86(ET) 
      //Word-3: 96-98(peakEta), 99-101(peakPhi), 102-106(towerEta), 107-108(towerPhi), 109-118(ET) 
      int bLo1 = (iCluster % NClustersPerPhi)*32 + 32;
      int bHi1 = bLo1 + 2;
      peakEta_Pos[iCluster] = link_in[inlink].range(bHi1, bLo1);
      peakEta_Neg[iCluster] = link_in[inlink + (N_CH_IN/2)].range(bHi1, bLo1);
      if(first) std::cout<<"peakEta_Pos["<<iCluster<<"] = link_in["<<inlink<<"].range("<<bHi1<<", "<<bLo1<<"): "<<link_in[inlink].range(bHi1, bLo1)<<std::endl;
      if(first) std::cout<<"peakEta_Neg["<<iCluster<<"] = link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi1<<", "<<bLo1<<"): "<<link_in[inlink + (N_CH_IN/2)].range(bHi1, bLo1)<<std::endl;

      int bLo2 = bHi1 + 1; 
      int bHi2 = bLo2 + 2;
      peakPhi_Pos[iCluster]  = link_in[inlink].range(bHi2, bLo2);
      peakPhi_Neg[iCluster]  = link_in[inlink + (N_CH_IN/2)].range(bHi2, bLo2);
      if(first) std::cout<<"peakPhi_Pos["<<iCluster<<"] = link_in["<<inlink<<"].range("<<bHi2<<", "<<bLo2<<"): "<<link_in[inlink].range(bHi2, bLo2)<<std::endl;
      if(first) std::cout<<"peakPhi_Neg["<<iCluster<<"] = link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi2<<", "<<bLo2<<"): "<<link_in[inlink + (N_CH_IN/2)].range(bHi2, bLo2)<<std::endl;

      int bLo3 = bHi2 + 1; 
      int bHi3 = bLo3 + 4;
      towerEta_Pos[iCluster]  = link_in[inlink].range(bHi3, bLo3);
      towerEta_Neg[iCluster]  = link_in[inlink + (N_CH_IN/2)].range(bHi3, bLo3);
      if(first) std::cout<<"towerEta_Pos["<<iCluster<<"] = link_in["<<inlink<<"].range("<<bHi3<<", "<<bLo3<<"): "<<link_in[inlink].range(bHi3, bLo3)<<std::endl;
      if(first) std::cout<<"towerEta_Neg["<<iCluster<<"] = link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi3<<", "<<bLo3<<"): "<<link_in[inlink + (N_CH_IN/2)].range(bHi3, bLo3)<<std::endl;

      int bLo4 = bHi3 + 1; 
      int bHi4 = bLo4 + 1;
      towerPhi_Pos[iCluster]  = (iRCTCard*NRCTPhi) + link_in[inlink].range(bHi4, bLo4);
      towerPhi_Neg[iCluster]  = (iRCTCard*NRCTPhi) + link_in[inlink + (N_CH_IN/2)].range(bHi4, bLo4);
      if(first) std::cout<<"towerPhi_Pos["<<iCluster<<"] = link_in["<<inlink<<"].range("<<bHi4<<", "<<bLo4<<"): "<<link_in[inlink].range(bHi4, bLo4)<<std::endl;
      if(first) std::cout<<"towerPhi_Neg["<<iCluster<<"] = link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi4<<", "<<bLo4<<"): "<<link_in[inlink + (N_CH_IN/2)].range(bHi4, bLo4)<<std::endl;

      int bLo5 = bHi4 + 1; 
      int bHi5 = bLo5 + 9;
      ClusterET_Pos[iCluster] = link_in[inlink].range(bHi5, bLo5);
      ClusterET_Neg[iCluster] = link_in[inlink + (N_CH_IN/2)].range(bHi5, bLo5);
      if(first) std::cout<<"ClusterET_Pos["<<iCluster<<"] = link_in["<<inlink<<"].range("<<bHi5<<", "<<bLo5<<"): "<<link_in[inlink].range(bHi5, bLo5)<<std::endl;
      if(first) std::cout<<"ClusterET_Neg["<<iCluster<<"] = link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi5<<", "<<bLo5<<"): "<<link_in[inlink + (N_CH_IN/2)].range(bHi5, bLo5)<<std::endl;
   }

//--   for(int iClus=0; iClus<NClustersPerEtaHalf; iClus++){
//--#pragma HLS UNROLL
//--      std::cout<<ClusterET_Pos[iClus]<<" "<<setw(3)<<towerPhi_Pos[iClus]<<" "<<setw(3)<<towerEta_Pos[iClus]<<" "<<setw(3)<<peakPhi_Pos[iClus]<<" "<<setw(3)<<peakEta_Pos[iClus]<<" "<<endl;
//--   }


   uint16_t outpeakEta_Pos   [NoutClustersPerEtaHalf];
   uint16_t outpeakPhi_Pos   [NoutClustersPerEtaHalf];
   uint16_t outtowerEta_Pos  [NoutClustersPerEtaHalf];
   uint16_t outtowerPhi_Pos  [NoutClustersPerEtaHalf];
   uint16_t outClusterET_Pos [NoutClustersPerEtaHalf];

   uint16_t outpeakEta_Neg   [NoutClustersPerEtaHalf];
   uint16_t outpeakPhi_Neg   [NoutClustersPerEtaHalf];
   uint16_t outtowerEta_Neg  [NoutClustersPerEtaHalf];
   uint16_t outtowerPhi_Neg  [NoutClustersPerEtaHalf];
   uint16_t outClusterET_Neg [NoutClustersPerEtaHalf];

#pragma HLS ARRAY_PARTITION variable=outpeakEta_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_Pos   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_Pos  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_Pos  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_Pos complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEta_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_Neg   complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_Neg  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_Neg  complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_Neg complete dim=0

   for(int iCluster=0; iCluster<NoutClustersPerEtaHalf; iCluster++){
#pragma HLS UNROLL
      outpeakEta_Pos   [iCluster] = 0; 
      outpeakPhi_Pos   [iCluster] = 0; 
      outtowerEta_Pos  [iCluster] = 0; 
      outtowerPhi_Pos  [iCluster] = 0; 
      outClusterET_Pos [iCluster] = 0; 
      outpeakEta_Neg   [iCluster] = 0; 
      outpeakPhi_Neg   [iCluster] = 0; 
      outtowerEta_Neg  [iCluster] = 0; 
      outtowerPhi_Neg  [iCluster] = 0; 
      outClusterET_Neg [iCluster] = 0; 
   }

   bool success = GCT(
	 peakEta_Neg,
	 peakPhi_Neg,
	 towerEta_Neg,
	 towerPhi_Neg,
	 ClusterET_Neg,
	 peakEta_Pos,
	 peakPhi_Pos,
	 towerEta_Pos,
	 towerPhi_Pos,
	 ClusterET_Pos,
	 outpeakEta_Neg,
	 outpeakPhi_Neg,
	 outtowerEta_Neg,
	 outtowerPhi_Neg,
	 outClusterET_Neg,
	 outpeakEta_Pos,
	 outpeakPhi_Pos,
	 outtowerEta_Pos,
	 outtowerPhi_Pos,
	 outClusterET_Pos
	    );

   for(int iCluster = 0; iCluster < NoutClustersPerRCTRegion; iCluster++){
#pragma HLS UNROLL

      int olink = iCluster/NClustersPerPhi;

      if(olink > N_CH_OUT){
	 std::cout<< "Output info exceed # of links"<<std::endl;
	 exit(1);
      }

      //bit 0-8(reserved), 8-31(unused), 32-34(peakEta), 35-37(peakPhi), 38-43(towerEta), 44-48(towerPhi), 49-58(ET) 
      int bitLo1 = (iCluster % NClustersPerPhi)*32 + 32;
      int bitHi1 = bitLo1 + 2; 
      link_out[olink]                 .range(bitHi1, bitLo1) = ap_uint<3>(outpeakEta_Pos[iCluster]);
      link_out[olink + (N_CH_OUT/2)]  .range(bitHi1, bitLo1) = ap_uint<3>(outpeakEta_Neg[iCluster]);
      if(first) std::cout<<"link_out["<<olink<<"] = .range("<<bitHi1<<", "<<bitLo1<<"): outpeakEta_Pos["<<iCluster<<"]= "<<outpeakEta_Pos[iCluster]<<std::endl;
      if(first) std::cout<<"link_out["<<olink + (N_CH_OUT/2)<<"] = .range("<<bitHi1<<", "<<bitLo1<<"): outpeakEta_Neg["<<iCluster<<"]= "<<outpeakEta_Neg[iCluster]<<std::endl;

      int bitLo2 = bitHi1 + 1;
      int bitHi2 = bitLo2 + 2;
      link_out[olink]                 .range(bitHi2, bitLo2) = ap_uint<3>(outpeakPhi_Pos[iCluster]);
      link_out[olink + (N_CH_OUT/2)]  .range(bitHi2, bitLo2) = ap_uint<3>(outpeakPhi_Neg[iCluster]);

      int bitLo3 = bitHi2 + 1;
      int bitHi3 = bitLo3 + 5;
      link_out[olink]                 .range(bitHi3, bitLo3) = ap_uint<6>(outtowerEta_Pos[iCluster]);
      link_out[olink + (N_CH_OUT/2)]  .range(bitHi3, bitLo3) = ap_uint<6>(outtowerEta_Neg[iCluster]);

      int bitLo4 = bitHi3 + 1;
      int bitHi4 = bitLo4 + 4;
      link_out[olink]                 .range(bitHi4, bitLo4) = ap_uint<5>(outtowerPhi_Pos[iCluster]);
      link_out[olink + (N_CH_OUT/2)]  .range(bitHi4, bitLo4) = ap_uint<5>(outtowerPhi_Neg[iCluster]);

      int bitLo5 = bitHi4 + 1;
      int bitHi5 = bitLo5 + 9;
      link_out[olink]                 .range(bitHi5, bitLo5) = ap_uint<10>(outClusterET_Pos[iCluster]);
      link_out[olink + (N_CH_OUT/2)]  .range(bitHi5, bitLo5) = ap_uint<10>(outClusterET_Neg[iCluster]);

      int bitLo6 = bitHi5 + 1;
      link_out[olink].range(191,bitLo6) = 0;
   }

   if(first) first = false;

#else
   for (int idx = 0; idx < N_CH_OUT; idx++) {
      link_out[idx] = link_in[idx];
   }
#endif
}
