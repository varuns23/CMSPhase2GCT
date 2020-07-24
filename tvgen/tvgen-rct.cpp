#include "../common/APxLinkData.hh"
#include <ap_int.h>
#include <bitset>

using namespace std;

/* ECAL crystal object definition */
struct Crystal {
   Crystal() : energy(0), timing(0), spike(false) {};

   Crystal(ap_uint<15> i) {
      this->energy = i;
      this->timing = i >> 10;
      this->spike = i >> 14;
   }

   inline operator ap_uint<15>() {
      return  ((uint16_t)(this->spike) << 14) |
	 ((uint16_t)(this->timing) << 10) |
	 this->energy;
   }

#ifndef __SYNTHESIS__
   string toString() {
      return "energy = " + to_string(this->energy) + ", timing = " + to_string(this->timing) + ", spike = " + to_string(this->spike);
   }
#endif

   ap_uint<10> energy;
   ap_uint<4>  timing;
   ap_uint<1>  spike;
};

/* Tower object definition */
struct Tower {
   Tower() {
#pragma HLS ARRAY_PARTITION variable=crystals complete dim=0
      for (size_t i = 0; i < 5; i++) {
#pragma LOOP UNROLL
	 for (size_t j = 0; j < 5; j++) {
#pragma LOOP UNROLL
	    this->crystals[i][j] = Crystal();
	 }
      }
   }

#ifndef __SYNTHESIS__
   string toString() {
      ostringstream str;
      for (size_t i = 0; i < 5; i++) {
	 for (size_t k = 0; k < 5; k++) {
	    str << setfill('0') << setw(4) << hex << this->crystals[i][k].energy << " ";
	 }
	 str << endl;
      }

      return str.str();
   }
#endif

   // Packs a tower object into 6 64-bit words, useful for link formatting
   void pack(ap_uint<64> out[6]) {

      for (size_t i = 0; i < 6; i++) 
	 out[i] = 0;

      out[0].range( 9,  0) = ap_uint<10>(this->crystals[0][0].energy);     //X0
      out[0].range(24, 15) = ap_uint<10>(this->crystals[0][1].energy);     //X1
      out[0].range(39, 30) = ap_uint<10>(this->crystals[0][2].energy);     //X2
      out[0].range(54, 45) = ap_uint<10>(this->crystals[0][3].energy);     //X3
      out[0].range(63, 60) = ap_uint<4>(this->crystals[0][4].energy);      //X4
      out[1].range( 5,  0) = ap_uint<6>(this->crystals[0][4].energy >> 4); //X4

      out[1].range(20, 11) = ap_uint<10>(this->crystals[1][0].energy);     //X5
      out[1].range(35, 26) = ap_uint<10>(this->crystals[1][1].energy);     //X6
      out[1].range(50, 41) = ap_uint<10>(this->crystals[1][2].energy);     //X7 
      out[1].range(63, 56) = ap_uint<8>(this->crystals[1][3].energy);      //X8
      out[2].range( 1,  0) = ap_uint<2>(this->crystals[1][3].energy >> 8); //X8
      out[2].range(16,  7) = ap_uint<10>(this->crystals[1][4].energy);     //X9

      out[2].range(31, 22) = ap_uint<10>(this->crystals[2][0].energy);     //X10
      out[2].range(46, 37) = ap_uint<10>(this->crystals[2][1].energy);     //X11
      out[2].range(61, 52) = ap_uint<10>(this->crystals[2][2].energy);     //X12
      out[3].range(12,  3) = ap_uint<10>(this->crystals[2][3].energy);     //X13
      out[3].range(27, 18) = ap_uint<10>(this->crystals[2][4].energy);     //X14

      out[3].range(42, 33) = ap_uint<10>(this->crystals[3][0].energy);     //X15
      out[3].range(57, 48) = ap_uint<10>(this->crystals[3][1].energy);     //X16
      out[3].range(63, 63) = ap_uint<1>(this->crystals[3][2].energy);      //X17
      out[4].range( 8,  0) = ap_uint<9>(this->crystals[3][2].energy >> 1); //X17
      out[4].range(23, 14) = ap_uint<10>(this->crystals[3][3].energy);     //X18
      out[4].range(38, 29) = ap_uint<10>(this->crystals[3][4].energy);     //X19

      out[4].range(53, 44) = ap_uint<10>(this->crystals[4][0].energy);     //X20
      out[4].range(63, 59) = ap_uint<5>(this->crystals[4][1].energy);     //X21
      out[5].range( 4,  0) = ap_uint<5>(this->crystals[4][1].energy >> 5);     //X21
      out[5].range(19, 10) = ap_uint<10>(this->crystals[4][2].energy);     //X22
      out[5].range(34, 25) = ap_uint<10>(this->crystals[4][3].energy);     //X23
      out[5].range(49, 40) = ap_uint<10>(this->crystals[4][3].energy);     //X24

      for(size_t kk=0; kk< 6;  kk++)
	 cout<<std::setw(20)<<out[kk]<<"   "<<std::bitset<64>(out[kk])<<std::endl;
   }

   Crystal crystals[5][5];
};

#define ETA 17
#define PHI 2

