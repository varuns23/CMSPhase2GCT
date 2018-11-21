#include "GCT.hh"
#include <iostream>
using namespace std;
bool GCT(uint16_t peakEta_Neg[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t peakPhi_Neg[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t towerEta_Neg[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t towerPhi_Neg[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t ClusterET_Neg[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t peakEta_Pos[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t peakPhi_Pos[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t towerEta_Pos[NClustersPerPhi][NCaloLayer2Phi],
	 uint16_t towerPhi_Pos[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t ClusterET_Pos[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outpeakEta_Neg[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outpeakPhi_Neg[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outtowerEta_Neg[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outtowerPhi_Neg[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outClusterET_Neg[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outpeakEta_Pos[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outpeakPhi_Pos[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outtowerEta_Pos[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outtowerPhi_Pos[NClustersPerPhi][NCaloLayer2Phi],
         uint16_t outClusterET_Pos[NClustersPerPhi][NCaloLayer2Phi])
{
#pragma HLS PIPELINE II=6
#pragma HLS ARRAY_PARTITION variable=peakEta_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_Neg complete dim=0


#pragma HLS ARRAY_PARTITION variable=peakEta_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_Pos complete dim=0


#pragma HLS ARRAY_PARTITION variable=outpeakEta_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_Neg complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_Neg complete dim=0


#pragma HLS ARRAY_PARTITION variable=outpeakEta_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi_Pos complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_Pos complete dim=0


  //merge across phi
  if((merge_acrossphi(peakEta_Neg,peakPhi_Neg,towerEta_Neg,towerPhi_Neg,ClusterET_Neg,outpeakEta_Neg,outpeakPhi_Neg,outtowerEta_Neg,outtowerPhi_Neg,outClusterET_Neg))) 
    {
      std::cout<<"In: phi-merging in Negative Eta"<<std::endl;
    }
  else {
    cout << "Phi merging in negative eta failed" << endl;
    return 1;
  }

  if((merge_acrossphi(peakEta_Pos,peakPhi_Pos,towerEta_Pos,towerPhi_Pos,ClusterET_Pos,outpeakEta_Pos,outpeakPhi_Pos,outtowerEta_Pos,outtowerPhi_Pos,outClusterET_Pos)))
    {
      std::cout<<"In: phi-merging in Positive Eta"<<std::endl;
    }
  else {
    cout << "Phi merging in positive eta failed" << endl;
    return 1;
  }
    


  uint16_t preMergepeakEta[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergepeakPhi[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergeclusterET[NClustersPerPhi][NCaloLayer2Phi];

  uint16_t preMergepeakEta_b[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergepeakPhi_b[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergeclusterET_b[NClustersPerPhi][NCaloLayer2Phi];




#pragma HLS ARRAY_PARTITION variable=preMergepeakEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergepeakPhi complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergeclusterET complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergepeakEta_b complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergepeakPhi_b complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergeclusterET_b complete dim=0


  for(int nClus = 0; nClus < NClustersPerPhi; nClus++) {
#pragma HLS UNROLL
    for(int tPhi = 0; tPhi < NCaloLayer2Phi; tPhi++) {
#pragma HLS UNROLL
      
      preMergepeakEta_b[nClus][tPhi] = peakEta_Pos[nClus][tPhi];
      preMergepeakPhi_b[nClus][tPhi] = peakPhi_Pos[nClus][tPhi];
      preMergeclusterET_b[nClus][tPhi] = ClusterET_Pos[nClus][tPhi];

      preMergepeakEta[nClus][tPhi] = peakEta_Neg[nClus][tPhi];
      preMergepeakPhi[nClus][tPhi] = peakPhi_Neg[nClus][tPhi];
      preMergeclusterET[nClus][tPhi] = ClusterET_Neg[nClus][tPhi];


      if(preMergepeakEta[nClus][tPhi] == 0 )
        {
          if(!mergeClusters1(preMergepeakEta[nClus][tPhi],
                             preMergepeakPhi[nClus][tPhi],
                             preMergeclusterET[nClus][tPhi],
                             preMergepeakEta_b[nClus][tPhi],
                             preMergepeakPhi_b[nClus][tPhi],
                             preMergeclusterET_b[nClus][tPhi],
                             &outpeakEta_Neg[nClus][tPhi],
                             &outpeakPhi_Neg[nClus][tPhi],
                             &outClusterET_Neg[nClus][tPhi],
                             &outpeakEta_Pos[nClus][tPhi],
                             &outpeakPhi_Pos[nClus][tPhi],
                             &outClusterET_Pos[nClus][tPhi]
                             )) return false;
          else {
            continue;

          }

        }
      

    }


  }

  
//  if((merge_acrosseta(peakEta_Neg,peakPhi_Neg,ClusterET_Neg,peakEta_Pos,peakPhi_Pos,ClusterET_Pos,outpeakEta_Neg,outpeakPhi_Neg,outClusterET_Neg,outpeakEta_Pos,outpeakPhi_Pos,out
//ClusterET_Pos)))
//    {
//      std::cout<<"Coming inside eta merging"<<std::endl;
//    }
//  else {
//    cout << "eta merging failed" << endl;
//    return 1;
//  }
//

  return true;


}


bool merge_acrosseta(uint16_t peakEta_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t peakPhi_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t ClusterET_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t peakEta_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t peakPhi_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t ClusterET_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakEta_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakPhi_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outClusterET_t[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakEta_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outpeakPhi_b[NClustersPerPhi][NCaloLayer2Phi],
		     uint16_t outClusterET_b[NClustersPerPhi][NCaloLayer2Phi]

		     )
{

#pragma HLS PIPELINE II=6
#pragma HLS ARRAY_PARTITION variable=peakEta_t complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_t complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_t complete dim=0

#pragma HLS ARRAY_PARTITION variable=peakEta_b complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi_b complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET_b complete dim=0


#pragma HLS ARRAY_PARTITION variable=outpeakEta_t complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_t complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_t complete dim=0

#pragma HLS ARRAY_PARTITION variable=outpeakEta_b complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi_b complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET_b complete dim=0


  uint16_t preMergepeakEta_t[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergepeakPhi_t[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergeclusterET_t[NClustersPerPhi][NCaloLayer2Phi];

  uint16_t preMergepeakEta_b[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergepeakPhi_b[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergeclusterET_b[NClustersPerPhi][NCaloLayer2Phi];

#pragma HLS ARRAY_PARTITION variable=preMergepeakEta_t complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergepeakPhi_t complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergeclusterET_t complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergepeakEta_b complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergepeakPhi_b complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergeclusterET_b complete dim=0


  for(int nClus = 0; nClus < NClustersPerPhi; nClus++) {
#pragma HLS UNROLL
    for(int tPhi = 0; tPhi < NCaloLayer2Phi; tPhi++) {
#pragma HLS UNROLL

      preMergepeakEta_b[nClus][tPhi] = peakEta_b[nClus][tPhi];
      preMergepeakPhi_b[nClus][tPhi] = peakPhi_b[nClus][tPhi];
      preMergeclusterET_b[nClus][tPhi] = ClusterET_b[nClus][tPhi];
      
      preMergepeakEta_t[nClus][tPhi] = peakEta_t[nClus][tPhi];
      preMergepeakPhi_t[nClus][tPhi] = peakPhi_t[nClus][tPhi];
      preMergeclusterET_t[nClus][tPhi] = ClusterET_t[nClus][tPhi];




      
      if(preMergepeakEta_t[nClus][tPhi] == 0 )
	{
	  if(!mergeClusters1(preMergepeakEta_t[nClus][tPhi],
			     preMergepeakPhi_t[nClus][tPhi],
			     preMergeclusterET_t[nClus][tPhi],
			     preMergepeakEta_b[nClus][tPhi],
			     preMergepeakPhi_b[nClus][tPhi],
			     preMergeclusterET_b[nClus][tPhi],
			     &outpeakEta_t[nClus][tPhi],
			     &outpeakPhi_t[nClus][tPhi],
			     &outClusterET_t[nClus][tPhi],
			     &outpeakEta_b[nClus][tPhi],
			     &outpeakPhi_b[nClus][tPhi],
			     &outClusterET_b[nClus][tPhi]
			     )) return false;
	  else {
	    continue;
	    
	  }
	
	}
    }
  }	


 
  return true;

}


bool merge_acrossphi(uint16_t peakEta[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t peakPhi[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t towerEta[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t towerPhi[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t ClusterET[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t outpeakEta[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t outpeakPhi[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t outtowerEta[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t outtowerPhi[NClustersPerPhi][NCaloLayer2Phi],
		    uint16_t outClusterET[NClustersPerPhi][NCaloLayer2Phi])

{

#pragma HLS PIPELINE II=6
#pragma HLS ARRAY_PARTITION variable=peakEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=peakPhi complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=towerPhi complete dim=0
#pragma HLS ARRAY_PARTITION variable=ClusterET complete dim=0


#pragma HLS ARRAY_PARTITION variable=outpeakEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=outpeakPhi complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=outtowerPhi complete dim=0
#pragma HLS ARRAY_PARTITION variable=outClusterET complete dim=0  


  uint16_t preMergepeakEta[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergepeakPhi[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergetowerEta[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergetowerPhi[NClustersPerPhi][NCaloLayer2Phi];
  uint16_t preMergeclusterET[NClustersPerPhi][NCaloLayer2Phi];
  
#pragma HLS ARRAY_PARTITION variable=preMergepeakEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergepeakPhi complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergetowerEta complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergetowerPhi complete dim=0
#pragma HLS ARRAY_PARTITION variable=preMergeclusterET complete dim=0


  for(int nClus = 0; nClus < NClustersPerPhi; nClus++) {
#pragma HLS UNROLL
    for(int tPhi = 0; tPhi < NCaloLayer2Phi; tPhi++) {
#pragma HLS UNROLL

      preMergepeakEta[nClus][tPhi] = peakEta[nClus][tPhi];
      preMergepeakPhi[nClus][tPhi] = peakPhi[nClus][tPhi];
      preMergetowerEta[nClus][tPhi] = towerEta[nClus][tPhi];
      preMergetowerPhi[nClus][tPhi] = towerPhi[nClus][tPhi];
      preMergeclusterET[nClus][tPhi] = ClusterET[nClus][tPhi];

      outtowerEta[nClus][tPhi] = towerEta[nClus][tPhi];
      outtowerPhi[nClus][tPhi] = towerPhi[nClus][tPhi];
      
    }
  }

  //merging in phi across layer1 cards
    for(int nClus = 0; nClus < NClustersPerPhi; nClus++) {
#pragma HLS UNROLL
      for(int tPhi = 0; tPhi < NCaloLayer2Phi; tPhi+=4) {
#pragma HLS UNROLL

      int nPhi = -1;
      if(preMergepeakPhi[nClus][tPhi] == 0 && tPhi != 0) nPhi = tPhi - 1;
      if(preMergepeakPhi[nClus][tPhi] == NCaloLayer1Phi && tPhi != NCaloLayer2Phi-1 ) nPhi = tPhi + 1;

      //      std::cout<<"nClus: "<<nClus<<" tPhi:"<<tPhi<<" preMergepeakPhi[nClus][tPhi]: "<<preMergepeakPhi[nClus][tPhi]<<" nPhi"<<nPhi<<" preMergeclusterET[nClus][tPhi]:"<<preMergeclusterET[nClus][tPhi]<<" preMergeclusterET[nClus][nPhi]"<<preMergeclusterET[nClus][nPhi]<<std::endl;
	    

      if(preMergetowerEta[nClus][tPhi]==preMergetowerEta[nClus][nPhi])
	{
	  if(nPhi >= 0 && nPhi < NCaloLayer2Phi) {
	    if(!mergeClusters(preMergepeakEta[nClus][tPhi],
			      preMergepeakPhi[nClus][tPhi],
			      preMergeclusterET[nClus][tPhi],
			      preMergepeakEta[nClus][nPhi],
			      preMergepeakPhi[nClus][nPhi],
			      preMergeclusterET[nClus][nPhi],
			      &outpeakEta[nClus][tPhi],
			      &outpeakPhi[nClus][tPhi],
			      &outClusterET[nClus][tPhi],
			      &outpeakEta[nClus][nPhi],
			      &outpeakPhi[nClus][nPhi],
			      &outClusterET[nClus][nPhi]
			      )) return false;
	  }
	  
	  else {
	    continue;
	  }
	}
      
      }
    
    }


  return true; 
}


bool mergeClusters(uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
		   uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
                   uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
                   uint16_t *eta2, uint16_t *phi2, uint16_t *cet2) {
  // Check that the clusters are neighbors in eta or phi                                                                                                                  

#pragma HLS PIPELINE II=6
                             
  if(ieta1 == ieta2) {
    if(icet1 > icet2) {
      // Merge 2 in to 1, and set 2 to remnant energy centered in tower                                                                                                                                
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = icet1 + icet2;
      *eta2 = ieta2;
      *phi2 = iphi2;
      *cet2 = 0;

    }
    else {
      // Merge 1 in to 2, and set 1 to remnant energy centered in tower                                                                                                                                
      *eta2 = ieta2;
      *phi2 = iphi2;
      *cet2 = icet2 + icet1;
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = 0;
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




bool mergeClusters1(uint16_t ieta1, uint16_t iphi1, uint16_t icet1,
		   uint16_t ieta2, uint16_t iphi2, uint16_t icet2,
                   uint16_t *eta1, uint16_t *phi1, uint16_t *cet1,
                   uint16_t *eta2, uint16_t *phi2, uint16_t *cet2) {
  // Check that the clusters are neighbors in eta or phi                                                                                                                  

#pragma HLS PIPELINE II=6
                             
  if(iphi1 == iphi2) {
    if(icet1 > icet2) {
      // Merge 2 in to 1, and set 2 to remnant energy centered in tower                                                                                                                                
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = icet1 + icet2;
      *eta2 = ieta2;
      *phi2 = iphi2;
      *cet2 = 0;

    }
    else {
      // Merge 1 in to 2, and set 1 to remnant energy centered in tower                                                                                                                                
      *eta2 = ieta2;
      *phi2 = iphi2;
      *cet2 = icet2 + icet1;
      *eta1 = ieta1;
      *phi1 = iphi1;
      *cet1 = 0;
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



