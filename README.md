#CMS Phase2GCT

```
git clone -b 2020-Gen2-bigWord git@github.com:varuns23/CMSPhase2GCT.git
cd CMSPhase2GCT

source setEnv.sh
```

## Running:
```
Simulation
./run.sh

Synthesis and RTL export

cd hls/vivado_hls/ 
vivado_hls -f run_hls.tcl synth=1 export=1 
```


## Making bit file:
```
1) ssh beck/uwlogin
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
