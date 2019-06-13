#include <stdlib.h>
#include <stdio.h>

using namespace std;

#include "../../../../../APx_Gen0_Algo/VivadoHls/null_algo_unpacked/vivado_hls/src/algo_unpacked.h"   // This is where you should have had hls_algo - if not find the header file and fix this - please do not copy this file as that defines the interface
#include "GCT.hh"
#include "inputMapping.hh"

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

void algo_unpacked(ap_uint<192> link_in[N_CH_IN], ap_uint<192> link_out[N_CH_OUT])
{

   // !!! Retain these 4 #pragma directives below in your algo_unpacked implementation !!!
#pragma HLS ARRAY_PARTITION variable=link_in complete dim=0
#pragma HLS ARRAY_PARTITION variable=link_out complete dim=0
#pragma HLS PIPELINE II=3
#pragma HLS INTERFACE ap_ctrl_hs port=return

ap_uint<192> mapped_link_in[N_CH_IN];
#pragma HLS ARRAY_PARTITION variable=mapped_link_in    complete dim=0
for (int i = 0; i < N_CH_IN; i++){
   mapped_link_in[i] = 0;
}

mappingInput(link_in, mapped_link_in);



ap_uint<192> tmp_link_out[N_CH_OUT];
#pragma HLS ARRAY_PARTITION variable=tmp_link_out    complete dim=0
for (int i = 0; i < N_CH_OUT; i++){
	tmp_link_out[i] = 0;
}

   // null algo specific pragma: avoid fully combinatorial algo by specifying min latency
   // otherwise algorithm clock input (ap_clk) gets optimized away
#pragma HLS latency min=3

#ifndef ALGO_PASSTHROUGH

   static bool first = true; //true- to print info

   uint16_t peakEta_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t peakPhi_Pos   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t towerEta_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t towerPhi_Pos  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t ClusterET_Pos [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

   uint16_t peakEta_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t peakPhi_Neg   [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t towerEta_Neg  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t towerPhi_Neg  [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];
   uint16_t ClusterET_Neg [NRCTRegionsPerEtaHalf][NClustersPerRCTRegion];

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
   //Input links has to be such that iRCT=0 corresponds to overlapping RCT card on left
   //and iRCT=NRCTRegionsPerEtaHalf-1(last value) corresponds to the overlapping RCT card on the right.
   for(uint16_t iRCT = 0; iRCT < NRCTRegionsPerEtaHalf; iRCT++){
#pragma HLS UNROLL
      for(uint16_t iCluster = 0; iCluster < NClustersPerRCTRegion ; iCluster++){
#pragma HLS UNROLL
	 uint16_t inlink = (iRCT*NRCTPhi) + (iCluster/NClustersPerPhi);

	 if(inlink > N_CH_IN){
	    std::cout<< "Input info exceed # of links"<<std::endl;
	    exit(1);
	 }

	 uint16_t bLo1 = (iCluster % NClustersPerPhi)*32 + 32;
	 uint16_t bHi1 = bLo1 + 2;
	 peakEta_Pos[iRCT][iCluster] = mapped_link_in[inlink].range(bHi1, bLo1);
	 peakEta_Neg[iRCT][iCluster] = mapped_link_in[inlink + (N_CH_IN/2)].range(bHi1, bLo1);
	 if(first) std::cout<<"peakEta_Pos["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink<<"].range("<<bHi1<<", "<<bLo1<<"): "<<peakEta_Pos[iRCT][iCluster]<<std::endl;
	 if(first) std::cout<<"peakEta_Neg["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi1<<", "<<bLo1<<"): "<<peakEta_Neg[iRCT][iCluster]<<std::endl;

	 uint16_t bLo2 = bHi1 + 1; 
	 uint16_t bHi2 = bLo2 + 2;
	 peakPhi_Pos[iRCT][iCluster]  = mapped_link_in[inlink].range(bHi2, bLo2);
	 peakPhi_Neg[iRCT][iCluster]  = mapped_link_in[inlink + (N_CH_IN/2)].range(bHi2, bLo2);
	 if(first) std::cout<<"peakPhi_Pos["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink<<"].range("<<bHi2<<", "<<bLo2<<"): "<<peakPhi_Pos[iRCT][iCluster]<<std::endl;
	 if(first) std::cout<<"peakPhi_Neg["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi2<<", "<<bLo2<<"): "<<peakPhi_Neg[iRCT][iCluster]<<std::endl;

	 uint16_t bLo3 = bHi2 + 1; 
	 uint16_t bHi3 = bLo3 + 5;
	 towerEta_Pos[iRCT][iCluster]  = mapped_link_in[inlink].range(bHi3, bLo3);
	 towerEta_Neg[iRCT][iCluster]  = offsettEta + mapped_link_in[inlink + (N_CH_IN/2)].range(bHi3, bLo3);
	 if(first) std::cout<<"towerEta_Pos["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink<<"].range("<<bHi3<<", "<<bLo3<<"): "<<towerEta_Pos[iRCT][iCluster]<<std::endl;
	 if(first) std::cout<<"towerEta_Neg["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi3<<", "<<bLo3<<"): "<<towerEta_Neg[iRCT][iCluster]<<std::endl;

	 uint16_t bLo4 = bHi3 + 1; 
	 uint16_t bHi4 = bLo4 + 3;
	 towerPhi_Pos[iRCT][iCluster]  = iRCT*offsettPhi + mapped_link_in[inlink].range(bHi4, bLo4);
	 towerPhi_Neg[iRCT][iCluster]  = iRCT*offsettPhi + mapped_link_in[inlink + (N_CH_IN/2)].range(bHi4, bLo4);
	 if(first) std::cout<<"towerPhi_Pos["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink<<"].range("<<bHi4<<", "<<bLo4<<"): "<<towerPhi_Pos[iRCT][iCluster]<<std::endl;
	 if(first) std::cout<<"towerPhi_Neg["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi4<<", "<<bLo4<<"): "<<towerPhi_Neg[iRCT][iCluster]<<std::endl;

	 uint16_t bLo5 = bHi4 + 1; 
	 uint16_t bHi5 = bLo5 + 15;
	 ClusterET_Pos[iRCT][iCluster] = mapped_link_in[inlink].range(bHi5, bLo5);
	 ClusterET_Neg[iRCT][iCluster] = mapped_link_in[inlink + (N_CH_IN/2)].range(bHi5, bLo5);
	 if(first) std::cout<<"ClusterET_Pos["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink<<"].range("<<bHi5<<", "<<bLo5<<"): "<<ClusterET_Pos[iRCT][iCluster]<<std::endl;
	 if(first) std::cout<<"ClusterET_Neg["<<iRCT<<"]["<<iCluster<<"] = mapped_link_in["<<inlink+(N_CH_IN/2)<<"].range("<<bHi5<<", "<<bLo5<<"): "<<ClusterET_Neg[iRCT][iCluster]<<std::endl;
      }
   }

   uint16_t outpeakEta_Pos   [NoutRCTRegions][NoutClustersPerRCTRegion];
   uint16_t outpeakPhi_Pos   [NoutRCTRegions][NoutClustersPerRCTRegion];
   uint16_t outtowerEta_Pos  [NoutRCTRegions][NoutClustersPerRCTRegion];
   uint16_t outtowerPhi_Pos  [NoutRCTRegions][NoutClustersPerRCTRegion];
   uint16_t outClusterET_Pos [NoutRCTRegions][NoutClustersPerRCTRegion];

   uint16_t outpeakEta_Neg   [NoutRCTRegions][NoutClustersPerRCTRegion];
   uint16_t outpeakPhi_Neg   [NoutRCTRegions][NoutClustersPerRCTRegion];
   uint16_t outtowerEta_Neg  [NoutRCTRegions][NoutClustersPerRCTRegion];
   uint16_t outtowerPhi_Neg  [NoutRCTRegions][NoutClustersPerRCTRegion];
   uint16_t outClusterET_Neg [NoutRCTRegions][NoutClustersPerRCTRegion];

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

   for(int rPhi=0; rPhi<NoutRCTRegions; rPhi++){
#pragma HLS UNROLL
      for(int iCluster=0; iCluster<NoutClustersPerRCTRegion; iCluster++){
#pragma HLS UNROLL
	 outpeakEta_Pos   [rPhi][iCluster] = 0; 
	 outpeakPhi_Pos   [rPhi][iCluster] = 0; 
	 outtowerEta_Pos  [rPhi][iCluster] = 0; 
	 outtowerPhi_Pos  [rPhi][iCluster] = 0; 
	 outClusterET_Pos [rPhi][iCluster] = 0; 
	 outpeakEta_Neg   [rPhi][iCluster] = 0; 
	 outpeakPhi_Neg   [rPhi][iCluster] = 0; 
	 outtowerEta_Neg  [rPhi][iCluster] = 0; 
	 outtowerPhi_Neg  [rPhi][iCluster] = 0; 
	 outClusterET_Neg [rPhi][iCluster] = 0; 
      }
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

   for(uint16_t iRegion = 0; iRegion < NoutRCTRegions; iRegion++){
#pragma HLS UNROLL
      for(uint16_t iCluster = 0; iCluster < NoutClustersPerRCTRegion ; iCluster++){
#pragma HLS UNROLL

	 uint16_t olink = (iRegion*NRCTPhi) + (iCluster/NClustersPerPhi);

	 if(olink > N_CH_OUT){
	    std::cout<< "Output info exceed # of links"<<std::endl;
	    exit(1);
	 }

	 //bit 0-8(reserved), 8-31(unused), 32-34(peakEta), 35-37(peakPhi), 38-43(towerEta), 44-47(towerPhi), 48-63(ET) 
	 uint16_t bitLo1 = (iCluster % NClustersPerPhi)*32 + 32;
	 uint16_t bitHi1 = bitLo1 + 2; 
	 tmp_link_out[olink]                 .range(bitHi1, bitLo1) = ap_uint<3>(outpeakEta_Pos[iRegion][iCluster]);
	 tmp_link_out[olink + (N_CH_OUT/2)]  .range(bitHi1, bitLo1) = ap_uint<3>(outpeakEta_Neg[iRegion][iCluster]);
	 if(first) std::cout<<"tmp_link_out["<<olink<<"] = .range("<<bitHi1<<", "<<bitLo1<<"): outpeakEta_Pos["<<iRegion<<"]["<<iCluster<<"]= "<<outpeakEta_Pos[iRegion][iCluster]<<std::endl;
	 if(first) std::cout<<"tmp_link_out["<<olink + (N_CH_OUT/2)<<"] = .range("<<bitHi1<<", "<<bitLo1<<"): outpeakEta_Neg["<<iRegion<<"]["<<iCluster<<"]= "<<outpeakEta_Neg[iRegion][iCluster]<<std::endl;

	 uint16_t bitLo2 = bitHi1 + 1;
	 uint16_t bitHi2 = bitLo2 + 2;
	 tmp_link_out[olink]                 .range(bitHi2, bitLo2) = ap_uint<3>(outpeakPhi_Pos[iRegion][iCluster]);
	 tmp_link_out[olink + (N_CH_OUT/2)]  .range(bitHi2, bitLo2) = ap_uint<3>(outpeakPhi_Neg[iRegion][iCluster]);

	 uint16_t bitLo3 = bitHi2 + 1;
	 uint16_t bitHi3 = bitLo3 + 5;
	 tmp_link_out[olink]                 .range(bitHi3, bitLo3) = ap_uint<6>(outtowerEta_Pos[iRegion][iCluster]);
	 tmp_link_out[olink + (N_CH_OUT/2)]  .range(bitHi3, bitLo3) = ap_uint<6>(outtowerEta_Neg[iRegion][iCluster]);

	 uint16_t bitLo4 = bitHi3 + 1;
	 uint16_t bitHi4 = bitLo4 + 3;
	 tmp_link_out[olink]                 .range(bitHi4, bitLo4) = ap_uint<4>(outtowerPhi_Pos[iRegion][iCluster]);
	 tmp_link_out[olink + (N_CH_OUT/2)]  .range(bitHi4, bitLo4) = ap_uint<4>(outtowerPhi_Neg[iRegion][iCluster]);

	 uint16_t bitLo5 = bitHi4 + 1;
	 uint16_t bitHi5 = bitLo5 + 15;
	 tmp_link_out[olink]                 .range(bitHi5, bitLo5) = ap_uint<16>(outClusterET_Pos[iRegion][iCluster]);
	 tmp_link_out[olink + (N_CH_OUT/2)]  .range(bitHi5, bitLo5) = ap_uint<16>(outClusterET_Neg[iRegion][iCluster]);

      }
   }

for(int i = 0; i < N_CH_OUT; i++){
        link_out[i] = tmp_link_out[i];
}

   if(first) first = false;

#else
   for (uint16_t idx = 0; idx < N_CH_OUT; idx++) {
      link_out[idx] = link_in[idx];
   }
#endif
}
