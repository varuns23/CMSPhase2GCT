#ifndef _BITONICSORT32_H_
#define _BITONICSORT32_H_

#include <iostream>
#include "ap_int.h"
#include "../../JetObjects.h"
#define N 32

using namespace std;

//typedef ap_uint<32> din_t;
typedef ap_uint<6> dloop_t;

class GreaterSmaller{
public:
    Jet greater, smaller;
};

void bitonicSort32(Jet in[N], Jet out[N]);

#endif


