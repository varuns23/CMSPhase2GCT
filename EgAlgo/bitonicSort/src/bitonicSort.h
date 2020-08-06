#ifndef _BITONICSORTIO_H_
#define _BITONICSORTIO_H_

#include <iostream>
#include "ap_int.h"
#define N 32

using namespace std;

typedef ap_uint<32> din_t;
typedef ap_uint<6> dloop_t;

class GreaterSmaller{
public:
    din_t greater, smaller;
};

void bitonicSort(din_t in[N], din_t out[N]);

#endif


