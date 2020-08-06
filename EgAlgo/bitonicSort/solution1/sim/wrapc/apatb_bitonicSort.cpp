// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "in_0_V"
#define AUTOTB_TVIN_in_0_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_0_V.dat"
// wrapc file define: "in_1_V"
#define AUTOTB_TVIN_in_1_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_1_V.dat"
// wrapc file define: "in_2_V"
#define AUTOTB_TVIN_in_2_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_2_V.dat"
// wrapc file define: "in_3_V"
#define AUTOTB_TVIN_in_3_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_3_V.dat"
// wrapc file define: "in_4_V"
#define AUTOTB_TVIN_in_4_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_4_V.dat"
// wrapc file define: "in_5_V"
#define AUTOTB_TVIN_in_5_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_5_V.dat"
// wrapc file define: "in_6_V"
#define AUTOTB_TVIN_in_6_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_6_V.dat"
// wrapc file define: "in_7_V"
#define AUTOTB_TVIN_in_7_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_7_V.dat"
// wrapc file define: "in_8_V"
#define AUTOTB_TVIN_in_8_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_8_V.dat"
// wrapc file define: "in_9_V"
#define AUTOTB_TVIN_in_9_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_9_V.dat"
// wrapc file define: "in_10_V"
#define AUTOTB_TVIN_in_10_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_10_V.dat"
// wrapc file define: "in_11_V"
#define AUTOTB_TVIN_in_11_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_11_V.dat"
// wrapc file define: "in_12_V"
#define AUTOTB_TVIN_in_12_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_12_V.dat"
// wrapc file define: "in_13_V"
#define AUTOTB_TVIN_in_13_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_13_V.dat"
// wrapc file define: "in_14_V"
#define AUTOTB_TVIN_in_14_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_14_V.dat"
// wrapc file define: "in_15_V"
#define AUTOTB_TVIN_in_15_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_15_V.dat"
// wrapc file define: "in_16_V"
#define AUTOTB_TVIN_in_16_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_16_V.dat"
// wrapc file define: "in_17_V"
#define AUTOTB_TVIN_in_17_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_17_V.dat"
// wrapc file define: "in_18_V"
#define AUTOTB_TVIN_in_18_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_18_V.dat"
// wrapc file define: "in_19_V"
#define AUTOTB_TVIN_in_19_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_19_V.dat"
// wrapc file define: "in_20_V"
#define AUTOTB_TVIN_in_20_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_20_V.dat"
// wrapc file define: "in_21_V"
#define AUTOTB_TVIN_in_21_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_21_V.dat"
// wrapc file define: "in_22_V"
#define AUTOTB_TVIN_in_22_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_22_V.dat"
// wrapc file define: "in_23_V"
#define AUTOTB_TVIN_in_23_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_23_V.dat"
// wrapc file define: "in_24_V"
#define AUTOTB_TVIN_in_24_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_24_V.dat"
// wrapc file define: "in_25_V"
#define AUTOTB_TVIN_in_25_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_25_V.dat"
// wrapc file define: "in_26_V"
#define AUTOTB_TVIN_in_26_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_26_V.dat"
// wrapc file define: "in_27_V"
#define AUTOTB_TVIN_in_27_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_27_V.dat"
// wrapc file define: "in_28_V"
#define AUTOTB_TVIN_in_28_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_28_V.dat"
// wrapc file define: "in_29_V"
#define AUTOTB_TVIN_in_29_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_29_V.dat"
// wrapc file define: "in_30_V"
#define AUTOTB_TVIN_in_30_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_30_V.dat"
// wrapc file define: "in_31_V"
#define AUTOTB_TVIN_in_31_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_31_V.dat"
// wrapc file define: "out_0_V"
#define AUTOTB_TVOUT_out_0_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_0_V.dat"
// wrapc file define: "out_1_V"
#define AUTOTB_TVOUT_out_1_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_1_V.dat"
// wrapc file define: "out_2_V"
#define AUTOTB_TVOUT_out_2_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_2_V.dat"
// wrapc file define: "out_3_V"
#define AUTOTB_TVOUT_out_3_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_3_V.dat"
// wrapc file define: "out_4_V"
#define AUTOTB_TVOUT_out_4_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_4_V.dat"
// wrapc file define: "out_5_V"
#define AUTOTB_TVOUT_out_5_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_5_V.dat"
// wrapc file define: "out_6_V"
#define AUTOTB_TVOUT_out_6_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_6_V.dat"
// wrapc file define: "out_7_V"
#define AUTOTB_TVOUT_out_7_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_7_V.dat"
// wrapc file define: "out_8_V"
#define AUTOTB_TVOUT_out_8_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_8_V.dat"
// wrapc file define: "out_9_V"
#define AUTOTB_TVOUT_out_9_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_9_V.dat"
// wrapc file define: "out_10_V"
#define AUTOTB_TVOUT_out_10_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_10_V.dat"
// wrapc file define: "out_11_V"
#define AUTOTB_TVOUT_out_11_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_11_V.dat"
// wrapc file define: "out_12_V"
#define AUTOTB_TVOUT_out_12_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_12_V.dat"
// wrapc file define: "out_13_V"
#define AUTOTB_TVOUT_out_13_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_13_V.dat"
// wrapc file define: "out_14_V"
#define AUTOTB_TVOUT_out_14_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_14_V.dat"
// wrapc file define: "out_15_V"
#define AUTOTB_TVOUT_out_15_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_15_V.dat"
// wrapc file define: "out_16_V"
#define AUTOTB_TVOUT_out_16_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_16_V.dat"
// wrapc file define: "out_17_V"
#define AUTOTB_TVOUT_out_17_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_17_V.dat"
// wrapc file define: "out_18_V"
#define AUTOTB_TVOUT_out_18_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_18_V.dat"
// wrapc file define: "out_19_V"
#define AUTOTB_TVOUT_out_19_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_19_V.dat"
// wrapc file define: "out_20_V"
#define AUTOTB_TVOUT_out_20_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_20_V.dat"
// wrapc file define: "out_21_V"
#define AUTOTB_TVOUT_out_21_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_21_V.dat"
// wrapc file define: "out_22_V"
#define AUTOTB_TVOUT_out_22_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_22_V.dat"
// wrapc file define: "out_23_V"
#define AUTOTB_TVOUT_out_23_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_23_V.dat"
// wrapc file define: "out_24_V"
#define AUTOTB_TVOUT_out_24_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_24_V.dat"
// wrapc file define: "out_25_V"
#define AUTOTB_TVOUT_out_25_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_25_V.dat"
// wrapc file define: "out_26_V"
#define AUTOTB_TVOUT_out_26_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_26_V.dat"
// wrapc file define: "out_27_V"
#define AUTOTB_TVOUT_out_27_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_27_V.dat"
// wrapc file define: "out_28_V"
#define AUTOTB_TVOUT_out_28_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_28_V.dat"
// wrapc file define: "out_29_V"
#define AUTOTB_TVOUT_out_29_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_29_V.dat"
// wrapc file define: "out_30_V"
#define AUTOTB_TVOUT_out_30_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_30_V.dat"
// wrapc file define: "out_31_V"
#define AUTOTB_TVOUT_out_31_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_31_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "out_0_V"
#define AUTOTB_TVOUT_PC_out_0_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_0_V.dat"
// tvout file define: "out_1_V"
#define AUTOTB_TVOUT_PC_out_1_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_1_V.dat"
// tvout file define: "out_2_V"
#define AUTOTB_TVOUT_PC_out_2_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_2_V.dat"
// tvout file define: "out_3_V"
#define AUTOTB_TVOUT_PC_out_3_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_3_V.dat"
// tvout file define: "out_4_V"
#define AUTOTB_TVOUT_PC_out_4_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_4_V.dat"
// tvout file define: "out_5_V"
#define AUTOTB_TVOUT_PC_out_5_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_5_V.dat"
// tvout file define: "out_6_V"
#define AUTOTB_TVOUT_PC_out_6_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_6_V.dat"
// tvout file define: "out_7_V"
#define AUTOTB_TVOUT_PC_out_7_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_7_V.dat"
// tvout file define: "out_8_V"
#define AUTOTB_TVOUT_PC_out_8_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_8_V.dat"
// tvout file define: "out_9_V"
#define AUTOTB_TVOUT_PC_out_9_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_9_V.dat"
// tvout file define: "out_10_V"
#define AUTOTB_TVOUT_PC_out_10_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_10_V.dat"
// tvout file define: "out_11_V"
#define AUTOTB_TVOUT_PC_out_11_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_11_V.dat"
// tvout file define: "out_12_V"
#define AUTOTB_TVOUT_PC_out_12_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_12_V.dat"
// tvout file define: "out_13_V"
#define AUTOTB_TVOUT_PC_out_13_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_13_V.dat"
// tvout file define: "out_14_V"
#define AUTOTB_TVOUT_PC_out_14_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_14_V.dat"
// tvout file define: "out_15_V"
#define AUTOTB_TVOUT_PC_out_15_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_15_V.dat"
// tvout file define: "out_16_V"
#define AUTOTB_TVOUT_PC_out_16_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_16_V.dat"
// tvout file define: "out_17_V"
#define AUTOTB_TVOUT_PC_out_17_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_17_V.dat"
// tvout file define: "out_18_V"
#define AUTOTB_TVOUT_PC_out_18_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_18_V.dat"
// tvout file define: "out_19_V"
#define AUTOTB_TVOUT_PC_out_19_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_19_V.dat"
// tvout file define: "out_20_V"
#define AUTOTB_TVOUT_PC_out_20_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_20_V.dat"
// tvout file define: "out_21_V"
#define AUTOTB_TVOUT_PC_out_21_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_21_V.dat"
// tvout file define: "out_22_V"
#define AUTOTB_TVOUT_PC_out_22_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_22_V.dat"
// tvout file define: "out_23_V"
#define AUTOTB_TVOUT_PC_out_23_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_23_V.dat"
// tvout file define: "out_24_V"
#define AUTOTB_TVOUT_PC_out_24_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_24_V.dat"
// tvout file define: "out_25_V"
#define AUTOTB_TVOUT_PC_out_25_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_25_V.dat"
// tvout file define: "out_26_V"
#define AUTOTB_TVOUT_PC_out_26_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_26_V.dat"
// tvout file define: "out_27_V"
#define AUTOTB_TVOUT_PC_out_27_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_27_V.dat"
// tvout file define: "out_28_V"
#define AUTOTB_TVOUT_PC_out_28_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_28_V.dat"
// tvout file define: "out_29_V"
#define AUTOTB_TVOUT_PC_out_29_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_29_V.dat"
// tvout file define: "out_30_V"
#define AUTOTB_TVOUT_PC_out_30_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_30_V.dat"
// tvout file define: "out_31_V"
#define AUTOTB_TVOUT_PC_out_31_V  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_31_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			in_0_V_depth = 0;
			in_1_V_depth = 0;
			in_2_V_depth = 0;
			in_3_V_depth = 0;
			in_4_V_depth = 0;
			in_5_V_depth = 0;
			in_6_V_depth = 0;
			in_7_V_depth = 0;
			in_8_V_depth = 0;
			in_9_V_depth = 0;
			in_10_V_depth = 0;
			in_11_V_depth = 0;
			in_12_V_depth = 0;
			in_13_V_depth = 0;
			in_14_V_depth = 0;
			in_15_V_depth = 0;
			in_16_V_depth = 0;
			in_17_V_depth = 0;
			in_18_V_depth = 0;
			in_19_V_depth = 0;
			in_20_V_depth = 0;
			in_21_V_depth = 0;
			in_22_V_depth = 0;
			in_23_V_depth = 0;
			in_24_V_depth = 0;
			in_25_V_depth = 0;
			in_26_V_depth = 0;
			in_27_V_depth = 0;
			in_28_V_depth = 0;
			in_29_V_depth = 0;
			in_30_V_depth = 0;
			in_31_V_depth = 0;
			out_0_V_depth = 0;
			out_1_V_depth = 0;
			out_2_V_depth = 0;
			out_3_V_depth = 0;
			out_4_V_depth = 0;
			out_5_V_depth = 0;
			out_6_V_depth = 0;
			out_7_V_depth = 0;
			out_8_V_depth = 0;
			out_9_V_depth = 0;
			out_10_V_depth = 0;
			out_11_V_depth = 0;
			out_12_V_depth = 0;
			out_13_V_depth = 0;
			out_14_V_depth = 0;
			out_15_V_depth = 0;
			out_16_V_depth = 0;
			out_17_V_depth = 0;
			out_18_V_depth = 0;
			out_19_V_depth = 0;
			out_20_V_depth = 0;
			out_21_V_depth = 0;
			out_22_V_depth = 0;
			out_23_V_depth = 0;
			out_24_V_depth = 0;
			out_25_V_depth = 0;
			out_26_V_depth = 0;
			out_27_V_depth = 0;
			out_28_V_depth = 0;
			out_29_V_depth = 0;
			out_30_V_depth = 0;
			out_31_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{in_0_V " << in_0_V_depth << "}\n";
			total_list << "{in_1_V " << in_1_V_depth << "}\n";
			total_list << "{in_2_V " << in_2_V_depth << "}\n";
			total_list << "{in_3_V " << in_3_V_depth << "}\n";
			total_list << "{in_4_V " << in_4_V_depth << "}\n";
			total_list << "{in_5_V " << in_5_V_depth << "}\n";
			total_list << "{in_6_V " << in_6_V_depth << "}\n";
			total_list << "{in_7_V " << in_7_V_depth << "}\n";
			total_list << "{in_8_V " << in_8_V_depth << "}\n";
			total_list << "{in_9_V " << in_9_V_depth << "}\n";
			total_list << "{in_10_V " << in_10_V_depth << "}\n";
			total_list << "{in_11_V " << in_11_V_depth << "}\n";
			total_list << "{in_12_V " << in_12_V_depth << "}\n";
			total_list << "{in_13_V " << in_13_V_depth << "}\n";
			total_list << "{in_14_V " << in_14_V_depth << "}\n";
			total_list << "{in_15_V " << in_15_V_depth << "}\n";
			total_list << "{in_16_V " << in_16_V_depth << "}\n";
			total_list << "{in_17_V " << in_17_V_depth << "}\n";
			total_list << "{in_18_V " << in_18_V_depth << "}\n";
			total_list << "{in_19_V " << in_19_V_depth << "}\n";
			total_list << "{in_20_V " << in_20_V_depth << "}\n";
			total_list << "{in_21_V " << in_21_V_depth << "}\n";
			total_list << "{in_22_V " << in_22_V_depth << "}\n";
			total_list << "{in_23_V " << in_23_V_depth << "}\n";
			total_list << "{in_24_V " << in_24_V_depth << "}\n";
			total_list << "{in_25_V " << in_25_V_depth << "}\n";
			total_list << "{in_26_V " << in_26_V_depth << "}\n";
			total_list << "{in_27_V " << in_27_V_depth << "}\n";
			total_list << "{in_28_V " << in_28_V_depth << "}\n";
			total_list << "{in_29_V " << in_29_V_depth << "}\n";
			total_list << "{in_30_V " << in_30_V_depth << "}\n";
			total_list << "{in_31_V " << in_31_V_depth << "}\n";
			total_list << "{out_0_V " << out_0_V_depth << "}\n";
			total_list << "{out_1_V " << out_1_V_depth << "}\n";
			total_list << "{out_2_V " << out_2_V_depth << "}\n";
			total_list << "{out_3_V " << out_3_V_depth << "}\n";
			total_list << "{out_4_V " << out_4_V_depth << "}\n";
			total_list << "{out_5_V " << out_5_V_depth << "}\n";
			total_list << "{out_6_V " << out_6_V_depth << "}\n";
			total_list << "{out_7_V " << out_7_V_depth << "}\n";
			total_list << "{out_8_V " << out_8_V_depth << "}\n";
			total_list << "{out_9_V " << out_9_V_depth << "}\n";
			total_list << "{out_10_V " << out_10_V_depth << "}\n";
			total_list << "{out_11_V " << out_11_V_depth << "}\n";
			total_list << "{out_12_V " << out_12_V_depth << "}\n";
			total_list << "{out_13_V " << out_13_V_depth << "}\n";
			total_list << "{out_14_V " << out_14_V_depth << "}\n";
			total_list << "{out_15_V " << out_15_V_depth << "}\n";
			total_list << "{out_16_V " << out_16_V_depth << "}\n";
			total_list << "{out_17_V " << out_17_V_depth << "}\n";
			total_list << "{out_18_V " << out_18_V_depth << "}\n";
			total_list << "{out_19_V " << out_19_V_depth << "}\n";
			total_list << "{out_20_V " << out_20_V_depth << "}\n";
			total_list << "{out_21_V " << out_21_V_depth << "}\n";
			total_list << "{out_22_V " << out_22_V_depth << "}\n";
			total_list << "{out_23_V " << out_23_V_depth << "}\n";
			total_list << "{out_24_V " << out_24_V_depth << "}\n";
			total_list << "{out_25_V " << out_25_V_depth << "}\n";
			total_list << "{out_26_V " << out_26_V_depth << "}\n";
			total_list << "{out_27_V " << out_27_V_depth << "}\n";
			total_list << "{out_28_V " << out_28_V_depth << "}\n";
			total_list << "{out_29_V " << out_29_V_depth << "}\n";
			total_list << "{out_30_V " << out_30_V_depth << "}\n";
			total_list << "{out_31_V " << out_31_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int in_0_V_depth;
		int in_1_V_depth;
		int in_2_V_depth;
		int in_3_V_depth;
		int in_4_V_depth;
		int in_5_V_depth;
		int in_6_V_depth;
		int in_7_V_depth;
		int in_8_V_depth;
		int in_9_V_depth;
		int in_10_V_depth;
		int in_11_V_depth;
		int in_12_V_depth;
		int in_13_V_depth;
		int in_14_V_depth;
		int in_15_V_depth;
		int in_16_V_depth;
		int in_17_V_depth;
		int in_18_V_depth;
		int in_19_V_depth;
		int in_20_V_depth;
		int in_21_V_depth;
		int in_22_V_depth;
		int in_23_V_depth;
		int in_24_V_depth;
		int in_25_V_depth;
		int in_26_V_depth;
		int in_27_V_depth;
		int in_28_V_depth;
		int in_29_V_depth;
		int in_30_V_depth;
		int in_31_V_depth;
		int out_0_V_depth;
		int out_1_V_depth;
		int out_2_V_depth;
		int out_3_V_depth;
		int out_4_V_depth;
		int out_5_V_depth;
		int out_6_V_depth;
		int out_7_V_depth;
		int out_8_V_depth;
		int out_9_V_depth;
		int out_10_V_depth;
		int out_11_V_depth;
		int out_12_V_depth;
		int out_13_V_depth;
		int out_14_V_depth;
		int out_15_V_depth;
		int out_16_V_depth;
		int out_17_V_depth;
		int out_18_V_depth;
		int out_19_V_depth;
		int out_20_V_depth;
		int out_21_V_depth;
		int out_22_V_depth;
		int out_23_V_depth;
		int out_24_V_depth;
		int out_25_V_depth;
		int out_26_V_depth;
		int out_27_V_depth;
		int out_28_V_depth;
		int out_29_V_depth;
		int out_30_V_depth;
		int out_31_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void bitonicSort (
ap_uint<32> in[32],
ap_uint<32> out[32]);

