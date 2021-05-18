//#include "../common/APxLinkData.hh"
#include <ap_int.h>
#include <bitset>
#include "TFile.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include "TChain.h"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TTreeReaderArray.h"

using namespace std;

#define ETA 17 //()
#define PHI 18 //(1+6+1)*4  // reduced to 18 instead of 32 to fit in one SLR
#define NLINKS 36   // reduced to 36 instead of 64 to fit in SLR
#define N_WORDS_PER_FRAME 9

#define MAX_ET 100  // Maximum Et Crystal cut in RCT for writing MC Sim TV
#define SUM_ET 200 // Sum Et cut in RCT for writing MC Sim TV
#define NEVENTS -1 // Number of Events to run over for MC Sim TV
#define NTV 500 // Number of TV to generate
#define EPATTERN 0 // Set to 1 to use sample_tv_in_{ievent}_{pos/neg}{irct}, 0 for sample_tv_in_{itv}


class Tower {
public:  
  Tower() : cluster_et(0), tower_et(0), peak_phi(0), peak_eta(0), peak_time(0), hOe(0) {};

  Tower(uint32_t i) {
    this->cluster_et = i;
    this->tower_et  = i >> 10;
    this->peak_phi  = i >> 20;
    this->peak_eta  = i >> 23;
    this->peak_time = i >> 26;
    this->hOe       = i >> 29;
  }

  inline operator uint32_t() {

    return ((uint32_t) (this->hOe)    << 29)
      | ((uint32_t) (this->peak_time) << 26)
      | ((uint32_t) (this->peak_eta)  << 23)
      | ((uint32_t) (this->peak_phi)  << 20)
      | ((uint32_t) (this->tower_et)  << 10)
      | (uint32_t) this->cluster_et;
  }

  inline void set(uint32_t cluster_et,uint32_t tower_et,uint32_t peak_phi,uint32_t peak_eta,uint32_t peak_time=0,uint32_t hOe=0) {
    this->cluster_et = (cluster_et);
    this->tower_et = (tower_et);
    this->peak_phi = (peak_phi);
    this->peak_eta = (peak_eta);
    this->peak_time = (peak_time);
    this->hOe = (hOe);
  }

  inline void set(const Tower& rhs) {
    cluster_et = rhs.cluster_et;
    tower_et = rhs.tower_et;
    peak_phi = rhs.peak_phi;
    peak_eta = rhs.peak_eta;
    peak_time = rhs.peak_time;
    hOe = rhs.hOe;
  }

  ap_uint<10> cluster_et;
  ap_uint<10> tower_et;
  ap_uint<3> peak_phi;
  ap_uint<3> peak_eta;
  ap_uint<3> peak_time;
  ap_uint<3> hOe;
};       

