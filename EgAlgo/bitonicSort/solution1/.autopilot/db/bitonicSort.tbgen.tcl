set moduleName bitonicSort
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {bitonicSort}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_0_V int 32 regular {pointer 0}  }
	{ in_1_V int 32 regular {pointer 0}  }
	{ in_2_V int 32 regular {pointer 0}  }
	{ in_3_V int 32 regular {pointer 0}  }
	{ in_4_V int 32 regular {pointer 0}  }
	{ in_5_V int 32 regular {pointer 0}  }
	{ in_6_V int 32 regular {pointer 0}  }
	{ in_7_V int 32 regular {pointer 0}  }
	{ in_8_V int 32 regular {pointer 0}  }
	{ in_9_V int 32 regular {pointer 0}  }
	{ in_10_V int 32 regular {pointer 0}  }
	{ in_11_V int 32 regular {pointer 0}  }
	{ in_12_V int 32 regular {pointer 0}  }
	{ in_13_V int 32 regular {pointer 0}  }
	{ in_14_V int 32 regular {pointer 0}  }
	{ in_15_V int 32 regular {pointer 0}  }
	{ in_16_V int 32 regular {pointer 0}  }
	{ in_17_V int 32 regular {pointer 0}  }
	{ in_18_V int 32 regular {pointer 0}  }
	{ in_19_V int 32 regular {pointer 0}  }
	{ in_20_V int 32 regular {pointer 0}  }
	{ in_21_V int 32 regular {pointer 0}  }
	{ in_22_V int 32 regular {pointer 0}  }
	{ in_23_V int 32 regular {pointer 0}  }
	{ in_24_V int 32 regular {pointer 0}  }
	{ in_25_V int 32 regular {pointer 0}  }
	{ in_26_V int 32 regular {pointer 0}  }
	{ in_27_V int 32 regular {pointer 0}  }
	{ in_28_V int 32 regular {pointer 0}  }
	{ in_29_V int 32 regular {pointer 0}  }
	{ in_30_V int 32 regular {pointer 0}  }
	{ in_31_V int 32 regular {pointer 0}  }
	{ out_0_V int 32 regular {pointer 1}  }
	{ out_1_V int 32 regular {pointer 1}  }
	{ out_2_V int 32 regular {pointer 1}  }
	{ out_3_V int 32 regular {pointer 1}  }
	{ out_4_V int 32 regular {pointer 1}  }
	{ out_5_V int 32 regular {pointer 1}  }
	{ out_6_V int 32 regular {pointer 1}  }
	{ out_7_V int 32 regular {pointer 1}  }
	{ out_8_V int 32 regular {pointer 1}  }
	{ out_9_V int 32 regular {pointer 1}  }
	{ out_10_V int 32 regular {pointer 1}  }
	{ out_11_V int 32 regular {pointer 1}  }
	{ out_12_V int 32 regular {pointer 1}  }
	{ out_13_V int 32 regular {pointer 1}  }
	{ out_14_V int 32 regular {pointer 1}  }
	{ out_15_V int 32 regular {pointer 1}  }
	{ out_16_V int 32 regular {pointer 1}  }
	{ out_17_V int 32 regular {pointer 1}  }
	{ out_18_V int 32 regular {pointer 1}  }
	{ out_19_V int 32 regular {pointer 1}  }
	{ out_20_V int 32 regular {pointer 1}  }
	{ out_21_V int 32 regular {pointer 1}  }
	{ out_22_V int 32 regular {pointer 1}  }
	{ out_23_V int 32 regular {pointer 1}  }
	{ out_24_V int 32 regular {pointer 1}  }
	{ out_25_V int 32 regular {pointer 1}  }
	{ out_26_V int 32 regular {pointer 1}  }
	{ out_27_V int 32 regular {pointer 1}  }
	{ out_28_V int 32 regular {pointer 1}  }
	{ out_29_V int 32 regular {pointer 1}  }
	{ out_30_V int 32 regular {pointer 1}  }
	{ out_31_V int 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_0_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "in_1_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "in_2_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "in_3_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "in_4_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "in_5_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "in_6_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "in_7_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "in_8_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "in_9_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "in_10_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]}]} , 
 	{ "Name" : "in_11_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]}]} , 
 	{ "Name" : "in_12_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]}]} , 
 	{ "Name" : "in_13_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]}]} , 
 	{ "Name" : "in_14_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]}]} , 
 	{ "Name" : "in_15_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]}]} , 
 	{ "Name" : "in_16_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 16,"up" : 16,"step" : 2}]}]}]} , 
 	{ "Name" : "in_17_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 17,"up" : 17,"step" : 2}]}]}]} , 
 	{ "Name" : "in_18_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 18,"up" : 18,"step" : 2}]}]}]} , 
 	{ "Name" : "in_19_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 19,"up" : 19,"step" : 2}]}]}]} , 
 	{ "Name" : "in_20_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 20,"up" : 20,"step" : 2}]}]}]} , 
 	{ "Name" : "in_21_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 21,"up" : 21,"step" : 2}]}]}]} , 
 	{ "Name" : "in_22_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 22,"up" : 22,"step" : 2}]}]}]} , 
 	{ "Name" : "in_23_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 23,"up" : 23,"step" : 2}]}]}]} , 
 	{ "Name" : "in_24_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 24,"up" : 24,"step" : 2}]}]}]} , 
 	{ "Name" : "in_25_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 25,"up" : 25,"step" : 2}]}]}]} , 
 	{ "Name" : "in_26_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 26,"up" : 26,"step" : 2}]}]}]} , 
 	{ "Name" : "in_27_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 27,"up" : 27,"step" : 2}]}]}]} , 
 	{ "Name" : "in_28_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 28,"up" : 28,"step" : 2}]}]}]} , 
 	{ "Name" : "in_29_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 29,"up" : 29,"step" : 2}]}]}]} , 
 	{ "Name" : "in_30_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 30,"up" : 30,"step" : 2}]}]}]} , 
 	{ "Name" : "in_31_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 31,"up" : 31,"step" : 2}]}]}]} , 
 	{ "Name" : "out_0_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "out_1_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "out_2_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "out_3_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "out_4_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "out_5_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "out_6_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "out_7_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "out_8_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "out_9_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "out_10_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]}]} , 
 	{ "Name" : "out_11_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]}]} , 
 	{ "Name" : "out_12_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]}]} , 
 	{ "Name" : "out_13_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]}]} , 
 	{ "Name" : "out_14_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]}]} , 
 	{ "Name" : "out_15_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]}]} , 
 	{ "Name" : "out_16_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 16,"up" : 16,"step" : 2}]}]}]} , 
 	{ "Name" : "out_17_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 17,"up" : 17,"step" : 2}]}]}]} , 
 	{ "Name" : "out_18_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 18,"up" : 18,"step" : 2}]}]}]} , 
 	{ "Name" : "out_19_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 19,"up" : 19,"step" : 2}]}]}]} , 
 	{ "Name" : "out_20_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 20,"up" : 20,"step" : 2}]}]}]} , 
 	{ "Name" : "out_21_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 21,"up" : 21,"step" : 2}]}]}]} , 
 	{ "Name" : "out_22_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 22,"up" : 22,"step" : 2}]}]}]} , 
 	{ "Name" : "out_23_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 23,"up" : 23,"step" : 2}]}]}]} , 
 	{ "Name" : "out_24_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 24,"up" : 24,"step" : 2}]}]}]} , 
 	{ "Name" : "out_25_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 25,"up" : 25,"step" : 2}]}]}]} , 
 	{ "Name" : "out_26_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 26,"up" : 26,"step" : 2}]}]}]} , 
 	{ "Name" : "out_27_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 27,"up" : 27,"step" : 2}]}]}]} , 
 	{ "Name" : "out_28_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 28,"up" : 28,"step" : 2}]}]}]} , 
 	{ "Name" : "out_29_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 29,"up" : 29,"step" : 2}]}]}]} , 
 	{ "Name" : "out_30_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 30,"up" : 30,"step" : 2}]}]}]} , 
 	{ "Name" : "out_31_V", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 31,"up" : 31,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 102
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_0_V sc_in sc_lv 32 signal 0 } 
	{ in_1_V sc_in sc_lv 32 signal 1 } 
	{ in_2_V sc_in sc_lv 32 signal 2 } 
	{ in_3_V sc_in sc_lv 32 signal 3 } 
	{ in_4_V sc_in sc_lv 32 signal 4 } 
	{ in_5_V sc_in sc_lv 32 signal 5 } 
	{ in_6_V sc_in sc_lv 32 signal 6 } 
	{ in_7_V sc_in sc_lv 32 signal 7 } 
	{ in_8_V sc_in sc_lv 32 signal 8 } 
	{ in_9_V sc_in sc_lv 32 signal 9 } 
	{ in_10_V sc_in sc_lv 32 signal 10 } 
	{ in_11_V sc_in sc_lv 32 signal 11 } 
	{ in_12_V sc_in sc_lv 32 signal 12 } 
	{ in_13_V sc_in sc_lv 32 signal 13 } 
	{ in_14_V sc_in sc_lv 32 signal 14 } 
	{ in_15_V sc_in sc_lv 32 signal 15 } 
	{ in_16_V sc_in sc_lv 32 signal 16 } 
	{ in_17_V sc_in sc_lv 32 signal 17 } 
	{ in_18_V sc_in sc_lv 32 signal 18 } 
	{ in_19_V sc_in sc_lv 32 signal 19 } 
	{ in_20_V sc_in sc_lv 32 signal 20 } 
	{ in_21_V sc_in sc_lv 32 signal 21 } 
	{ in_22_V sc_in sc_lv 32 signal 22 } 
	{ in_23_V sc_in sc_lv 32 signal 23 } 
	{ in_24_V sc_in sc_lv 32 signal 24 } 
	{ in_25_V sc_in sc_lv 32 signal 25 } 
	{ in_26_V sc_in sc_lv 32 signal 26 } 
	{ in_27_V sc_in sc_lv 32 signal 27 } 
	{ in_28_V sc_in sc_lv 32 signal 28 } 
	{ in_29_V sc_in sc_lv 32 signal 29 } 
	{ in_30_V sc_in sc_lv 32 signal 30 } 
	{ in_31_V sc_in sc_lv 32 signal 31 } 
	{ out_0_V sc_out sc_lv 32 signal 32 } 
	{ out_0_V_ap_vld sc_out sc_logic 1 outvld 32 } 
	{ out_1_V sc_out sc_lv 32 signal 33 } 
	{ out_1_V_ap_vld sc_out sc_logic 1 outvld 33 } 
	{ out_2_V sc_out sc_lv 32 signal 34 } 
	{ out_2_V_ap_vld sc_out sc_logic 1 outvld 34 } 
	{ out_3_V sc_out sc_lv 32 signal 35 } 
	{ out_3_V_ap_vld sc_out sc_logic 1 outvld 35 } 
	{ out_4_V sc_out sc_lv 32 signal 36 } 
	{ out_4_V_ap_vld sc_out sc_logic 1 outvld 36 } 
	{ out_5_V sc_out sc_lv 32 signal 37 } 
	{ out_5_V_ap_vld sc_out sc_logic 1 outvld 37 } 
	{ out_6_V sc_out sc_lv 32 signal 38 } 
	{ out_6_V_ap_vld sc_out sc_logic 1 outvld 38 } 
	{ out_7_V sc_out sc_lv 32 signal 39 } 
	{ out_7_V_ap_vld sc_out sc_logic 1 outvld 39 } 
	{ out_8_V sc_out sc_lv 32 signal 40 } 
	{ out_8_V_ap_vld sc_out sc_logic 1 outvld 40 } 
	{ out_9_V sc_out sc_lv 32 signal 41 } 
	{ out_9_V_ap_vld sc_out sc_logic 1 outvld 41 } 
	{ out_10_V sc_out sc_lv 32 signal 42 } 
	{ out_10_V_ap_vld sc_out sc_logic 1 outvld 42 } 
	{ out_11_V sc_out sc_lv 32 signal 43 } 
	{ out_11_V_ap_vld sc_out sc_logic 1 outvld 43 } 
	{ out_12_V sc_out sc_lv 32 signal 44 } 
	{ out_12_V_ap_vld sc_out sc_logic 1 outvld 44 } 
	{ out_13_V sc_out sc_lv 32 signal 45 } 
	{ out_13_V_ap_vld sc_out sc_logic 1 outvld 45 } 
	{ out_14_V sc_out sc_lv 32 signal 46 } 
	{ out_14_V_ap_vld sc_out sc_logic 1 outvld 46 } 
	{ out_15_V sc_out sc_lv 32 signal 47 } 
	{ out_15_V_ap_vld sc_out sc_logic 1 outvld 47 } 
	{ out_16_V sc_out sc_lv 32 signal 48 } 
	{ out_16_V_ap_vld sc_out sc_logic 1 outvld 48 } 
	{ out_17_V sc_out sc_lv 32 signal 49 } 
	{ out_17_V_ap_vld sc_out sc_logic 1 outvld 49 } 
	{ out_18_V sc_out sc_lv 32 signal 50 } 
	{ out_18_V_ap_vld sc_out sc_logic 1 outvld 50 } 
	{ out_19_V sc_out sc_lv 32 signal 51 } 
	{ out_19_V_ap_vld sc_out sc_logic 1 outvld 51 } 
	{ out_20_V sc_out sc_lv 32 signal 52 } 
	{ out_20_V_ap_vld sc_out sc_logic 1 outvld 52 } 
	{ out_21_V sc_out sc_lv 32 signal 53 } 
	{ out_21_V_ap_vld sc_out sc_logic 1 outvld 53 } 
	{ out_22_V sc_out sc_lv 32 signal 54 } 
	{ out_22_V_ap_vld sc_out sc_logic 1 outvld 54 } 
	{ out_23_V sc_out sc_lv 32 signal 55 } 
	{ out_23_V_ap_vld sc_out sc_logic 1 outvld 55 } 
	{ out_24_V sc_out sc_lv 32 signal 56 } 
	{ out_24_V_ap_vld sc_out sc_logic 1 outvld 56 } 
	{ out_25_V sc_out sc_lv 32 signal 57 } 
	{ out_25_V_ap_vld sc_out sc_logic 1 outvld 57 } 
	{ out_26_V sc_out sc_lv 32 signal 58 } 
	{ out_26_V_ap_vld sc_out sc_logic 1 outvld 58 } 
	{ out_27_V sc_out sc_lv 32 signal 59 } 
	{ out_27_V_ap_vld sc_out sc_logic 1 outvld 59 } 
	{ out_28_V sc_out sc_lv 32 signal 60 } 
	{ out_28_V_ap_vld sc_out sc_logic 1 outvld 60 } 
	{ out_29_V sc_out sc_lv 32 signal 61 } 
	{ out_29_V_ap_vld sc_out sc_logic 1 outvld 61 } 
	{ out_30_V sc_out sc_lv 32 signal 62 } 
	{ out_30_V_ap_vld sc_out sc_logic 1 outvld 62 } 
	{ out_31_V sc_out sc_lv 32 signal 63 } 
	{ out_31_V_ap_vld sc_out sc_logic 1 outvld 63 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_0_V", "role": "default" }} , 
 	{ "name": "in_1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_1_V", "role": "default" }} , 
 	{ "name": "in_2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_2_V", "role": "default" }} , 
 	{ "name": "in_3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_3_V", "role": "default" }} , 
 	{ "name": "in_4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_4_V", "role": "default" }} , 
 	{ "name": "in_5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_5_V", "role": "default" }} , 
 	{ "name": "in_6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_6_V", "role": "default" }} , 
 	{ "name": "in_7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_7_V", "role": "default" }} , 
 	{ "name": "in_8_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_8_V", "role": "default" }} , 
 	{ "name": "in_9_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_9_V", "role": "default" }} , 
 	{ "name": "in_10_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_10_V", "role": "default" }} , 
 	{ "name": "in_11_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_11_V", "role": "default" }} , 
 	{ "name": "in_12_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_12_V", "role": "default" }} , 
 	{ "name": "in_13_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_13_V", "role": "default" }} , 
 	{ "name": "in_14_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_14_V", "role": "default" }} , 
 	{ "name": "in_15_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_15_V", "role": "default" }} , 
 	{ "name": "in_16_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_16_V", "role": "default" }} , 
 	{ "name": "in_17_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_17_V", "role": "default" }} , 
 	{ "name": "in_18_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_18_V", "role": "default" }} , 
 	{ "name": "in_19_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_19_V", "role": "default" }} , 
 	{ "name": "in_20_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_20_V", "role": "default" }} , 
 	{ "name": "in_21_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_21_V", "role": "default" }} , 
 	{ "name": "in_22_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_22_V", "role": "default" }} , 
 	{ "name": "in_23_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_23_V", "role": "default" }} , 
 	{ "name": "in_24_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_24_V", "role": "default" }} , 
 	{ "name": "in_25_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_25_V", "role": "default" }} , 
 	{ "name": "in_26_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_26_V", "role": "default" }} , 
 	{ "name": "in_27_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_27_V", "role": "default" }} , 
 	{ "name": "in_28_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_28_V", "role": "default" }} , 
 	{ "name": "in_29_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_29_V", "role": "default" }} , 
 	{ "name": "in_30_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_30_V", "role": "default" }} , 
 	{ "name": "in_31_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_31_V", "role": "default" }} , 
 	{ "name": "out_0_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_0_V", "role": "default" }} , 
 	{ "name": "out_0_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_0_V", "role": "ap_vld" }} , 
 	{ "name": "out_1_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_1_V", "role": "default" }} , 
 	{ "name": "out_1_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_1_V", "role": "ap_vld" }} , 
 	{ "name": "out_2_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_2_V", "role": "default" }} , 
 	{ "name": "out_2_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_2_V", "role": "ap_vld" }} , 
 	{ "name": "out_3_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_3_V", "role": "default" }} , 
 	{ "name": "out_3_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_3_V", "role": "ap_vld" }} , 
 	{ "name": "out_4_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_4_V", "role": "default" }} , 
 	{ "name": "out_4_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_4_V", "role": "ap_vld" }} , 
 	{ "name": "out_5_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_5_V", "role": "default" }} , 
 	{ "name": "out_5_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_5_V", "role": "ap_vld" }} , 
 	{ "name": "out_6_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_6_V", "role": "default" }} , 
 	{ "name": "out_6_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_6_V", "role": "ap_vld" }} , 
 	{ "name": "out_7_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_7_V", "role": "default" }} , 
 	{ "name": "out_7_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_7_V", "role": "ap_vld" }} , 
 	{ "name": "out_8_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_8_V", "role": "default" }} , 
 	{ "name": "out_8_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_8_V", "role": "ap_vld" }} , 
 	{ "name": "out_9_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_9_V", "role": "default" }} , 
 	{ "name": "out_9_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_9_V", "role": "ap_vld" }} , 
 	{ "name": "out_10_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_10_V", "role": "default" }} , 
 	{ "name": "out_10_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_10_V", "role": "ap_vld" }} , 
 	{ "name": "out_11_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_11_V", "role": "default" }} , 
 	{ "name": "out_11_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_11_V", "role": "ap_vld" }} , 
 	{ "name": "out_12_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_12_V", "role": "default" }} , 
 	{ "name": "out_12_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_12_V", "role": "ap_vld" }} , 
 	{ "name": "out_13_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_13_V", "role": "default" }} , 
 	{ "name": "out_13_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_13_V", "role": "ap_vld" }} , 
 	{ "name": "out_14_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_14_V", "role": "default" }} , 
 	{ "name": "out_14_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_14_V", "role": "ap_vld" }} , 
 	{ "name": "out_15_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_15_V", "role": "default" }} , 
 	{ "name": "out_15_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_15_V", "role": "ap_vld" }} , 
 	{ "name": "out_16_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_16_V", "role": "default" }} , 
 	{ "name": "out_16_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_16_V", "role": "ap_vld" }} , 
 	{ "name": "out_17_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_17_V", "role": "default" }} , 
 	{ "name": "out_17_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_17_V", "role": "ap_vld" }} , 
 	{ "name": "out_18_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_18_V", "role": "default" }} , 
 	{ "name": "out_18_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_18_V", "role": "ap_vld" }} , 
 	{ "name": "out_19_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_19_V", "role": "default" }} , 
 	{ "name": "out_19_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_19_V", "role": "ap_vld" }} , 
 	{ "name": "out_20_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_20_V", "role": "default" }} , 
 	{ "name": "out_20_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_20_V", "role": "ap_vld" }} , 
 	{ "name": "out_21_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_21_V", "role": "default" }} , 
 	{ "name": "out_21_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_21_V", "role": "ap_vld" }} , 
 	{ "name": "out_22_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_22_V", "role": "default" }} , 
 	{ "name": "out_22_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_22_V", "role": "ap_vld" }} , 
 	{ "name": "out_23_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_23_V", "role": "default" }} , 
 	{ "name": "out_23_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_23_V", "role": "ap_vld" }} , 
 	{ "name": "out_24_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_24_V", "role": "default" }} , 
 	{ "name": "out_24_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_24_V", "role": "ap_vld" }} , 
 	{ "name": "out_25_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_25_V", "role": "default" }} , 
 	{ "name": "out_25_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_25_V", "role": "ap_vld" }} , 
 	{ "name": "out_26_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_26_V", "role": "default" }} , 
 	{ "name": "out_26_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_26_V", "role": "ap_vld" }} , 
 	{ "name": "out_27_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_27_V", "role": "default" }} , 
 	{ "name": "out_27_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_27_V", "role": "ap_vld" }} , 
 	{ "name": "out_28_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_28_V", "role": "default" }} , 
 	{ "name": "out_28_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_28_V", "role": "ap_vld" }} , 
 	{ "name": "out_29_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_29_V", "role": "default" }} , 
 	{ "name": "out_29_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_29_V", "role": "ap_vld" }} , 
 	{ "name": "out_30_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_30_V", "role": "default" }} , 
 	{ "name": "out_30_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_30_V", "role": "ap_vld" }} , 
 	{ "name": "out_31_V", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_31_V", "role": "default" }} , 
 	{ "name": "out_31_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out_31_V", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "bitonicSort",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "9",
		"VariableLatency" : "0", "ExactLatency" : "9", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_8_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_9_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_10_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_11_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_12_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_13_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_14_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_15_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_16_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_17_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_18_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_19_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_20_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_21_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_22_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_23_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_24_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_25_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_26_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_27_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_28_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_29_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_30_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_31_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "out_0_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_1_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_2_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_3_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_4_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_5_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_6_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_7_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_8_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_9_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_10_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_11_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_12_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_13_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_14_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_15_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_16_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_17_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_18_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_19_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_20_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_21_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_22_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_23_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_24_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_25_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_26_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_27_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_28_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_29_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_30_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out_31_V", "Type" : "Vld", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	bitonicSort {
		in_0_V {Type I LastRead 0 FirstWrite -1}
		in_1_V {Type I LastRead 0 FirstWrite -1}
		in_2_V {Type I LastRead 0 FirstWrite -1}
		in_3_V {Type I LastRead 0 FirstWrite -1}
		in_4_V {Type I LastRead 0 FirstWrite -1}
		in_5_V {Type I LastRead 0 FirstWrite -1}
		in_6_V {Type I LastRead 0 FirstWrite -1}
		in_7_V {Type I LastRead 0 FirstWrite -1}
		in_8_V {Type I LastRead 0 FirstWrite -1}
		in_9_V {Type I LastRead 0 FirstWrite -1}
		in_10_V {Type I LastRead 0 FirstWrite -1}
		in_11_V {Type I LastRead 0 FirstWrite -1}
		in_12_V {Type I LastRead 0 FirstWrite -1}
		in_13_V {Type I LastRead 0 FirstWrite -1}
		in_14_V {Type I LastRead 0 FirstWrite -1}
		in_15_V {Type I LastRead 0 FirstWrite -1}
		in_16_V {Type I LastRead 0 FirstWrite -1}
		in_17_V {Type I LastRead 0 FirstWrite -1}
		in_18_V {Type I LastRead 0 FirstWrite -1}
		in_19_V {Type I LastRead 0 FirstWrite -1}
		in_20_V {Type I LastRead 0 FirstWrite -1}
		in_21_V {Type I LastRead 0 FirstWrite -1}
		in_22_V {Type I LastRead 0 FirstWrite -1}
		in_23_V {Type I LastRead 0 FirstWrite -1}
		in_24_V {Type I LastRead 0 FirstWrite -1}
		in_25_V {Type I LastRead 0 FirstWrite -1}
		in_26_V {Type I LastRead 0 FirstWrite -1}
		in_27_V {Type I LastRead 0 FirstWrite -1}
		in_28_V {Type I LastRead 0 FirstWrite -1}
		in_29_V {Type I LastRead 0 FirstWrite -1}
		in_30_V {Type I LastRead 0 FirstWrite -1}
		in_31_V {Type I LastRead 0 FirstWrite -1}
		out_0_V {Type O LastRead -1 FirstWrite 9}
		out_1_V {Type O LastRead -1 FirstWrite 9}
		out_2_V {Type O LastRead -1 FirstWrite 9}
		out_3_V {Type O LastRead -1 FirstWrite 9}
		out_4_V {Type O LastRead -1 FirstWrite 9}
		out_5_V {Type O LastRead -1 FirstWrite 9}
		out_6_V {Type O LastRead -1 FirstWrite 9}
		out_7_V {Type O LastRead -1 FirstWrite 9}
		out_8_V {Type O LastRead -1 FirstWrite 9}
		out_9_V {Type O LastRead -1 FirstWrite 9}
		out_10_V {Type O LastRead -1 FirstWrite 9}
		out_11_V {Type O LastRead -1 FirstWrite 9}
		out_12_V {Type O LastRead -1 FirstWrite 9}
		out_13_V {Type O LastRead -1 FirstWrite 9}
		out_14_V {Type O LastRead -1 FirstWrite 9}
		out_15_V {Type O LastRead -1 FirstWrite 9}
		out_16_V {Type O LastRead -1 FirstWrite 9}
		out_17_V {Type O LastRead -1 FirstWrite 9}
		out_18_V {Type O LastRead -1 FirstWrite 9}
		out_19_V {Type O LastRead -1 FirstWrite 9}
		out_20_V {Type O LastRead -1 FirstWrite 9}
		out_21_V {Type O LastRead -1 FirstWrite 9}
		out_22_V {Type O LastRead -1 FirstWrite 9}
		out_23_V {Type O LastRead -1 FirstWrite 9}
		out_24_V {Type O LastRead -1 FirstWrite 9}
		out_25_V {Type O LastRead -1 FirstWrite 9}
		out_26_V {Type O LastRead -1 FirstWrite 9}
		out_27_V {Type O LastRead -1 FirstWrite 9}
		out_28_V {Type O LastRead -1 FirstWrite 9}
		out_29_V {Type O LastRead -1 FirstWrite 9}
		out_30_V {Type O LastRead -1 FirstWrite 9}
		out_31_V {Type O LastRead -1 FirstWrite 9}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "9", "Max" : "9"}
	, {"Name" : "Interval", "Min" : "9", "Max" : "9"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in_0_V { ap_none {  { in_0_V in_data 0 32 } } }
	in_1_V { ap_none {  { in_1_V in_data 0 32 } } }
	in_2_V { ap_none {  { in_2_V in_data 0 32 } } }
	in_3_V { ap_none {  { in_3_V in_data 0 32 } } }
	in_4_V { ap_none {  { in_4_V in_data 0 32 } } }
	in_5_V { ap_none {  { in_5_V in_data 0 32 } } }
	in_6_V { ap_none {  { in_6_V in_data 0 32 } } }
	in_7_V { ap_none {  { in_7_V in_data 0 32 } } }
	in_8_V { ap_none {  { in_8_V in_data 0 32 } } }
	in_9_V { ap_none {  { in_9_V in_data 0 32 } } }
	in_10_V { ap_none {  { in_10_V in_data 0 32 } } }
	in_11_V { ap_none {  { in_11_V in_data 0 32 } } }
	in_12_V { ap_none {  { in_12_V in_data 0 32 } } }
	in_13_V { ap_none {  { in_13_V in_data 0 32 } } }
	in_14_V { ap_none {  { in_14_V in_data 0 32 } } }
	in_15_V { ap_none {  { in_15_V in_data 0 32 } } }
	in_16_V { ap_none {  { in_16_V in_data 0 32 } } }
	in_17_V { ap_none {  { in_17_V in_data 0 32 } } }
	in_18_V { ap_none {  { in_18_V in_data 0 32 } } }
	in_19_V { ap_none {  { in_19_V in_data 0 32 } } }
	in_20_V { ap_none {  { in_20_V in_data 0 32 } } }
	in_21_V { ap_none {  { in_21_V in_data 0 32 } } }
	in_22_V { ap_none {  { in_22_V in_data 0 32 } } }
	in_23_V { ap_none {  { in_23_V in_data 0 32 } } }
	in_24_V { ap_none {  { in_24_V in_data 0 32 } } }
	in_25_V { ap_none {  { in_25_V in_data 0 32 } } }
	in_26_V { ap_none {  { in_26_V in_data 0 32 } } }
	in_27_V { ap_none {  { in_27_V in_data 0 32 } } }
	in_28_V { ap_none {  { in_28_V in_data 0 32 } } }
	in_29_V { ap_none {  { in_29_V in_data 0 32 } } }
	in_30_V { ap_none {  { in_30_V in_data 0 32 } } }
	in_31_V { ap_none {  { in_31_V in_data 0 32 } } }
	out_0_V { ap_vld {  { out_0_V out_data 1 32 }  { out_0_V_ap_vld out_vld 1 1 } } }
	out_1_V { ap_vld {  { out_1_V out_data 1 32 }  { out_1_V_ap_vld out_vld 1 1 } } }
	out_2_V { ap_vld {  { out_2_V out_data 1 32 }  { out_2_V_ap_vld out_vld 1 1 } } }
	out_3_V { ap_vld {  { out_3_V out_data 1 32 }  { out_3_V_ap_vld out_vld 1 1 } } }
	out_4_V { ap_vld {  { out_4_V out_data 1 32 }  { out_4_V_ap_vld out_vld 1 1 } } }
	out_5_V { ap_vld {  { out_5_V out_data 1 32 }  { out_5_V_ap_vld out_vld 1 1 } } }
	out_6_V { ap_vld {  { out_6_V out_data 1 32 }  { out_6_V_ap_vld out_vld 1 1 } } }
	out_7_V { ap_vld {  { out_7_V out_data 1 32 }  { out_7_V_ap_vld out_vld 1 1 } } }
	out_8_V { ap_vld {  { out_8_V out_data 1 32 }  { out_8_V_ap_vld out_vld 1 1 } } }
	out_9_V { ap_vld {  { out_9_V out_data 1 32 }  { out_9_V_ap_vld out_vld 1 1 } } }
	out_10_V { ap_vld {  { out_10_V out_data 1 32 }  { out_10_V_ap_vld out_vld 1 1 } } }
	out_11_V { ap_vld {  { out_11_V out_data 1 32 }  { out_11_V_ap_vld out_vld 1 1 } } }
	out_12_V { ap_vld {  { out_12_V out_data 1 32 }  { out_12_V_ap_vld out_vld 1 1 } } }
	out_13_V { ap_vld {  { out_13_V out_data 1 32 }  { out_13_V_ap_vld out_vld 1 1 } } }
	out_14_V { ap_vld {  { out_14_V out_data 1 32 }  { out_14_V_ap_vld out_vld 1 1 } } }
	out_15_V { ap_vld {  { out_15_V out_data 1 32 }  { out_15_V_ap_vld out_vld 1 1 } } }
	out_16_V { ap_vld {  { out_16_V out_data 1 32 }  { out_16_V_ap_vld out_vld 1 1 } } }
	out_17_V { ap_vld {  { out_17_V out_data 1 32 }  { out_17_V_ap_vld out_vld 1 1 } } }
	out_18_V { ap_vld {  { out_18_V out_data 1 32 }  { out_18_V_ap_vld out_vld 1 1 } } }
	out_19_V { ap_vld {  { out_19_V out_data 1 32 }  { out_19_V_ap_vld out_vld 1 1 } } }
	out_20_V { ap_vld {  { out_20_V out_data 1 32 }  { out_20_V_ap_vld out_vld 1 1 } } }
	out_21_V { ap_vld {  { out_21_V out_data 1 32 }  { out_21_V_ap_vld out_vld 1 1 } } }
	out_22_V { ap_vld {  { out_22_V out_data 1 32 }  { out_22_V_ap_vld out_vld 1 1 } } }
	out_23_V { ap_vld {  { out_23_V out_data 1 32 }  { out_23_V_ap_vld out_vld 1 1 } } }
	out_24_V { ap_vld {  { out_24_V out_data 1 32 }  { out_24_V_ap_vld out_vld 1 1 } } }
	out_25_V { ap_vld {  { out_25_V out_data 1 32 }  { out_25_V_ap_vld out_vld 1 1 } } }
	out_26_V { ap_vld {  { out_26_V out_data 1 32 }  { out_26_V_ap_vld out_vld 1 1 } } }
	out_27_V { ap_vld {  { out_27_V out_data 1 32 }  { out_27_V_ap_vld out_vld 1 1 } } }
	out_28_V { ap_vld {  { out_28_V out_data 1 32 }  { out_28_V_ap_vld out_vld 1 1 } } }
	out_29_V { ap_vld {  { out_29_V out_data 1 32 }  { out_29_V_ap_vld out_vld 1 1 } } }
	out_30_V { ap_vld {  { out_30_V out_data 1 32 }  { out_30_V_ap_vld out_vld 1 1 } } }
	out_31_V { ap_vld {  { out_31_V out_data 1 32 }  { out_31_V_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
