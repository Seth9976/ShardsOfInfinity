// 函数名称: sub_4b9880
// 虚拟地址: 0x4b9880
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_4b9880(int32_t arg1, int32_t* arg2, int128_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: float xmm0_1 = arg2[9] f* arg4[9]
    float xmm0_1 = arg2[9] f* arg4[9]
    *(arg3 + 0x1c) = _mm_unpacklo_ps(arg2[7] f* arg4[7], arg2[8] f* arg4[8])
    *(arg3 + 0x24) = xmm0_1
    float xmm7 = *arg2
    float xmm6 = *arg4
    float xmm3 = arg4[2]
    float xmm4 = arg2[1]
    float xmm2_3 = arg2[2]
    float xmm5 = arg4[1]
    float var_30 = xmm5 f* arg2[3] + xmm4 f* arg4[3] + xmm2_3 * xmm6 - xmm3 * xmm7
    float var_2c_1 = xmm3 f* arg2[3] + xmm2_3 f* arg4[3] + xmm5 * xmm7 - xmm4 * xmm6
    float var_28 = arg2[3] f* arg4[3] - xmm6 * xmm7 - xmm4 * xmm5 - xmm2_3 * xmm3
    *arg3 = (xmm6 f* arg2[3] + xmm7 f* arg4[3] + xmm3 * xmm4 - xmm2_3 * xmm5).o
    float xmm6_2 = arg2[3]
    float xmm2_5 = arg2[1]
    float xmm3_1 = *arg2
    float xmm7_1 = arg2[2]
    float xmm0_27 = xmm6_2 * xmm6_2
    float xmm1_18 = xmm2_5 * xmm2_5
    float xmm0_29 = xmm3_1 * xmm3_1
    float xmm1_20 = xmm7_1 * xmm7_1
    float xmm5_2 = xmm2_5 * xmm6_2
    float xmm1_22 = xmm2_5 * xmm3_1
    float xmm3_2 = arg4[5]
    float xmm4_3 = xmm3_2 + xmm3_2
    float xmm1_24 = xmm7_1 * xmm6_2
    float xmm6_3 = arg4[6]
    float xmm4_5 = xmm7_1 f* *arg2
    float xmm2_7 = xmm6_3 + xmm6_3
    float xmm1_26 = xmm0_27 - xmm0_29
    float xmm0_36 = arg4[4]
    float xmm0_37 = xmm0_36 + xmm0_36
    float xmm0_39 = arg2[2] f* arg2[1]
    float xmm0_41 = *arg2 f* arg2[3]
    float result = arg2[6] f+ arg2[9] f* ((xmm0_41 + xmm0_39) * xmm4_3 + (xmm4_5 - xmm5_2) * xmm0_37
        + (xmm1_26 - xmm1_18 + xmm1_20) * xmm6_3)
    arg3[1].q = _mm_unpacklo_ps(
        arg2[4] f+ arg2[7] f* ((xmm0_29 + xmm0_27 - xmm1_18 - xmm1_20) f* arg4[4]
            + (xmm1_22 - xmm1_24) * xmm4_3 + (xmm4_5 + xmm5_2) * xmm2_7), 
        arg2[5] f+ arg2[8] f* ((xmm1_26 + xmm1_18 - xmm1_20) * xmm3_2 + (xmm1_24 + xmm1_22) * xmm0_37
        + (xmm0_39 - xmm0_41) * xmm2_7))
    *(arg3 + 0x18) = result
    return result
}
