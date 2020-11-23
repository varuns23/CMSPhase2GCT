#ifndef __ETA_STITCH_H__
#define __ETA_STITCH_H__

#include <stdint.h>
#include <ap_int.h>
#include <hls_stream.h>

#include "eta_stitch_parameters.h"

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

#endif /* !__ETA_STITCH_H__ */
