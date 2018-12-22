# CMSPhase2GCT
CMS Phase2 GCT HLS Project

This project uses APx_Gen0_Algo from Ales Svetek

If you have already followed the instructions for RCT or have CMSPhase2HLS setup, GOTO STEP-2 else start with STEP-1 as mentioned below: 

STEP-1 (starting from scratch):
```bash

mkdir -p /scratch/$USER/CMSPhase2HLS
cd /scratch/$USER/CMSPhase2HLS

source /opt/Xilinx/Vivado/2018.2/settings64.sh

git lfs install
git version
git-lfs version
git clone --recursive git@github.com:APxL1TAlgoDev/APx_Gen0_Algo.git
cd APx_Gen0_Algo
cd VivadoHls/null_algo_unpacked/vivado_hls
mkdir /scratch/$USER/CMSPhase2HLS/APx_Gen0_Algo/build
make clean
make ARGV="test1"
```

STEP-2
```

cd /scratch/$USER/CMSPhase2HLS
git clone git@github.com:varuns23/CMSPhase2GCT.git
cd CMSPhase2GCT
make clean # To remove remants from the previous build 
make ARGV="ones_algo" # i.e. make ARGV="<test vector name>" - data/<test vector name>_inp.txt and data/<test vector name>_out_ref.txt must exist

head -100 ip/algo_top_csynth.rpt

```

STEP-3
```
# Compile post-implementation checkpoint (to be integrated in final bitile)
make ARGV="<test_vector>" dcp  # i.e. make ARGV="ones_algo" dcp


```

To add a new test vector set, please make <test_vector>_inp.txt and <test_vector>_out_ref.txt  file in the data directory, and add it to the sources.tcl
