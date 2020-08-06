#include "bitonicSort.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bitonicSort::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage8_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        a_0_V_reg_5018 = a_0_V_fu_578_p3.read();
        a_10_V_reg_5132 = a_10_V_fu_790_p3.read();
        a_11_V_reg_5138 = a_11_V_fu_798_p3.read();
        a_12_V_reg_5054 = a_12_V_fu_644_p3.read();
        a_13_V_reg_5048 = a_13_V_fu_636_p3.read();
        a_14_V_reg_5144 = a_14_V_fu_812_p3.read();
        a_15_V_reg_5150 = a_15_V_fu_820_p3.read();
        a_16_V_reg_5066 = a_16_V_fu_666_p3.read();
        a_17_V_reg_5060 = a_17_V_fu_658_p3.read();
        a_18_V_reg_5156 = a_18_V_fu_834_p3.read();
        a_19_V_reg_5162 = a_19_V_fu_842_p3.read();
        a_1_V_reg_5012 = a_1_V_fu_570_p3.read();
        a_20_V_reg_5078 = a_20_V_fu_688_p3.read();
        a_21_V_reg_5072 = a_21_V_fu_680_p3.read();
        a_22_V_reg_5168 = a_22_V_fu_856_p3.read();
        a_23_V_reg_5174 = a_23_V_fu_864_p3.read();
        a_24_V_reg_5090 = a_24_V_fu_710_p3.read();
        a_25_V_reg_5084 = a_25_V_fu_702_p3.read();
        a_26_V_reg_5180 = a_26_V_fu_878_p3.read();
        a_27_V_reg_5186 = a_27_V_fu_886_p3.read();
        a_28_V_reg_5102 = a_28_V_fu_732_p3.read();
        a_29_V_reg_5096 = a_29_V_fu_724_p3.read();
        a_2_V_reg_5108 = a_2_V_fu_746_p3.read();
        a_30_V_reg_5192 = a_30_V_fu_900_p3.read();
        a_31_V_reg_5198 = a_31_V_fu_908_p3.read();
        a_3_V_reg_5114 = a_3_V_fu_754_p3.read();
        a_4_V_reg_5030 = a_4_V_fu_600_p3.read();
        a_5_V_reg_5024 = a_5_V_fu_592_p3.read();
        a_6_V_reg_5120 = a_6_V_fu_768_p3.read();
        a_7_V_reg_5126 = a_7_V_fu_776_p3.read();
        a_8_V_reg_5042 = a_8_V_fu_622_p3.read();
        a_9_V_reg_5036 = a_9_V_fu_614_p3.read();
        icmp_ln895_16_reg_5204 = icmp_ln895_16_fu_916_p2.read();
        icmp_ln895_17_reg_5210 = icmp_ln895_17_fu_922_p2.read();
        icmp_ln895_18_reg_5216 = icmp_ln895_18_fu_928_p2.read();
        icmp_ln895_19_reg_5222 = icmp_ln895_19_fu_934_p2.read();
        icmp_ln895_20_reg_5228 = icmp_ln895_20_fu_940_p2.read();
        icmp_ln895_21_reg_5234 = icmp_ln895_21_fu_946_p2.read();
        icmp_ln895_22_reg_5240 = icmp_ln895_22_fu_952_p2.read();
        icmp_ln895_23_reg_5246 = icmp_ln895_23_fu_958_p2.read();
        icmp_ln895_24_reg_5252 = icmp_ln895_24_fu_964_p2.read();
        icmp_ln895_25_reg_5258 = icmp_ln895_25_fu_970_p2.read();
        icmp_ln895_26_reg_5264 = icmp_ln895_26_fu_976_p2.read();
        icmp_ln895_27_reg_5270 = icmp_ln895_27_fu_982_p2.read();
        icmp_ln895_28_reg_5276 = icmp_ln895_28_fu_988_p2.read();
        icmp_ln895_45_reg_5282 = icmp_ln895_45_fu_994_p2.read();
        icmp_ln895_46_reg_5288 = icmp_ln895_46_fu_1000_p2.read();
        icmp_ln895_47_reg_5294 = icmp_ln895_47_fu_1006_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        c_0_V_reg_5307 = c_0_V_fu_1186_p3.read();
        c_10_V_reg_5349 = c_10_V_fu_1252_p3.read();
        c_11_V_reg_5342 = c_11_V_fu_1244_p3.read();
        c_12_V_reg_5440 = c_12_V_fu_1398_p3.read();
        c_13_V_reg_5447 = c_13_V_fu_1406_p3.read();
        c_14_V_reg_5454 = c_14_V_fu_1420_p3.read();
        c_15_V_reg_5461 = c_15_V_fu_1428_p3.read();
        c_16_V_reg_5363 = c_16_V_fu_1274_p3.read();
        c_17_V_reg_5356 = c_17_V_fu_1266_p3.read();
        c_18_V_reg_5377 = c_18_V_fu_1296_p3.read();
        c_19_V_reg_5370 = c_19_V_fu_1288_p3.read();
        c_1_V_reg_5300 = c_1_V_fu_1178_p3.read();
        c_20_V_reg_5468 = c_20_V_fu_1442_p3.read();
        c_21_V_reg_5475 = c_21_V_fu_1450_p3.read();
        c_22_V_reg_5482 = c_22_V_fu_1464_p3.read();
        c_23_V_reg_5489 = c_23_V_fu_1472_p3.read();
        c_24_V_reg_5391 = c_24_V_fu_1318_p3.read();
        c_25_V_reg_5384 = c_25_V_fu_1310_p3.read();
        c_26_V_reg_5405 = c_26_V_fu_1340_p3.read();
        c_27_V_reg_5398 = c_27_V_fu_1332_p3.read();
        c_28_V_reg_5496 = c_28_V_fu_1486_p3.read();
        c_29_V_reg_5503 = c_29_V_fu_1494_p3.read();
        c_2_V_reg_5321 = c_2_V_fu_1208_p3.read();
        c_30_V_reg_5510 = c_30_V_fu_1508_p3.read();
        c_31_V_reg_5517 = c_31_V_fu_1516_p3.read();
        c_3_V_reg_5314 = c_3_V_fu_1200_p3.read();
        c_4_V_reg_5412 = c_4_V_fu_1354_p3.read();
        c_5_V_reg_5419 = c_5_V_fu_1362_p3.read();
        c_6_V_reg_5426 = c_6_V_fu_1376_p3.read();
        c_7_V_reg_5433 = c_7_V_fu_1384_p3.read();
        c_8_V_reg_5335 = c_8_V_fu_1230_p3.read();
        c_9_V_reg_5328 = c_9_V_fu_1222_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        d_0_V_reg_5530 = d_0_V_fu_1534_p3.read();
        d_10_V_reg_5596 = d_10_V_fu_1624_p3.read();
        d_11_V_reg_5608 = d_11_V_fu_1640_p3.read();
        d_12_V_reg_5578 = d_12_V_fu_1598_p3.read();
        d_13_V_reg_5590 = d_13_V_fu_1614_p3.read();
        d_14_V_reg_5602 = d_14_V_fu_1630_p3.read();
        d_15_V_reg_5614 = d_15_V_fu_1646_p3.read();
        d_16_V_reg_5626 = d_16_V_fu_1662_p3.read();
        d_17_V_reg_5638 = d_17_V_fu_1678_p3.read();
        d_18_V_reg_5650 = d_18_V_fu_1694_p3.read();
        d_19_V_reg_5662 = d_19_V_fu_1710_p3.read();
        d_1_V_reg_5542 = d_1_V_fu_1550_p3.read();
        d_20_V_reg_5620 = d_20_V_fu_1656_p3.read();
        d_21_V_reg_5632 = d_21_V_fu_1672_p3.read();
        d_22_V_reg_5644 = d_22_V_fu_1688_p3.read();
        d_23_V_reg_5656 = d_23_V_fu_1704_p3.read();
        d_24_V_reg_5668 = d_24_V_fu_1720_p3.read();
        d_25_V_reg_5680 = d_25_V_fu_1736_p3.read();
        d_26_V_reg_5692 = d_26_V_fu_1752_p3.read();
        d_27_V_reg_5704 = d_27_V_fu_1768_p3.read();
        d_28_V_reg_5674 = d_28_V_fu_1726_p3.read();
        d_29_V_reg_5686 = d_29_V_fu_1742_p3.read();
        d_2_V_reg_5554 = d_2_V_fu_1566_p3.read();
        d_30_V_reg_5698 = d_30_V_fu_1758_p3.read();
        d_31_V_reg_5710 = d_31_V_fu_1774_p3.read();
        d_3_V_reg_5566 = d_3_V_fu_1582_p3.read();
        d_4_V_reg_5524 = d_4_V_fu_1528_p3.read();
        d_5_V_reg_5536 = d_5_V_fu_1544_p3.read();
        d_6_V_reg_5548 = d_6_V_fu_1560_p3.read();
        d_7_V_reg_5560 = d_7_V_fu_1576_p3.read();
        d_8_V_reg_5572 = d_8_V_fu_1592_p3.read();
        d_9_V_reg_5584 = d_9_V_fu_1608_p3.read();
        icmp_ln895_80_reg_5716 = icmp_ln895_80_fu_1780_p2.read();
        icmp_ln895_81_reg_5722 = icmp_ln895_81_fu_1786_p2.read();
        icmp_ln895_82_reg_5728 = icmp_ln895_82_fu_1792_p2.read();
        icmp_ln895_83_reg_5734 = icmp_ln895_83_fu_1798_p2.read();
        icmp_ln895_84_reg_5740 = icmp_ln895_84_fu_1804_p2.read();
        icmp_ln895_85_reg_5746 = icmp_ln895_85_fu_1810_p2.read();
        icmp_ln895_86_reg_5752 = icmp_ln895_86_fu_1816_p2.read();
        icmp_ln895_87_reg_5758 = icmp_ln895_87_fu_1822_p2.read();
        icmp_ln895_88_reg_5764 = icmp_ln895_88_fu_1828_p2.read();
        icmp_ln895_89_reg_5770 = icmp_ln895_89_fu_1834_p2.read();
        icmp_ln895_90_reg_5776 = icmp_ln895_90_fu_1840_p2.read();
        icmp_ln895_91_reg_5782 = icmp_ln895_91_fu_1846_p2.read();
        icmp_ln895_92_reg_5788 = icmp_ln895_92_fu_1852_p2.read();
        icmp_ln895_93_reg_5794 = icmp_ln895_93_fu_1858_p2.read();
        icmp_ln895_94_reg_5800 = icmp_ln895_94_fu_1864_p2.read();
        icmp_ln895_95_reg_5806 = icmp_ln895_95_fu_1870_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        f_0_V_reg_5819 = f_0_V_fu_2050_p3.read();
        f_10_V_reg_5882 = f_10_V_fu_2152_p3.read();
        f_11_V_reg_5889 = f_11_V_fu_2160_p3.read();
        f_12_V_reg_5896 = f_12_V_fu_2174_p3.read();
        f_13_V_reg_5903 = f_13_V_fu_2182_p3.read();
        f_14_V_reg_5910 = f_14_V_fu_2196_p3.read();
        f_15_V_reg_5917 = f_15_V_fu_2204_p3.read();
        f_16_V_reg_5931 = f_16_V_fu_2226_p3.read();
        f_17_V_reg_5924 = f_17_V_fu_2218_p3.read();
        f_18_V_reg_5945 = f_18_V_fu_2248_p3.read();
        f_19_V_reg_5938 = f_19_V_fu_2240_p3.read();
        f_1_V_reg_5812 = f_1_V_fu_2042_p3.read();
        f_20_V_reg_5959 = f_20_V_fu_2270_p3.read();
        f_21_V_reg_5952 = f_21_V_fu_2262_p3.read();
        f_22_V_reg_5973 = f_22_V_fu_2292_p3.read();
        f_23_V_reg_5966 = f_23_V_fu_2284_p3.read();
        f_24_V_reg_5980 = f_24_V_fu_2306_p3.read();
        f_25_V_reg_5987 = f_25_V_fu_2314_p3.read();
        f_26_V_reg_5994 = f_26_V_fu_2328_p3.read();
        f_27_V_reg_6001 = f_27_V_fu_2336_p3.read();
        f_28_V_reg_6008 = f_28_V_fu_2350_p3.read();
        f_29_V_reg_6015 = f_29_V_fu_2358_p3.read();
        f_2_V_reg_5833 = f_2_V_fu_2072_p3.read();
        f_30_V_reg_6022 = f_30_V_fu_2372_p3.read();
        f_31_V_reg_6029 = f_31_V_fu_2380_p3.read();
        f_3_V_reg_5826 = f_3_V_fu_2064_p3.read();
        f_4_V_reg_5847 = f_4_V_fu_2094_p3.read();
        f_5_V_reg_5840 = f_5_V_fu_2086_p3.read();
        f_6_V_reg_5861 = f_6_V_fu_2116_p3.read();
        f_7_V_reg_5854 = f_7_V_fu_2108_p3.read();
        f_8_V_reg_5868 = f_8_V_fu_2130_p3.read();
        f_9_V_reg_5875 = f_9_V_fu_2138_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        g_0_V_reg_6042 = g_0_V_fu_2398_p3.read();
        g_10_V_reg_6060 = g_10_V_fu_2424_p3.read();
        g_11_V_reg_6072 = g_11_V_fu_2440_p3.read();
        g_12_V_reg_6084 = g_12_V_fu_2456_p3.read();
        g_13_V_reg_6096 = g_13_V_fu_2472_p3.read();
        g_14_V_reg_6108 = g_14_V_fu_2488_p3.read();
        g_15_V_reg_6120 = g_15_V_fu_2504_p3.read();
        g_16_V_reg_6132 = g_16_V_fu_2520_p3.read();
        g_17_V_reg_6144 = g_17_V_fu_2536_p3.read();
        g_18_V_reg_6156 = g_18_V_fu_2552_p3.read();
        g_19_V_reg_6168 = g_19_V_fu_2568_p3.read();
        g_1_V_reg_6054 = g_1_V_fu_2414_p3.read();
        g_20_V_reg_6180 = g_20_V_fu_2584_p3.read();
        g_21_V_reg_6192 = g_21_V_fu_2600_p3.read();
        g_22_V_reg_6204 = g_22_V_fu_2616_p3.read();
        g_23_V_reg_6216 = g_23_V_fu_2632_p3.read();
        g_24_V_reg_6138 = g_24_V_fu_2526_p3.read();
        g_25_V_reg_6150 = g_25_V_fu_2542_p3.read();
        g_26_V_reg_6162 = g_26_V_fu_2558_p3.read();
        g_27_V_reg_6174 = g_27_V_fu_2574_p3.read();
        g_28_V_reg_6186 = g_28_V_fu_2590_p3.read();
        g_29_V_reg_6198 = g_29_V_fu_2606_p3.read();
        g_2_V_reg_6066 = g_2_V_fu_2430_p3.read();
        g_30_V_reg_6210 = g_30_V_fu_2622_p3.read();
        g_31_V_reg_6222 = g_31_V_fu_2638_p3.read();
        g_3_V_reg_6078 = g_3_V_fu_2446_p3.read();
        g_4_V_reg_6090 = g_4_V_fu_2462_p3.read();
        g_5_V_reg_6102 = g_5_V_fu_2478_p3.read();
        g_6_V_reg_6114 = g_6_V_fu_2494_p3.read();
        g_7_V_reg_6126 = g_7_V_fu_2510_p3.read();
        g_8_V_reg_6036 = g_8_V_fu_2392_p3.read();
        g_9_V_reg_6048 = g_9_V_fu_2408_p3.read();
        icmp_ln895_112_reg_6228 = icmp_ln895_112_fu_2644_p2.read();
        icmp_ln895_113_reg_6234 = icmp_ln895_113_fu_2650_p2.read();
        icmp_ln895_114_reg_6240 = icmp_ln895_114_fu_2656_p2.read();
        icmp_ln895_115_reg_6246 = icmp_ln895_115_fu_2662_p2.read();
        icmp_ln895_116_reg_6252 = icmp_ln895_116_fu_2668_p2.read();
        icmp_ln895_117_reg_6258 = icmp_ln895_117_fu_2674_p2.read();
        icmp_ln895_118_reg_6264 = icmp_ln895_118_fu_2680_p2.read();
        icmp_ln895_119_reg_6270 = icmp_ln895_119_fu_2686_p2.read();
        icmp_ln895_120_reg_6276 = icmp_ln895_120_fu_2692_p2.read();
        icmp_ln895_121_reg_6282 = icmp_ln895_121_fu_2698_p2.read();
        icmp_ln895_122_reg_6288 = icmp_ln895_122_fu_2704_p2.read();
        icmp_ln895_123_reg_6294 = icmp_ln895_123_fu_2710_p2.read();
        icmp_ln895_124_reg_6300 = icmp_ln895_124_fu_2716_p2.read();
        icmp_ln895_125_reg_6306 = icmp_ln895_125_fu_2722_p2.read();
        icmp_ln895_126_reg_6312 = icmp_ln895_126_fu_2728_p2.read();
        icmp_ln895_127_reg_6318 = icmp_ln895_127_fu_2734_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        icmp_ln895_160_reg_6740 = icmp_ln895_160_fu_3508_p2.read();
        icmp_ln895_161_reg_6746 = icmp_ln895_161_fu_3514_p2.read();
        icmp_ln895_162_reg_6752 = icmp_ln895_162_fu_3520_p2.read();
        icmp_ln895_163_reg_6758 = icmp_ln895_163_fu_3526_p2.read();
        icmp_ln895_164_reg_6764 = icmp_ln895_164_fu_3532_p2.read();
        icmp_ln895_165_reg_6770 = icmp_ln895_165_fu_3538_p2.read();
        icmp_ln895_166_reg_6776 = icmp_ln895_166_fu_3544_p2.read();
        icmp_ln895_167_reg_6782 = icmp_ln895_167_fu_3550_p2.read();
        icmp_ln895_168_reg_6788 = icmp_ln895_168_fu_3556_p2.read();
        icmp_ln895_169_reg_6794 = icmp_ln895_169_fu_3562_p2.read();
        icmp_ln895_170_reg_6800 = icmp_ln895_170_fu_3568_p2.read();
        icmp_ln895_171_reg_6806 = icmp_ln895_171_fu_3574_p2.read();
        icmp_ln895_172_reg_6812 = icmp_ln895_172_fu_3580_p2.read();
        icmp_ln895_173_reg_6818 = icmp_ln895_173_fu_3586_p2.read();
        icmp_ln895_174_reg_6824 = icmp_ln895_174_fu_3592_p2.read();
        icmp_ln895_175_reg_6830 = icmp_ln895_175_fu_3598_p2.read();
        m_0_V_reg_6554 = m_0_V_fu_3262_p3.read();
        m_10_V_reg_6614 = m_10_V_fu_3342_p3.read();
        m_11_V_reg_6608 = m_11_V_fu_3336_p3.read();
        m_12_V_reg_6626 = m_12_V_fu_3358_p3.read();
        m_13_V_reg_6620 = m_13_V_fu_3352_p3.read();
        m_14_V_reg_6638 = m_14_V_fu_3374_p3.read();
        m_15_V_reg_6632 = m_15_V_fu_3368_p3.read();
        m_16_V_reg_6644 = m_16_V_fu_3384_p3.read();
        m_17_V_reg_6650 = m_17_V_fu_3390_p3.read();
        m_18_V_reg_6656 = m_18_V_fu_3400_p3.read();
        m_19_V_reg_6662 = m_19_V_fu_3406_p3.read();
        m_1_V_reg_6548 = m_1_V_fu_3256_p3.read();
        m_20_V_reg_6668 = m_20_V_fu_3416_p3.read();
        m_21_V_reg_6674 = m_21_V_fu_3422_p3.read();
        m_22_V_reg_6680 = m_22_V_fu_3432_p3.read();
        m_23_V_reg_6686 = m_23_V_fu_3438_p3.read();
        m_24_V_reg_6692 = m_24_V_fu_3448_p3.read();
        m_25_V_reg_6698 = m_25_V_fu_3454_p3.read();
        m_26_V_reg_6704 = m_26_V_fu_3464_p3.read();
        m_27_V_reg_6710 = m_27_V_fu_3470_p3.read();
        m_28_V_reg_6716 = m_28_V_fu_3480_p3.read();
        m_29_V_reg_6722 = m_29_V_fu_3486_p3.read();
        m_2_V_reg_6566 = m_2_V_fu_3278_p3.read();
        m_30_V_reg_6728 = m_30_V_fu_3496_p3.read();
        m_31_V_reg_6734 = m_31_V_fu_3502_p3.read();
        m_3_V_reg_6560 = m_3_V_fu_3272_p3.read();
        m_4_V_reg_6578 = m_4_V_fu_3294_p3.read();
        m_5_V_reg_6572 = m_5_V_fu_3288_p3.read();
        m_6_V_reg_6590 = m_6_V_fu_3310_p3.read();
        m_7_V_reg_6584 = m_7_V_fu_3304_p3.read();
        m_8_V_reg_6602 = m_8_V_fu_3326_p3.read();
        m_9_V_reg_6596 = m_9_V_fu_3320_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0))) {
        icmp_ln895_208_reg_7252 = icmp_ln895_208_fu_4372_p2.read();
        icmp_ln895_209_reg_7258 = icmp_ln895_209_fu_4378_p2.read();
        icmp_ln895_210_reg_7264 = icmp_ln895_210_fu_4384_p2.read();
        icmp_ln895_211_reg_7270 = icmp_ln895_211_fu_4390_p2.read();
        icmp_ln895_212_reg_7276 = icmp_ln895_212_fu_4396_p2.read();
        icmp_ln895_213_reg_7282 = icmp_ln895_213_fu_4402_p2.read();
        icmp_ln895_214_reg_7288 = icmp_ln895_214_fu_4408_p2.read();
        icmp_ln895_215_reg_7294 = icmp_ln895_215_fu_4414_p2.read();
        icmp_ln895_216_reg_7300 = icmp_ln895_216_fu_4420_p2.read();
        icmp_ln895_217_reg_7306 = icmp_ln895_217_fu_4426_p2.read();
        icmp_ln895_218_reg_7312 = icmp_ln895_218_fu_4432_p2.read();
        icmp_ln895_219_reg_7318 = icmp_ln895_219_fu_4438_p2.read();
        icmp_ln895_220_reg_7324 = icmp_ln895_220_fu_4444_p2.read();
        icmp_ln895_221_reg_7330 = icmp_ln895_221_fu_4450_p2.read();
        icmp_ln895_222_reg_7336 = icmp_ln895_222_fu_4456_p2.read();
        icmp_ln895_223_reg_7342 = icmp_ln895_223_fu_4462_p2.read();
        p_0_V_reg_7066 = p_0_V_fu_4126_p3.read();
        p_10_V_reg_7138 = p_10_V_fu_4222_p3.read();
        p_11_V_reg_7150 = p_11_V_fu_4238_p3.read();
        p_12_V_reg_7108 = p_12_V_fu_4184_p3.read();
        p_13_V_reg_7120 = p_13_V_fu_4200_p3.read();
        p_14_V_reg_7132 = p_14_V_fu_4216_p3.read();
        p_15_V_reg_7144 = p_15_V_fu_4232_p3.read();
        p_16_V_reg_7162 = p_16_V_fu_4254_p3.read();
        p_17_V_reg_7174 = p_17_V_fu_4270_p3.read();
        p_18_V_reg_7186 = p_18_V_fu_4286_p3.read();
        p_19_V_reg_7198 = p_19_V_fu_4302_p3.read();
        p_1_V_reg_7078 = p_1_V_fu_4142_p3.read();
        p_20_V_reg_7156 = p_20_V_fu_4248_p3.read();
        p_21_V_reg_7168 = p_21_V_fu_4264_p3.read();
        p_22_V_reg_7180 = p_22_V_fu_4280_p3.read();
        p_23_V_reg_7192 = p_23_V_fu_4296_p3.read();
        p_24_V_reg_7210 = p_24_V_fu_4318_p3.read();
        p_25_V_reg_7222 = p_25_V_fu_4334_p3.read();
        p_26_V_reg_7234 = p_26_V_fu_4350_p3.read();
        p_27_V_reg_7246 = p_27_V_fu_4366_p3.read();
        p_28_V_reg_7204 = p_28_V_fu_4312_p3.read();
        p_29_V_reg_7216 = p_29_V_fu_4328_p3.read();
        p_2_V_reg_7090 = p_2_V_fu_4158_p3.read();
        p_30_V_reg_7228 = p_30_V_fu_4344_p3.read();
        p_31_V_reg_7240 = p_31_V_fu_4360_p3.read();
        p_3_V_reg_7102 = p_3_V_fu_4174_p3.read();
        p_4_V_reg_7060 = p_4_V_fu_4120_p3.read();
        p_5_V_reg_7072 = p_5_V_fu_4136_p3.read();
        p_6_V_reg_7084 = p_6_V_fu_4152_p3.read();
        p_7_V_reg_7096 = p_7_V_fu_4168_p3.read();
        p_8_V_reg_7114 = p_8_V_fu_4190_p3.read();
        p_9_V_reg_7126 = p_9_V_fu_4206_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        l_0_V_reg_6331 = l_0_V_fu_2914_p3.read();
        l_10_V_reg_6380 = l_10_V_fu_2994_p3.read();
        l_11_V_reg_6394 = l_11_V_fu_3016_p3.read();
        l_12_V_reg_6415 = l_12_V_fu_3046_p3.read();
        l_13_V_reg_6429 = l_13_V_fu_3068_p3.read();
        l_14_V_reg_6408 = l_14_V_fu_3038_p3.read();
        l_15_V_reg_6422 = l_15_V_fu_3060_p3.read();
        l_16_V_reg_6436 = l_16_V_fu_3082_p3.read();
        l_17_V_reg_6450 = l_17_V_fu_3104_p3.read();
        l_18_V_reg_6443 = l_18_V_fu_3090_p3.read();
        l_19_V_reg_6457 = l_19_V_fu_3112_p3.read();
        l_1_V_reg_6345 = l_1_V_fu_2936_p3.read();
        l_20_V_reg_6464 = l_20_V_fu_3126_p3.read();
        l_21_V_reg_6478 = l_21_V_fu_3148_p3.read();
        l_22_V_reg_6471 = l_22_V_fu_3134_p3.read();
        l_23_V_reg_6485 = l_23_V_fu_3156_p3.read();
        l_24_V_reg_6492 = l_24_V_fu_3170_p3.read();
        l_25_V_reg_6506 = l_25_V_fu_3192_p3.read();
        l_26_V_reg_6499 = l_26_V_fu_3178_p3.read();
        l_27_V_reg_6513 = l_27_V_fu_3200_p3.read();
        l_28_V_reg_6520 = l_28_V_fu_3214_p3.read();
        l_29_V_reg_6534 = l_29_V_fu_3236_p3.read();
        l_2_V_reg_6324 = l_2_V_fu_2906_p3.read();
        l_30_V_reg_6527 = l_30_V_fu_3222_p3.read();
        l_31_V_reg_6541 = l_31_V_fu_3244_p3.read();
        l_3_V_reg_6338 = l_3_V_fu_2928_p3.read();
        l_4_V_reg_6359 = l_4_V_fu_2958_p3.read();
        l_5_V_reg_6373 = l_5_V_fu_2980_p3.read();
        l_6_V_reg_6352 = l_6_V_fu_2950_p3.read();
        l_7_V_reg_6366 = l_7_V_fu_2972_p3.read();
        l_8_V_reg_6387 = l_8_V_fu_3002_p3.read();
        l_9_V_reg_6401 = l_9_V_fu_3024_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0))) {
        o_0_V_reg_6843 = o_0_V_fu_3778_p3.read();
        o_10_V_reg_6864 = o_10_V_fu_3814_p3.read();
        o_11_V_reg_6878 = o_11_V_fu_3836_p3.read();
        o_12_V_reg_6892 = o_12_V_fu_3858_p3.read();
        o_13_V_reg_6906 = o_13_V_fu_3880_p3.read();
        o_14_V_reg_6920 = o_14_V_fu_3902_p3.read();
        o_15_V_reg_6934 = o_15_V_fu_3924_p3.read();
        o_16_V_reg_6955 = o_16_V_fu_3954_p3.read();
        o_17_V_reg_6969 = o_17_V_fu_3976_p3.read();
        o_18_V_reg_6983 = o_18_V_fu_3998_p3.read();
        o_19_V_reg_6997 = o_19_V_fu_4020_p3.read();
        o_1_V_reg_6857 = o_1_V_fu_3800_p3.read();
        o_20_V_reg_7011 = o_20_V_fu_4042_p3.read();
        o_21_V_reg_7025 = o_21_V_fu_4064_p3.read();
        o_22_V_reg_7039 = o_22_V_fu_4086_p3.read();
        o_23_V_reg_7053 = o_23_V_fu_4108_p3.read();
        o_24_V_reg_6948 = o_24_V_fu_3946_p3.read();
        o_25_V_reg_6962 = o_25_V_fu_3968_p3.read();
        o_26_V_reg_6976 = o_26_V_fu_3990_p3.read();
        o_27_V_reg_6990 = o_27_V_fu_4012_p3.read();
        o_28_V_reg_7004 = o_28_V_fu_4034_p3.read();
        o_29_V_reg_7018 = o_29_V_fu_4056_p3.read();
        o_2_V_reg_6871 = o_2_V_fu_3822_p3.read();
        o_30_V_reg_7032 = o_30_V_fu_4078_p3.read();
        o_31_V_reg_7046 = o_31_V_fu_4100_p3.read();
        o_3_V_reg_6885 = o_3_V_fu_3844_p3.read();
        o_4_V_reg_6899 = o_4_V_fu_3866_p3.read();
        o_5_V_reg_6913 = o_5_V_fu_3888_p3.read();
        o_6_V_reg_6927 = o_6_V_fu_3910_p3.read();
        o_7_V_reg_6941 = o_7_V_fu_3932_p3.read();
        o_8_V_reg_6836 = o_8_V_fu_3770_p3.read();
        o_9_V_reg_6850 = o_9_V_fu_3792_p3.read();
    }
}

void bitonicSort::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to1.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 16 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            }
            break;
        case 32 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage5_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            }
            break;
        case 64 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage6_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            }
            break;
        case 128 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            }
            break;
        case 256 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage8_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage8;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXX";
            break;
    }
}

}

