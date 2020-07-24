#include "../common/APxLinkData.hh"
#include <ap_int.h>
#include <bitset>

using namespace std;

#define ETA 18 //(18th eta is dummy to have symmetry)
#define PHI 32 //(1+6+1)*4
#define nLinks 96

class Tower {
  public:  
    Tower() : clustered_et(0), total_et(0), peak_phi(0), peak_eta(0), peak_time(0), hOe(0) {};

    Tower(uint32_t i) {
      this->clustered_et = i;
      this->total_et  = i >> 10;
      this->peak_phi  = i >> 20;
      this->peak_eta  = i >> 23;
      this->peak_time = i >> 26;
      this->hOe       = i >> 29;
    }

    inline friend bool operator >(const Tower& c1,
	const Tower& c2) {
      if (c1.total_et > c2.total_et)
	return true;
      else
	return false;
    }

    inline operator uint32_t() {
#pragma HLS INLINE

      return ((uint32_t) (this->hOe)    << 29)
        | ((uint32_t) (this->peak_time) << 26)
	| ((uint32_t) (this->peak_eta)  << 23)
	| ((uint32_t) (this->peak_phi)  << 20)
	| ((uint32_t) (this->total_et)  << 10)
	| (uint32_t) this->clustered_et;
    }

    ap_uint<10> clustered_et;
    ap_uint<10> total_et;
    ap_uint<3> peak_phi;
    ap_uint<3> peak_eta;
    ap_uint<3> peak_time;
    ap_uint<3> hOe;
};       

// Packs a tower object into 6 64-bit words, useful for link formatting
bool pack(int ilink, Tower towers[18], ap_uint<64> out[6]) {
// Packing: towers in links-0,3,6,9...  : tphi:0,2,4,...,  teta:0-11
// Packing: towers in links-2,5,8,11... : tphi:1,3,5,...,  teta:6-18

  if(ilink%3 == 1)return true;

  for (size_t word = 0; word < 6; word++){ 
    int iTower;

    if(ilink%3 == 0){
      iTower = word*2;
    } else if(ilink%3 == 2){
      iTower = word*2 + 6;
    }

    out[word].range(  9,  0) = ap_uint<10>(towers[iTower].clustered_et); //0
    out[word].range( 19, 10) = ap_uint<10>(towers[iTower].total_et);     //0
    out[word].range( 22, 20) = ap_uint<10>(towers[iTower].peak_phi);     //0
    out[word].range( 25, 23) = ap_uint<10>(towers[iTower].peak_eta);     //0
    out[word].range( 28, 26) = ap_uint<10>(towers[iTower].peak_time);    //0
    out[word].range( 31, 29) = ap_uint<10>(towers[iTower].hOe);          //0

    out[word].range( 41, 32) = ap_uint<10>(towers[iTower+1].clustered_et); //0
    out[word].range( 51, 42) = ap_uint<10>(towers[iTower+1].total_et);     //0
    out[word].range( 54, 52) = ap_uint<10>(towers[iTower+1].peak_phi);     //0
    out[word].range( 57, 55) = ap_uint<10>(towers[iTower+1].peak_eta);     //0
    out[word].range( 60, 58) = ap_uint<10>(towers[iTower+1].peak_time);    //0
    out[word].range( 63, 61) = ap_uint<10>(towers[iTower+1].hOe);          //0
  }

  //for(size_t kk=0; kk< 6;  kk++)
  //  cout<<std::setw(20)<<out[kk]<<"   "<<std::bitset<64>(out[kk])<<std::endl;

  return true;
}

bool pack(Tower towers1[18], Tower towers2[18], ap_uint<64> out[6]) {
// Packing: towers in links-1,4,7,10...  : tphi:0,2,4,...,  teta:12-17
// Packing: towers in links-1,4,7,10...  : tphi:1,3,5,...,  teta:0-5

  for (size_t word = 0; word < 3; word++){ 
    int iTower = word*2 + 11;

    out[word].range(  9,  0) = ap_uint<10>(towers1[iTower].clustered_et); //0
    out[word].range( 19, 10) = ap_uint<10>(towers1[iTower].total_et);     //0
    out[word].range( 22, 20) = ap_uint<10>(towers1[iTower].peak_phi);     //0
    out[word].range( 25, 23) = ap_uint<10>(towers1[iTower].peak_eta);     //0
    out[word].range( 28, 26) = ap_uint<10>(towers1[iTower].peak_time);    //0
    out[word].range( 31, 29) = ap_uint<10>(towers1[iTower].hOe);          //0

    out[word].range( 41, 32) = ap_uint<10>(towers1[iTower+1].clustered_et); //0
    out[word].range( 51, 42) = ap_uint<10>(towers1[iTower+1].total_et);     //0
    out[word].range( 54, 52) = ap_uint<10>(towers1[iTower+1].peak_phi);     //0
    out[word].range( 57, 55) = ap_uint<10>(towers1[iTower+1].peak_eta);     //0
    out[word].range( 60, 58) = ap_uint<10>(towers1[iTower+1].peak_time);    //0
    out[word].range( 63, 61) = ap_uint<10>(towers1[iTower+1].hOe);          //0

    out[word+3].range(  9,  0) = ap_uint<10>(towers2[word*2].clustered_et); //0
    out[word+3].range( 19, 10) = ap_uint<10>(towers2[word*2].total_et);     //0
    out[word+3].range( 22, 20) = ap_uint<10>(towers2[word*2].peak_phi);     //0
    out[word+3].range( 25, 23) = ap_uint<10>(towers2[word*2].peak_eta);     //0
    out[word+3].range( 28, 26) = ap_uint<10>(towers2[word*2].peak_time);    //0
    out[word+3].range( 31, 29) = ap_uint<10>(towers2[word*2].hOe);          //0

    out[word+3].range( 41, 32) = ap_uint<10>(towers2[word*2+1].clustered_et); //0
    out[word+3].range( 51, 42) = ap_uint<10>(towers2[word*2+1].total_et);     //0
    out[word+3].range( 54, 52) = ap_uint<10>(towers2[word*2+1].peak_phi);     //0
    out[word+3].range( 57, 55) = ap_uint<10>(towers2[word*2+1].peak_eta);     //0
    out[word+3].range( 60, 58) = ap_uint<10>(towers2[word*2+1].peak_time);    //0
    out[word+3].range( 63, 61) = ap_uint<10>(towers2[word*2+1].hOe);          //0
  }

  //for(size_t kk=0; kk< 6;  kk++)
  //  cout<<std::setw(20)<<out[kk]<<"   "<<std::bitset<64>(out[kk])<<std::endl;

  return true;

}


