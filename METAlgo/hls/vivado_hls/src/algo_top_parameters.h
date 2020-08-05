/**
 * algo_top_parameters.h
 *
 * Defines the algorithm related configuration parameters.
 */

#ifndef __ALGO_TOP_PARAMETERS_H__
#define __ALGO_TOP_PARAMETERS_H__

/** Common algorithm definitions, do not remove **/
// Un-comment to have algo as a passthrough for testing purposes
//#define ALGO_PASSTHROUGH

// Number of data words per processing cycle/frame
const int N_WORDS_PER_FRAME	= 9;
// 576b inputs
#define N_INPUT_WORDS_PER_FRAME 9
// 576b outputs
#define N_OUTPUT_WORDS_PER_FRAME 9

/** Algorithm specific parameters **/
#define TOWERS_IN_ETA 34
#define TOWERS_IN_PHI 32

/** More common algorithm definitions, do not remove **/
// N_INPUT_LINKS and N_OUTPUT_LINKS need to be numerically specified so that wrapper generators work.
// -- N_INPUT_LINKS = TOWERS_IN_PHI*2
// -- For only one eta half
#define N_INPUT_LINKS	64 
// -- N_OUTPUT_LINKS = TOWERS_IN_PHI*2 
#define N_OUTPUT_LINKS	64

#endif
 /* !__ALGO_TOP_PARAMETERS_H__ */
