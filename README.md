
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