int main(int argn, char *argp[]) {

  Tower towersInPosEta[PHI][ETA];
  Tower towersInNegEta[PHI][ETA];

  for(int ieta = 0; ieta < ETA; ieta++){
    for(int iphi = 0; iphi < PHI; iphi++){
      towersInPosEta[iphi][ieta].clustered_et =0;
      towersInPosEta[iphi][ieta].total_et     =0;
      towersInPosEta[iphi][ieta].peak_phi     =7;
      towersInPosEta[iphi][ieta].peak_eta     =7;
      towersInPosEta[iphi][ieta].peak_time    =7;
      towersInPosEta[iphi][ieta].hOe          =7;

      towersInNegEta[iphi][ieta].clustered_et =0;
      towersInNegEta[iphi][ieta].total_et     =0;
      towersInNegEta[iphi][ieta].peak_phi     =7;
      towersInNegEta[iphi][ieta].peak_eta     =7;
      towersInNegEta[iphi][ieta].peak_time    =7;
      towersInNegEta[iphi][ieta].hOe          =7;
    }
  }

  //-- Manual inputs to generate test vectors
  towersInPosEta[3][10].clustered_et = 23;
  towersInPosEta[3][10].total_et     = 27;
  towersInPosEta[3][10].peak_phi     = 4;
  towersInPosEta[3][10].peak_eta     = 3;

  towersInPosEta[4][10].clustered_et = 40;
  towersInPosEta[4][10].total_et     = 45;
  towersInPosEta[4][10].peak_phi     = 0;
  towersInPosEta[4][10].peak_eta     = 3;

  towersInPosEta[15][3].clustered_et = 37;
  towersInPosEta[15][3].total_et     = 39;
  towersInPosEta[15][3].peak_phi     = 4;
  towersInPosEta[15][3].peak_eta     = 2;

  towersInPosEta[16][3].clustered_et = 12;
  towersInPosEta[16][3].total_et     = 12;
  towersInPosEta[16][3].peak_phi     = 0;
  towersInPosEta[16][3].peak_eta     = 2;

  towersInPosEta[25][16].clustered_et = 52;
  towersInPosEta[25][16].total_et     = 56;
  towersInPosEta[25][16].peak_phi     = 3;
  towersInPosEta[25][16].peak_eta     = 4;

  towersInPosEta[11][16].clustered_et = 9;
  towersInPosEta[11][16].total_et     = 9;
  towersInPosEta[11][16].peak_phi     = 1;
  towersInPosEta[11][16].peak_eta     = 4;

  towersInNegEta[25][0].clustered_et = 21;
  towersInNegEta[25][0].total_et     = 24;
  towersInNegEta[25][0].peak_phi     = 3;
  towersInNegEta[25][0].peak_eta     = 0;

  towersInNegEta[11][16].clustered_et = 70;
  towersInNegEta[11][16].total_et     = 79;
  towersInNegEta[11][16].peak_phi     = 1;
  towersInNegEta[11][16].peak_eta     = 0;

  towersInNegEta[27][7].clustered_et = 66;
  towersInNegEta[27][7].total_et     = 71;
  towersInNegEta[27][7].peak_phi     = 4;
  towersInNegEta[27][7].peak_eta     = 2;

  towersInNegEta[28][7].clustered_et = 14;
  towersInNegEta[28][7].total_et     = 16;
  towersInNegEta[28][7].peak_phi     = 0;
  towersInNegEta[28][7].peak_eta     = 2;



  ap_uint<64> packed[nLinks][6];
  for(int ilink = 0; ilink<nLinks/2; ilink++){
    int phi = ilink*2/3;

    if(ilink%3 == 1){
      pack(towersInPosEta[phi], towersInPosEta[phi+1], packed[ilink]); 
      pack(towersInNegEta[phi], towersInNegEta[phi+1], packed[ilink + nLinks/2]); 
    }else{
      pack(ilink, towersInPosEta[phi], packed[ilink]); 
      pack(ilink, towersInNegEta[phi], packed[ilink + nLinks/2]); 
    }
  }

  APxLinkData link_in(nLinks);

  for (size_t i = 0; i < 6; i++){
    for (size_t k = 0; k < nLinks; k++){

      link_in.add(i, k, {0x00, packed[k][i]});
//      cout<<"Word="<<i<<setw(4)<<" Link="<<k<<setw(4)<<"["<<eta<<"]"<<setw(3)<<"["<<phi<<"]   "<<std::hex<<packed[eta][phi][i]<<endl;

    }
  }

  link_in.write("test_in-gct.txt");

  return 0;
}
