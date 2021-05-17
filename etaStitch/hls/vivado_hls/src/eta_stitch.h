#ifndef __ETA_STITCH_H__
#define __ETA_STITCH_H__

#include <stdint.h>
#include <ap_int.h>
#include <hls_stream.h>

// Number of data words per processing cycle/frame
const int N_WORDS_PER_FRAME = 9;

/** Algorithm specific parameters **/
#define TOWERS_IN_ETA 17
#define TOWERS_IN_PHI 32

/** Link information **/

#define N_INPUT_LINKS TOWERS_IN_PHI
#define N_OUTPUT_LINKS TOWERS_IN_PHI


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

void algoStream(hls::stream<inputWord> link_in[N_INPUT_LINKS], hls::stream<outputWord> link_out[N_OUTPUT_LINKS]);

#endif /* !__ETA_STITCH_H__ */
