// 函数名称: sub_4a0490
// 虚拟地址: 0x4a0490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_4a0490(int32_t arg1, float* arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: float xmm4 = arg4[4]
    float xmm4 = arg4[4]
    float xmm6 = arg4[3]
    float xmm0_1 = xmm4 * xmm4
    float xmm3 = arg4[1]
    float xmm7_1 = xmm6 * xmm4
    float xmm0_2 = arg4[2]
    int64_t xmm2_1 = xmm3 * xmm3
    float xmm1_1 = xmm0_2 * xmm0_2
    float xmm5_1 = xmm0_2 * xmm4
    float xmm1_3 = xmm6 * xmm6
    float xmm4_2 = xmm6 * arg4[1]
    float xmm1_5 = xmm0_2 * xmm3
    float xmm3_1 = arg2[6]
    float xmm1_7 = xmm3_1 + xmm3_1
    float xmm1_8 = arg2[7]
    float xmm1_9 = xmm1_8 + xmm1_8
    float xmm0_13 = arg2[5]
    float xmm0_14 = xmm0_13 + xmm0_13
    float xmm6_2 = xmm0_1 - xmm2_1.d
    float xmm2_8 = arg4[3] * arg4[2]
    int64_t var_40
    var_40:4.d = xmm0_14
    float xmm2_10 = arg4[1] * arg4[4]
    float xmm0_22 = *arg4
    float result = arg4[7] + ((xmm2_10 + xmm2_8) * xmm1_7 + (xmm4_2 - xmm5_1) f* var_40:4.d
        + (xmm6_2 - xmm1_1 + xmm1_3) * arg2[7]) * xmm0_22
    int64_t xmm3_5 = _mm_unpacklo_ps(
        ((xmm2_1.d + xmm0_1 - xmm1_1 - xmm1_3) * arg2[5] + (xmm1_5 - xmm7_1) * xmm1_7
            + (xmm4_2 + xmm5_1) * xmm1_9) * xmm0_22 + arg4[5], 
        arg4[6] + ((xmm6_2 + xmm1_1 - xmm1_3) * xmm3_1 + (xmm7_1 + xmm1_5) * xmm0_14
        + (xmm2_8 - xmm2_10) * xmm1_9) * xmm0_22)
    *(arg3 + 0x14) = xmm3_5
    arg3[7] = result
    float xmm6_3 = arg4[1]
    float xmm7_10 = arg2[1]
    float xmm2_18 = arg2[3]
    float xmm5_2 = arg4[2]
    float xmm3_6 = arg4[3]
    float xmm4_5 = arg2[2]
    float var_2c = xmm5_2 * arg2[4] + xmm4_5 * arg4[4] + xmm3_6 * xmm7_10 - xmm2_18 * xmm6_3
    float var_28_1 = xmm3_6 * arg2[4] + xmm2_18 * arg4[4] + xmm4_5 * xmm6_3 - xmm5_2 * xmm7_10
    var_28_1 = arg2[4] * arg4[4] - xmm6_3 * xmm7_10 - xmm4_5 * xmm5_2 - xmm2_18 * xmm3_6
    *(arg3 + 4) = (xmm6_3 * arg2[4] + xmm7_10 * arg4[4] + xmm2_18 * xmm5_2 - xmm3_6 * xmm4_5).o
    *arg3 = *arg2 * *arg4
    return result
}