void AESL_WRAP_bitonicSort (
ap_uint<32> in[32],
ap_uint<32> out[32])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "out_0_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_0_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_0_V, AESL_token); // data

			sc_bv<32> *out_0_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_0_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_0_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_0_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_0_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_0_0_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_0_0_2[hls_map_index].range(31, 0) = sc_bv<32>(out_0_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_0_V_pc_buffer;
		}

		// output port post check: "out_1_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_1_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_1_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_1_V, AESL_token); // data

			sc_bv<32> *out_1_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_1_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_1_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_1_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_1_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_1_1_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_1_1_2[hls_map_index].range(31, 0) = sc_bv<32>(out_1_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_1_V_pc_buffer;
		}

		// output port post check: "out_2_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_2_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_2_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_2_V, AESL_token); // data

			sc_bv<32> *out_2_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_2_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_2_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_2_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_2_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_2_2_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_2_2_2[hls_map_index].range(31, 0) = sc_bv<32>(out_2_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_2_V_pc_buffer;
		}

		// output port post check: "out_3_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_3_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_3_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_3_V, AESL_token); // data

			sc_bv<32> *out_3_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_3_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_3_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_3_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_3_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_3_3_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_3_3_2[hls_map_index].range(31, 0) = sc_bv<32>(out_3_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_3_V_pc_buffer;
		}

		// output port post check: "out_4_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_4_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_4_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_4_V, AESL_token); // data

			sc_bv<32> *out_4_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_4_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_4_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_4_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_4_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_4_4_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_4_4_2[hls_map_index].range(31, 0) = sc_bv<32>(out_4_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_4_V_pc_buffer;
		}

		// output port post check: "out_5_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_5_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_5_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_5_V, AESL_token); // data

			sc_bv<32> *out_5_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_5_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_5_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_5_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_5_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_5_5_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_5_5_2[hls_map_index].range(31, 0) = sc_bv<32>(out_5_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_5_5_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_5_5_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_5_V_pc_buffer;
		}

		// output port post check: "out_6_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_6_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_6_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_6_V, AESL_token); // data

			sc_bv<32> *out_6_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_6_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_6_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_6_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_6_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_6_6_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_6_6_2[hls_map_index].range(31, 0) = sc_bv<32>(out_6_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_6_6_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_6_6_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_6_V_pc_buffer;
		}

		// output port post check: "out_7_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_7_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_7_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_7_V, AESL_token); // data

			sc_bv<32> *out_7_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_7_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_7_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_7_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_7_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_7_7_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_7_7_2[hls_map_index].range(31, 0) = sc_bv<32>(out_7_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_7_7_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_7_7_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_7_V_pc_buffer;
		}

		// output port post check: "out_8_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_8_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_8_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_8_V, AESL_token); // data

			sc_bv<32> *out_8_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_8_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_8_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_8_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_8_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_8_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_8_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_8_8_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (8) => (8) @ (2)
							for (int i_0 = 8; i_0 <= 8; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_8_8_2[hls_map_index].range(31, 0) = sc_bv<32>(out_8_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (8) => (8) @ (2)
							for (int i_0 = 8; i_0 <= 8; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_8_8_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_8_8_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_8_V_pc_buffer;
		}

		// output port post check: "out_9_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_9_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_9_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_9_V, AESL_token); // data

			sc_bv<32> *out_9_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_9_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_9_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_9_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_9_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_9_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_9_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_9_9_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (9) => (9) @ (2)
							for (int i_0 = 9; i_0 <= 9; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_9_9_2[hls_map_index].range(31, 0) = sc_bv<32>(out_9_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (9) => (9) @ (2)
							for (int i_0 = 9; i_0 <= 9; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_9_9_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_9_9_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_9_V_pc_buffer;
		}

		// output port post check: "out_10_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_10_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_10_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_10_V, AESL_token); // data

			sc_bv<32> *out_10_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_10_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_10_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_10_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_10_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_10_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_10_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_10_10_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (10) => (10) @ (2)
							for (int i_0 = 10; i_0 <= 10; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_10_10_2[hls_map_index].range(31, 0) = sc_bv<32>(out_10_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (10) => (10) @ (2)
							for (int i_0 = 10; i_0 <= 10; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_10_10_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_10_10_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_10_V_pc_buffer;
		}

		// output port post check: "out_11_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_11_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_11_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_11_V, AESL_token); // data

			sc_bv<32> *out_11_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_11_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_11_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_11_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_11_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_11_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_11_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_11_11_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (11) => (11) @ (2)
							for (int i_0 = 11; i_0 <= 11; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_11_11_2[hls_map_index].range(31, 0) = sc_bv<32>(out_11_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (11) => (11) @ (2)
							for (int i_0 = 11; i_0 <= 11; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_11_11_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_11_11_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_11_V_pc_buffer;
		}

		// output port post check: "out_12_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_12_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_12_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_12_V, AESL_token); // data

			sc_bv<32> *out_12_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_12_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_12_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_12_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_12_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_12_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_12_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_12_12_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (12) => (12) @ (2)
							for (int i_0 = 12; i_0 <= 12; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_12_12_2[hls_map_index].range(31, 0) = sc_bv<32>(out_12_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (12) => (12) @ (2)
							for (int i_0 = 12; i_0 <= 12; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_12_12_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_12_12_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_12_V_pc_buffer;
		}

		// output port post check: "out_13_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_13_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_13_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_13_V, AESL_token); // data

			sc_bv<32> *out_13_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_13_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_13_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_13_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_13_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_13_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_13_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_13_13_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (13) => (13) @ (2)
							for (int i_0 = 13; i_0 <= 13; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_13_13_2[hls_map_index].range(31, 0) = sc_bv<32>(out_13_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (13) => (13) @ (2)
							for (int i_0 = 13; i_0 <= 13; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_13_13_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_13_13_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_13_V_pc_buffer;
		}

		// output port post check: "out_14_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_14_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_14_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_14_V, AESL_token); // data

			sc_bv<32> *out_14_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_14_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_14_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_14_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_14_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_14_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_14_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_14_14_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (14) => (14) @ (2)
							for (int i_0 = 14; i_0 <= 14; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_14_14_2[hls_map_index].range(31, 0) = sc_bv<32>(out_14_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (14) => (14) @ (2)
							for (int i_0 = 14; i_0 <= 14; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_14_14_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_14_14_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_14_V_pc_buffer;
		}

		// output port post check: "out_15_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_15_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_15_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_15_V, AESL_token); // data

			sc_bv<32> *out_15_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_15_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_15_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_15_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_15_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_15_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_15_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_15_15_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (15) => (15) @ (2)
							for (int i_0 = 15; i_0 <= 15; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_15_15_2[hls_map_index].range(31, 0) = sc_bv<32>(out_15_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (15) => (15) @ (2)
							for (int i_0 = 15; i_0 <= 15; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_15_15_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_15_15_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_15_V_pc_buffer;
		}

		// output port post check: "out_16_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_16_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_16_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_16_V, AESL_token); // data

			sc_bv<32> *out_16_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_16_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_16_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_16_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_16_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_16_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_16_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_16_16_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (16) => (16) @ (2)
							for (int i_0 = 16; i_0 <= 16; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_16_16_2[hls_map_index].range(31, 0) = sc_bv<32>(out_16_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (16) => (16) @ (2)
							for (int i_0 = 16; i_0 <= 16; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_16_16_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_16_16_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_16_V_pc_buffer;
		}

		// output port post check: "out_17_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_17_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_17_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_17_V, AESL_token); // data

			sc_bv<32> *out_17_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_17_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_17_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_17_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_17_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_17_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_17_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_17_17_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (17) => (17) @ (2)
							for (int i_0 = 17; i_0 <= 17; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_17_17_2[hls_map_index].range(31, 0) = sc_bv<32>(out_17_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (17) => (17) @ (2)
							for (int i_0 = 17; i_0 <= 17; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_17_17_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_17_17_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_17_V_pc_buffer;
		}

		// output port post check: "out_18_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_18_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_18_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_18_V, AESL_token); // data

			sc_bv<32> *out_18_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_18_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_18_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_18_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_18_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_18_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_18_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_18_18_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (18) => (18) @ (2)
							for (int i_0 = 18; i_0 <= 18; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_18_18_2[hls_map_index].range(31, 0) = sc_bv<32>(out_18_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (18) => (18) @ (2)
							for (int i_0 = 18; i_0 <= 18; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_18_18_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_18_18_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_18_V_pc_buffer;
		}

		// output port post check: "out_19_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_19_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_19_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_19_V, AESL_token); // data

			sc_bv<32> *out_19_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_19_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_19_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_19_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_19_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_19_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_19_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_19_19_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (19) => (19) @ (2)
							for (int i_0 = 19; i_0 <= 19; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_19_19_2[hls_map_index].range(31, 0) = sc_bv<32>(out_19_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (19) => (19) @ (2)
							for (int i_0 = 19; i_0 <= 19; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_19_19_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_19_19_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_19_V_pc_buffer;
		}

		// output port post check: "out_20_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_20_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_20_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_20_V, AESL_token); // data

			sc_bv<32> *out_20_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_20_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_20_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_20_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_20_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_20_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_20_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_20_20_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (20) => (20) @ (2)
							for (int i_0 = 20; i_0 <= 20; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_20_20_2[hls_map_index].range(31, 0) = sc_bv<32>(out_20_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (20) => (20) @ (2)
							for (int i_0 = 20; i_0 <= 20; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_20_20_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_20_20_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_20_V_pc_buffer;
		}

		// output port post check: "out_21_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_21_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_21_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_21_V, AESL_token); // data

			sc_bv<32> *out_21_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_21_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_21_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_21_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_21_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_21_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_21_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_21_21_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (21) => (21) @ (2)
							for (int i_0 = 21; i_0 <= 21; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_21_21_2[hls_map_index].range(31, 0) = sc_bv<32>(out_21_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (21) => (21) @ (2)
							for (int i_0 = 21; i_0 <= 21; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_21_21_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_21_21_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_21_V_pc_buffer;
		}

		// output port post check: "out_22_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_22_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_22_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_22_V, AESL_token); // data

			sc_bv<32> *out_22_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_22_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_22_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_22_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_22_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_22_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_22_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_22_22_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (22) => (22) @ (2)
							for (int i_0 = 22; i_0 <= 22; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_22_22_2[hls_map_index].range(31, 0) = sc_bv<32>(out_22_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (22) => (22) @ (2)
							for (int i_0 = 22; i_0 <= 22; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_22_22_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_22_22_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_22_V_pc_buffer;
		}

		// output port post check: "out_23_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_23_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_23_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_23_V, AESL_token); // data

			sc_bv<32> *out_23_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_23_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_23_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_23_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_23_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_23_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_23_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_23_23_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (23) => (23) @ (2)
							for (int i_0 = 23; i_0 <= 23; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_23_23_2[hls_map_index].range(31, 0) = sc_bv<32>(out_23_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (23) => (23) @ (2)
							for (int i_0 = 23; i_0 <= 23; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_23_23_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_23_23_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_23_V_pc_buffer;
		}

		// output port post check: "out_24_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_24_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_24_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_24_V, AESL_token); // data

			sc_bv<32> *out_24_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_24_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_24_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_24_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_24_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_24_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_24_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_24_24_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (24) => (24) @ (2)
							for (int i_0 = 24; i_0 <= 24; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_24_24_2[hls_map_index].range(31, 0) = sc_bv<32>(out_24_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (24) => (24) @ (2)
							for (int i_0 = 24; i_0 <= 24; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_24_24_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_24_24_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_24_V_pc_buffer;
		}

		// output port post check: "out_25_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_25_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_25_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_25_V, AESL_token); // data

			sc_bv<32> *out_25_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_25_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_25_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_25_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_25_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_25_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_25_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_25_25_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (25) => (25) @ (2)
							for (int i_0 = 25; i_0 <= 25; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_25_25_2[hls_map_index].range(31, 0) = sc_bv<32>(out_25_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (25) => (25) @ (2)
							for (int i_0 = 25; i_0 <= 25; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_25_25_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_25_25_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_25_V_pc_buffer;
		}

		// output port post check: "out_26_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_26_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_26_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_26_V, AESL_token); // data

			sc_bv<32> *out_26_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_26_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_26_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_26_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_26_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_26_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_26_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_26_26_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (26) => (26) @ (2)
							for (int i_0 = 26; i_0 <= 26; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_26_26_2[hls_map_index].range(31, 0) = sc_bv<32>(out_26_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (26) => (26) @ (2)
							for (int i_0 = 26; i_0 <= 26; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_26_26_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_26_26_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_26_V_pc_buffer;
		}

		// output port post check: "out_27_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_27_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_27_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_27_V, AESL_token); // data

			sc_bv<32> *out_27_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_27_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_27_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_27_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_27_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_27_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_27_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_27_27_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (27) => (27) @ (2)
							for (int i_0 = 27; i_0 <= 27; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_27_27_2[hls_map_index].range(31, 0) = sc_bv<32>(out_27_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (27) => (27) @ (2)
							for (int i_0 = 27; i_0 <= 27; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_27_27_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_27_27_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_27_V_pc_buffer;
		}

		// output port post check: "out_28_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_28_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_28_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_28_V, AESL_token); // data

			sc_bv<32> *out_28_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_28_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_28_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_28_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_28_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_28_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_28_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_28_28_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (28) => (28) @ (2)
							for (int i_0 = 28; i_0 <= 28; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_28_28_2[hls_map_index].range(31, 0) = sc_bv<32>(out_28_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (28) => (28) @ (2)
							for (int i_0 = 28; i_0 <= 28; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_28_28_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_28_28_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_28_V_pc_buffer;
		}

		// output port post check: "out_29_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_29_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_29_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_29_V, AESL_token); // data

			sc_bv<32> *out_29_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_29_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_29_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_29_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_29_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_29_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_29_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_29_29_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (29) => (29) @ (2)
							for (int i_0 = 29; i_0 <= 29; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_29_29_2[hls_map_index].range(31, 0) = sc_bv<32>(out_29_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (29) => (29) @ (2)
							for (int i_0 = 29; i_0 <= 29; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_29_29_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_29_29_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_29_V_pc_buffer;
		}

		// output port post check: "out_30_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_30_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_30_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_30_V, AESL_token); // data

			sc_bv<32> *out_30_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_30_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_30_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_30_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_30_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_30_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_30_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_30_30_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (30) => (30) @ (2)
							for (int i_0 = 30; i_0 <= 30; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_30_30_2[hls_map_index].range(31, 0) = sc_bv<32>(out_30_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (30) => (30) @ (2)
							for (int i_0 = 30; i_0 <= 30; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_30_30_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_30_30_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_30_V_pc_buffer;
		}

		// output port post check: "out_31_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_31_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_31_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_31_V, AESL_token); // data

			sc_bv<32> *out_31_V_pc_buffer = new sc_bv<32>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_31_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_31_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_31_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_31_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_31_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_31_V
				{
					// bitslice(31, 0)
					// {
						// celement: out.V(31, 0)
						// {
							sc_lv<32>* out_V_lv0_31_31_2 = new sc_lv<32>[1];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (31) => (31) @ (2)
							for (int i_0 = 31; i_0 <= 31; i_0 += 2)
							{
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out_V_lv0_31_31_2[hls_map_index].range(31, 0) = sc_bv<32>(out_31_V_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: out.V(31, 0)
						{
							// carray: (31) => (31) @ (2)
							for (int i_0 = 31; i_0 <= 31; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : out[0]
								// output_left_conversion : out[i_0]
								// output_type_conversion : (out_V_lv0_31_31_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(out[0]) != NULL) // check the null address if the c port is array or others
								{
									out[i_0] = (out_V_lv0_31_31_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_31_V_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "in_0_V"
		char* tvin_in_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_0_V);

		// "in_1_V"
		char* tvin_in_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_1_V);

		// "in_2_V"
		char* tvin_in_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_2_V);

		// "in_3_V"
		char* tvin_in_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_3_V);

		// "in_4_V"
		char* tvin_in_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_4_V);

		// "in_5_V"
		char* tvin_in_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_5_V);

		// "in_6_V"
		char* tvin_in_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_6_V);

		// "in_7_V"
		char* tvin_in_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_7_V);

		// "in_8_V"
		char* tvin_in_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_8_V);

		// "in_9_V"
		char* tvin_in_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_9_V);

		// "in_10_V"
		char* tvin_in_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_10_V);

		// "in_11_V"
		char* tvin_in_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_11_V);

		// "in_12_V"
		char* tvin_in_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_12_V);

		// "in_13_V"
		char* tvin_in_13_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_13_V);

		// "in_14_V"
		char* tvin_in_14_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_14_V);

		// "in_15_V"
		char* tvin_in_15_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_15_V);

		// "in_16_V"
		char* tvin_in_16_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_16_V);

		// "in_17_V"
		char* tvin_in_17_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_17_V);

		// "in_18_V"
		char* tvin_in_18_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_18_V);

		// "in_19_V"
		char* tvin_in_19_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_19_V);

		// "in_20_V"
		char* tvin_in_20_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_20_V);

		// "in_21_V"
		char* tvin_in_21_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_21_V);

		// "in_22_V"
		char* tvin_in_22_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_22_V);

		// "in_23_V"
		char* tvin_in_23_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_23_V);

		// "in_24_V"
		char* tvin_in_24_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_24_V);

		// "in_25_V"
		char* tvin_in_25_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_25_V);

		// "in_26_V"
		char* tvin_in_26_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_26_V);

		// "in_27_V"
		char* tvin_in_27_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_27_V);

		// "in_28_V"
		char* tvin_in_28_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_28_V);

		// "in_29_V"
		char* tvin_in_29_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_29_V);

		// "in_30_V"
		char* tvin_in_30_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_30_V);

		// "in_31_V"
		char* tvin_in_31_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_31_V);

		// "out_0_V"
		char* tvout_out_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_0_V);

		// "out_1_V"
		char* tvout_out_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_1_V);

		// "out_2_V"
		char* tvout_out_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_2_V);

		// "out_3_V"
		char* tvout_out_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_3_V);

		// "out_4_V"
		char* tvout_out_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_4_V);

		// "out_5_V"
		char* tvout_out_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_5_V);

		// "out_6_V"
		char* tvout_out_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_6_V);

		// "out_7_V"
		char* tvout_out_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_7_V);

		// "out_8_V"
		char* tvout_out_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_8_V);

		// "out_9_V"
		char* tvout_out_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_9_V);

		// "out_10_V"
		char* tvout_out_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_10_V);

		// "out_11_V"
		char* tvout_out_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_11_V);

		// "out_12_V"
		char* tvout_out_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_12_V);

		// "out_13_V"
		char* tvout_out_13_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_13_V);

		// "out_14_V"
		char* tvout_out_14_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_14_V);

		// "out_15_V"
		char* tvout_out_15_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_15_V);

		// "out_16_V"
		char* tvout_out_16_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_16_V);

		// "out_17_V"
		char* tvout_out_17_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_17_V);

		// "out_18_V"
		char* tvout_out_18_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_18_V);

		// "out_19_V"
		char* tvout_out_19_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_19_V);

		// "out_20_V"
		char* tvout_out_20_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_20_V);

		// "out_21_V"
		char* tvout_out_21_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_21_V);

		// "out_22_V"
		char* tvout_out_22_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_22_V);

		// "out_23_V"
		char* tvout_out_23_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_23_V);

		// "out_24_V"
		char* tvout_out_24_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_24_V);

		// "out_25_V"
		char* tvout_out_25_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_25_V);

		// "out_26_V"
		char* tvout_out_26_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_26_V);

		// "out_27_V"
		char* tvout_out_27_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_27_V);

		// "out_28_V"
		char* tvout_out_28_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_28_V);

		// "out_29_V"
		char* tvout_out_29_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_29_V);

		// "out_30_V"
		char* tvout_out_30_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_30_V);

		// "out_31_V"
		char* tvout_out_31_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_31_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_in_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_0_V, tvin_in_0_V);

		sc_bv<32>* in_0_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_0_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_0_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_0_V, "%s\n", (in_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_0_V, tvin_in_0_V);
		}

		tcl_file.set_num(1, &tcl_file.in_0_V_depth);
		sprintf(tvin_in_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_0_V, tvin_in_0_V);

		// release memory allocation
		delete [] in_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_1_V, tvin_in_1_V);

		sc_bv<32>* in_1_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_1_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_1_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_1_V, "%s\n", (in_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_1_V, tvin_in_1_V);
		}

		tcl_file.set_num(1, &tcl_file.in_1_V_depth);
		sprintf(tvin_in_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_1_V, tvin_in_1_V);

		// release memory allocation
		delete [] in_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_2_V, tvin_in_2_V);

		sc_bv<32>* in_2_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_2_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_2_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_2_V, "%s\n", (in_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_2_V, tvin_in_2_V);
		}

		tcl_file.set_num(1, &tcl_file.in_2_V_depth);
		sprintf(tvin_in_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_2_V, tvin_in_2_V);

		// release memory allocation
		delete [] in_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_3_V, tvin_in_3_V);

		sc_bv<32>* in_3_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_3_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_3_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_3_V, "%s\n", (in_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_3_V, tvin_in_3_V);
		}

		tcl_file.set_num(1, &tcl_file.in_3_V_depth);
		sprintf(tvin_in_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_3_V, tvin_in_3_V);

		// release memory allocation
		delete [] in_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_4_V, tvin_in_4_V);

		sc_bv<32>* in_4_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_4_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_4_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_4_V, "%s\n", (in_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_4_V, tvin_in_4_V);
		}

		tcl_file.set_num(1, &tcl_file.in_4_V_depth);
		sprintf(tvin_in_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_4_V, tvin_in_4_V);

		// release memory allocation
		delete [] in_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_5_V, tvin_in_5_V);

		sc_bv<32>* in_5_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_5_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_5_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_5_V, "%s\n", (in_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_5_V, tvin_in_5_V);
		}

		tcl_file.set_num(1, &tcl_file.in_5_V_depth);
		sprintf(tvin_in_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_5_V, tvin_in_5_V);

		// release memory allocation
		delete [] in_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_6_V, tvin_in_6_V);

		sc_bv<32>* in_6_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_6_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_6_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_6_V, "%s\n", (in_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_6_V, tvin_in_6_V);
		}

		tcl_file.set_num(1, &tcl_file.in_6_V_depth);
		sprintf(tvin_in_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_6_V, tvin_in_6_V);

		// release memory allocation
		delete [] in_6_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_7_V, tvin_in_7_V);

		sc_bv<32>* in_7_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_7_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_7_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_7_V, "%s\n", (in_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_7_V, tvin_in_7_V);
		}

		tcl_file.set_num(1, &tcl_file.in_7_V_depth);
		sprintf(tvin_in_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_7_V, tvin_in_7_V);

		// release memory allocation
		delete [] in_7_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_8_V, tvin_in_8_V);

		sc_bv<32>* in_8_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_8_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_8_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_8_V, "%s\n", (in_8_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_8_V, tvin_in_8_V);
		}

		tcl_file.set_num(1, &tcl_file.in_8_V_depth);
		sprintf(tvin_in_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_8_V, tvin_in_8_V);

		// release memory allocation
		delete [] in_8_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_9_V, tvin_in_9_V);

		sc_bv<32>* in_9_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_9_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_9_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_9_V, "%s\n", (in_9_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_9_V, tvin_in_9_V);
		}

		tcl_file.set_num(1, &tcl_file.in_9_V_depth);
		sprintf(tvin_in_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_9_V, tvin_in_9_V);

		// release memory allocation
		delete [] in_9_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_10_V, tvin_in_10_V);

		sc_bv<32>* in_10_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_10_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_10_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_10_V, "%s\n", (in_10_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_10_V, tvin_in_10_V);
		}

		tcl_file.set_num(1, &tcl_file.in_10_V_depth);
		sprintf(tvin_in_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_10_V, tvin_in_10_V);

		// release memory allocation
		delete [] in_10_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_11_V, tvin_in_11_V);

		sc_bv<32>* in_11_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_11_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_11_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_11_V, "%s\n", (in_11_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_11_V, tvin_in_11_V);
		}

		tcl_file.set_num(1, &tcl_file.in_11_V_depth);
		sprintf(tvin_in_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_11_V, tvin_in_11_V);

		// release memory allocation
		delete [] in_11_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_12_V, tvin_in_12_V);

		sc_bv<32>* in_12_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_12_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_12_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_12_V, "%s\n", (in_12_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_12_V, tvin_in_12_V);
		}

		tcl_file.set_num(1, &tcl_file.in_12_V_depth);
		sprintf(tvin_in_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_12_V, tvin_in_12_V);

		// release memory allocation
		delete [] in_12_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_13_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_13_V, tvin_in_13_V);

		sc_bv<32>* in_13_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_13_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (13) => (13) @ (2)
					for (int i_0 = 13; i_0 <= 13; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_13_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_13_V, "%s\n", (in_13_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_13_V, tvin_in_13_V);
		}

		tcl_file.set_num(1, &tcl_file.in_13_V_depth);
		sprintf(tvin_in_13_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_13_V, tvin_in_13_V);

		// release memory allocation
		delete [] in_13_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_14_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_14_V, tvin_in_14_V);

		sc_bv<32>* in_14_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_14_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (14) => (14) @ (2)
					for (int i_0 = 14; i_0 <= 14; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_14_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_14_V, "%s\n", (in_14_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_14_V, tvin_in_14_V);
		}

		tcl_file.set_num(1, &tcl_file.in_14_V_depth);
		sprintf(tvin_in_14_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_14_V, tvin_in_14_V);

		// release memory allocation
		delete [] in_14_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_15_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_15_V, tvin_in_15_V);

		sc_bv<32>* in_15_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_15_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (15) => (15) @ (2)
					for (int i_0 = 15; i_0 <= 15; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_15_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_15_V, "%s\n", (in_15_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_15_V, tvin_in_15_V);
		}

		tcl_file.set_num(1, &tcl_file.in_15_V_depth);
		sprintf(tvin_in_15_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_15_V, tvin_in_15_V);

		// release memory allocation
		delete [] in_15_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_16_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_16_V, tvin_in_16_V);

		sc_bv<32>* in_16_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_16_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (16) => (16) @ (2)
					for (int i_0 = 16; i_0 <= 16; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_16_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_16_V, "%s\n", (in_16_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_16_V, tvin_in_16_V);
		}

		tcl_file.set_num(1, &tcl_file.in_16_V_depth);
		sprintf(tvin_in_16_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_16_V, tvin_in_16_V);

		// release memory allocation
		delete [] in_16_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_17_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_17_V, tvin_in_17_V);

		sc_bv<32>* in_17_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_17_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (17) => (17) @ (2)
					for (int i_0 = 17; i_0 <= 17; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_17_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_17_V, "%s\n", (in_17_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_17_V, tvin_in_17_V);
		}

		tcl_file.set_num(1, &tcl_file.in_17_V_depth);
		sprintf(tvin_in_17_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_17_V, tvin_in_17_V);

		// release memory allocation
		delete [] in_17_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_18_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_18_V, tvin_in_18_V);

		sc_bv<32>* in_18_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_18_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (18) => (18) @ (2)
					for (int i_0 = 18; i_0 <= 18; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_18_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_18_V, "%s\n", (in_18_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_18_V, tvin_in_18_V);
		}

		tcl_file.set_num(1, &tcl_file.in_18_V_depth);
		sprintf(tvin_in_18_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_18_V, tvin_in_18_V);

		// release memory allocation
		delete [] in_18_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_19_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_19_V, tvin_in_19_V);

		sc_bv<32>* in_19_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_19_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (19) => (19) @ (2)
					for (int i_0 = 19; i_0 <= 19; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_19_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_19_V, "%s\n", (in_19_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_19_V, tvin_in_19_V);
		}

		tcl_file.set_num(1, &tcl_file.in_19_V_depth);
		sprintf(tvin_in_19_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_19_V, tvin_in_19_V);

		// release memory allocation
		delete [] in_19_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_20_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_20_V, tvin_in_20_V);

		sc_bv<32>* in_20_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_20_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (20) => (20) @ (2)
					for (int i_0 = 20; i_0 <= 20; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_20_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_20_V, "%s\n", (in_20_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_20_V, tvin_in_20_V);
		}

		tcl_file.set_num(1, &tcl_file.in_20_V_depth);
		sprintf(tvin_in_20_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_20_V, tvin_in_20_V);

		// release memory allocation
		delete [] in_20_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_21_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_21_V, tvin_in_21_V);

		sc_bv<32>* in_21_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_21_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (21) => (21) @ (2)
					for (int i_0 = 21; i_0 <= 21; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_21_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_21_V, "%s\n", (in_21_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_21_V, tvin_in_21_V);
		}

		tcl_file.set_num(1, &tcl_file.in_21_V_depth);
		sprintf(tvin_in_21_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_21_V, tvin_in_21_V);

		// release memory allocation
		delete [] in_21_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_22_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_22_V, tvin_in_22_V);

		sc_bv<32>* in_22_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_22_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (22) => (22) @ (2)
					for (int i_0 = 22; i_0 <= 22; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_22_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_22_V, "%s\n", (in_22_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_22_V, tvin_in_22_V);
		}

		tcl_file.set_num(1, &tcl_file.in_22_V_depth);
		sprintf(tvin_in_22_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_22_V, tvin_in_22_V);

		// release memory allocation
		delete [] in_22_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_23_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_23_V, tvin_in_23_V);

		sc_bv<32>* in_23_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_23_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (23) => (23) @ (2)
					for (int i_0 = 23; i_0 <= 23; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_23_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_23_V, "%s\n", (in_23_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_23_V, tvin_in_23_V);
		}

		tcl_file.set_num(1, &tcl_file.in_23_V_depth);
		sprintf(tvin_in_23_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_23_V, tvin_in_23_V);

		// release memory allocation
		delete [] in_23_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_24_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_24_V, tvin_in_24_V);

		sc_bv<32>* in_24_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_24_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (24) => (24) @ (2)
					for (int i_0 = 24; i_0 <= 24; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_24_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_24_V, "%s\n", (in_24_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_24_V, tvin_in_24_V);
		}

		tcl_file.set_num(1, &tcl_file.in_24_V_depth);
		sprintf(tvin_in_24_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_24_V, tvin_in_24_V);

		// release memory allocation
		delete [] in_24_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_25_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_25_V, tvin_in_25_V);

		sc_bv<32>* in_25_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_25_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (25) => (25) @ (2)
					for (int i_0 = 25; i_0 <= 25; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_25_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_25_V, "%s\n", (in_25_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_25_V, tvin_in_25_V);
		}

		tcl_file.set_num(1, &tcl_file.in_25_V_depth);
		sprintf(tvin_in_25_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_25_V, tvin_in_25_V);

		// release memory allocation
		delete [] in_25_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_26_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_26_V, tvin_in_26_V);

		sc_bv<32>* in_26_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_26_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (26) => (26) @ (2)
					for (int i_0 = 26; i_0 <= 26; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_26_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_26_V, "%s\n", (in_26_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_26_V, tvin_in_26_V);
		}

		tcl_file.set_num(1, &tcl_file.in_26_V_depth);
		sprintf(tvin_in_26_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_26_V, tvin_in_26_V);

		// release memory allocation
		delete [] in_26_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_27_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_27_V, tvin_in_27_V);

		sc_bv<32>* in_27_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_27_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (27) => (27) @ (2)
					for (int i_0 = 27; i_0 <= 27; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_27_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_27_V, "%s\n", (in_27_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_27_V, tvin_in_27_V);
		}

		tcl_file.set_num(1, &tcl_file.in_27_V_depth);
		sprintf(tvin_in_27_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_27_V, tvin_in_27_V);

		// release memory allocation
		delete [] in_27_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_28_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_28_V, tvin_in_28_V);

		sc_bv<32>* in_28_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_28_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (28) => (28) @ (2)
					for (int i_0 = 28; i_0 <= 28; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_28_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_28_V, "%s\n", (in_28_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_28_V, tvin_in_28_V);
		}

		tcl_file.set_num(1, &tcl_file.in_28_V_depth);
		sprintf(tvin_in_28_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_28_V, tvin_in_28_V);

		// release memory allocation
		delete [] in_28_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_29_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_29_V, tvin_in_29_V);

		sc_bv<32>* in_29_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_29_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (29) => (29) @ (2)
					for (int i_0 = 29; i_0 <= 29; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_29_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_29_V, "%s\n", (in_29_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_29_V, tvin_in_29_V);
		}

		tcl_file.set_num(1, &tcl_file.in_29_V_depth);
		sprintf(tvin_in_29_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_29_V, tvin_in_29_V);

		// release memory allocation
		delete [] in_29_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_30_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_30_V, tvin_in_30_V);

		sc_bv<32>* in_30_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_30_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (30) => (30) @ (2)
					for (int i_0 = 30; i_0 <= 30; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_30_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_30_V, "%s\n", (in_30_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_30_V, tvin_in_30_V);
		}

		tcl_file.set_num(1, &tcl_file.in_30_V_depth);
		sprintf(tvin_in_30_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_30_V, tvin_in_30_V);

		// release memory allocation
		delete [] in_30_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_in_31_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_31_V, tvin_in_31_V);

		sc_bv<32>* in_31_V_tvin_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: in_31_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: in.V(31, 0)
				{
					// carray: (31) => (31) @ (2)
					for (int i_0 = 31; i_0 <= 31; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : in[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : in[0]
						// regulate_c_name       : in_V
						// input_type_conversion : (in[i_0]).to_string(2).c_str()
						if (&(in[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> in_V_tmp_mem;
							in_V_tmp_mem = (in[i_0]).to_string(2).c_str();
							in_31_V_tvin_wrapc_buffer[hls_map_index].range(31, 0) = in_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_in_31_V, "%s\n", (in_31_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_31_V, tvin_in_31_V);
		}

		tcl_file.set_num(1, &tcl_file.in_31_V_depth);
		sprintf(tvin_in_31_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_31_V, tvin_in_31_V);

		// release memory allocation
		delete [] in_31_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		bitonicSort(in, out);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_out_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_0_V, tvout_out_0_V);

		sc_bv<32>* out_0_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_0_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_0_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_0_V, "%s\n", (out_0_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_0_V, tvout_out_0_V);
		}

		tcl_file.set_num(1, &tcl_file.out_0_V_depth);
		sprintf(tvout_out_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_0_V, tvout_out_0_V);

		// release memory allocation
		delete [] out_0_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_1_V, tvout_out_1_V);

		sc_bv<32>* out_1_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_1_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_1_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_1_V, "%s\n", (out_1_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_1_V, tvout_out_1_V);
		}

		tcl_file.set_num(1, &tcl_file.out_1_V_depth);
		sprintf(tvout_out_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_1_V, tvout_out_1_V);

		// release memory allocation
		delete [] out_1_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_2_V, tvout_out_2_V);

		sc_bv<32>* out_2_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_2_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_2_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_2_V, "%s\n", (out_2_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_2_V, tvout_out_2_V);
		}

		tcl_file.set_num(1, &tcl_file.out_2_V_depth);
		sprintf(tvout_out_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_2_V, tvout_out_2_V);

		// release memory allocation
		delete [] out_2_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_3_V, tvout_out_3_V);

		sc_bv<32>* out_3_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_3_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_3_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_3_V, "%s\n", (out_3_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_3_V, tvout_out_3_V);
		}

		tcl_file.set_num(1, &tcl_file.out_3_V_depth);
		sprintf(tvout_out_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_3_V, tvout_out_3_V);

		// release memory allocation
		delete [] out_3_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_4_V, tvout_out_4_V);

		sc_bv<32>* out_4_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_4_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_4_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_4_V, "%s\n", (out_4_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_4_V, tvout_out_4_V);
		}

		tcl_file.set_num(1, &tcl_file.out_4_V_depth);
		sprintf(tvout_out_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_4_V, tvout_out_4_V);

		// release memory allocation
		delete [] out_4_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_5_V, tvout_out_5_V);

		sc_bv<32>* out_5_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_5_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_5_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_5_V, "%s\n", (out_5_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_5_V, tvout_out_5_V);
		}

		tcl_file.set_num(1, &tcl_file.out_5_V_depth);
		sprintf(tvout_out_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_5_V, tvout_out_5_V);

		// release memory allocation
		delete [] out_5_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_6_V, tvout_out_6_V);

		sc_bv<32>* out_6_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_6_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_6_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_6_V, "%s\n", (out_6_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_6_V, tvout_out_6_V);
		}

		tcl_file.set_num(1, &tcl_file.out_6_V_depth);
		sprintf(tvout_out_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_6_V, tvout_out_6_V);

		// release memory allocation
		delete [] out_6_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_7_V, tvout_out_7_V);

		sc_bv<32>* out_7_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_7_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_7_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_7_V, "%s\n", (out_7_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_7_V, tvout_out_7_V);
		}

		tcl_file.set_num(1, &tcl_file.out_7_V_depth);
		sprintf(tvout_out_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_7_V, tvout_out_7_V);

		// release memory allocation
		delete [] out_7_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_8_V, tvout_out_8_V);

		sc_bv<32>* out_8_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_8_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_8_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_8_V, "%s\n", (out_8_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_8_V, tvout_out_8_V);
		}

		tcl_file.set_num(1, &tcl_file.out_8_V_depth);
		sprintf(tvout_out_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_8_V, tvout_out_8_V);

		// release memory allocation
		delete [] out_8_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_9_V, tvout_out_9_V);

		sc_bv<32>* out_9_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_9_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_9_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_9_V, "%s\n", (out_9_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_9_V, tvout_out_9_V);
		}

		tcl_file.set_num(1, &tcl_file.out_9_V_depth);
		sprintf(tvout_out_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_9_V, tvout_out_9_V);

		// release memory allocation
		delete [] out_9_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_10_V, tvout_out_10_V);

		sc_bv<32>* out_10_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_10_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_10_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_10_V, "%s\n", (out_10_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_10_V, tvout_out_10_V);
		}

		tcl_file.set_num(1, &tcl_file.out_10_V_depth);
		sprintf(tvout_out_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_10_V, tvout_out_10_V);

		// release memory allocation
		delete [] out_10_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_11_V, tvout_out_11_V);

		sc_bv<32>* out_11_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_11_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_11_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_11_V, "%s\n", (out_11_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_11_V, tvout_out_11_V);
		}

		tcl_file.set_num(1, &tcl_file.out_11_V_depth);
		sprintf(tvout_out_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_11_V, tvout_out_11_V);

		// release memory allocation
		delete [] out_11_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_12_V, tvout_out_12_V);

		sc_bv<32>* out_12_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_12_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_12_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_12_V, "%s\n", (out_12_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_12_V, tvout_out_12_V);
		}

		tcl_file.set_num(1, &tcl_file.out_12_V_depth);
		sprintf(tvout_out_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_12_V, tvout_out_12_V);

		// release memory allocation
		delete [] out_12_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_13_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_13_V, tvout_out_13_V);

		sc_bv<32>* out_13_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_13_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (13) => (13) @ (2)
					for (int i_0 = 13; i_0 <= 13; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_13_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_13_V, "%s\n", (out_13_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_13_V, tvout_out_13_V);
		}

		tcl_file.set_num(1, &tcl_file.out_13_V_depth);
		sprintf(tvout_out_13_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_13_V, tvout_out_13_V);

		// release memory allocation
		delete [] out_13_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_14_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_14_V, tvout_out_14_V);

		sc_bv<32>* out_14_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_14_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (14) => (14) @ (2)
					for (int i_0 = 14; i_0 <= 14; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_14_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_14_V, "%s\n", (out_14_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_14_V, tvout_out_14_V);
		}

		tcl_file.set_num(1, &tcl_file.out_14_V_depth);
		sprintf(tvout_out_14_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_14_V, tvout_out_14_V);

		// release memory allocation
		delete [] out_14_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_15_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_15_V, tvout_out_15_V);

		sc_bv<32>* out_15_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_15_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (15) => (15) @ (2)
					for (int i_0 = 15; i_0 <= 15; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_15_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_15_V, "%s\n", (out_15_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_15_V, tvout_out_15_V);
		}

		tcl_file.set_num(1, &tcl_file.out_15_V_depth);
		sprintf(tvout_out_15_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_15_V, tvout_out_15_V);

		// release memory allocation
		delete [] out_15_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_16_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_16_V, tvout_out_16_V);

		sc_bv<32>* out_16_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_16_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (16) => (16) @ (2)
					for (int i_0 = 16; i_0 <= 16; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_16_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_16_V, "%s\n", (out_16_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_16_V, tvout_out_16_V);
		}

		tcl_file.set_num(1, &tcl_file.out_16_V_depth);
		sprintf(tvout_out_16_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_16_V, tvout_out_16_V);

		// release memory allocation
		delete [] out_16_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_17_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_17_V, tvout_out_17_V);

		sc_bv<32>* out_17_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_17_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (17) => (17) @ (2)
					for (int i_0 = 17; i_0 <= 17; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_17_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_17_V, "%s\n", (out_17_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_17_V, tvout_out_17_V);
		}

		tcl_file.set_num(1, &tcl_file.out_17_V_depth);
		sprintf(tvout_out_17_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_17_V, tvout_out_17_V);

		// release memory allocation
		delete [] out_17_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_18_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_18_V, tvout_out_18_V);

		sc_bv<32>* out_18_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_18_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (18) => (18) @ (2)
					for (int i_0 = 18; i_0 <= 18; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_18_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_18_V, "%s\n", (out_18_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_18_V, tvout_out_18_V);
		}

		tcl_file.set_num(1, &tcl_file.out_18_V_depth);
		sprintf(tvout_out_18_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_18_V, tvout_out_18_V);

		// release memory allocation
		delete [] out_18_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_19_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_19_V, tvout_out_19_V);

		sc_bv<32>* out_19_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_19_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (19) => (19) @ (2)
					for (int i_0 = 19; i_0 <= 19; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_19_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_19_V, "%s\n", (out_19_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_19_V, tvout_out_19_V);
		}

		tcl_file.set_num(1, &tcl_file.out_19_V_depth);
		sprintf(tvout_out_19_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_19_V, tvout_out_19_V);

		// release memory allocation
		delete [] out_19_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_20_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_20_V, tvout_out_20_V);

		sc_bv<32>* out_20_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_20_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (20) => (20) @ (2)
					for (int i_0 = 20; i_0 <= 20; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_20_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_20_V, "%s\n", (out_20_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_20_V, tvout_out_20_V);
		}

		tcl_file.set_num(1, &tcl_file.out_20_V_depth);
		sprintf(tvout_out_20_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_20_V, tvout_out_20_V);

		// release memory allocation
		delete [] out_20_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_21_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_21_V, tvout_out_21_V);

		sc_bv<32>* out_21_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_21_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (21) => (21) @ (2)
					for (int i_0 = 21; i_0 <= 21; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_21_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_21_V, "%s\n", (out_21_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_21_V, tvout_out_21_V);
		}

		tcl_file.set_num(1, &tcl_file.out_21_V_depth);
		sprintf(tvout_out_21_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_21_V, tvout_out_21_V);

		// release memory allocation
		delete [] out_21_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_22_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_22_V, tvout_out_22_V);

		sc_bv<32>* out_22_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_22_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (22) => (22) @ (2)
					for (int i_0 = 22; i_0 <= 22; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_22_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_22_V, "%s\n", (out_22_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_22_V, tvout_out_22_V);
		}

		tcl_file.set_num(1, &tcl_file.out_22_V_depth);
		sprintf(tvout_out_22_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_22_V, tvout_out_22_V);

		// release memory allocation
		delete [] out_22_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_23_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_23_V, tvout_out_23_V);

		sc_bv<32>* out_23_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_23_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (23) => (23) @ (2)
					for (int i_0 = 23; i_0 <= 23; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_23_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_23_V, "%s\n", (out_23_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_23_V, tvout_out_23_V);
		}

		tcl_file.set_num(1, &tcl_file.out_23_V_depth);
		sprintf(tvout_out_23_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_23_V, tvout_out_23_V);

		// release memory allocation
		delete [] out_23_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_24_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_24_V, tvout_out_24_V);

		sc_bv<32>* out_24_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_24_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (24) => (24) @ (2)
					for (int i_0 = 24; i_0 <= 24; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_24_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_24_V, "%s\n", (out_24_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_24_V, tvout_out_24_V);
		}

		tcl_file.set_num(1, &tcl_file.out_24_V_depth);
		sprintf(tvout_out_24_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_24_V, tvout_out_24_V);

		// release memory allocation
		delete [] out_24_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_25_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_25_V, tvout_out_25_V);

		sc_bv<32>* out_25_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_25_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (25) => (25) @ (2)
					for (int i_0 = 25; i_0 <= 25; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_25_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_25_V, "%s\n", (out_25_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_25_V, tvout_out_25_V);
		}

		tcl_file.set_num(1, &tcl_file.out_25_V_depth);
		sprintf(tvout_out_25_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_25_V, tvout_out_25_V);

		// release memory allocation
		delete [] out_25_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_26_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_26_V, tvout_out_26_V);

		sc_bv<32>* out_26_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_26_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (26) => (26) @ (2)
					for (int i_0 = 26; i_0 <= 26; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_26_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_26_V, "%s\n", (out_26_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_26_V, tvout_out_26_V);
		}

		tcl_file.set_num(1, &tcl_file.out_26_V_depth);
		sprintf(tvout_out_26_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_26_V, tvout_out_26_V);

		// release memory allocation
		delete [] out_26_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_27_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_27_V, tvout_out_27_V);

		sc_bv<32>* out_27_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_27_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (27) => (27) @ (2)
					for (int i_0 = 27; i_0 <= 27; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_27_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_27_V, "%s\n", (out_27_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_27_V, tvout_out_27_V);
		}

		tcl_file.set_num(1, &tcl_file.out_27_V_depth);
		sprintf(tvout_out_27_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_27_V, tvout_out_27_V);

		// release memory allocation
		delete [] out_27_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_28_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_28_V, tvout_out_28_V);

		sc_bv<32>* out_28_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_28_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (28) => (28) @ (2)
					for (int i_0 = 28; i_0 <= 28; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_28_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_28_V, "%s\n", (out_28_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_28_V, tvout_out_28_V);
		}

		tcl_file.set_num(1, &tcl_file.out_28_V_depth);
		sprintf(tvout_out_28_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_28_V, tvout_out_28_V);

		// release memory allocation
		delete [] out_28_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_29_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_29_V, tvout_out_29_V);

		sc_bv<32>* out_29_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_29_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (29) => (29) @ (2)
					for (int i_0 = 29; i_0 <= 29; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_29_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_29_V, "%s\n", (out_29_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_29_V, tvout_out_29_V);
		}

		tcl_file.set_num(1, &tcl_file.out_29_V_depth);
		sprintf(tvout_out_29_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_29_V, tvout_out_29_V);

		// release memory allocation
		delete [] out_29_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_30_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_30_V, tvout_out_30_V);

		sc_bv<32>* out_30_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_30_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (30) => (30) @ (2)
					for (int i_0 = 30; i_0 <= 30; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_30_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_30_V, "%s\n", (out_30_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_30_V, tvout_out_30_V);
		}

		tcl_file.set_num(1, &tcl_file.out_30_V_depth);
		sprintf(tvout_out_30_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_30_V, tvout_out_30_V);

		// release memory allocation
		delete [] out_30_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_out_31_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_31_V, tvout_out_31_V);

		sc_bv<32>* out_31_V_tvout_wrapc_buffer = new sc_bv<32>[1];

		// RTL Name: out_31_V
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: out.V(31, 0)
				{
					// carray: (31) => (31) @ (2)
					for (int i_0 = 31; i_0 <= 31; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : out[0]
						// regulate_c_name       : out_V
						// input_type_conversion : (out[i_0]).to_string(2).c_str()
						if (&(out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> out_V_tmp_mem;
							out_V_tmp_mem = (out[i_0]).to_string(2).c_str();
							out_31_V_tvout_wrapc_buffer[hls_map_index].range(31, 0) = out_V_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_out_31_V, "%s\n", (out_31_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_31_V, tvout_out_31_V);
		}

		tcl_file.set_num(1, &tcl_file.out_31_V_depth);
		sprintf(tvout_out_31_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_31_V, tvout_out_31_V);

		// release memory allocation
		delete [] out_31_V_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "in_0_V"
		delete [] tvin_in_0_V;
		// release memory allocation: "in_1_V"
		delete [] tvin_in_1_V;
		// release memory allocation: "in_2_V"
		delete [] tvin_in_2_V;
		// release memory allocation: "in_3_V"
		delete [] tvin_in_3_V;
		// release memory allocation: "in_4_V"
		delete [] tvin_in_4_V;
		// release memory allocation: "in_5_V"
		delete [] tvin_in_5_V;
		// release memory allocation: "in_6_V"
		delete [] tvin_in_6_V;
		// release memory allocation: "in_7_V"
		delete [] tvin_in_7_V;
		// release memory allocation: "in_8_V"
		delete [] tvin_in_8_V;
		// release memory allocation: "in_9_V"
		delete [] tvin_in_9_V;
		// release memory allocation: "in_10_V"
		delete [] tvin_in_10_V;
		// release memory allocation: "in_11_V"
		delete [] tvin_in_11_V;
		// release memory allocation: "in_12_V"
		delete [] tvin_in_12_V;
		// release memory allocation: "in_13_V"
		delete [] tvin_in_13_V;
		// release memory allocation: "in_14_V"
		delete [] tvin_in_14_V;
		// release memory allocation: "in_15_V"
		delete [] tvin_in_15_V;
		// release memory allocation: "in_16_V"
		delete [] tvin_in_16_V;
		// release memory allocation: "in_17_V"
		delete [] tvin_in_17_V;
		// release memory allocation: "in_18_V"
		delete [] tvin_in_18_V;
		// release memory allocation: "in_19_V"
		delete [] tvin_in_19_V;
		// release memory allocation: "in_20_V"
		delete [] tvin_in_20_V;
		// release memory allocation: "in_21_V"
		delete [] tvin_in_21_V;
		// release memory allocation: "in_22_V"
		delete [] tvin_in_22_V;
		// release memory allocation: "in_23_V"
		delete [] tvin_in_23_V;
		// release memory allocation: "in_24_V"
		delete [] tvin_in_24_V;
		// release memory allocation: "in_25_V"
		delete [] tvin_in_25_V;
		// release memory allocation: "in_26_V"
		delete [] tvin_in_26_V;
		// release memory allocation: "in_27_V"
		delete [] tvin_in_27_V;
		// release memory allocation: "in_28_V"
		delete [] tvin_in_28_V;
		// release memory allocation: "in_29_V"
		delete [] tvin_in_29_V;
		// release memory allocation: "in_30_V"
		delete [] tvin_in_30_V;
		// release memory allocation: "in_31_V"
		delete [] tvin_in_31_V;
		// release memory allocation: "out_0_V"
		delete [] tvout_out_0_V;
		// release memory allocation: "out_1_V"
		delete [] tvout_out_1_V;
		// release memory allocation: "out_2_V"
		delete [] tvout_out_2_V;
		// release memory allocation: "out_3_V"
		delete [] tvout_out_3_V;
		// release memory allocation: "out_4_V"
		delete [] tvout_out_4_V;
		// release memory allocation: "out_5_V"
		delete [] tvout_out_5_V;
		// release memory allocation: "out_6_V"
		delete [] tvout_out_6_V;
		// release memory allocation: "out_7_V"
		delete [] tvout_out_7_V;
		// release memory allocation: "out_8_V"
		delete [] tvout_out_8_V;
		// release memory allocation: "out_9_V"
		delete [] tvout_out_9_V;
		// release memory allocation: "out_10_V"
		delete [] tvout_out_10_V;
		// release memory allocation: "out_11_V"
		delete [] tvout_out_11_V;
		// release memory allocation: "out_12_V"
		delete [] tvout_out_12_V;
		// release memory allocation: "out_13_V"
		delete [] tvout_out_13_V;
		// release memory allocation: "out_14_V"
		delete [] tvout_out_14_V;
		// release memory allocation: "out_15_V"
		delete [] tvout_out_15_V;
		// release memory allocation: "out_16_V"
		delete [] tvout_out_16_V;
		// release memory allocation: "out_17_V"
		delete [] tvout_out_17_V;
		// release memory allocation: "out_18_V"
		delete [] tvout_out_18_V;
		// release memory allocation: "out_19_V"
		delete [] tvout_out_19_V;
		// release memory allocation: "out_20_V"
		delete [] tvout_out_20_V;
		// release memory allocation: "out_21_V"
		delete [] tvout_out_21_V;
		// release memory allocation: "out_22_V"
		delete [] tvout_out_22_V;
		// release memory allocation: "out_23_V"
		delete [] tvout_out_23_V;
		// release memory allocation: "out_24_V"
		delete [] tvout_out_24_V;
		// release memory allocation: "out_25_V"
		delete [] tvout_out_25_V;
		// release memory allocation: "out_26_V"
		delete [] tvout_out_26_V;
		// release memory allocation: "out_27_V"
		delete [] tvout_out_27_V;
		// release memory allocation: "out_28_V"
		delete [] tvout_out_28_V;
		// release memory allocation: "out_29_V"
		delete [] tvout_out_29_V;
		// release memory allocation: "out_30_V"
		delete [] tvout_out_30_V;
		// release memory allocation: "out_31_V"
		delete [] tvout_out_31_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

