#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#include "algo_top.h"

using namespace std;

ap_uint<576> link_in[N_INPUT_LINKS];
ap_uint<576> link_out[N_OUTPUT_LINKS];

int main(int argc, char ** argv) {

	string test_vector;
	test_vector = argv[1];

	string ifname(test_vector + "_in.txt"); // input test vector
	string ofname(test_vector + "_out.txt"); // output test vector
	string orfname(test_vector + "_out_ref.txt"); // reference output vector

	// Open input stream...
	ifstream ifs(ifname.c_str());
	if (!ifs.is_open()) {
		cerr << "Error opening input file: " << ifname << endl;
		exit(1);
	}

	//...and position at the beginning of input test data
	string line;
	while (true) {
		ifs >> line;
		if (line.compare("#BeginData") == 0)
			break;
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

	uint32_t wordCnt = 0;

	uint64_t data[N_INPUT_LINKS];

	ofs << "=====================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================================" << endl;
	ofs << "WordCnt             LINK_00               LINK_01               LINK_02               LINK_03               LINK_04               LINK_05               LINK_06               LINK_07               LINK_08               LINK_09               LINK_10               LINK_11               LINK_12               LINK_13               LINK_14               LINK_15               LINK_16               LINK_17               LINK_18               LINK_19               LINK_20               LINK_21               LINK_22               LINK_23               LINK_24               LINK_25               LINK_26               LINK_27               LINK_28               LINK_29               LINK_30               LINK_31" << endl;
	ofs << "#BeginData" << endl;

	while (!ifs.eof()) {
		for (int cyc = 0; cyc < 9; cyc++) {
			ifs >> hex >> wordCnt;
			if  (ifs.eof())
				break;

			for (int link = 0; link < N_INPUT_LINKS; link++)
			{
				ap_uint<64> tmp;
				if (cyc == 0) {
					ifs >> hex >> tmp;
					link_in[link].range(63, 0) = tmp;
				}
				else if (cyc == 1) {
					ifs >> hex >> tmp;
					link_in[link].range(127, 64) = tmp;
				}
				else if (cyc == 2) {
					ifs >> hex >> tmp;
					link_in[link].range(191, 128) = tmp;
				}
				else if (cyc == 3) {
					ifs >> hex >> tmp;
					link_in[link].range(255, 192) = tmp;
				}
				else if (cyc == 4) {
					ifs >> hex >> tmp;
					link_in[link].range(319, 256) = tmp;
				}
				else if (cyc == 5) {
					ifs >> hex >> tmp;
					link_in[link].range(383, 320) = tmp;
				}
				else if (cyc == 6) {
					ifs >> hex >> tmp;
					link_in[link].range(447, 384) = tmp;
				}
				else if (cyc == 7) {
					ifs >> hex >> tmp;
					link_in[link].range(511, 448) = tmp;
				}

				else {
					ifs >> hex >> tmp;
					link_in[link].range(575, 512) = tmp;
				}

				if  (ifs.eof())
					break;
			}
		}

		if  (ifs.eof())
			break;

		algo_unpacked(link_in, link_out);

		wordCnt-=8;

		for (int cyc = 0; cyc < 9; cyc++) {
			ofs << "0x" << setfill('0') << setw(4) << hex << wordCnt++ << "   ";
			for (int link = 0; link < N_OUTPUT_LINKS; link++) {

				if (cyc == 0)
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(63,0).to_int64() << "    ";
				else if (cyc == 1)
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(127,64).to_int64() << "    ";
				else if (cyc == 2)
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(191,128).to_int64() << "    ";
				else if (cyc == 3)
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(255,192).to_int64() << "    ";
				else if (cyc == 4)
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(319,256).to_int64() << "    ";
				else if (cyc == 5)
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(383,320).to_int64() << "    ";
				else if (cyc == 6)
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(447,384).to_int64() << "    ";
				else if (cyc == 7)
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(511,448).to_int64() << "    ";
				else
					ofs << "0x" << setfill('0') << setw(16) << hex << link_out[link].range(575,512).to_int64() << "    ";

			}
			ofs<< std::endl;
		}
	}

	string output_diff("diff -w " + ofname + " " + orfname);

	if (system(output_diff.c_str())) {
		cout << "*** Output data verification. FAILED! ***" << endl;
		return 0;
	} else {
		cout << "*** Output data verification. PASSED ***" << endl;
		return 0;
	}
}