// Packs a tower object into 6 64-bit words, useful for link formatting
bool pack(Tower towers[17], ap_uint<64> out[N_WORDS_PER_FRAME]) {

  for (size_t word = 0; word < N_WORDS_PER_FRAME-1; word++){ 
    int iTower = word*2;

    out[word].range(  9,  0) = ap_uint<10>(towers[iTower].cluster_et); //0
    out[word].range( 19, 10) = ap_uint<10>(towers[iTower].tower_et);     //0
    out[word].range( 22, 20) = ap_uint<10>(towers[iTower].peak_phi);     //0
    out[word].range( 25, 23) = ap_uint<10>(towers[iTower].peak_eta);     //0
    out[word].range( 28, 26) = ap_uint<10>(towers[iTower].peak_time);    //0
    out[word].range( 31, 29) = ap_uint<10>(towers[iTower].hOe);          //0

    out[word].range( 41, 32) = ap_uint<10>(towers[iTower+1].cluster_et); //0
    out[word].range( 51, 42) = ap_uint<10>(towers[iTower+1].tower_et);     //0
    out[word].range( 54, 52) = ap_uint<10>(towers[iTower+1].peak_phi);     //0
    out[word].range( 57, 55) = ap_uint<10>(towers[iTower+1].peak_eta);     //0
    out[word].range( 60, 58) = ap_uint<10>(towers[iTower+1].peak_time);    //0
    out[word].range( 63, 61) = ap_uint<10>(towers[iTower+1].hOe);          //0
  }

  out[8].range(  9,  0) = ap_uint<10>(towers[16].cluster_et); //0
  out[8].range( 19, 10) = ap_uint<10>(towers[16].tower_et);     //0
  out[8].range( 22, 20) = ap_uint<10>(towers[16].peak_phi);     //0
  out[8].range( 25, 23) = ap_uint<10>(towers[16].peak_eta);     //0
  out[8].range( 28, 26) = ap_uint<10>(towers[16].peak_time);    //0
  out[8].range( 31, 29) = ap_uint<10>(towers[16].hOe);          //0

  out[8].range( 41, 32) = ap_uint<10>(0); //0
  out[8].range( 51, 42) = ap_uint<10>(0); //0
  out[8].range( 54, 52) = ap_uint<10>(0); //0
  out[8].range( 57, 55) = ap_uint<10>(0); //0
  out[8].range( 60, 58) = ap_uint<10>(0); //0
  out[8].range( 63, 61) = ap_uint<10>(0); //0
  
  //for(size_t kk=0; kk< 9;  kk++)
    //cout<<std::setw(20)<<hex<<out[kk]<<"   "<<std::bitset<64>(out[kk])<<std::endl;

  return true;
}
void write_tv(Tower towersInPosEta[PHI][ETA],Tower towersInNegEta[PHI][ETA],const char* fname="test_in-gct.txt",bool verbose=false) {
  std::cout << "Writing " << fname << endl;
  string ofname(fname);
  ofstream ofs(ofname.c_str());
  if (!ofs.is_open()) {
     cerr << "Error opening output file: " << ofname << endl;
     exit(1);
  }

  ap_uint<64> packed[NLINKS][N_WORDS_PER_FRAME];
  for(int ilink = 0; ilink<NLINKS/2; ilink++){
     int phi = ilink;

     pack(towersInPosEta[phi], packed[ilink]); 
     pack(towersInNegEta[phi], packed[ilink + NLINKS/2]); 
  }

//  APxLinkData link_in(NLINKS);

  ofs<<"WordCnt ";
  for(size_t ilink=0; ilink < NLINKS; ilink++){
     ofs<<dec<<setw(13)<<" "<<"Link "<<setw(2)<<ilink;
  }
  ofs<<endl<<"#BeginData"<<endl;

  for (size_t i = 0; i < N_WORDS_PER_FRAME; i++){
     ofs << "0x" << setfill('0') << setw(4) <<hex<< i<<"  ";
     for (size_t k = 0; k < NLINKS; k++){
	uint64_t value =  packed[k][i];
	ofs << "  " << hex <<"0x"<< setfill('0') << setw(16) << value;
	// link_in.add(i, k, {0x00, packed[k][i]});
	// if (verbose) cout<<"Word="<<i<<setw(4)<<" Link="<<k<<setw(4)<<"["<<eta<<"]"<<setw(3)<<"["<<phi<<"]   "<<std::hex<<packed[eta][phi][i]<<endl;

     }
     ofs<<endl;
  }
  //link_in.write(fname);

  ofs.close();
}

