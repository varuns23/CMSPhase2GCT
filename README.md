#CMS Phase2GCT

set environment
```
source /opt/Xilinx/Vivado/2019.1/settings64.sh #beck
```

checkout
```
git clone git@github.com:varuns23/CMSPhase2GCT.git
cd CMSPhase2GCT
```

## Running:
```
Simulation
./run.sh

Synthesis

cd hls/vivado_hls/ 
vivado_hls -f run_hls.tcl synth=1    
```







## Making bit file:
```
1) ssh beck
2) git clone --recursive ssh://git@gitlab.cern.ch:7999/asvetek/phase2-rct.git
3) source /opt/Xilinx/Vivado/2019.1/settings64.sh
4) cd phase2-rct/
5) mkdir build
6) cd xla/hdl
7) Copy RTL files from impl/ip/hdl/vhdl/ here
   DO NOT remove "XtalLevelAlgoWrapper.vhd"
8) cd ../..
9) make
```
