#include "algo_top_parameters.h"
#include "algo_top.h"
#include <algorithm>
#include <utility>
#include "../../JetObjects.h"
#include "bitonicSort16.h"
using namespace std;
using namespace algo;

void unpackInputLink(hls::stream<algo::axiword576> &ilink, Tower towers[TOWERS_IN_ETA/2]) {
#pragma HLS PIPELINE II=N_WORDS_PER_FRAME
#pragma HLS ARRAY_PARTITION variable=towers complete dim=0
#pragma HLS INTERFACE axis port=ilink
#pragma HLS INLINE

  ap_uint<576> word_576b_;

#ifndef __SYNTHESIS__
  // Avoid simulation warnings
  if (ilink.empty()) return;
#endif

  word_576b_ = ilink.read().data;

  jet[0]  = Jet(word_576b_( 29,   0));
  jet[1]  = Jet(word_576b_( 59,  30));
  jet[2]  = Jet(word_576b_(179,  60));
  jet[3]  = Jet(word_576b_(209, 180));
  jet[4]  = Jet(word_576b_(239, 210));
  jet[5]  = Jet(word_576b_(269, 240));
  jet[6]  = Jet(word_576b_(299, 270));
  jet[7]  = Jet(word_576b_(329, 300));
  jet[8]  = Jet(word_576b_(359, 330));
  jet[9]  = Jet(word_576b_(389, 360));
  jet[10] = Jet(word_576b_(419, 390));
  jet[11] = Jet(word_576b_(449, 420));
  jet[12] = Jet(word_576b_(479, 450));
  jet[13] = Jet(word_576b_(509, 480));
  jet[14] = Jet(word_576b_(539, 510));

  return;
}
int main()
{
    din_t in[N];
    din_t out[N];

    //srand((unsigned)time(0));

    for(int h=0; h<N; h++)
        {
                in[h] = jet[h] % 100;
                cout << "numbers are: " << in[h] << endl;
        } 
        
    bitonicSort16(in, out);
    
    for(int i=0; i<N; i++){
	cout << out[i] << " ";
	}

	cout << endl;

    return 0;
}

