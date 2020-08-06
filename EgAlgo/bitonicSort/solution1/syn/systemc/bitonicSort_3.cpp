#include "bitonicSort.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bitonicSort::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_0_V\" :  \"" << in_0_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_1_V\" :  \"" << in_1_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_2_V\" :  \"" << in_2_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_3_V\" :  \"" << in_3_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_4_V\" :  \"" << in_4_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_5_V\" :  \"" << in_5_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_6_V\" :  \"" << in_6_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_7_V\" :  \"" << in_7_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_8_V\" :  \"" << in_8_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_9_V\" :  \"" << in_9_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_10_V\" :  \"" << in_10_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_11_V\" :  \"" << in_11_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_12_V\" :  \"" << in_12_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_13_V\" :  \"" << in_13_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_14_V\" :  \"" << in_14_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_15_V\" :  \"" << in_15_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_16_V\" :  \"" << in_16_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_17_V\" :  \"" << in_17_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_18_V\" :  \"" << in_18_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_19_V\" :  \"" << in_19_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_20_V\" :  \"" << in_20_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_21_V\" :  \"" << in_21_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_22_V\" :  \"" << in_22_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_23_V\" :  \"" << in_23_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_24_V\" :  \"" << in_24_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_25_V\" :  \"" << in_25_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_26_V\" :  \"" << in_26_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_27_V\" :  \"" << in_27_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_28_V\" :  \"" << in_28_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_29_V\" :  \"" << in_29_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_30_V\" :  \"" << in_30_V.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_31_V\" :  \"" << in_31_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_0_V\" :  \"" << out_0_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_0_V_ap_vld\" :  \"" << out_0_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_1_V\" :  \"" << out_1_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_1_V_ap_vld\" :  \"" << out_1_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_2_V\" :  \"" << out_2_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_2_V_ap_vld\" :  \"" << out_2_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_3_V\" :  \"" << out_3_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_3_V_ap_vld\" :  \"" << out_3_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_4_V\" :  \"" << out_4_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_4_V_ap_vld\" :  \"" << out_4_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_5_V\" :  \"" << out_5_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_5_V_ap_vld\" :  \"" << out_5_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_6_V\" :  \"" << out_6_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_6_V_ap_vld\" :  \"" << out_6_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_7_V\" :  \"" << out_7_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_7_V_ap_vld\" :  \"" << out_7_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_8_V\" :  \"" << out_8_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_8_V_ap_vld\" :  \"" << out_8_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_9_V\" :  \"" << out_9_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_9_V_ap_vld\" :  \"" << out_9_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_10_V\" :  \"" << out_10_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_10_V_ap_vld\" :  \"" << out_10_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_11_V\" :  \"" << out_11_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_11_V_ap_vld\" :  \"" << out_11_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_12_V\" :  \"" << out_12_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_12_V_ap_vld\" :  \"" << out_12_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_13_V\" :  \"" << out_13_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_13_V_ap_vld\" :  \"" << out_13_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_14_V\" :  \"" << out_14_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_14_V_ap_vld\" :  \"" << out_14_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_15_V\" :  \"" << out_15_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_15_V_ap_vld\" :  \"" << out_15_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_16_V\" :  \"" << out_16_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_16_V_ap_vld\" :  \"" << out_16_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_17_V\" :  \"" << out_17_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_17_V_ap_vld\" :  \"" << out_17_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_18_V\" :  \"" << out_18_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_18_V_ap_vld\" :  \"" << out_18_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_19_V\" :  \"" << out_19_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_19_V_ap_vld\" :  \"" << out_19_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_20_V\" :  \"" << out_20_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_20_V_ap_vld\" :  \"" << out_20_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_21_V\" :  \"" << out_21_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_21_V_ap_vld\" :  \"" << out_21_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_22_V\" :  \"" << out_22_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_22_V_ap_vld\" :  \"" << out_22_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_23_V\" :  \"" << out_23_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_23_V_ap_vld\" :  \"" << out_23_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_24_V\" :  \"" << out_24_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_24_V_ap_vld\" :  \"" << out_24_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_25_V\" :  \"" << out_25_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_25_V_ap_vld\" :  \"" << out_25_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_26_V\" :  \"" << out_26_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_26_V_ap_vld\" :  \"" << out_26_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_27_V\" :  \"" << out_27_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_27_V_ap_vld\" :  \"" << out_27_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_28_V\" :  \"" << out_28_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_28_V_ap_vld\" :  \"" << out_28_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_29_V\" :  \"" << out_29_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_29_V_ap_vld\" :  \"" << out_29_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_30_V\" :  \"" << out_30_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_30_V_ap_vld\" :  \"" << out_30_V_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_31_V\" :  \"" << out_31_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_31_V_ap_vld\" :  \"" << out_31_V_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