void mc_sim(vector<const char*> inputs,const char* output,const char* archive=0) {
   if ( string(output).find(".root") != string::npos ) {
      cout << output << " not valid tv file name" << endl;
      return;
   }
   // TFile* tfile = new TFile(input);
   TChain* tchain = new TChain("analyzer/tree");
   for (auto input : inputs) tchain->Add(input);
   TTreeReader reader(tchain);
   TTreeReaderValue<int> nTower(reader,"nTower");
   TTreeReaderArray<float> tower_et(reader,"tower_Et");
   TTreeReaderArray<int> tower_ieta(reader,"tower_iEta");
   TTreeReaderArray<int> tower_iphi(reader,"tower_iPhi");

   TTreeReaderArray<float> cluster_et(reader,"cluster_Et");
   TTreeReaderArray<int> peak_ieta(reader,"peak_iEta");
   TTreeReaderArray<int> peak_iphi(reader,"peak_iPhi");

   printf("Running %i files | %i events \noutput pattern: %s\n",inputs.size(),tchain->GetEntries(),output);
   string outname = string(output);
   outname = outname.substr(0,outname.find(".txt"));
   int itv = 0;
   for (int ievent = 0; reader.Next(); ievent++) {
      if (ievent >= NEVENTS && NEVENTS != -1) break;
      if (itv >= NTV && NTV != -1) break;
      Tower posEtaSect[ETA][72];
      Tower negEtaSect[ETA][72];

      for (int itower = 0; itower < *nTower; itower++) {
	 float t_et = tower_et[itower];
	 if (t_et == 0) continue;

	 int t_eta = tower_ieta[itower];
	 int t_phi = tower_iphi[itower];

	 float c_et = cluster_et[itower];
	 int p_eta = peak_ieta[itower];
	 int p_phi = peak_iphi[itower];

	 if ( t_eta < 0 )    negEtaSect[abs(t_eta)-1][t_phi-1].set(c_et,t_et,p_phi,p_eta);
	 else if (t_eta > 0) posEtaSect[    t_eta -1][t_phi-1].set(c_et,t_et,p_phi,p_eta);
      }

      for (int igct = 0; igct < 3; igct++) {
	 // printf("GCT: %i\n",igct);
	 float max_et = 0;
	 float sum_et = 0;
	 Tower towersInPosEta[PHI][ETA];
	 Tower towersInNegEta[PHI][ETA];
	 for (int ieta = 0; ieta < ETA; ieta++) {
	    for (int iphi = 0; iphi < PHI; iphi++) {
	       int rphi = (igct*24 + iphi - 4)%72;
	       if (rphi < 0) rphi += 72;
	       towersInPosEta[iphi][ieta].set(posEtaSect[ieta][rphi]);

	       // Only check tower et for non-overlap regions
	       if (4 <= iphi && iphi < 28) {
		  if ( towersInPosEta[iphi][ieta].tower_et > max_et ) max_et = towersInPosEta[iphi][ieta].tower_et;
		  sum_et += towersInPosEta[iphi][ieta].tower_et;
	       }

	       towersInNegEta[iphi][ieta].set(negEtaSect[ieta][rphi]);

	       if (4 <= iphi && iphi < 28) {
		  if ( towersInNegEta[iphi][ieta].tower_et > max_et ) max_et = towersInNegEta[iphi][ieta].tower_et;
		  sum_et += towersInNegEta[iphi][ieta].tower_et;
	       }

	       // printf("(%i,%i,%i): pos %f neg %f\n",ieta,iphi,rphi,towersInPosEta[iphi][ieta].tower_et,towersInNegEta[iphi][ieta].tower_et);
	    }
	 }
	 if (max_et < MAX_ET || sum_et < SUM_ET) continue;

	 string fname = outname;
	 if (EPATTERN) fname += "_" + to_string(ievent)+"_gct" + to_string(igct);
	 else fname += "_" + to_string(itv);
	 write_tv(towersInPosEta,towersInNegEta,(fname+".txt").c_str());
	 itv++;
      }
   }
}
void test() {
   Tower towersInPosEta[PHI][ETA];
   Tower towersInNegEta[PHI][ETA];

   for(int ieta = 0; ieta < ETA; ieta++){
      for(int iphi = 0; iphi < PHI; iphi++){
	 towersInPosEta[iphi][ieta].cluster_et =0;
	 towersInPosEta[iphi][ieta].tower_et     =0;
	 towersInPosEta[iphi][ieta].peak_phi     =7;
	 towersInPosEta[iphi][ieta].peak_eta     =7;
	 towersInPosEta[iphi][ieta].peak_time    =7;
	 towersInPosEta[iphi][ieta].hOe          =7;

	 towersInNegEta[iphi][ieta].cluster_et =0;
	 towersInNegEta[iphi][ieta].tower_et     =0;
	 towersInNegEta[iphi][ieta].peak_phi     =7;
	 towersInNegEta[iphi][ieta].peak_eta     =7;
	 towersInNegEta[iphi][ieta].peak_time    =7;
	 towersInNegEta[iphi][ieta].hOe          =7;
      }
   }


   //-- Manual inputs to generate test vectors
   // set-1: For testing eta and phi stitching
   //
   //-|towersInPosEta[3][10].cluster_et = 23; //fdc06c17 -
   //-|towersInPosEta[3][10].tower_et     = 27;
   //-|towersInPosEta[3][10].peak_phi     = 4;
   //-|towersInPosEta[3][10].peak_eta     = 3;

   //-|towersInPosEta[4][10].cluster_et = 40; //fd80b428 -
   //-|towersInPosEta[4][10].tower_et     = 45;
   //-|towersInPosEta[4][10].peak_phi     = 0;
   //-|towersInPosEta[4][10].peak_eta     = 3;

   //-|towersInPosEta[11][3].cluster_et = 37; //fd409c25 -
   //-|towersInPosEta[11][3].tower_et     = 39;
   //-|towersInPosEta[11][3].peak_phi     = 4;
   //-|towersInPosEta[11][3].peak_eta     = 2;

   //-|towersInPosEta[12][3].cluster_et = 12; //fd00300c -
   //-|towersInPosEta[12][3].tower_et     = 12;
   //-|towersInPosEta[12][3].peak_phi     = 0;
   //-|towersInPosEta[12][3].peak_eta     = 2;

   //-|towersInPosEta[10][16].cluster_et = 52; //fe30e034 -
   //-|towersInPosEta[10][16].tower_et     = 56;
   //-|towersInPosEta[10][16].peak_phi     = 3;
   //-|towersInPosEta[10][16].peak_eta     = 4;

   //-|towersInPosEta[14][16].cluster_et = 9; //fe102409 -
   //-|towersInPosEta[14][16].tower_et     = 9;
   //-|towersInPosEta[14][16].peak_phi     = 1;
   //-|towersInPosEta[14][16].peak_eta     = 4;

   //-|towersInNegEta[10][0].cluster_et = 21; //fc306015 -
   //-|towersInNegEta[10][0].tower_et     = 24;
   //-|towersInNegEta[10][0].peak_phi     = 3;
   //-|towersInNegEta[10][0].peak_eta     = 0;

   //-|towersInNegEta[14][0].cluster_et = 70; //fc113c46 -
   //-|towersInNegEta[14][0].tower_et     = 79;
   //-|towersInNegEta[14][0].peak_phi     = 1;
   //-|towersInNegEta[14][0].peak_eta     = 0;

   //-|towersInNegEta[7][7].cluster_et = 66; //fd411c42 -
   //-|towersInNegEta[7][7].tower_et     = 71;
   //-|towersInNegEta[7][7].peak_phi     = 4;
   //-|towersInNegEta[7][7].peak_eta     = 2;

   //-|towersInNegEta[8][7].cluster_et = 14; //fd00400e -
   //-|towersInNegEta[8][7].tower_et     = 16;
   //-|towersInNegEta[8][7].peak_phi     = 0;
   //-|towersInNegEta[8][7].peak_eta     = 2;
 
   // set-2: For testing eta stitching
   //
   //-| towersInPosEta[3][10].cluster_et = 23; //fdc06c17 -
   //-| towersInPosEta[3][10].tower_et     = 27;
   //-| towersInPosEta[3][10].peak_phi     = 4;
   //-| towersInPosEta[3][10].peak_eta     = 3;

   //-| towersInPosEta[4][10].cluster_et = 40; //fd80b428 -
   //-| towersInPosEta[4][10].tower_et     = 45;
   //-| towersInPosEta[4][10].peak_phi     = 0;
   //-| towersInPosEta[4][10].peak_eta     = 3;

   //-| towersInPosEta[11][3].cluster_et = 37; //fd409c25 -
   //-| towersInPosEta[11][3].tower_et     = 39;
   //-| towersInPosEta[11][3].peak_phi     = 4;
   //-| towersInPosEta[11][3].peak_eta     = 2;

   //-| towersInPosEta[12][3].cluster_et = 12; //fd00300c -
   //-| towersInPosEta[12][3].tower_et     = 12;
   //-| towersInPosEta[12][3].peak_phi     = 0;
   //-| towersInPosEta[12][3].peak_eta     = 2;

   //-| towersInPosEta[7][16].cluster_et = 52; //fe30e034 -
   //-| towersInPosEta[7][16].tower_et     = 56;
   //-| towersInPosEta[7][16].peak_phi     = 3;
   //-| towersInPosEta[7][16].peak_eta     = 4;

   //-| towersInPosEta[8][16].cluster_et = 9; //fe102409 -
   //-| towersInPosEta[8][16].tower_et     = 9;
   //-| towersInPosEta[8][16].peak_phi     = 1;
   //-| towersInPosEta[8][16].peak_eta     = 4;

   //-| towersInPosEta[15][1].cluster_et = 9; //fe102409 -
   //-| towersInPosEta[15][1].tower_et     = 9;
   //-| towersInPosEta[15][1].peak_phi     = 1;
   //-| towersInPosEta[15][1].peak_eta     = 4;

   //-| towersInNegEta[0][1].cluster_et = 21; //fc306015 -
   //-| towersInNegEta[0][1].tower_et     = 24;
   //-| towersInNegEta[0][1].peak_phi     = 3;
   //-| towersInNegEta[0][1].peak_eta     = 0;

   //-| towersInNegEta[7][4].cluster_et = 70; //fc113c46 -
   //-| towersInNegEta[7][4].tower_et     = 79;
   //-| towersInNegEta[7][4].peak_phi     = 1;
   //-| towersInNegEta[7][4].peak_eta     = 0;

   //-| towersInNegEta[8][4].cluster_et = 70; //fc113c46 -
   //-| towersInNegEta[8][4].tower_et     = 79;
   //-| towersInNegEta[8][4].peak_phi     = 1;
   //-| towersInNegEta[8][4].peak_eta     = 0;

   //-| towersInNegEta[11][7].cluster_et = 66; //fd411c42 -
   //-| towersInNegEta[11][7].tower_et     = 71;
   //-| towersInNegEta[11][7].peak_phi     = 4;
   //-| towersInNegEta[11][7].peak_eta     = 2;

   //-| towersInNegEta[12][7].cluster_et = 14; //fd00400e -
   //-| towersInNegEta[12][7].tower_et     = 16;
   //-| towersInNegEta[12][7].peak_phi     = 0;
   //-| towersInNegEta[12][7].peak_eta     = 2;

   // set-3: For testing phi stitching
    towersInPosEta[3][16].cluster_et  = 23;
    towersInPosEta[3][16].tower_et    = 27;
    towersInPosEta[3][16].peak_phi    = 4;
    towersInPosEta[3][16].peak_eta    = 4;

    towersInNegEta[3][0].cluster_et   = 33;
    towersInNegEta[3][0].tower_et     = 35;
    towersInNegEta[3][0].peak_phi     = 4;
    towersInNegEta[3][0].peak_eta     = 0;
//-
    towersInPosEta[6][16].cluster_et = 40; //fd80b428 -
    towersInPosEta[6][16].tower_et   = 45;
    towersInPosEta[6][16].peak_phi   = 0;
    towersInPosEta[6][16].peak_eta   = 4;

    towersInNegEta[6][0].cluster_et  = 21; //fc306015 -
    towersInNegEta[6][0].tower_et    = 24;
    towersInNegEta[6][0].peak_phi    = 0;
    towersInNegEta[6][0].peak_eta    = 0;
//-
    towersInPosEta[11][16].cluster_et = 37; //fd409c25 -
    towersInPosEta[11][16].tower_et   = 39;
    towersInPosEta[11][16].peak_phi   = 3;
    towersInPosEta[11][16].peak_eta   = 4;

    towersInNegEta[11][0].cluster_et  = 70; //fc113c46 -
    towersInNegEta[11][0].tower_et    = 79;
    towersInNegEta[11][0].peak_phi    = 3;
    towersInNegEta[11][0].peak_eta    = 0;
//-
    towersInPosEta[14][16].cluster_et = 12; //fd00300c -
    towersInPosEta[14][16].tower_et   = 12;
    towersInPosEta[14][16].peak_phi   = 1;
    towersInPosEta[14][16].peak_eta   = 4;

    towersInNegEta[14][0].cluster_et   = 66; //fd411c42 -
    towersInNegEta[14][0].tower_et     = 71;
    towersInNegEta[14][0].peak_phi     = 1;
    towersInNegEta[14][0].peak_eta     = 0;
//-
    towersInPosEta[17][16].cluster_et = 52; //fe30e034 -
    towersInPosEta[17][16].tower_et   = 56;
    towersInPosEta[17][16].peak_phi   = 3;
    towersInPosEta[17][16].peak_eta   = 4;

    towersInNegEta[17][0].cluster_et   = 14; //fd00400e -
    towersInNegEta[17][0].tower_et     = 16;
    towersInNegEta[17][0].peak_phi     = 3;
    towersInNegEta[17][0].peak_eta     = 0;
  
   write_tv(towersInPosEta,towersInNegEta);
}

int main(int argn, char *argp[]) {
   if (argn == 1) test();
   else if (argn >= 3) {
      vector<const char*> inputs;
      const char* output=0;
      const char* archive=0;
      for (int i = 1; i < argn; i++) {
	 string arg = string(argp[i]);
	 if ( arg.find(".root") != string::npos ) inputs.push_back(argp[i]);
	 else if ( arg.find(".txt") != string::npos ) output = argp[i];
	 else if ( arg.find(".tar.gz") != string::npos ) archive = argp[i];
      }
      mc_sim(inputs,output,archive);
   }

   return 0;
}
