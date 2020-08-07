#ifndef __JETOBJECTS_H__
#define __JETOBJECTS_H__

#include "algo_top.h"
#include "algo_top_parameters.h"

ap_uint<14> get3x3Sum(Tower twrNW, Tower twrN, Tower twrNE, Tower twrW, Tower twrC, Tower twrE, Tower twrSW, Tower twrS, Tower twrSE){
#pragma HLS PIPELINE II=9
#pragma HLS INLINE

  ap_uint<14> sum =
    twrNW.tower_et() + twrN.tower_et() + twrNE.tower_et() +
    twrW.tower_et()  + twrC.tower_et() + twrE.tower_et() +
    twrSW.tower_et() + twrS.tower_et() + twrSE.tower_et();

  return sum;
}


class Jet{
  public:
    Jet() : data(0){;}

    Jet(ap_uint<16> et, ap_uint<5> phi, ap_uint<6> eta, ap_uint<3> time) {

      data = (et) | 
	(((ap_uint<30>) phi)  << 16) | 
	(((ap_uint<30>) eta)  << 21) | 
	(((ap_uint<32>) time) << 27); 
    }

    Jet(ap_uint<30> i) {data = i;}

    Jet& operator=(const Jet& rhs) {
      data = rhs.data;
      return *this;
    }

    operator ap_uint<30>() {return (ap_uint<30>) data;}


    ap_uint<16> et()     {return ((data) & 0xFFFF);}
    ap_uint<5>  phi()    {return ((data >> 16) & 0x1F);}
    ap_uint<6>  eta()    {return ((data >> 21) & 0x3F);}
    ap_uint<3>  time()   {return ((data >> 27) & 0x7);}

#ifndef __SYNTHESIS__
    string toString() {
      return "Jet [" + 
	to_string(this->et()) + ", (" + 
	to_string(this->phi()) + ", " + 
	to_string(this->eta()) + "), " + 
	to_string(this->time()) + "] "; 
    }
#endif

    ap_uint<30> data;
};

class Region{

  public:
    Region() : data(0){;}

    Region(ap_uint<10> seed_et, ap_uint<14> region_et, ap_uint<5> phi, ap_uint<6> eta, ap_uint<3> time){
      data = (seed_et) |
	  (((ap_uint<38>) region_et) << 10) |
	  (((ap_uint<38>)       phi) << 24) |
	  (((ap_uint<38>)       eta) << 29) |
	  (((ap_uint<38>)      time) << 35);
    }
    
    Region(ap_uint<38> i){ data = i;}

    Region& operator=(const Region& rhs) {
      data = rhs.data;
      return *this;
    }

    operator ap_uint<38>() {return (ap_uint<38>) data;}
            
    ap_uint<10> seed_et() {return ((data) & 0x3FF);}
    ap_uint<14> region_et()  {return ((data >> 10) & 0x3FFF);}
    ap_uint<5>  phi()        {return ((data >> 24) & 0x1F);}
    ap_uint<6>  eta()        {return ((data >> 29) & 0x3F);}
    ap_uint<3>  time()       {return ((data >> 35) & 0x7);}

#ifndef __SYNTHESIS__
    string toString() {
      return "Region [" + 
	to_string(this->seed_et()) + "," + 
	to_string(this->region_et()) + ", (" + 
	to_string(this->phi()) + ", " + 
	to_string(this->eta()) + "), " + 
	to_string(this->time()) + "] "; 
    }
#endif

    ap_uint<38> data;

};

#endif /* __JETOBJECTS_H__ */
