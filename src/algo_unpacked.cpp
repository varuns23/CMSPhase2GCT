#include <stdlib.h>
#include <stdio.h>
#include "../../APx_Gen0_Algo/VivadoHls/null_algo_unpacked/vivado_hls/src/algo_unpacked.h"   // This is where you should have had hls_algo - if not find the header file and fix this - please do not copy this file as that defines the interface

#include "GCT.hh"

//#define ALGO_PASSTHROUGH

/*
 * algo_unpacked interface exposes fully unpacked input and output link data.
 * This version assumes use of 10G 8b10b links, and thus providing
 * 192  bits per BX (arranged as an arrray of 3x 64 bits)
 *
 * !!! N.B. Do NOT use the first byte (i.e. link_in/out[x].range(7,0) as this
 * portion is reserved for input/output link alignment markers.
 *
 * The remaining 184 bits (link_in/out[x].range(191,8)) are available for
 * algorithm use.
 *
 */

void algo_unpacked(ap_uint<64> link_in_2d[N_CH_IN][3], ap_uint<64> link_out_2d[N_CH_OUT][3])
{
	ap_uint<192> link_in[N_CH_IN];
	ap_uint<192> link_out[N_CH_IN];

#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0
#pragma HLS PIPELINE II=1
#pragma HLS INTERFACE ap_none port=link_out

#pragma HLS ARRAY_PARTITION variable=link_in_2d complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out_2d complete dim=0

    for (int idx = 0; idx < N_CH_IN; idx++) {
#pragma HLS UNROLL
	link_in[idx].range(63, 0) = link_in_2d[idx][0];
	link_in[idx].range(127, 64) = link_in_2d[idx][1];
	link_in[idx].range(191, 128) = link_in_2d[idx][2];
     }

#ifndef ALGO_PASSTHROUGH

   static bool first = true;

   uint16_t peakEta_Pos[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t peakPhi_Pos[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t towerEta_Pos[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t towerPhi_Pos[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t ClusterET_Pos[NClustersPerPhi][NCaloLayer2Phi];

   uint16_t peakEta_Neg[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t peakPhi_Neg[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t towerEta_Neg[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t towerPhi_Neg[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t ClusterET_Neg[NClustersPerPhi][NCaloLayer2Phi];

#pragma HLS ARRAY_PARTITION variable=peakEta_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_Pos complete dim=0

#pragma HLS ARRAY_PARTITION variable=peakEta_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_Neg complete dim=0

//   int inlink = -1;
   for(int iCluster = 0; iCluster < NClustersPerPhi ; iCluster++){
#pragma HLS UNROLL
      for(int iPhi = 0; iPhi < NCaloLayer2Phi; iPhi++){
#pragma HLS UNROLL
	 int inlink = iPhi % NCaloLayer2Phi;
	 
	 if(inlink > N_CH_IN){
	    std::cout<< "Input info exceed # of links"<<std::endl;
	    exit(1);
	 }

	 int bLo1 = iCluster*32 + 32;
	 int bHi1 = bLo1 + 2;
	 peakEta_Pos[iCluster][iPhi] = link_in[inlink].range(bHi1, bLo1);
	 if(first) std::cout<<"peakEta_Pos["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink<<"].range("<<bHi1<<", "<<bLo1<<")"<<std::endl;
	 peakEta_Neg[iCluster][iPhi] = link_in[inlink + NCaloLayer2Phi].range(bHi1, bLo1);
	 if(first) std::cout<<"peakEta_Neg["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink+NCaloLayer2Phi<<"].range("<<bHi1<<", "<<bLo1<<")"<<std::endl;

	 int bLo2 = bHi1 + 1; 
	 int bHi2 = bLo2 + 2;
	 peakPhi_Pos[iCluster][iPhi]  = link_in[inlink].range(bHi2, bLo2);
	 if(first) std::cout<<"peakPhi_Pos["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink<<"].range("<<bHi2<<", "<<bLo2<<")"<<std::endl;
	 peakPhi_Neg[iCluster][iPhi]  = link_in[inlink + NCaloLayer2Phi].range(bHi2, bLo2);
	 if(first) std::cout<<"peakPhi_Neg["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink+NCaloLayer2Phi<<"].range("<<bHi2<<", "<<bLo2<<")"<<std::endl;

	 int bLo3 = bHi2 + 1; 
	 int bHi3 = bLo3 + 5;
	 towerEta_Pos[iCluster][iPhi]  = link_in[inlink].range(bHi3, bLo3);
	 if(first) std::cout<<"towerEta_Pos["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink<<"].range("<<bHi3<<", "<<bLo3<<")"<<std::endl;
	 towerEta_Neg[iCluster][iPhi]  = link_in[inlink + NCaloLayer2Phi].range(bHi3, bLo3);
	 if(first) std::cout<<"towerEta_Neg["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink+NCaloLayer2Phi<<"].range("<<bHi3<<", "<<bLo3<<")"<<std::endl;

	 int bLo4 = bHi3 + 1; 
	 int bHi4 = bLo4 + 3;
	 towerPhi_Pos[iCluster][iPhi]  = link_in[inlink].range(bHi4, bLo4);
	 if(first) std::cout<<"towerPhi_Pos["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink<<"].range("<<bHi4<<", "<<bLo4<<")"<<std::endl;
	 towerPhi_Neg[iCluster][iPhi]  = link_in[inlink + NCaloLayer2Phi].range(bHi4, bLo4);
	 if(first) std::cout<<"towerPhi_Neg["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink+NCaloLayer2Phi<<"].range("<<bHi4<<", "<<bLo4<<")"<<std::endl;

	 int bLo5 = bHi4 + 1; 
	 int bHi5 = bLo5 + 15;
	 ClusterET_Pos[iCluster][iPhi] = link_in[inlink].range(bHi5, bLo5);
	 if(first) std::cout<<"ClusterET_Pos["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink<<"].range("<<bHi5<<", "<<bLo5<<")"<<std::endl;
	 ClusterET_Neg[iCluster][iPhi] = link_in[inlink + NCaloLayer2Phi].range(bHi5, bLo5);
	 if(first) std::cout<<"ClusterET_Neg["<<iCluster<<"]["<<iPhi<<"] = link_in["<<inlink+NCaloLayer2Phi<<"].range("<<bHi5<<", "<<bLo5<<")"<<std::endl;
      }
   }

   uint16_t outpeakEta_Pos[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t outpeakPhi_Pos[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t outtowerEta_Pos[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t outtowerPhi_Pos[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t outClusterET_Pos[NClustersPerPhi][NCaloLayer2Phi];

   uint16_t outpeakEta_Neg[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t outpeakPhi_Neg[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t outtowerEta_Neg[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t outtowerPhi_Neg[NClustersPerPhi][NCaloLayer2Phi];
   uint16_t outClusterET_Neg[NClustersPerPhi][NCaloLayer2Phi];

#pragma HLS ARRAY_PARTITION variable=outpeakEta_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_Pos complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEta_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_Neg complete dim=0


   bool success = GCT(peakEta_Neg,peakPhi_Neg,towerEta_Neg,towerPhi_Neg,ClusterET_Neg,peakEta_Pos,peakPhi_Pos,towerEta_Pos,towerPhi_Pos,ClusterET_Pos,outpeakEta_Neg,outpeakPhi_Neg,outtowerEta_Neg,outtowerPhi_Neg,outClusterET_Neg,outpeakEta_Pos,outpeakPhi_Pos,outtowerEta_Pos,outtowerPhi_Pos,outClusterET_Pos);

   for(int iCluster = 0; iCluster < NClustersPerPhi ; iCluster++){
#pragma HLS UNROLL
      for(int iPhi = 0; iPhi < NCaloLayer2Phi; iPhi++){
#pragma HLS UNROLL

	 int olink = iPhi % NCaloLayer2Phi;

	 if(olink > N_CH_OUT){
	    std::cout<< "Output info exceed # of links"<<std::endl;
	    exit(1);
	 }
	       
	 //bit 0-8(reserved), 8-31(unused), 32-34(peakEta), 35-37(peakPhi), 38-43(towerEta), 44-47(towerPhi), 48-63(ET) 
	 int bitLo1 = iCluster*32 + 32;
	 int bitHi1 = bitLo1 + 2; 
	 link_out[olink]                 .range(bitHi1,bitLo1)  = ap_uint<3>(outpeakEta_Pos[iCluster][iPhi]);
	 link_out[olink + NCaloLayer2Phi].range(bitHi1, bitLo1) = ap_uint<3>(outpeakEta_Neg[iCluster][iPhi]);

	 int bitLo2 = bitHi1 + 1;
	 int bitHi2 = bitLo2 + 2;
	 link_out[olink]                 .range(bitHi2,bitLo2)  = ap_uint<3>(outpeakPhi_Pos[iCluster][iPhi]);
	 link_out[olink + NCaloLayer2Phi].range(bitHi2, bitLo2) = ap_uint<3>(outpeakPhi_Neg[iCluster][iPhi]);

	 int bitLo3 = bitHi2 + 1;
	 int bitHi3 = bitLo3 + 5;
	 link_out[olink]                 .range(bitHi3, bitLo3) = ap_uint<3>(outtowerEta_Pos[iCluster][iPhi]);
	 link_out[olink + NCaloLayer2Phi].range(bitHi3, bitLo3) = ap_uint<3>(outtowerEta_Neg[iCluster][iPhi]);

	 int bitLo4 = bitHi3 + 1;
	 int bitHi4 = bitLo4 + 3;
	 link_out[olink]                 .range(bitHi4, bitLo4) = ap_uint<3>(outtowerPhi_Pos[iCluster][iPhi]);
	 link_out[olink + NCaloLayer2Phi].range(bitHi4, bitLo4) = ap_uint<3>(outtowerPhi_Neg[iCluster][iPhi]);


	 int bitLo5 = bitHi4 + 1;
	 int bitHi5 = bitLo5 + 15;
	 link_out[olink]                 .range(bitHi5, bitLo5) = ap_uint<3>(outClusterET_Pos[iCluster][iPhi]);
	 link_out[olink + NCaloLayer2Phi].range(bitHi5, bitLo5) = ap_uint<3>(outClusterET_Neg[iCluster][iPhi]);

	 int bitLo6 = bitHi5 + 1;
	 link_out[olink].range(191,bitLo6) = 0;
      }
   }
   for (int idx = NCaloLayer2Phi; idx < N_CH_OUT; idx++) {
      link_out[idx] = 0;
   }    

   if(first) first = false;

#else
   for (int idx = 0; idx < N_CH_OUT; idx++) {
      link_out[idx] = link_in[idx];
   }
#endif

   for (int idx = 0; idx < N_CH_OUT; idx++) {
#pragma HLS UNROLL
	link_out_2d[idx][0] = link_out[idx].range(63, 0);
	link_out_2d[idx][1] = link_out[idx].range(127, 64);
	link_out_2d[idx][2] = link_out[idx].range(191, 128);
   }

}
