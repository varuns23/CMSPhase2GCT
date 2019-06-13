#include "inputMapping.hh"


bool mappingInput(
      ap_uint<192> _in_links       [N_CH_IN],
      ap_uint<192> _mapped_in_links[N_CH_IN]
      ){

#pragma HLS PIPELINE II=3
#pragma HLS ARRAY_PARTITION variable=_in_links complete dim=0
#pragma HLS ARRAY_PARTITION variable=_mapped_in_links complete dim=0

   _mapped_in_links[3]  = _in_links[0];
   _mapped_in_links[4]  = _in_links[1];
   _mapped_in_links[1]  = _in_links[2];
   _mapped_in_links[0]  = _in_links[3];
   _mapped_in_links[5]  = _in_links[4];
   _mapped_in_links[2]  = _in_links[5];
   _mapped_in_links[11] = _in_links[6];
   _mapped_in_links[10] = _in_links[7];
   _mapped_in_links[9]  = _in_links[8];
   _mapped_in_links[8]  = _in_links[9];
   _mapped_in_links[6]  = _in_links[10];
   _mapped_in_links[7]  = _in_links[11];
   _mapped_in_links[15] = _in_links[12];
   _mapped_in_links[16] = _in_links[13];
   _mapped_in_links[12] = _in_links[14];
   _mapped_in_links[13] = _in_links[15];
   _mapped_in_links[17] = _in_links[16];
   _mapped_in_links[23] = _in_links[17];
   _mapped_in_links[14] = _in_links[18];
   _mapped_in_links[22] = _in_links[19];
   _mapped_in_links[18] = _in_links[20];
   _mapped_in_links[21] = _in_links[21];
   _mapped_in_links[19] = _in_links[22];
   _mapped_in_links[20] = _in_links[23];

   _mapped_in_links[27] = _in_links[24];
   _mapped_in_links[28] = _in_links[25];
   _mapped_in_links[24] = _in_links[26];
   _mapped_in_links[25] = _in_links[27];
   _mapped_in_links[29] = _in_links[28];
   _mapped_in_links[35] = _in_links[29];
   _mapped_in_links[26] = _in_links[30];
   _mapped_in_links[34] = _in_links[31];
   _mapped_in_links[30] = _in_links[32];
   _mapped_in_links[33] = _in_links[33];
   _mapped_in_links[31] = _in_links[34];
   _mapped_in_links[32] = _in_links[35];
   _mapped_in_links[43] = _in_links[36];
   _mapped_in_links[45] = _in_links[37];
   _mapped_in_links[47] = _in_links[38];
   _mapped_in_links[42] = _in_links[39];
   _mapped_in_links[44] = _in_links[40];
   _mapped_in_links[46] = _in_links[41];
   _mapped_in_links[38] = _in_links[42];
   _mapped_in_links[40] = _in_links[43];
   _mapped_in_links[41] = _in_links[44];
   _mapped_in_links[36] = _in_links[45];
   _mapped_in_links[37] = _in_links[46];
   _mapped_in_links[39] = _in_links[47];

   return true;
}


