# CMSPhase2GCT
CMS Phase2 GCT HLS Project

This project uses CTP7-HLS from Ales Svetek

If you have already followed the instructions for RCT or have CMSPhase2HLS setup, GOTO STEP-2 else start with STEP-1 as mentioned below: 

STEP-1 (starting from scratch):
```bash

mkdir -p /data/$USER/CMSPhase2HLS
cd /data/$USER/CMSPhase2HLS

source /data/tools/Xilinx/Vivado/2018.2/settings64.sh

git clone git@github.com:uwcms/CTP7-HLS.git
cd CTP7-HLS/
mkdir build
git checkout io_links
git submodule init; git submodule update
cd hls_algo
make
```

STEP-2
```
source /data/tools/Xilinx/Vivado/2018.2/settings64.sh
cd /data/$USER/CMSPhase2HLS/CTP7-HLS

git clone git@github.com:varuns23/CMSPhase2GCT.git
cd CMSPhase2GCT
export CTP7_HLS_RUN_LABEL=test_tpg # Test input file is take from this label - default is test_data
make clean # To remove remants from the previous build 
make

head -100 ip/algo_top_csynth.rpt

```

To add a new test input file, please make <label>_inp.txt file in the data directory, and add it to the sources.tcl
To use a different input file, export CTP7_HLS_RUN_LABEL=<label>