int main(int argn, char *argp[]) {

   Tower towers[ETA][PHI];

   //-  int counter = 0;
   //-for(size_t ieta=0; ieta<5; ieta++){
   //-   for(size_t iphi=0; iphi<5; iphi++){
   //-      counter++;
   //-      towers[0][0].crystals[ieta][iphi].energy=counter;
   //-      cout<<"crystals["<<ieta<<"]["<<iphi<<"] : "<<towers[0][0].crystals[ieta][iphi].energy<<std::endl;
   //-   }
   //-}
   //-      cout<<"----------"<<std::endl;

   //**** SLR-1: PHI 0, 1 **********
  /*
   towers[0][0].crystals[2][3].energy  = 0x11;  
   towers[0][0].crystals[2][4].energy  = 0x22;  
   towers[1][0].crystals[0][3].energy  = 0x44;  
   towers[2][0].crystals[4][4].energy  = 0x66; 
   towers[3][0].crystals[2][1].energy  = 0x99;  
   towers[5][0].crystals[3][3].energy  = 0x8;   
   towers[6][0].crystals[1][1].energy  = 0xaa;  
   towers[6][0].crystals[4][4].energy  = 0x36;  
   towers[7][0].crystals[1][2].energy  = 0x25;  
   towers[8][0].crystals[3][1].energy  = 0x35;  
   towers[9][0].crystals[3][1].energy  = 0x2b;  
   towers[9][0].crystals[2][2].energy  = 0xcc;  
   towers[12][0].crystals[1][1].energy = 0xab;  
     
   towers[0][1].crystals[2][0].energy  = 0x50;  
   towers[1][1].crystals[3][1].energy  = 0x55;  
   towers[2][1].crystals[3][3].energy  = 0x77;  
   towers[2][1].crystals[3][4].energy  = 0x88;  
   towers[4][1].crystals[3][1].energy  = 0x95;  
   towers[4][1].crystals[4][1].energy  = 0x100;
   towers[5][1].crystals[0][1].energy  = 0x15;  
   towers[6][1].crystals[4][2].energy  = 0x123;
   towers[7][1].crystals[4][4].energy  = 0x70;  
   towers[8][1].crystals[2][3].energy  = 0x1a;  
   towers[9][1].crystals[0][3].energy  = 0x30;  
   towers[14][1].crystals[4][2].energy = 0x120; 
   */
   //**** SLR-1: PHI 2, 3 **********
   
   towers[0][0].crystals[3][0].energy  = 0x15;
   towers[0][0].crystals[3][1].energy  = 0x8;
   towers[0][0].crystals[1][3].energy  = 0x4;
   towers[1][0].crystals[3][1].energy  = 0x5;
   towers[1][0].crystals[3][2].energy  = 0x17;
   towers[1][0].crystals[1][4].energy  = 0x6;
   towers[2][0].crystals[3][0].energy  = 0x34;
   towers[3][0].crystals[3][2].energy  = 0x20;
   towers[3][0].crystals[4][2].energy  = 0x50;
   towers[4][0].crystals[0][2].energy  = 0x10;
   towers[6][0].crystals[2][3].energy  = 0x11;
   towers[6][0].crystals[2][4].energy  = 0x36;
   towers[7][0].crystals[4][0].energy  = 0x100;
   towers[8][0].crystals[1][1].energy  = 0x10;
   towers[8][0].crystals[2][4].energy  = 0x15;
     
   towers[0][1].crystals[3][3].energy  = 0x22;
   towers[2][1].crystals[3][2].energy  = 0x24;
   towers[2][1].crystals[4][2].energy  = 0x14;
   towers[4][1].crystals[4][2].energy  = 0x15;
   towers[5][1].crystals[0][2].energy  = 0x45;
   towers[6][1].crystals[2][0].energy  = 0x3;
   towers[7][1].crystals[1][1].energy  = 0x5;
   towers[7][1].crystals[3][2].energy  = 0x13;
   towers[7][1].crystals[3][3].energy  = 0x30;
   towers[8][1].crystals[2][0].energy  = 0x40;
   towers[8][1].crystals[2][1].energy  = 0x5;
   towers[9][1].crystals[3][3].energy  = 0x66;

   ap_uint<64> packed[ETA][PHI][6];
   for (size_t i = 0; i < ETA; i++) {
      for (size_t k = 0; k < PHI; k++) {
	 std::cout<<"                                          ------- ["<<i<<"]["<<k<<"] -------"<<endl;
	 towers[i][k].pack(packed[i][k]);
	 std::cout<<endl;
      }
   }


   APxLinkData link_in(ETA*PHI);

   for (size_t i = 0; i < 6; i++){
      for (size_t k = 0; k < ETA*PHI; k++){
//	 size_t phi = k % PHI; //(default)
//	 size_t eta = k / PHI; //(default)
	 size_t phi = k / ETA;
	 size_t eta = k % ETA;
	 
	 link_in.add(i, k, {0x00, packed[eta][phi][i]});
	 cout<<"Word="<<i<<setw(4)<<" Link="<<k<<setw(4)<<"["<<eta<<"]"<<setw(3)<<"["<<phi<<"]   "<<std::hex<<packed[eta][phi][i]<<endl;

      }
   }

   link_in.write("test_in.txt");

   return 0;
}
