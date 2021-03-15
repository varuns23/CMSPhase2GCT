/**
 * algo_top_parameters.h
 *
 * Defines the algorithm related configuration parameters.
 */

#ifndef __ALGO_TOP_PARAMETERS_H__
#define __ALGO_TOP_PARAMETERS_H__

/** Common algorithm definitions, do not remove **/
// Un-comment to have algo as a pass-through for testing purposes
//#define ALGO_PASSTHROUGH

// Number of data words per processing cycle/frame
const int N_WORDS_PER_FRAME	= 9;

/** Algorithm specific parameters **/
#define TOWERS_IN_ETA 17
#define TOWERS_IN_PHI 36

/** More common algorithm definitions, do not remove **/

#define N_INPUT_LINKS	TOWERS_IN_PHI
#define N_OUTPUT_LINKS	TOWERS_IN_PHI

#endif
 /* !__ALGO_TOP_PARAMETERS_H__ */
