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
make ARGV="ones_algo"
```

STEP-2
```
source /data/tools/Xilinx/Vivado/2018.2/settings64.sh
cd /data/$USER/CMSPhase2HLS/CTP7-HLS

git clone git@github.com:varuns23/CMSPhase2GCT.git
cd CMSPhase2GCT
make clean # To remove remants from the previous build 
make ARGV="<test_vector>" # i.e. make ARGV="ones_algo"

head -100 ip/algo_top_csynth.rpt

```

STEP-3
```
# Compile post-implementation checkpoint (to be integrated in final bitile)
make ARGV="<test_vector>" # i.e. make ARGV="ones_algo" dcp


```

To add a new test vector set, please make <test_vector>_inp.txt and <test_vector>_out_ref.txt  file in the data directory, and add it to the sources.tcl
