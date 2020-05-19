#ifndef __OBJECTS_H__
#define __OBJECTS_H__

#include "algo_top_parameters.h"

using namespace std;

//- const ap_uint<5> NtowerEta= 17;  //# towers per phi per RCT
//- const ap_uint<3> NtowerPhi= 4;   //# towers per eta per RCT
//- const ap_uint<7> NGCTEta = 17*2; //# towers per phi per GCT
//- const ap_uint<6> NGCTPhi = 4*8;  //# towers per eta per GCT (1+6+1)x2


/*ECAL tower object definition*/
class Tower{
  public:
    Tower() : data(0) {;}

    Tower(ap_uint<10> cluster_et, ap_uint<10> tower_et, ap_uint<3> peak_phi, ap_uint<3> peak_eta, ap_uint<3> peak_time, ap_uint<3> hOe) {

      data = (cluster_et) | 
	(((ap_uint<32>) tower_et) << 10) | 
	(((ap_uint<32>) peak_phi) << 20) | 
	(((ap_uint<32>) peak_eta) << 23) | 
	(((ap_uint<32>) peak_time) << 26) | 
	(((ap_uint<32>) hOe) << 29);
    }

    Tower(uint32_t i) {data = i;}

    Tower& operator=(const Tower& rhs) {
      data = rhs.data;
      return *this;
    }
    
    operator uint32_t() {return (uint32_t) data;}

    ap_uint<10> cluster_et(){return (data & 0x3FF);}
    ap_uint<10> tower_et()  {return ((data >> 10) & 0x3FF);}
    ap_uint<3>  peak_phi()  {return ((data >> 20) & 0x7);}
    ap_uint<3>  peak_eta()  {return ((data >> 23) & 0x7);}
    ap_uint<3>  peak_time() {return ((data >> 26) & 0x7);}
    ap_uint<3>  hOe()       {return ((data >> 29) & 0x7);}

//--|    ap_uint<32> data() {
//--|      return (
//--|	  (uint32_t) this->cluster_et() | 
//--|	  (uint32_t) (this->tower_et() << 10) |
//--|	  (uint32_t) (this->peak_phi() << 20) |
//--|	  (uint32_t) (this->peak_eta() << 23) |
//--|	  (uint32_t) (this->peak_time() << 26) |
//--|	  (uint32_t) (this->hOe()       << 29) |
//--|	  );
//--|    }


#ifndef __SYNTHESIS__
    string toString() {
      return "Tower [" + 
	to_string(this->cluster_et()) + ", (" + 
	to_string(this->peak_phi()) + ", " + 
	to_string(this->peak_eta()) + "), " + 
	to_string(this->peak_time()) + ", " + 
	to_string(this->hOe()) + ", " + 
	to_string(this->tower_et()) + "] ";
    }
#endif


    ap_uint<32> data;

};

class TowersInEta{
  public:
    TowersInEta(){
#pragma HLS ARRAY_PARTITION variable=towers complete dim=0
      for (size_t eta = 0; eta < 17; eta++) {
#pragma LOOP UNROLL
	this->towers[eta] = Tower();
      }
    }
    Tower towers[17];
};



#endif /*!__OBJECTS_H__*/
