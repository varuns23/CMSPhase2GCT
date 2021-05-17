## Set the top level module
set_top algoStream

#### Add source code
add_files src/eta_stitch.cpp
add_files src/eta_stitch.h
add_files src/objects.h

### Add testbed files
add_files -tb src/algo_tb.cpp

### Add test input files
add_files -tb data/tb_inp.txt
add_files -tb data/tb_out_ref.txt

