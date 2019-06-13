#ifndef inputMapping_hh
#define inputMapping_hh
 
#include <stdint.h>
#include <unistd.h>
 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
 
#include <ap_int.h>
#include <ap_fixed.h>
 
#include "GCT.hh"
#include "../../../../../APx_Gen0_Algo/VivadoHls/null_algo_unpacked/vivado_hls/src/algo_unpacked.h"
 
using namespace std;
 
bool mappingInput(
      ap_uint<192> _in_links       [N_CH_IN],
      ap_uint<192> _mapped_in_links[N_CH_IN]
      );
 
#endif
