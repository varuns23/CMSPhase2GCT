## Set the top level module
set_top algo_unpacked
##
#### Add source code
add_files src/algo_unpacked.cpp
add_files src/GCT.cc
#
### Add testbed files
add_files -tb src/algo_unpacked_tb.cpp 

### Add test input files
add_files -tb data/test_random_set2_1_inp.txt
add_files -tb data/test_random_set2_1_out_ref.txt

#add_files -tb data/rnd_inp.txt
#add_files -tb data/rnd_out_ref.txt
#
#add_files -tb data/test_random_inp.txt
#add_files -tb data/test_random_out_ref.txt
