## Set the top level module
set_top phiStitchStream

#### Add source code
add_files src/phi_stitch_parameters.h
add_files src/phi_stitch.h
add_files src/phi_stitch.cpp
add_files src/objects.h

### Add testbed files
add_files -tb src/algo_top_tb.cpp
add_files -tb ../../../common/APxLinkData.hh
add_files -tb ../../../common/APxLinkData.cpp

### Add test input files
add_files -tb data/test_in.txt
add_files -tb data/test_out_ref.txt

