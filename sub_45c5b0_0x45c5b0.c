// 函数名称: sub_45c5b0
// 虚拟地址: 0x45c5b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_45c5b0(int32_t arg1, int32_t* arg2, int32_t* arg3, float arg4)
{
    // 第一条实际指令: float xmm1 = arg3[1]
    float xmm1 = arg3[1]
    float xmm5 = arg3[3]
    float xmm3 = arg3[2]
    float xmm2_1 = xmm1 * xmm1
    float* result = arg4
    float xmm4 = *arg3
    float xmm0_1 = xmm5 * xmm5
    float xmm2_3 = xmm3 * xmm3
    float xmm0_3 = xmm4 * xmm4
    float xmm3_1 = arg2[1]
    float xmm2_5 = xmm1 * xmm4
    float xmm1_2 = arg3[2] f* *arg3
    float xmm6 = *arg2
    float xmm2_7 = xmm3_1 + xmm3_1
    float xmm7_1 = xmm3 * xmm5
    float xmm4_2 = xmm1 * xmm5
    float xmm5_1 = arg2[2]
    float xmm2_9 = xmm5_1 + xmm5_1
    float xmm6_1 = xmm6 + xmm6
    float xmm0_11 = xmm0_1 - xmm0_3
    *result = (xmm0_3 + xmm0_1 - xmm2_1 - xmm2_3) * xmm6 + (xmm2_5 - xmm7_1) * xmm2_7
        + (xmm1_2 + xmm4_2) * xmm2_9
    float xmm1_11 = *arg3 f* arg3[3]
    float xmm0_13 = arg3[2] f* arg3[1]
    result[1] =
        (xmm0_11 + xmm2_1 - xmm2_3) * xmm3_1 + (xmm7_1 + xmm2_5) * xmm6_1 + (xmm0_13 - xmm1_11) * xmm2_9
    result[2] =
        (xmm1_2 - xmm4_2) * xmm6_1 + (xmm1_11 + xmm0_13) * xmm2_7 + (xmm0_11 - xmm2_1 + xmm2_3) * xmm5_1
    return result
}
