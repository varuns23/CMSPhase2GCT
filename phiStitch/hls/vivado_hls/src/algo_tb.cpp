#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <vector>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream> 
#include <string>
#include <argp.h>

#include "phi_stitch.h"

using namespace std;


/* argp declarations */
static char doc[] = "APx HLS Algo C/RTL simulation";

static struct argp_option options[] = {
   {"read", 'r', "FILE", 0, "Reads target file and writes contexts to AXI streams", 0},
   {"write", 'w', "FILE", 0, "Writes algorithm results to target file", 0},
   {"compare", 'c', "FILE", 0, "Compare the algorithm output to target file", 0},
   {"verbose", 'v', 0, 0, "Produce verbose output", 0},
   {0},
};

struct arguments {
   char *readfile;
   char *writefile;
   char *cmpfile;
   bool verbose;
};

struct arguments arguments = {0};

static error_t parse_opt(int key, char *arg, struct argp_state *state) {
   struct arguments *arguments = (struct arguments *)state->input;

   switch (key) {
      case 'r': arguments->readfile = arg; break;
      case 'w': arguments->writefile = arg; break;
      case 'c': arguments->cmpfile = arg; break;
      case 'v': arguments->verbose = true; break;
      default: return ARGP_ERR_UNKNOWN; break;
   }

   return 0;
}

static struct argp argp = { options, parse_opt, NULL, doc };


int main(int argc, char ** argv) {

   argp_parse(&argp, argc, argv, 0, 0, &arguments);

   string ifname(arguments.readfile); // input test vector
   string ofname(arguments.writefile); // output test vector
   string orfname(arguments.cmpfile); // reference output vector


   // Open input stream...
   ifstream ifs(ifname.c_str());
   if (!ifs.is_open()) {
      cerr << "Error opening input file: " << ifname << endl;
      exit(1);
   }

   // Open output stream and write a header
   ofstream ofs(ofname.c_str());
   if (!ofs.is_open()) {
      cerr << "Error opening output file: " << ofname << endl;
      exit(1);
   }

   // Open output reference stream...
   ifstream orfs(orfname.c_str());
   if (!orfs.is_open()) {
      cerr << "Error opening output reference file: " << orfname << endl;
      exit(1);
   }

   //writing link text to output file (to be done once)
   ofs<<"WordCnt ";
   for(size_t ilink=0; ilink<N_OUTPUT_LINKS; ilink++)
   {
      ofs<<dec<<setw(13)<<" "<<"Link "<<setw(2)<<ilink;
   }
   ofs<<endl<<"#BeginData"<<endl;

   //Reading input file to a vector
   std::vector<std::string> inWords;
   for(string line; getline(ifs, line);){
      if( line.length() <= 1 || line.find("Link") != std::string::npos || line[0] == '#' )
	 continue;
      inWords.push_back(line);
   }
   ifs.close();

   for(size_t iline=0; iline<inWords.size(); iline+=N_WORDS_PER_FRAME){

      hls::stream<inputWord> link_in[N_INPUT_LINKS];
      hls::stream<outputWord> link_out[N_OUTPUT_LINKS];

      for(size_t iWord = iline; iWord < iline+N_WORDS_PER_FRAME; iWord++){
	 std::istringstream iss(inWords[iWord]);
	 int cycle;
	 iss >> hex>> cycle;

	 for(size_t ilink=0; ilink<N_INPUT_LINKS; ilink++) 
	 {
	    uint64_t tmp;
	    iss >> hex >> tmp;

	    inputWord word; word.user = 0; word.last = 1;
	    word.data(63, 0) = (ap_uint<64> ) tmp;

	    link_in[ilink].write(word);
	    //cout << hex << tmp <<  " ";
	 }
      }
      //Section to call algorithm
      algoStream(link_in, link_out);

      //Section to write output
      for(size_t oWord = iline; oWord < iline+N_WORDS_PER_FRAME; oWord++){

	 ofs << "0x" << setfill('0') << setw(4) <<hex<< oWord<<"  ";
	 for (int olink = 0; olink < N_OUTPUT_LINKS; olink++)
	 {
	    uint64_t tmp_data;
	    tmp_data = (uint64_t) link_out[olink].read().data;
	    ofs << "  0x" << setfill('0') << setw(16) << hex << tmp_data;
	 }
	 ofs <<endl;
	 
      }

   }
   ofs.close();


   string output_diff("diff -w " + ofname + " " + orfname);

   if (system(output_diff.c_str())) {
      cout << "*** HLS output DOES NOT match: ''' FAILED! '''" << endl;
      return 0;
   } else {
      cout << "*** HLS output matches! *** PASSED ***" << endl;
      return 0;
   }
}
