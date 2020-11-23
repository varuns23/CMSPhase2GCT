#ifndef __ALGO_TOP_H__
#define __ALGO_TOP_H__

#include <stdint.h>
#include <ap_int.h>
#include <hls_stream.h>

#include "algo_top_parameters.h"


typedef struct inputWord {
	ap_uint<64> data;
	ap_uint<8> user;
	ap_uint<1> last;
} inputWord;

typedef struct outputWord {
	ap_uint<64> data;
	ap_uint<8> user;
	ap_uint<1> last;
} outputWord;

void etaStitchStream(hls::stream<inputWord> link_in[N_INPUT_LINKS], hls::stream<outputWord> link_out[N_OUTPUT_LINKS]);

#endif /* !__ALGO_TOP_H__ */
