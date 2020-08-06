// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      bitonicSort
`define AUTOTB_DUT_INST AESL_inst_bitonicSort
`define AUTOTB_TOP      apatb_bitonicSort_top
`define AUTOTB_LAT_RESULT_FILE "bitonicSort.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "bitonicSort.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_bitonicSort_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 1.39

`define AESL_DEPTH_in_0_V 1
`define AESL_DEPTH_in_1_V 1
`define AESL_DEPTH_in_2_V 1
`define AESL_DEPTH_in_3_V 1
`define AESL_DEPTH_in_4_V 1
`define AESL_DEPTH_in_5_V 1
`define AESL_DEPTH_in_6_V 1
`define AESL_DEPTH_in_7_V 1
`define AESL_DEPTH_in_8_V 1
`define AESL_DEPTH_in_9_V 1
`define AESL_DEPTH_in_10_V 1
`define AESL_DEPTH_in_11_V 1
`define AESL_DEPTH_in_12_V 1
`define AESL_DEPTH_in_13_V 1
`define AESL_DEPTH_in_14_V 1
`define AESL_DEPTH_in_15_V 1
`define AESL_DEPTH_in_16_V 1
`define AESL_DEPTH_in_17_V 1
`define AESL_DEPTH_in_18_V 1
`define AESL_DEPTH_in_19_V 1
`define AESL_DEPTH_in_20_V 1
`define AESL_DEPTH_in_21_V 1
`define AESL_DEPTH_in_22_V 1
`define AESL_DEPTH_in_23_V 1
`define AESL_DEPTH_in_24_V 1
`define AESL_DEPTH_in_25_V 1
`define AESL_DEPTH_in_26_V 1
`define AESL_DEPTH_in_27_V 1
`define AESL_DEPTH_in_28_V 1
`define AESL_DEPTH_in_29_V 1
`define AESL_DEPTH_in_30_V 1
`define AESL_DEPTH_in_31_V 1
`define AESL_DEPTH_out_0_V 1
`define AESL_DEPTH_out_1_V 1
`define AESL_DEPTH_out_2_V 1
`define AESL_DEPTH_out_3_V 1
`define AESL_DEPTH_out_4_V 1
`define AESL_DEPTH_out_5_V 1
`define AESL_DEPTH_out_6_V 1
`define AESL_DEPTH_out_7_V 1
`define AESL_DEPTH_out_8_V 1
`define AESL_DEPTH_out_9_V 1
`define AESL_DEPTH_out_10_V 1
`define AESL_DEPTH_out_11_V 1
`define AESL_DEPTH_out_12_V 1
`define AESL_DEPTH_out_13_V 1
`define AESL_DEPTH_out_14_V 1
`define AESL_DEPTH_out_15_V 1
`define AESL_DEPTH_out_16_V 1
`define AESL_DEPTH_out_17_V 1
`define AESL_DEPTH_out_18_V 1
`define AESL_DEPTH_out_19_V 1
`define AESL_DEPTH_out_20_V 1
`define AESL_DEPTH_out_21_V 1
`define AESL_DEPTH_out_22_V 1
`define AESL_DEPTH_out_23_V 1
`define AESL_DEPTH_out_24_V 1
`define AESL_DEPTH_out_25_V 1
`define AESL_DEPTH_out_26_V 1
`define AESL_DEPTH_out_27_V 1
`define AESL_DEPTH_out_28_V 1
`define AESL_DEPTH_out_29_V 1
`define AESL_DEPTH_out_30_V 1
`define AESL_DEPTH_out_31_V 1
`define AUTOTB_TVIN_in_0_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_0_V.dat"
`define AUTOTB_TVIN_in_1_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_1_V.dat"
`define AUTOTB_TVIN_in_2_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_2_V.dat"
`define AUTOTB_TVIN_in_3_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_3_V.dat"
`define AUTOTB_TVIN_in_4_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_4_V.dat"
`define AUTOTB_TVIN_in_5_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_5_V.dat"
`define AUTOTB_TVIN_in_6_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_6_V.dat"
`define AUTOTB_TVIN_in_7_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_7_V.dat"
`define AUTOTB_TVIN_in_8_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_8_V.dat"
`define AUTOTB_TVIN_in_9_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_9_V.dat"
`define AUTOTB_TVIN_in_10_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_10_V.dat"
`define AUTOTB_TVIN_in_11_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_11_V.dat"
`define AUTOTB_TVIN_in_12_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_12_V.dat"
`define AUTOTB_TVIN_in_13_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_13_V.dat"
`define AUTOTB_TVIN_in_14_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_14_V.dat"
`define AUTOTB_TVIN_in_15_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_15_V.dat"
`define AUTOTB_TVIN_in_16_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_16_V.dat"
`define AUTOTB_TVIN_in_17_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_17_V.dat"
`define AUTOTB_TVIN_in_18_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_18_V.dat"
`define AUTOTB_TVIN_in_19_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_19_V.dat"
`define AUTOTB_TVIN_in_20_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_20_V.dat"
`define AUTOTB_TVIN_in_21_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_21_V.dat"
`define AUTOTB_TVIN_in_22_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_22_V.dat"
`define AUTOTB_TVIN_in_23_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_23_V.dat"
`define AUTOTB_TVIN_in_24_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_24_V.dat"
`define AUTOTB_TVIN_in_25_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_25_V.dat"
`define AUTOTB_TVIN_in_26_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_26_V.dat"
`define AUTOTB_TVIN_in_27_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_27_V.dat"
`define AUTOTB_TVIN_in_28_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_28_V.dat"
`define AUTOTB_TVIN_in_29_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_29_V.dat"
`define AUTOTB_TVIN_in_30_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_30_V.dat"
`define AUTOTB_TVIN_in_31_V  "../tv/cdatafile/c.bitonicSort.autotvin_in_31_V.dat"
`define AUTOTB_TVIN_in_0_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_0_V.dat"
`define AUTOTB_TVIN_in_1_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_1_V.dat"
`define AUTOTB_TVIN_in_2_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_2_V.dat"
`define AUTOTB_TVIN_in_3_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_3_V.dat"
`define AUTOTB_TVIN_in_4_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_4_V.dat"
`define AUTOTB_TVIN_in_5_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_5_V.dat"
`define AUTOTB_TVIN_in_6_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_6_V.dat"
`define AUTOTB_TVIN_in_7_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_7_V.dat"
`define AUTOTB_TVIN_in_8_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_8_V.dat"
`define AUTOTB_TVIN_in_9_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_9_V.dat"
`define AUTOTB_TVIN_in_10_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_10_V.dat"
`define AUTOTB_TVIN_in_11_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_11_V.dat"
`define AUTOTB_TVIN_in_12_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_12_V.dat"
`define AUTOTB_TVIN_in_13_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_13_V.dat"
`define AUTOTB_TVIN_in_14_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_14_V.dat"
`define AUTOTB_TVIN_in_15_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_15_V.dat"
`define AUTOTB_TVIN_in_16_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_16_V.dat"
`define AUTOTB_TVIN_in_17_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_17_V.dat"
`define AUTOTB_TVIN_in_18_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_18_V.dat"
`define AUTOTB_TVIN_in_19_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_19_V.dat"
`define AUTOTB_TVIN_in_20_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_20_V.dat"
`define AUTOTB_TVIN_in_21_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_21_V.dat"
`define AUTOTB_TVIN_in_22_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_22_V.dat"
`define AUTOTB_TVIN_in_23_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_23_V.dat"
`define AUTOTB_TVIN_in_24_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_24_V.dat"
`define AUTOTB_TVIN_in_25_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_25_V.dat"
`define AUTOTB_TVIN_in_26_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_26_V.dat"
`define AUTOTB_TVIN_in_27_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_27_V.dat"
`define AUTOTB_TVIN_in_28_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_28_V.dat"
`define AUTOTB_TVIN_in_29_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_29_V.dat"
`define AUTOTB_TVIN_in_30_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_30_V.dat"
`define AUTOTB_TVIN_in_31_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvin_in_31_V.dat"
`define AUTOTB_TVOUT_out_0_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_0_V.dat"
`define AUTOTB_TVOUT_out_1_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_1_V.dat"
`define AUTOTB_TVOUT_out_2_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_2_V.dat"
`define AUTOTB_TVOUT_out_3_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_3_V.dat"
`define AUTOTB_TVOUT_out_4_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_4_V.dat"
`define AUTOTB_TVOUT_out_5_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_5_V.dat"
`define AUTOTB_TVOUT_out_6_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_6_V.dat"
`define AUTOTB_TVOUT_out_7_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_7_V.dat"
`define AUTOTB_TVOUT_out_8_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_8_V.dat"
`define AUTOTB_TVOUT_out_9_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_9_V.dat"
`define AUTOTB_TVOUT_out_10_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_10_V.dat"
`define AUTOTB_TVOUT_out_11_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_11_V.dat"
`define AUTOTB_TVOUT_out_12_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_12_V.dat"
`define AUTOTB_TVOUT_out_13_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_13_V.dat"
`define AUTOTB_TVOUT_out_14_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_14_V.dat"
`define AUTOTB_TVOUT_out_15_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_15_V.dat"
`define AUTOTB_TVOUT_out_16_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_16_V.dat"
`define AUTOTB_TVOUT_out_17_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_17_V.dat"
`define AUTOTB_TVOUT_out_18_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_18_V.dat"
`define AUTOTB_TVOUT_out_19_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_19_V.dat"
`define AUTOTB_TVOUT_out_20_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_20_V.dat"
`define AUTOTB_TVOUT_out_21_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_21_V.dat"
`define AUTOTB_TVOUT_out_22_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_22_V.dat"
`define AUTOTB_TVOUT_out_23_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_23_V.dat"
`define AUTOTB_TVOUT_out_24_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_24_V.dat"
`define AUTOTB_TVOUT_out_25_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_25_V.dat"
`define AUTOTB_TVOUT_out_26_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_26_V.dat"
`define AUTOTB_TVOUT_out_27_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_27_V.dat"
`define AUTOTB_TVOUT_out_28_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_28_V.dat"
`define AUTOTB_TVOUT_out_29_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_29_V.dat"
`define AUTOTB_TVOUT_out_30_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_30_V.dat"
`define AUTOTB_TVOUT_out_31_V  "../tv/cdatafile/c.bitonicSort.autotvout_out_31_V.dat"
`define AUTOTB_TVOUT_out_0_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_0_V.dat"
`define AUTOTB_TVOUT_out_1_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_1_V.dat"
`define AUTOTB_TVOUT_out_2_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_2_V.dat"
`define AUTOTB_TVOUT_out_3_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_3_V.dat"
`define AUTOTB_TVOUT_out_4_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_4_V.dat"
`define AUTOTB_TVOUT_out_5_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_5_V.dat"
`define AUTOTB_TVOUT_out_6_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_6_V.dat"
`define AUTOTB_TVOUT_out_7_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_7_V.dat"
`define AUTOTB_TVOUT_out_8_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_8_V.dat"
`define AUTOTB_TVOUT_out_9_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_9_V.dat"
`define AUTOTB_TVOUT_out_10_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_10_V.dat"
`define AUTOTB_TVOUT_out_11_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_11_V.dat"
`define AUTOTB_TVOUT_out_12_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_12_V.dat"
`define AUTOTB_TVOUT_out_13_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_13_V.dat"
`define AUTOTB_TVOUT_out_14_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_14_V.dat"
`define AUTOTB_TVOUT_out_15_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_15_V.dat"
`define AUTOTB_TVOUT_out_16_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_16_V.dat"
`define AUTOTB_TVOUT_out_17_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_17_V.dat"
`define AUTOTB_TVOUT_out_18_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_18_V.dat"
`define AUTOTB_TVOUT_out_19_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_19_V.dat"
`define AUTOTB_TVOUT_out_20_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_20_V.dat"
`define AUTOTB_TVOUT_out_21_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_21_V.dat"
`define AUTOTB_TVOUT_out_22_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_22_V.dat"
`define AUTOTB_TVOUT_out_23_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_23_V.dat"
`define AUTOTB_TVOUT_out_24_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_24_V.dat"
`define AUTOTB_TVOUT_out_25_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_25_V.dat"
`define AUTOTB_TVOUT_out_26_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_26_V.dat"
`define AUTOTB_TVOUT_out_27_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_27_V.dat"
`define AUTOTB_TVOUT_out_28_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_28_V.dat"
`define AUTOTB_TVOUT_out_29_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_29_V.dat"
`define AUTOTB_TVOUT_out_30_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_30_V.dat"
`define AUTOTB_TVOUT_out_31_V_out_wrapc  "../tv/rtldatafile/rtl.bitonicSort.autotvout_out_31_V.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 1;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = 9;
parameter LENGTH_in_0_V = 1;
parameter LENGTH_in_1_V = 1;
parameter LENGTH_in_2_V = 1;
parameter LENGTH_in_3_V = 1;
parameter LENGTH_in_4_V = 1;
parameter LENGTH_in_5_V = 1;
parameter LENGTH_in_6_V = 1;
parameter LENGTH_in_7_V = 1;
parameter LENGTH_in_8_V = 1;
parameter LENGTH_in_9_V = 1;
parameter LENGTH_in_10_V = 1;
parameter LENGTH_in_11_V = 1;
parameter LENGTH_in_12_V = 1;
parameter LENGTH_in_13_V = 1;
parameter LENGTH_in_14_V = 1;
parameter LENGTH_in_15_V = 1;
parameter LENGTH_in_16_V = 1;
parameter LENGTH_in_17_V = 1;
parameter LENGTH_in_18_V = 1;
parameter LENGTH_in_19_V = 1;
parameter LENGTH_in_20_V = 1;
parameter LENGTH_in_21_V = 1;
parameter LENGTH_in_22_V = 1;
parameter LENGTH_in_23_V = 1;
parameter LENGTH_in_24_V = 1;
parameter LENGTH_in_25_V = 1;
parameter LENGTH_in_26_V = 1;
parameter LENGTH_in_27_V = 1;
parameter LENGTH_in_28_V = 1;
parameter LENGTH_in_29_V = 1;
parameter LENGTH_in_30_V = 1;
parameter LENGTH_in_31_V = 1;
parameter LENGTH_out_0_V = 1;
parameter LENGTH_out_1_V = 1;
parameter LENGTH_out_2_V = 1;
parameter LENGTH_out_3_V = 1;
parameter LENGTH_out_4_V = 1;
parameter LENGTH_out_5_V = 1;
parameter LENGTH_out_6_V = 1;
parameter LENGTH_out_7_V = 1;
parameter LENGTH_out_8_V = 1;
parameter LENGTH_out_9_V = 1;
parameter LENGTH_out_10_V = 1;
parameter LENGTH_out_11_V = 1;
parameter LENGTH_out_12_V = 1;
parameter LENGTH_out_13_V = 1;
parameter LENGTH_out_14_V = 1;
parameter LENGTH_out_15_V = 1;
parameter LENGTH_out_16_V = 1;
parameter LENGTH_out_17_V = 1;
parameter LENGTH_out_18_V = 1;
parameter LENGTH_out_19_V = 1;
parameter LENGTH_out_20_V = 1;
parameter LENGTH_out_21_V = 1;
parameter LENGTH_out_22_V = 1;
parameter LENGTH_out_23_V = 1;
parameter LENGTH_out_24_V = 1;
parameter LENGTH_out_25_V = 1;
parameter LENGTH_out_26_V = 1;
parameter LENGTH_out_27_V = 1;
parameter LENGTH_out_28_V = 1;
parameter LENGTH_out_29_V = 1;
parameter LENGTH_out_30_V = 1;
parameter LENGTH_out_31_V = 1;

task read_token;
    input integer fp;
    output reg [143 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

reg AESL_clock;
reg rst;
reg start;
reg ce;
reg tb_continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
wire ap_start;
wire ap_done;
wire ap_idle;
wire ap_ready;
wire [31 : 0] in_0_V;
wire [31 : 0] in_1_V;
wire [31 : 0] in_2_V;
wire [31 : 0] in_3_V;
wire [31 : 0] in_4_V;
wire [31 : 0] in_5_V;
wire [31 : 0] in_6_V;
wire [31 : 0] in_7_V;
wire [31 : 0] in_8_V;
wire [31 : 0] in_9_V;
wire [31 : 0] in_10_V;
wire [31 : 0] in_11_V;
wire [31 : 0] in_12_V;
wire [31 : 0] in_13_V;
wire [31 : 0] in_14_V;
wire [31 : 0] in_15_V;
wire [31 : 0] in_16_V;
wire [31 : 0] in_17_V;
wire [31 : 0] in_18_V;
wire [31 : 0] in_19_V;
wire [31 : 0] in_20_V;
wire [31 : 0] in_21_V;
wire [31 : 0] in_22_V;
wire [31 : 0] in_23_V;
wire [31 : 0] in_24_V;
wire [31 : 0] in_25_V;
wire [31 : 0] in_26_V;
wire [31 : 0] in_27_V;
wire [31 : 0] in_28_V;
wire [31 : 0] in_29_V;
wire [31 : 0] in_30_V;
wire [31 : 0] in_31_V;
wire [31 : 0] out_0_V;
wire  out_0_V_ap_vld;
wire [31 : 0] out_1_V;
wire  out_1_V_ap_vld;
wire [31 : 0] out_2_V;
wire  out_2_V_ap_vld;
wire [31 : 0] out_3_V;
wire  out_3_V_ap_vld;
wire [31 : 0] out_4_V;
wire  out_4_V_ap_vld;
wire [31 : 0] out_5_V;
wire  out_5_V_ap_vld;
wire [31 : 0] out_6_V;
wire  out_6_V_ap_vld;
wire [31 : 0] out_7_V;
wire  out_7_V_ap_vld;
wire [31 : 0] out_8_V;
wire  out_8_V_ap_vld;
wire [31 : 0] out_9_V;
wire  out_9_V_ap_vld;
wire [31 : 0] out_10_V;
wire  out_10_V_ap_vld;
wire [31 : 0] out_11_V;
wire  out_11_V_ap_vld;
wire [31 : 0] out_12_V;
wire  out_12_V_ap_vld;
wire [31 : 0] out_13_V;
wire  out_13_V_ap_vld;
wire [31 : 0] out_14_V;
wire  out_14_V_ap_vld;
wire [31 : 0] out_15_V;
wire  out_15_V_ap_vld;
wire [31 : 0] out_16_V;
wire  out_16_V_ap_vld;
wire [31 : 0] out_17_V;
wire  out_17_V_ap_vld;
wire [31 : 0] out_18_V;
wire  out_18_V_ap_vld;
wire [31 : 0] out_19_V;
wire  out_19_V_ap_vld;
wire [31 : 0] out_20_V;
wire  out_20_V_ap_vld;
wire [31 : 0] out_21_V;
wire  out_21_V_ap_vld;
wire [31 : 0] out_22_V;
wire  out_22_V_ap_vld;
wire [31 : 0] out_23_V;
wire  out_23_V_ap_vld;
wire [31 : 0] out_24_V;
wire  out_24_V_ap_vld;
wire [31 : 0] out_25_V;
wire  out_25_V_ap_vld;
wire [31 : 0] out_26_V;
wire  out_26_V_ap_vld;
wire [31 : 0] out_27_V;
wire  out_27_V_ap_vld;
wire [31 : 0] out_28_V;
wire  out_28_V_ap_vld;
wire [31 : 0] out_29_V;
wire  out_29_V_ap_vld;
wire [31 : 0] out_30_V;
wire  out_30_V_ap_vld;
wire [31 : 0] out_31_V;
wire  out_31_V_ap_vld;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;

wire ap_clk;
wire ap_rst;
wire ap_rst_n;

`AUTOTB_DUT `AUTOTB_DUT_INST(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .ap_ready(ap_ready),
    .in_0_V(in_0_V),
    .in_1_V(in_1_V),
    .in_2_V(in_2_V),
    .in_3_V(in_3_V),
    .in_4_V(in_4_V),
    .in_5_V(in_5_V),
    .in_6_V(in_6_V),
    .in_7_V(in_7_V),
    .in_8_V(in_8_V),
    .in_9_V(in_9_V),
    .in_10_V(in_10_V),
    .in_11_V(in_11_V),
    .in_12_V(in_12_V),
    .in_13_V(in_13_V),
    .in_14_V(in_14_V),
    .in_15_V(in_15_V),
    .in_16_V(in_16_V),
    .in_17_V(in_17_V),
    .in_18_V(in_18_V),
    .in_19_V(in_19_V),
    .in_20_V(in_20_V),
    .in_21_V(in_21_V),
    .in_22_V(in_22_V),
    .in_23_V(in_23_V),
    .in_24_V(in_24_V),
    .in_25_V(in_25_V),
    .in_26_V(in_26_V),
    .in_27_V(in_27_V),
    .in_28_V(in_28_V),
    .in_29_V(in_29_V),
    .in_30_V(in_30_V),
    .in_31_V(in_31_V),
    .out_0_V(out_0_V),
    .out_0_V_ap_vld(out_0_V_ap_vld),
    .out_1_V(out_1_V),
    .out_1_V_ap_vld(out_1_V_ap_vld),
    .out_2_V(out_2_V),
    .out_2_V_ap_vld(out_2_V_ap_vld),
    .out_3_V(out_3_V),
    .out_3_V_ap_vld(out_3_V_ap_vld),
    .out_4_V(out_4_V),
    .out_4_V_ap_vld(out_4_V_ap_vld),
    .out_5_V(out_5_V),
    .out_5_V_ap_vld(out_5_V_ap_vld),
    .out_6_V(out_6_V),
    .out_6_V_ap_vld(out_6_V_ap_vld),
    .out_7_V(out_7_V),
    .out_7_V_ap_vld(out_7_V_ap_vld),
    .out_8_V(out_8_V),
    .out_8_V_ap_vld(out_8_V_ap_vld),
    .out_9_V(out_9_V),
    .out_9_V_ap_vld(out_9_V_ap_vld),
    .out_10_V(out_10_V),
    .out_10_V_ap_vld(out_10_V_ap_vld),
    .out_11_V(out_11_V),
    .out_11_V_ap_vld(out_11_V_ap_vld),
    .out_12_V(out_12_V),
    .out_12_V_ap_vld(out_12_V_ap_vld),
    .out_13_V(out_13_V),
    .out_13_V_ap_vld(out_13_V_ap_vld),
    .out_14_V(out_14_V),
    .out_14_V_ap_vld(out_14_V_ap_vld),
    .out_15_V(out_15_V),
    .out_15_V_ap_vld(out_15_V_ap_vld),
    .out_16_V(out_16_V),
    .out_16_V_ap_vld(out_16_V_ap_vld),
    .out_17_V(out_17_V),
    .out_17_V_ap_vld(out_17_V_ap_vld),
    .out_18_V(out_18_V),
    .out_18_V_ap_vld(out_18_V_ap_vld),
    .out_19_V(out_19_V),
    .out_19_V_ap_vld(out_19_V_ap_vld),
    .out_20_V(out_20_V),
    .out_20_V_ap_vld(out_20_V_ap_vld),
    .out_21_V(out_21_V),
    .out_21_V_ap_vld(out_21_V_ap_vld),
    .out_22_V(out_22_V),
    .out_22_V_ap_vld(out_22_V_ap_vld),
    .out_23_V(out_23_V),
    .out_23_V_ap_vld(out_23_V_ap_vld),
    .out_24_V(out_24_V),
    .out_24_V_ap_vld(out_24_V_ap_vld),
    .out_25_V(out_25_V),
    .out_25_V_ap_vld(out_25_V_ap_vld),
    .out_26_V(out_26_V),
    .out_26_V_ap_vld(out_26_V_ap_vld),
    .out_27_V(out_27_V),
    .out_27_V_ap_vld(out_27_V_ap_vld),
    .out_28_V(out_28_V),
    .out_28_V_ap_vld(out_28_V_ap_vld),
    .out_29_V(out_29_V),
    .out_29_V_ap_vld(out_29_V_ap_vld),
    .out_30_V(out_30_V),
    .out_30_V_ap_vld(out_30_V_ap_vld),
    .out_31_V(out_31_V),
    .out_31_V_ap_vld(out_31_V_ap_vld));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst = AESL_reset;
assign ap_rst_n = ~AESL_reset;
assign AESL_reset = rst;
assign ap_start = AESL_start;
assign AESL_start = start;
assign AESL_done = ap_done;
assign AESL_idle = ap_idle;
assign AESL_ready = ap_ready;
assign AESL_ce = ce;
assign AESL_continue = tb_continue;
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_done !== 1 && AESL_done !== 0) begin
                $display("ERROR: Control signal AESL_done is invalid!");
                $finish;
            end
        end
    end
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_ready !== 1 && AESL_ready !== 0) begin
                $display("ERROR: Control signal AESL_ready is invalid!");
                $finish;
            end
        end
    end
// The signal of port in_0_V
reg [31: 0] AESL_REG_in_0_V = 0;
assign in_0_V = AESL_REG_in_0_V;
initial begin : read_file_process_in_0_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_0_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_0_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_0_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_1_V
reg [31: 0] AESL_REG_in_1_V = 0;
assign in_1_V = AESL_REG_in_1_V;
initial begin : read_file_process_in_1_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_1_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_1_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_1_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_2_V
reg [31: 0] AESL_REG_in_2_V = 0;
assign in_2_V = AESL_REG_in_2_V;
initial begin : read_file_process_in_2_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_2_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_2_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_2_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_3_V
reg [31: 0] AESL_REG_in_3_V = 0;
assign in_3_V = AESL_REG_in_3_V;
initial begin : read_file_process_in_3_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_3_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_3_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_3_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_4_V
reg [31: 0] AESL_REG_in_4_V = 0;
assign in_4_V = AESL_REG_in_4_V;
initial begin : read_file_process_in_4_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_4_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_4_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_4_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_5_V
reg [31: 0] AESL_REG_in_5_V = 0;
assign in_5_V = AESL_REG_in_5_V;
initial begin : read_file_process_in_5_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_5_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_5_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_5_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_6_V
reg [31: 0] AESL_REG_in_6_V = 0;
assign in_6_V = AESL_REG_in_6_V;
initial begin : read_file_process_in_6_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_6_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_6_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_6_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_7_V
reg [31: 0] AESL_REG_in_7_V = 0;
assign in_7_V = AESL_REG_in_7_V;
initial begin : read_file_process_in_7_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_7_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_7_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_7_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_8_V
reg [31: 0] AESL_REG_in_8_V = 0;
assign in_8_V = AESL_REG_in_8_V;
initial begin : read_file_process_in_8_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_8_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_8_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_8_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_9_V
reg [31: 0] AESL_REG_in_9_V = 0;
assign in_9_V = AESL_REG_in_9_V;
initial begin : read_file_process_in_9_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_9_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_9_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_9_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_10_V
reg [31: 0] AESL_REG_in_10_V = 0;
assign in_10_V = AESL_REG_in_10_V;
initial begin : read_file_process_in_10_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_10_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_10_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_10_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_11_V
reg [31: 0] AESL_REG_in_11_V = 0;
assign in_11_V = AESL_REG_in_11_V;
initial begin : read_file_process_in_11_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_11_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_11_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_11_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_12_V
reg [31: 0] AESL_REG_in_12_V = 0;
assign in_12_V = AESL_REG_in_12_V;
initial begin : read_file_process_in_12_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_12_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_12_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_12_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_13_V
reg [31: 0] AESL_REG_in_13_V = 0;
assign in_13_V = AESL_REG_in_13_V;
initial begin : read_file_process_in_13_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_13_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_13_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_13_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_14_V
reg [31: 0] AESL_REG_in_14_V = 0;
assign in_14_V = AESL_REG_in_14_V;
initial begin : read_file_process_in_14_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_14_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_14_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_14_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_15_V
reg [31: 0] AESL_REG_in_15_V = 0;
assign in_15_V = AESL_REG_in_15_V;
initial begin : read_file_process_in_15_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_15_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_15_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_15_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_16_V
reg [31: 0] AESL_REG_in_16_V = 0;
assign in_16_V = AESL_REG_in_16_V;
initial begin : read_file_process_in_16_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_16_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_16_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_16_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_17_V
reg [31: 0] AESL_REG_in_17_V = 0;
assign in_17_V = AESL_REG_in_17_V;
initial begin : read_file_process_in_17_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_17_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_17_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_17_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_18_V
reg [31: 0] AESL_REG_in_18_V = 0;
assign in_18_V = AESL_REG_in_18_V;
initial begin : read_file_process_in_18_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_18_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_18_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_18_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_19_V
reg [31: 0] AESL_REG_in_19_V = 0;
assign in_19_V = AESL_REG_in_19_V;
initial begin : read_file_process_in_19_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_19_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_19_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_19_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_20_V
reg [31: 0] AESL_REG_in_20_V = 0;
assign in_20_V = AESL_REG_in_20_V;
initial begin : read_file_process_in_20_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_20_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_20_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_20_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_21_V
reg [31: 0] AESL_REG_in_21_V = 0;
assign in_21_V = AESL_REG_in_21_V;
initial begin : read_file_process_in_21_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_21_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_21_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_21_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_22_V
reg [31: 0] AESL_REG_in_22_V = 0;
assign in_22_V = AESL_REG_in_22_V;
initial begin : read_file_process_in_22_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_22_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_22_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_22_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_23_V
reg [31: 0] AESL_REG_in_23_V = 0;
assign in_23_V = AESL_REG_in_23_V;
initial begin : read_file_process_in_23_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_23_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_23_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_23_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_24_V
reg [31: 0] AESL_REG_in_24_V = 0;
assign in_24_V = AESL_REG_in_24_V;
initial begin : read_file_process_in_24_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_24_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_24_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_24_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_25_V
reg [31: 0] AESL_REG_in_25_V = 0;
assign in_25_V = AESL_REG_in_25_V;
initial begin : read_file_process_in_25_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_25_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_25_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_25_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_26_V
reg [31: 0] AESL_REG_in_26_V = 0;
assign in_26_V = AESL_REG_in_26_V;
initial begin : read_file_process_in_26_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_26_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_26_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_26_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_27_V
reg [31: 0] AESL_REG_in_27_V = 0;
assign in_27_V = AESL_REG_in_27_V;
initial begin : read_file_process_in_27_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_27_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_27_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_27_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_28_V
reg [31: 0] AESL_REG_in_28_V = 0;
assign in_28_V = AESL_REG_in_28_V;
initial begin : read_file_process_in_28_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_28_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_28_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_28_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_29_V
reg [31: 0] AESL_REG_in_29_V = 0;
assign in_29_V = AESL_REG_in_29_V;
initial begin : read_file_process_in_29_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_29_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_29_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_29_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_30_V
reg [31: 0] AESL_REG_in_30_V = 0;
assign in_30_V = AESL_REG_in_30_V;
initial begin : read_file_process_in_30_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_30_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_30_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_30_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port in_31_V
reg [31: 0] AESL_REG_in_31_V = 0;
assign in_31_V = AESL_REG_in_31_V;
initial begin : read_file_process_in_31_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [143  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_in_31_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_in_31_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_in_31_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


reg AESL_REG_out_0_V_ap_vld = 0;
// The signal of port out_0_V
reg [31: 0] AESL_REG_out_0_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_0_V = 0; 
    else if(out_0_V_ap_vld) begin
        AESL_REG_out_0_V <= out_0_V;
        AESL_REG_out_0_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_0_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_0_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_0_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_0_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_0_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_0_V);
        AESL_REG_out_0_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_1_V_ap_vld = 0;
// The signal of port out_1_V
reg [31: 0] AESL_REG_out_1_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_1_V = 0; 
    else if(out_1_V_ap_vld) begin
        AESL_REG_out_1_V <= out_1_V;
        AESL_REG_out_1_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_1_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_1_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_1_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_1_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_1_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_1_V);
        AESL_REG_out_1_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_2_V_ap_vld = 0;
// The signal of port out_2_V
reg [31: 0] AESL_REG_out_2_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_2_V = 0; 
    else if(out_2_V_ap_vld) begin
        AESL_REG_out_2_V <= out_2_V;
        AESL_REG_out_2_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_2_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_2_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_2_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_2_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_2_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_2_V);
        AESL_REG_out_2_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_3_V_ap_vld = 0;
// The signal of port out_3_V
reg [31: 0] AESL_REG_out_3_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_3_V = 0; 
    else if(out_3_V_ap_vld) begin
        AESL_REG_out_3_V <= out_3_V;
        AESL_REG_out_3_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_3_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_3_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_3_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_3_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_3_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_3_V);
        AESL_REG_out_3_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_4_V_ap_vld = 0;
// The signal of port out_4_V
reg [31: 0] AESL_REG_out_4_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_4_V = 0; 
    else if(out_4_V_ap_vld) begin
        AESL_REG_out_4_V <= out_4_V;
        AESL_REG_out_4_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_4_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_4_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_4_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_4_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_4_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_4_V);
        AESL_REG_out_4_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_5_V_ap_vld = 0;
// The signal of port out_5_V
reg [31: 0] AESL_REG_out_5_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_5_V = 0; 
    else if(out_5_V_ap_vld) begin
        AESL_REG_out_5_V <= out_5_V;
        AESL_REG_out_5_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_5_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_5_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_5_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_5_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_5_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_5_V);
        AESL_REG_out_5_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_6_V_ap_vld = 0;
// The signal of port out_6_V
reg [31: 0] AESL_REG_out_6_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_6_V = 0; 
    else if(out_6_V_ap_vld) begin
        AESL_REG_out_6_V <= out_6_V;
        AESL_REG_out_6_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_6_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_6_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_6_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_6_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_6_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_6_V);
        AESL_REG_out_6_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_7_V_ap_vld = 0;
// The signal of port out_7_V
reg [31: 0] AESL_REG_out_7_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_7_V = 0; 
    else if(out_7_V_ap_vld) begin
        AESL_REG_out_7_V <= out_7_V;
        AESL_REG_out_7_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_7_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_7_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_7_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_7_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_7_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_7_V);
        AESL_REG_out_7_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_8_V_ap_vld = 0;
// The signal of port out_8_V
reg [31: 0] AESL_REG_out_8_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_8_V = 0; 
    else if(out_8_V_ap_vld) begin
        AESL_REG_out_8_V <= out_8_V;
        AESL_REG_out_8_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_8_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_8_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_8_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_8_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_8_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_8_V);
        AESL_REG_out_8_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_9_V_ap_vld = 0;
// The signal of port out_9_V
reg [31: 0] AESL_REG_out_9_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_9_V = 0; 
    else if(out_9_V_ap_vld) begin
        AESL_REG_out_9_V <= out_9_V;
        AESL_REG_out_9_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_9_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_9_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_9_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_9_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_9_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_9_V);
        AESL_REG_out_9_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_10_V_ap_vld = 0;
// The signal of port out_10_V
reg [31: 0] AESL_REG_out_10_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_10_V = 0; 
    else if(out_10_V_ap_vld) begin
        AESL_REG_out_10_V <= out_10_V;
        AESL_REG_out_10_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_10_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_10_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_10_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_10_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_10_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_10_V);
        AESL_REG_out_10_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_11_V_ap_vld = 0;
// The signal of port out_11_V
reg [31: 0] AESL_REG_out_11_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_11_V = 0; 
    else if(out_11_V_ap_vld) begin
        AESL_REG_out_11_V <= out_11_V;
        AESL_REG_out_11_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_11_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_11_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_11_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_11_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_11_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_11_V);
        AESL_REG_out_11_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_12_V_ap_vld = 0;
// The signal of port out_12_V
reg [31: 0] AESL_REG_out_12_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_12_V = 0; 
    else if(out_12_V_ap_vld) begin
        AESL_REG_out_12_V <= out_12_V;
        AESL_REG_out_12_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_12_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_12_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_12_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_12_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_12_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_12_V);
        AESL_REG_out_12_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_13_V_ap_vld = 0;
// The signal of port out_13_V
reg [31: 0] AESL_REG_out_13_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_13_V = 0; 
    else if(out_13_V_ap_vld) begin
        AESL_REG_out_13_V <= out_13_V;
        AESL_REG_out_13_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_13_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_13_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_13_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_13_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_13_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_13_V);
        AESL_REG_out_13_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_14_V_ap_vld = 0;
// The signal of port out_14_V
reg [31: 0] AESL_REG_out_14_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_14_V = 0; 
    else if(out_14_V_ap_vld) begin
        AESL_REG_out_14_V <= out_14_V;
        AESL_REG_out_14_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_14_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_14_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_14_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_14_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_14_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_14_V);
        AESL_REG_out_14_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_15_V_ap_vld = 0;
// The signal of port out_15_V
reg [31: 0] AESL_REG_out_15_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_15_V = 0; 
    else if(out_15_V_ap_vld) begin
        AESL_REG_out_15_V <= out_15_V;
        AESL_REG_out_15_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_15_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_15_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_15_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_15_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_15_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_15_V);
        AESL_REG_out_15_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_16_V_ap_vld = 0;
// The signal of port out_16_V
reg [31: 0] AESL_REG_out_16_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_16_V = 0; 
    else if(out_16_V_ap_vld) begin
        AESL_REG_out_16_V <= out_16_V;
        AESL_REG_out_16_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_16_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_16_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_16_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_16_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_16_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_16_V);
        AESL_REG_out_16_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_17_V_ap_vld = 0;
// The signal of port out_17_V
reg [31: 0] AESL_REG_out_17_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_17_V = 0; 
    else if(out_17_V_ap_vld) begin
        AESL_REG_out_17_V <= out_17_V;
        AESL_REG_out_17_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_17_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_17_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_17_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_17_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_17_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_17_V);
        AESL_REG_out_17_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_18_V_ap_vld = 0;
// The signal of port out_18_V
reg [31: 0] AESL_REG_out_18_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_18_V = 0; 
    else if(out_18_V_ap_vld) begin
        AESL_REG_out_18_V <= out_18_V;
        AESL_REG_out_18_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_18_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_18_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_18_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_18_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_18_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_18_V);
        AESL_REG_out_18_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_19_V_ap_vld = 0;
// The signal of port out_19_V
reg [31: 0] AESL_REG_out_19_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_19_V = 0; 
    else if(out_19_V_ap_vld) begin
        AESL_REG_out_19_V <= out_19_V;
        AESL_REG_out_19_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_19_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_19_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_19_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_19_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_19_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_19_V);
        AESL_REG_out_19_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_20_V_ap_vld = 0;
// The signal of port out_20_V
reg [31: 0] AESL_REG_out_20_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_20_V = 0; 
    else if(out_20_V_ap_vld) begin
        AESL_REG_out_20_V <= out_20_V;
        AESL_REG_out_20_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_20_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_20_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_20_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_20_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_20_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_20_V);
        AESL_REG_out_20_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_21_V_ap_vld = 0;
// The signal of port out_21_V
reg [31: 0] AESL_REG_out_21_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_21_V = 0; 
    else if(out_21_V_ap_vld) begin
        AESL_REG_out_21_V <= out_21_V;
        AESL_REG_out_21_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_21_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_21_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_21_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_21_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_21_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_21_V);
        AESL_REG_out_21_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_22_V_ap_vld = 0;
// The signal of port out_22_V
reg [31: 0] AESL_REG_out_22_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_22_V = 0; 
    else if(out_22_V_ap_vld) begin
        AESL_REG_out_22_V <= out_22_V;
        AESL_REG_out_22_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_22_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_22_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_22_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_22_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_22_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_22_V);
        AESL_REG_out_22_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_23_V_ap_vld = 0;
// The signal of port out_23_V
reg [31: 0] AESL_REG_out_23_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_23_V = 0; 
    else if(out_23_V_ap_vld) begin
        AESL_REG_out_23_V <= out_23_V;
        AESL_REG_out_23_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_23_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_23_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_23_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_23_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_23_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_23_V);
        AESL_REG_out_23_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_24_V_ap_vld = 0;
// The signal of port out_24_V
reg [31: 0] AESL_REG_out_24_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_24_V = 0; 
    else if(out_24_V_ap_vld) begin
        AESL_REG_out_24_V <= out_24_V;
        AESL_REG_out_24_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_24_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_24_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_24_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_24_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_24_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_24_V);
        AESL_REG_out_24_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_25_V_ap_vld = 0;
// The signal of port out_25_V
reg [31: 0] AESL_REG_out_25_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_25_V = 0; 
    else if(out_25_V_ap_vld) begin
        AESL_REG_out_25_V <= out_25_V;
        AESL_REG_out_25_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_25_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_25_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_25_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_25_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_25_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_25_V);
        AESL_REG_out_25_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_26_V_ap_vld = 0;
// The signal of port out_26_V
reg [31: 0] AESL_REG_out_26_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_26_V = 0; 
    else if(out_26_V_ap_vld) begin
        AESL_REG_out_26_V <= out_26_V;
        AESL_REG_out_26_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_26_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_26_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_26_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_26_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_26_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_26_V);
        AESL_REG_out_26_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_27_V_ap_vld = 0;
// The signal of port out_27_V
reg [31: 0] AESL_REG_out_27_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_27_V = 0; 
    else if(out_27_V_ap_vld) begin
        AESL_REG_out_27_V <= out_27_V;
        AESL_REG_out_27_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_27_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_27_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_27_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_27_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_27_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_27_V);
        AESL_REG_out_27_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_28_V_ap_vld = 0;
// The signal of port out_28_V
reg [31: 0] AESL_REG_out_28_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_28_V = 0; 
    else if(out_28_V_ap_vld) begin
        AESL_REG_out_28_V <= out_28_V;
        AESL_REG_out_28_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_28_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_28_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_28_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_28_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_28_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_28_V);
        AESL_REG_out_28_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_29_V_ap_vld = 0;
// The signal of port out_29_V
reg [31: 0] AESL_REG_out_29_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_29_V = 0; 
    else if(out_29_V_ap_vld) begin
        AESL_REG_out_29_V <= out_29_V;
        AESL_REG_out_29_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_29_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_29_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_29_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_29_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_29_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_29_V);
        AESL_REG_out_29_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_30_V_ap_vld = 0;
// The signal of port out_30_V
reg [31: 0] AESL_REG_out_30_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_30_V = 0; 
    else if(out_30_V_ap_vld) begin
        AESL_REG_out_30_V <= out_30_V;
        AESL_REG_out_30_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_30_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_30_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_30_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_30_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_30_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_30_V);
        AESL_REG_out_30_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_out_31_V_ap_vld = 0;
// The signal of port out_31_V
reg [31: 0] AESL_REG_out_31_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_out_31_V = 0; 
    else if(out_31_V_ap_vld) begin
        AESL_REG_out_31_V <= out_31_V;
        AESL_REG_out_31_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_out_31_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer out_31_V_count;
    reg [143:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_out_31_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_out_31_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_out_31_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_out_31_V);
        AESL_REG_out_31_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 0);
    while(AESL_ready_cnt != AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

    event next_trigger_ready_cnt;
    
    initial begin : gen_ready_cnt
        ready_cnt = 0;
        wait (AESL_reset === 0);
        forever begin
            @ (posedge AESL_clock);
            if (ready == 1) begin
                if (ready_cnt < AUTOTB_TRANSACTION_NUM) begin
                    ready_cnt = ready_cnt + 1;
                end
            end
            -> next_trigger_ready_cnt;
        end
    end
    
    wire all_finish = (done_cnt == AUTOTB_TRANSACTION_NUM);
    
    // done_cnt
    always @ (posedge AESL_clock) begin
        if (AESL_reset) begin
            done_cnt <= 0;
        end else begin
            if (AESL_done == 1) begin
                if (done_cnt < AUTOTB_TRANSACTION_NUM) begin
                    done_cnt <= done_cnt + 1;
                end
            end
        end
    end
    
    initial begin : finish_simulation
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_in_0_V;
reg [31:0] size_in_0_V;
reg [31:0] size_in_0_V_backup;
reg end_in_1_V;
reg [31:0] size_in_1_V;
reg [31:0] size_in_1_V_backup;
reg end_in_2_V;
reg [31:0] size_in_2_V;
reg [31:0] size_in_2_V_backup;
reg end_in_3_V;
reg [31:0] size_in_3_V;
reg [31:0] size_in_3_V_backup;
reg end_in_4_V;
reg [31:0] size_in_4_V;
reg [31:0] size_in_4_V_backup;
reg end_in_5_V;
reg [31:0] size_in_5_V;
reg [31:0] size_in_5_V_backup;
reg end_in_6_V;
reg [31:0] size_in_6_V;
reg [31:0] size_in_6_V_backup;
reg end_in_7_V;
reg [31:0] size_in_7_V;
reg [31:0] size_in_7_V_backup;
reg end_in_8_V;
reg [31:0] size_in_8_V;
reg [31:0] size_in_8_V_backup;
reg end_in_9_V;
reg [31:0] size_in_9_V;
reg [31:0] size_in_9_V_backup;
reg end_in_10_V;
reg [31:0] size_in_10_V;
reg [31:0] size_in_10_V_backup;
reg end_in_11_V;
reg [31:0] size_in_11_V;
reg [31:0] size_in_11_V_backup;
reg end_in_12_V;
reg [31:0] size_in_12_V;
reg [31:0] size_in_12_V_backup;
reg end_in_13_V;
reg [31:0] size_in_13_V;
reg [31:0] size_in_13_V_backup;
reg end_in_14_V;
reg [31:0] size_in_14_V;
reg [31:0] size_in_14_V_backup;
reg end_in_15_V;
reg [31:0] size_in_15_V;
reg [31:0] size_in_15_V_backup;
reg end_in_16_V;
reg [31:0] size_in_16_V;
reg [31:0] size_in_16_V_backup;
reg end_in_17_V;
reg [31:0] size_in_17_V;
reg [31:0] size_in_17_V_backup;
reg end_in_18_V;
reg [31:0] size_in_18_V;
reg [31:0] size_in_18_V_backup;
reg end_in_19_V;
reg [31:0] size_in_19_V;
reg [31:0] size_in_19_V_backup;
reg end_in_20_V;
reg [31:0] size_in_20_V;
reg [31:0] size_in_20_V_backup;
reg end_in_21_V;
reg [31:0] size_in_21_V;
reg [31:0] size_in_21_V_backup;
reg end_in_22_V;
reg [31:0] size_in_22_V;
reg [31:0] size_in_22_V_backup;
reg end_in_23_V;
reg [31:0] size_in_23_V;
reg [31:0] size_in_23_V_backup;
reg end_in_24_V;
reg [31:0] size_in_24_V;
reg [31:0] size_in_24_V_backup;
reg end_in_25_V;
reg [31:0] size_in_25_V;
reg [31:0] size_in_25_V_backup;
reg end_in_26_V;
reg [31:0] size_in_26_V;
reg [31:0] size_in_26_V_backup;
reg end_in_27_V;
reg [31:0] size_in_27_V;
reg [31:0] size_in_27_V_backup;
reg end_in_28_V;
reg [31:0] size_in_28_V;
reg [31:0] size_in_28_V_backup;
reg end_in_29_V;
reg [31:0] size_in_29_V;
reg [31:0] size_in_29_V_backup;
reg end_in_30_V;
reg [31:0] size_in_30_V;
reg [31:0] size_in_30_V_backup;
reg end_in_31_V;
reg [31:0] size_in_31_V;
reg [31:0] size_in_31_V_backup;
reg end_out_0_V;
reg [31:0] size_out_0_V;
reg [31:0] size_out_0_V_backup;
reg end_out_1_V;
reg [31:0] size_out_1_V;
reg [31:0] size_out_1_V_backup;
reg end_out_2_V;
reg [31:0] size_out_2_V;
reg [31:0] size_out_2_V_backup;
reg end_out_3_V;
reg [31:0] size_out_3_V;
reg [31:0] size_out_3_V_backup;
reg end_out_4_V;
reg [31:0] size_out_4_V;
reg [31:0] size_out_4_V_backup;
reg end_out_5_V;
reg [31:0] size_out_5_V;
reg [31:0] size_out_5_V_backup;
reg end_out_6_V;
reg [31:0] size_out_6_V;
reg [31:0] size_out_6_V_backup;
reg end_out_7_V;
reg [31:0] size_out_7_V;
reg [31:0] size_out_7_V_backup;
reg end_out_8_V;
reg [31:0] size_out_8_V;
reg [31:0] size_out_8_V_backup;
reg end_out_9_V;
reg [31:0] size_out_9_V;
reg [31:0] size_out_9_V_backup;
reg end_out_10_V;
reg [31:0] size_out_10_V;
reg [31:0] size_out_10_V_backup;
reg end_out_11_V;
reg [31:0] size_out_11_V;
reg [31:0] size_out_11_V_backup;
reg end_out_12_V;
reg [31:0] size_out_12_V;
reg [31:0] size_out_12_V_backup;
reg end_out_13_V;
reg [31:0] size_out_13_V;
reg [31:0] size_out_13_V_backup;
reg end_out_14_V;
reg [31:0] size_out_14_V;
reg [31:0] size_out_14_V_backup;
reg end_out_15_V;
reg [31:0] size_out_15_V;
reg [31:0] size_out_15_V_backup;
reg end_out_16_V;
reg [31:0] size_out_16_V;
reg [31:0] size_out_16_V_backup;
reg end_out_17_V;
reg [31:0] size_out_17_V;
reg [31:0] size_out_17_V_backup;
reg end_out_18_V;
reg [31:0] size_out_18_V;
reg [31:0] size_out_18_V_backup;
reg end_out_19_V;
reg [31:0] size_out_19_V;
reg [31:0] size_out_19_V_backup;
reg end_out_20_V;
reg [31:0] size_out_20_V;
reg [31:0] size_out_20_V_backup;
reg end_out_21_V;
reg [31:0] size_out_21_V;
reg [31:0] size_out_21_V_backup;
reg end_out_22_V;
reg [31:0] size_out_22_V;
reg [31:0] size_out_22_V_backup;
reg end_out_23_V;
reg [31:0] size_out_23_V;
reg [31:0] size_out_23_V_backup;
reg end_out_24_V;
reg [31:0] size_out_24_V;
reg [31:0] size_out_24_V_backup;
reg end_out_25_V;
reg [31:0] size_out_25_V;
reg [31:0] size_out_25_V_backup;
reg end_out_26_V;
reg [31:0] size_out_26_V;
reg [31:0] size_out_26_V_backup;
reg end_out_27_V;
reg [31:0] size_out_27_V;
reg [31:0] size_out_27_V_backup;
reg end_out_28_V;
reg [31:0] size_out_28_V;
reg [31:0] size_out_28_V_backup;
reg end_out_29_V;
reg [31:0] size_out_29_V;
reg [31:0] size_out_29_V_backup;
reg end_out_30_V;
reg [31:0] size_out_30_V;
reg [31:0] size_out_30_V_backup;
reg end_out_31_V;
reg [31:0] size_out_31_V;
reg [31:0] size_out_31_V_backup;

initial begin : initial_process
    integer proc_rand;
    rst = 1;
    # 100;
    repeat(3) @ (posedge AESL_clock);
    rst = 0;
end
initial begin : start_process
    integer proc_rand;
    reg [31:0] start_cnt;
    ce = 1;
    start = 0;
    start_cnt = 0;
    wait (AESL_reset === 0);
    @ (posedge AESL_clock);
    #0 start = 1;
    start_cnt = start_cnt + 1;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt >= AUTOTB_TRANSACTION_NUM) begin
            // keep pushing garbage in
            #0 start = 1;
        end
        if (AESL_ready) begin
            start_cnt = start_cnt + 1;
        end
    end
end

always @(AESL_done)
begin
    tb_continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end

////////////////////////////////////////////
// progress and performance
////////////////////////////////////////////

task wait_start();
    while (~AESL_start) begin
        @ (posedge AESL_clock);
    end
endtask

reg [31:0] clk_cnt = 0;
reg AESL_ready_p1;
reg AESL_start_p1;

always @ (posedge AESL_clock) begin
    clk_cnt <= clk_cnt + 1;
    AESL_ready_p1 <= AESL_ready;
    AESL_start_p1 <= AESL_start;
end

reg [31:0] start_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] start_cnt;
reg [31:0] ready_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] ap_ready_cnt;
reg [31:0] finish_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] finish_cnt;
event report_progress;

initial begin
    start_cnt = 0;
    finish_cnt = 0;
    ap_ready_cnt = 0;
    wait (AESL_reset == 0);
    wait_start();
    start_timestamp[start_cnt] = clk_cnt;
    start_cnt = start_cnt + 1;
    if (AESL_done) begin
        finish_timestamp[finish_cnt] = clk_cnt;
        finish_cnt = finish_cnt + 1;
    end
    -> report_progress;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt < AUTOTB_TRANSACTION_NUM) begin
            if ((AESL_start && AESL_ready_p1)||(AESL_start && ~AESL_start_p1)) begin
                start_timestamp[start_cnt] = clk_cnt;
                start_cnt = start_cnt + 1;
            end
        end
        if (ap_ready_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_start_p1 && AESL_ready_p1) begin
                ready_timestamp[ap_ready_cnt] = clk_cnt;
                ap_ready_cnt = ap_ready_cnt + 1;
            end
        end
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                finish_timestamp[finish_cnt] = clk_cnt;
                finish_cnt = finish_cnt + 1;
            end
        end
        -> report_progress;
    end
end

reg [31:0] progress_timeout;

initial begin : simulation_progress
    real intra_progress;
    wait (AESL_reset == 0);
    progress_timeout = PROGRESS_TIMEOUT;
    $display("////////////////////////////////////////////////////////////////////////////////////");
    $display("// Inter-Transaction Progress: Completed Transaction / Total Transaction");
    $display("// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%%");
    $display("//");
    $display("// RTL Simulation : \"Inter-Transaction Progress\" [\"Intra-Transaction Progress\"] @ \"Simulation Time\"");
    $display("////////////////////////////////////////////////////////////////////////////////////");
    print_progress();
    while (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
        @ (report_progress);
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                print_progress();
                progress_timeout = PROGRESS_TIMEOUT;
            end else begin
                if (progress_timeout == 0) begin
                    print_progress();
                    progress_timeout = PROGRESS_TIMEOUT;
                end else begin
                    progress_timeout = progress_timeout - 1;
                end
            end
        end
        // non-dataflow design && latency is predictable && no AXI master/slave interface
        get_intra_progress(intra_progress);
        if (intra_progress > 1000) begin
            $display("// RTL Simulation : transaction %0d run-time latency is greater than %0f time(s) of the prediction @ \"%0t\"", start_cnt, intra_progress, $time);
            $display("////////////////////////////////////////////////////////////////////////////////////");
            $finish;
        end
    end
    print_progress();
    $display("////////////////////////////////////////////////////////////////////////////////////");
    calculate_performance();
end

task get_intra_progress(output real intra_progress);
    begin
        if (start_cnt > finish_cnt) begin
            intra_progress = clk_cnt - start_timestamp[finish_cnt];
        end else if(finish_cnt > 0) begin
            intra_progress = LATENCY_ESTIMATION;
        end else begin
            intra_progress = 0;
        end
        intra_progress = intra_progress / LATENCY_ESTIMATION;
    end
endtask

task print_progress();
    real intra_progress;
    begin
        if (LATENCY_ESTIMATION > 0) begin
            get_intra_progress(intra_progress);
            $display("// RTL Simulation : %0d / %0d [%2.2f%%] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, intra_progress * 100, $time);
        end else begin
            $display("// RTL Simulation : %0d / %0d [n/a] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, $time);
        end
    end
endtask

task calculate_performance();
    integer i;
    integer fp;
    reg [31:0] latency [0:AUTOTB_TRANSACTION_NUM - 1];
    reg [31:0] latency_min;
    reg [31:0] latency_max;
    reg [31:0] latency_total;
    reg [31:0] latency_average;
    reg [31:0] interval [0:AUTOTB_TRANSACTION_NUM - 2];
    reg [31:0] interval_min;
    reg [31:0] interval_max;
    reg [31:0] interval_total;
    reg [31:0] interval_average;
    begin
        latency_min = -1;
        latency_max = 0;
        latency_total = 0;
        interval_min = -1;
        interval_max = 0;
        interval_total = 0;

        for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
            // calculate latency
            latency[i] = finish_timestamp[i] - start_timestamp[i];
            if (latency[i] > latency_max) latency_max = latency[i];
            if (latency[i] < latency_min) latency_min = latency[i];
            latency_total = latency_total + latency[i];
            // calculate interval
            if (AUTOTB_TRANSACTION_NUM == 1) begin
                interval[i] = 0;
                interval_max = 0;
                interval_min = 0;
                interval_total = 0;
            end else if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                interval[i] = start_timestamp[i + 1] - start_timestamp[i];
                if (interval[i] > interval_max) interval_max = interval[i];
                if (interval[i] < interval_min) interval_min = interval[i];
                interval_total = interval_total + interval[i];
            end
        end

        latency_average = latency_total / AUTOTB_TRANSACTION_NUM;
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            interval_average = 0;
        end else begin
            interval_average = interval_total / (AUTOTB_TRANSACTION_NUM - 1);
        end

        fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

        $fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latency_max);
        $fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latency_min);
        $fdisplay(fp, "$AVER_LATENCY = \"%0d\"", latency_average);
        $fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", interval_max);
        $fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", interval_min);
        $fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", interval_average);

        $fclose(fp);

        fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");

        $fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            i = 0;
            $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
        end else begin
            for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
                if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                    $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
                end else begin
                    $fdisplay(fp, "transaction%8d:%16d               x", i, latency[i]);
                end
            end
        end

        $fclose(fp);
    end
endtask


////////////////////////////////////////////
// Dependence Check
////////////////////////////////////////////

`ifndef POST_SYN

`endif

endmodule
