// 函数名称: sub_4b7dc0
// 虚拟地址: 0x4b7dc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_4b7dc0(int32_t arg1, int32_t* arg2, float* arg3, int64_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    float xmm5 = arg3[9]
    float xmm4 = arg3[0xb]
    float xmm1_3 = (arg3[2] - *arg3) * (*arg2 - arg3[4]) / (arg3[6] - arg3[4]) + *arg3
    float xmm7_1 = xmm5 * xmm4
    float xmm2_3 = arg3[0xa]
    float xmm1_7 = (arg3[3] - arg3[1]) * (arg2[1] f- arg3[5]) / (arg3[7] - arg3[5]) + arg3[1]
    float xmm6_1 = xmm2_3 * xmm2_3
    float xmm1_8 = arg3[8]
    float xmm0_5 = xmm1_8 * xmm2_3
    float xmm3_4 = xmm1_8 * xmm4
    float xmm0_6 = xmm0_5 + xmm7_1
    float xmm1_10 = xmm5 * xmm5
    float xmm0_9 = xmm2_3 * xmm5
    float xmm2_5 = xmm4 * xmm4
    float xmm7_3 = xmm0_9 - xmm3_4
    float xmm3_6 = xmm1_8 * xmm1_8
    float xmm7_9 = arg3[0xa] * xmm4
    float xmm0_22 = xmm1_8 * xmm5
    int32_t eax = arg3[0xe]
    float xmm5_2 = xmm0_5 - xmm7_1
    float xmm0_23 = xmm0_22 + xmm7_9
    float xmm7_11 = xmm0_22 - xmm7_9
    float xmm2_7 = xmm3_4 + xmm0_9
    float xmm7_14 = xmm7_11 + xmm7_11 + (xmm2_5 + xmm3_6 - xmm6_1 - xmm1_10) * xmm1_3
        + ((xmm0_6 + xmm0_6) ^ 0x80000000) * xmm1_7
    *arg4 = *(arg3 + 0x30)
    arg4[1].d = eax
    float xmm4_7 = xmm1_10 - xmm6_1 + xmm2_5 - xmm3_6 + (xmm0_23 + xmm0_23) * xmm1_3
        + ((xmm7_3 + xmm7_3) ^ 0x80000000) * xmm1_7
    float xmm2_10 = xmm2_7 + xmm2_7 + (xmm5_2 + xmm5_2) * xmm1_3
        + ((xmm6_1 - xmm1_10 - xmm3_6 + xmm2_5) ^ 0x80000000) * xmm1_7
    float xmm1_23 =
        1f / (sub_412d90(xmm4_7 * xmm4_7 + xmm7_14 * xmm7_14 + xmm2_10 * xmm2_10) + 9.99999975e-06f)
    *(arg4 + 0xc) = _mm_unpacklo_ps(xmm7_14 * xmm1_23, xmm4_7 * xmm1_23)
    *(arg4 + 0x14) = xmm2_10 * xmm1_23
    return arg4
}
