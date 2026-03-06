// 函数名称: sub_4b80d0
// 虚拟地址: 0x4b80d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b80d0(int32_t arg1, float* arg2, float* arg3, int128_t* arg4)
{
    // 第一条实际指令: float xmm5 = arg2[3]
    float xmm5 = arg2[3]
    float xmm6 = arg2[1]
    float xmm0_1 = xmm5 * xmm5
    float xmm4 = arg2[2]
    float xmm1 = *arg2
    float xmm2_1 = xmm1 * xmm1
    float xmm0_3 = xmm6 * xmm6
    float xmm3_1 = xmm6 * xmm1
    float xmm0_5 = xmm4 * xmm4
    float xmm1_2 = xmm4 * xmm5
    float xmm5_1 = arg3[5]
    float xmm0_7 = xmm5_1 + xmm5_1
    float xmm6_2 = xmm4 * *arg2
    float xmm7_1 = xmm6 * arg2[3]
    float xmm0_8 = arg3[6]
    float xmm4_2 = xmm0_8 + xmm0_8
    float xmm3_3 = *arg2 * arg2[3]
    float xmm0_20 = arg3[4]
    float xmm0_21 = xmm0_20 + xmm0_20
    float xmm0_23 = xmm0_1 - xmm2_1
    float xmm1_7 = arg2[2] * arg2[1]
    float xmm5_2 = arg3[3]
    float xmm0_35 = arg2[6] + (xmm3_3 + xmm1_7) * xmm0_7 + (xmm6_2 - xmm7_1) * xmm0_21
        + (xmm0_23 - xmm0_3 + xmm0_5) * arg3[6]
    float xmm2_8 = *arg3
    float xmm4_3 = arg3[2]
    float xmm3_8 = arg3[1]
    float xmm7_2 = arg2[2]
    float xmm0_37 = xmm2_8 * arg2[3]
    int64_t xmm6_7 = _mm_unpacklo_ps(
        (xmm2_1 + xmm0_1 - xmm0_3 - xmm0_5) * arg3[4] + (xmm3_1 - xmm1_2) * xmm0_7
            + (xmm6_2 + xmm7_1) * xmm4_2 + arg2[4], 
        arg2[5] + (xmm0_23 + xmm0_3 - xmm0_5) * xmm5_1 + (xmm1_2 + xmm3_1) * xmm0_21
        + (xmm1_7 - xmm3_3) * xmm4_2)
    float var_54 = xmm5_2 * arg2[1] + xmm3_8 * arg2[3] + xmm2_8 * xmm7_2 - xmm4_3 * *arg2
    float var_50 = xmm5_2 * xmm7_2 + xmm4_3 * arg2[3] + xmm3_8 * *arg2 - xmm2_8 * arg2[1]
    float var_4c = xmm5_2 * arg2[3] - xmm2_8 * *arg2 - xmm3_8 * arg2[1] - xmm4_3 * xmm7_2
    *arg4 = (xmm5_2 * *arg2 + xmm0_37 + xmm4_3 * arg2[1] - xmm3_8 * xmm7_2).o
    arg4[1].q = xmm6_7
    *(arg4 + 0x18) = xmm0_35
    return arg4
}
