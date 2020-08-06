# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
proc sc_sim_check {ret err logfile} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        while {[gets $fl line] >= 0} {
            if {[string first "AESL_mErrNo = " $line] == 0} {
                set mismatch_num [string range $line [string length "AESL_mErrNo = "] end]
                if {$mismatch_num != 0} {
                    ::AP::printMsg ERR COSIM 403 COSIM_403_986 ${mismatch_num}
                    break
                }
            }
        }
    }
    if {$ret || $err != ""} {
        if { [lindex $::errorCode 0] eq "CHILDSTATUS"} {
            set status [lindex $::errorCode 2]
            if {$status != ""} {
                ::AP::printMsg ERR COSIM 404 COSIM_404_987 $status
            } else {
                ::AP::printMsg ERR COSIM 405 COSIM_405_988
            }
        } else {
            ::AP::printMsg ERR COSIM 405 COSIM_405_989
        }
    }
    if {[file exists $logfile]} {
        set cmdret [catch {eval exec "grep \"Error:\" $logfile"} err]
        file delete -force $logfile
        if {$cmdret == 0} {
            ::AP::printMsg ERR COSIM 405 COSIM_405_990
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc rtl_sim_check {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        set unmatch_num 0
        while {[gets $fl line] >= 0} {
            if {[string first "unmatched" $line] != -1} {
                set unmatch_num [expr $unmatch_num + 1]
            }
        }
        if {$unmatch_num != 0} {
            ::AP::printMsg ERR COSIM 406 COSIM_406_991 ${unmatch_num}
        }
    }
    if {[file exists ".aesl_error"]} {
        set errfl [open ".aesl_error" r]
        gets $errfl line
        if {$line != 0} {
            ::AP::printMsg ERR COSIM 407 COSIM_407_992 $line
        }
    }
    if {[file exists ".exit.err"]} {
        ::AP::printMsg ERR COSIM 405 COSIM_405_993
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc check_tvin_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "c.bitonicSort.autotvin_in_0_V.dat"
         "c.bitonicSort.autotvin_in_1_V.dat"
         "c.bitonicSort.autotvin_in_2_V.dat"
         "c.bitonicSort.autotvin_in_3_V.dat"
         "c.bitonicSort.autotvin_in_4_V.dat"
         "c.bitonicSort.autotvin_in_5_V.dat"
         "c.bitonicSort.autotvin_in_6_V.dat"
         "c.bitonicSort.autotvin_in_7_V.dat"
         "c.bitonicSort.autotvin_in_8_V.dat"
         "c.bitonicSort.autotvin_in_9_V.dat"
         "c.bitonicSort.autotvin_in_10_V.dat"
         "c.bitonicSort.autotvin_in_11_V.dat"
         "c.bitonicSort.autotvin_in_12_V.dat"
         "c.bitonicSort.autotvin_in_13_V.dat"
         "c.bitonicSort.autotvin_in_14_V.dat"
         "c.bitonicSort.autotvin_in_15_V.dat"
         "c.bitonicSort.autotvin_in_16_V.dat"
         "c.bitonicSort.autotvin_in_17_V.dat"
         "c.bitonicSort.autotvin_in_18_V.dat"
         "c.bitonicSort.autotvin_in_19_V.dat"
         "c.bitonicSort.autotvin_in_20_V.dat"
         "c.bitonicSort.autotvin_in_21_V.dat"
         "c.bitonicSort.autotvin_in_22_V.dat"
         "c.bitonicSort.autotvin_in_23_V.dat"
         "c.bitonicSort.autotvin_in_24_V.dat"
         "c.bitonicSort.autotvin_in_25_V.dat"
         "c.bitonicSort.autotvin_in_26_V.dat"
         "c.bitonicSort.autotvin_in_27_V.dat"
         "c.bitonicSort.autotvin_in_28_V.dat"
         "c.bitonicSort.autotvin_in_29_V.dat"
         "c.bitonicSort.autotvin_in_30_V.dat"
         "c.bitonicSort.autotvin_in_31_V.dat"
         "c.bitonicSort.autotvout_out_0_V.dat"
         "c.bitonicSort.autotvout_out_1_V.dat"
         "c.bitonicSort.autotvout_out_2_V.dat"
         "c.bitonicSort.autotvout_out_3_V.dat"
         "c.bitonicSort.autotvout_out_4_V.dat"
         "c.bitonicSort.autotvout_out_5_V.dat"
         "c.bitonicSort.autotvout_out_6_V.dat"
         "c.bitonicSort.autotvout_out_7_V.dat"
         "c.bitonicSort.autotvout_out_8_V.dat"
         "c.bitonicSort.autotvout_out_9_V.dat"
         "c.bitonicSort.autotvout_out_10_V.dat"
         "c.bitonicSort.autotvout_out_11_V.dat"
         "c.bitonicSort.autotvout_out_12_V.dat"
         "c.bitonicSort.autotvout_out_13_V.dat"
         "c.bitonicSort.autotvout_out_14_V.dat"
         "c.bitonicSort.autotvout_out_15_V.dat"
         "c.bitonicSort.autotvout_out_16_V.dat"
         "c.bitonicSort.autotvout_out_17_V.dat"
         "c.bitonicSort.autotvout_out_18_V.dat"
         "c.bitonicSort.autotvout_out_19_V.dat"
         "c.bitonicSort.autotvout_out_20_V.dat"
         "c.bitonicSort.autotvout_out_21_V.dat"
         "c.bitonicSort.autotvout_out_22_V.dat"
         "c.bitonicSort.autotvout_out_23_V.dat"
         "c.bitonicSort.autotvout_out_24_V.dat"
         "c.bitonicSort.autotvout_out_25_V.dat"
         "c.bitonicSort.autotvout_out_26_V.dat"
         "c.bitonicSort.autotvout_out_27_V.dat"
         "c.bitonicSort.autotvout_out_28_V.dat"
         "c.bitonicSort.autotvout_out_29_V.dat"
         "c.bitonicSort.autotvout_out_30_V.dat"
         "c.bitonicSort.autotvout_out_31_V.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ::AP::printMsg ERR COSIM 320 COSIM_320_994
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ::AP::printMsg ERR COSIM 320 COSIM_320_995
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}

proc check_tvout_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "rtl.bitonicSort.autotvout_out_0_V.dat"
         "rtl.bitonicSort.autotvout_out_1_V.dat"
         "rtl.bitonicSort.autotvout_out_2_V.dat"
         "rtl.bitonicSort.autotvout_out_3_V.dat"
         "rtl.bitonicSort.autotvout_out_4_V.dat"
         "rtl.bitonicSort.autotvout_out_5_V.dat"
         "rtl.bitonicSort.autotvout_out_6_V.dat"
         "rtl.bitonicSort.autotvout_out_7_V.dat"
         "rtl.bitonicSort.autotvout_out_8_V.dat"
         "rtl.bitonicSort.autotvout_out_9_V.dat"
         "rtl.bitonicSort.autotvout_out_10_V.dat"
         "rtl.bitonicSort.autotvout_out_11_V.dat"
         "rtl.bitonicSort.autotvout_out_12_V.dat"
         "rtl.bitonicSort.autotvout_out_13_V.dat"
         "rtl.bitonicSort.autotvout_out_14_V.dat"
         "rtl.bitonicSort.autotvout_out_15_V.dat"
         "rtl.bitonicSort.autotvout_out_16_V.dat"
         "rtl.bitonicSort.autotvout_out_17_V.dat"
         "rtl.bitonicSort.autotvout_out_18_V.dat"
         "rtl.bitonicSort.autotvout_out_19_V.dat"
         "rtl.bitonicSort.autotvout_out_20_V.dat"
         "rtl.bitonicSort.autotvout_out_21_V.dat"
         "rtl.bitonicSort.autotvout_out_22_V.dat"
         "rtl.bitonicSort.autotvout_out_23_V.dat"
         "rtl.bitonicSort.autotvout_out_24_V.dat"
         "rtl.bitonicSort.autotvout_out_25_V.dat"
         "rtl.bitonicSort.autotvout_out_26_V.dat"
         "rtl.bitonicSort.autotvout_out_27_V.dat"
         "rtl.bitonicSort.autotvout_out_28_V.dat"
         "rtl.bitonicSort.autotvout_out_29_V.dat"
         "rtl.bitonicSort.autotvout_out_30_V.dat"
         "rtl.bitonicSort.autotvout_out_31_V.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ::AP::printMsg ERR COSIM 303 COSIM_303_996
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ::AP::printMsg ERR COSIM 303 COSIM_303_997
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}
