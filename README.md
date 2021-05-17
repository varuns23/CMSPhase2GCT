# APx Gen2 Phase2 GCT

Checkout existing GCT code and APx Core Firmware connector from:
```
git clone -b dev2021 git@github.com:varuns23/CMSPhase2GCT.git
cd CMSPhase2GCT
source setEnv.sh #(uwlogin/beck independent)
```
## Algorithms:
choose one of the algo you want to work on
```
export algo = etaStitch  
export algo = phiStitch 
export algo = EgAlgo
export algo = JetAlgo
export algo = METAlgo
export algo = TauAlgo
```

## Simulation and Synthesis:

For HLS simulation
```bash
cd $AP_FW_BASE_DIR/CMSPhase2GCT/$algo/hls/vivado_hls/
vivado_hls -f run_hls.tcl csim=1 tv_in=$PWD/data/tb_set1_inp.txt tv_out=$PWD/data/tb_set1_out.txt tv_ref=$PWD/data/tb_set1_out_ref.txt
```

Synthesis and exporting RTL
```bash
cd $AP_FW_BASE_DIR/CMSPhase2GCT/$algo/hls/vivado_hls/
vivado_hls -f run_hls.tcl synth=1 export=1 tv_in=$PWD/data/tb_set1_inp.txt tv_out=$PWD/data/tb_set1_out.txt tv_ref=$PWD/data/tb_set1_out_ref.txt


```
Simulation, Synthesis, Verification and RTL generation in Vivado HLS:
```bash
cd $AP_FW_BASE_DIR/CMSPhase2GCT/$algo/hls/vivado_hls/
vivado_hls -f run_hls.tcl csim=1 synth=1 cosim=1 export=1 tv_in=$PWD/data/tb_set1_inp.txt tv_out=$PWD/data/tb_set1_out.txt tv_ref=$PWD/data/tb_set1_out_ref.txt
```

Before building the bit file, one need to export RTL (place, route, synthesis) using GUI.

## Making bit file for APd:
```
cd $AP_FW_BASE_DIR
git clone --recursive ssh://git@gitlab.cern.ch:7999/asvetek/phase2-gct.git
cd $AP_FW_BASE_DIR/phase2-gct/
```
Edit the ruckus.tcl to point the project directory:
for eg: "loadRuckusTcl $::env(TOP_DIR)/../CMSPhase2GCT/etaStitch/hls"
```
mkdir build
make
```

## GUI access
 
Follow instructions at twiki - adapt suitably for usage on beck.hep.wisc.edu:
https://twiki.cern.ch/twiki/bin/viewauth/CMS/L1TriggerPhase2HLSProjects
