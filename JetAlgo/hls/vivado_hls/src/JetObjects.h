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
	(((ap_uint<30>) time) << 27); 
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

class Region3x3{

  public:
    Region3x3() : data(0){;}

    Region3x3(ap_uint<10> seed_et, ap_uint<14> region_et, ap_uint<5> phi, ap_uint<6> eta, ap_uint<3> time){
      data = (seed_et) |
	  (((ap_uint<38>) region_et) << 10) |
	  (((ap_uint<38>)       phi) << 24) |
	  (((ap_uint<38>)       eta) << 29) |
	  (((ap_uint<38>)      time) << 35);
    }
    Region3x3(ap_uint<38> i){ data = i;}

    Region3x3& operator=(const Region3x3& rhs) {
      data = rhs.data;
      return *this;
    }

    operator ap_uint<38>() {return (ap_uint<38>) data;}
            
    ap_uint<10> seed_et()    {return ((data) & 0x3FF);}
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

class Region9x9{

  public:
    Region9x9() : data(0){;}

    Region9x9(ap_uint<10> seed_et, ap_uint<14> region_et, ap_uint<5> phi, ap_uint<6> eta, ap_uint<3> time, ap_uint<9> upper_et, ap_uint<9> lower_et){
      data = (seed_et) |
	  (((ap_uint<56>) region_et) << 10) |
	  (((ap_uint<56>)       phi) << 24) |
	  (((ap_uint<56>)       eta) << 29) |
	  (((ap_uint<56>)      time) << 35) |
	  (((ap_uint<56>)  upper_et) << 38) |
	  (((ap_uint<56>)  lower_et) << 47);
    }
    Region9x9(ap_uint<56> i){ data = i;}

    Region9x9& operator=(const Region9x9& rhs) {
      data = rhs.data;
      return *this;
    }

    operator ap_uint<56>() {return (ap_uint<56>) data;}
            
    ap_uint<10> seed_et()    {return ((data) & 0x3FF);}
    ap_uint<14> region_et()  {return ((data >> 10) & 0x3FFF);}
    ap_uint<5>  phi()        {return ((data >> 24) & 0x1F);}
    ap_uint<6>  eta()        {return ((data >> 29) & 0x3F);}
    ap_uint<3>  time()       {return ((data >> 35) & 0x7);}
    ap_uint<9> upper_et()   {return ((data >> 38) & 0x1FF);}//not sure if 0x3FFF is right
    ap_uint<9> lower_et()   {return ((data >> 49) & 0x1FF);}//not sure if 0x3FFF is right

#ifndef __SYNTHESIS__
    string toString() {
      return "Region9x9 [" + 
	to_string(this->seed_et()) + "," + 
	to_string(this->region_et()) + ", (" + 
	to_string(this->phi()) + ", " + 
	to_string(this->eta()) + "), " + 
	to_string(this->time()) + ", ("; 
        to_string(this->upper_et()) + ", ";
        to_string(this->lower_et()) + ")] ";
    }
#endif

    ap_uint<56> data;

};

ap_uint<9> getUpperSum(Region3x3 regNW, Region3x3 regN, Region3x3 regNE, Region3x3 regW, Region3x3 regC, Region3x3 regE, Region3x3 regSW, Region3x3 regS, Region3x3 regSE){
#pragma HLS PIPELINE II=9
#pragma HLS INLINE

  ap_uint<9> sum =
     regNW.region_et() + regN.region_et() + regNE.region_et() + 
                                            regE.region_et();
 
  return sum;
}
ap_uint<9> getLowerSum(Region3x3 regNW, Region3x3 regN, Region3x3 regNE, Region3x3 regW, Region3x3 regC, Region3x3 regE, Region3x3 regSW, Region3x3 regS, Region3x3 regSE){
#pragma HLS PIPELINE II=9
#pragma HLS INLINE

  ap_uint<9> sum =
     regW.region_et()  + regC.region_et() + 
     regSW.region_et() + regS.region_et() + regSE.region_et();
 
  return sum;
}
ap_uint<14> get9x9Sum(Region3x3 regNW, Region3x3 regN, Region3x3 regNE, Region3x3 regW, Region3x3 regC, Region3x3 regE, Region3x3 regSW, Region3x3 regS, Region3x3 regSE){
#pragma HLS PIPELINE II=9
#pragma HLS INLINE

  ap_uint<14> sum = 
     regNW.region_et() + regN.region_et() + regNE.region_et() +
     regW.region_et()  + regC.region_et() + regE.region_et()  +
     regSW.region_et() + regS.region_et() + regSE.region_et();

  return sum;  
}
ap_uint<14> isJet(Region9x9 regNW, Region9x9 regN, Region9x9 regNE, Region9x9 regW, Region9x9 regC, Region9x9 regE, Region9x9 regSW, Region9x9 regS, Region9x9 regSE) {
#pragma HLS PIPELINE II=9
#pragma HLS INLINE
  ap_uint<14> sum;
  if(regC.region_et() > regNE.region_et() and regC.region_et() > regE.region_et() and regC.region_et() > regSE.region_et() and regC.region_et() > regS.region_et() and regC.region_et() >= regN.region_et() and regC.region_et() >= regNW.region_et() and regC.region_et() >= regW.region_et() and regC.region_et() >= regSW.region_et()) {
     sum = 
       regNW.region_et() + regN.region_et() + regNE.region_et() +
       regW.region_et()  + regC.region_et() + regE.region_et()  +
       regSW.region_et() + regS.region_et() + regSE.region_et();
  }
  else{
     sum = 0;
  }
  return sum;
}
#endif /* __JETOBJECTS_H__ */
