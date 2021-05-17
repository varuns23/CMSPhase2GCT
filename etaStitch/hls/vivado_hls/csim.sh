#!/bin/sh

export tvName="set1"

#vivado_hls -f run_hls.tcl csim=1 \
vivado_hls -f run_hls.tcl csim=1  csim=1 synth=1 cosim=1 export=1 \
	tv_in=$PWD/data/tb_${tvName}_inp.txt \
	tv_out=$PWD/data/tb_${tvName}_out.txt \
	tv_ref=$PWD/data/tb_${tvName}_out_ref.txt
