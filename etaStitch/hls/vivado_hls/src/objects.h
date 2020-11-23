#ifndef __OBJECTS_H__
#define __OBJECTS_H__

#include "algo_top_parameters.h"

using namespace std;

class Tower {
public:
	Tower() :
			clustered_et(0), total_et(0), peak_phi(0), peak_eta(0), peak_time(0), hOe(0) {
	};

	Tower(uint32_t i) {
		this->clustered_et = i;
		this->total_et = i >> 10;
		this->peak_phi = i >> 20;
		this->peak_eta = i >> 23;
		this->peak_time = i >> 26;
		this->hOe = i >> 29;

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

		return (  ((uint32_t) (this->hOe) << 29))
				| ((uint32_t) (this->peak_time) << 26)
				| ((uint32_t) (this->peak_eta) << 23)
				| ((uint32_t) (this->peak_phi) << 20)
				| ((uint32_t) (this->total_et) << 10)
				| ((uint32_t) this->clustered_et << 0);
	}

	ap_uint<10> clustered_et;
	ap_uint<10> total_et;
	ap_uint<3> peak_phi;
	ap_uint<3> peak_eta;
	ap_uint<3> peak_time;
	ap_uint<3> hOe;
};

#endif /*!__OBJECTS_H__*/
