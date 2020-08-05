# APx Gen2 Phase2 GCT

GCT project: EGamma cluster (sorting)

## Simulation and Synthesis:

For HLS simulation
```bash
cd EgAlgo/hls/vivado_hls/
vivado_hls -f run_hls.tcl csim=1 tv_in=$PWD/data/test_in.txt tv_out=$PWD/data/test_out.txt tv_ref=$PWD/data/test_out_ref.txt
```

Synthesis and exporting RTL
```bash
cd EgAlgo/hls/vivado_hls/
vivado_hls -f run_hls.tcl synth=1 export=1

```
Simulation, Synthesis, Verification and RTL generation in Vivado HLS:
```bash
cd EgAlgo/hls/vivado_hls/
vivado_hls -f run_hls.tcl csim=1 synth=1 cosim=1 export=1 tv_in=$PWD/data/test_in.txt tv_out=$PWD/data/test_out.txt tv_ref=$PWD/data/test_out_ref.txt
```

## Making bit file for APd:
```
cd $AP_FW_BASE_DIR/phase2-gct/
#make changes to ruckus.tcl to point to respective project directory
mkdir build
make
```

## GUI access
 
Follow instructions at twiki - adapt suitably for usage on beck.hep.wisc.edu:
https://twiki.cern.ch/twiki/bin/viewauth/CMS/L1TriggerPhase2HLSProjects
