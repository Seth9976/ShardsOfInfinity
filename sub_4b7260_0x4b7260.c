// 函数名称: sub_4b7260
// 虚拟地址: 0x4b7260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __fastcallsub_4b7260(float* arg1, int32_t arg2)
{
    // 第一条实际指令: void* const i = &data_572b08
    void* const i = &data_572b08
    float result
    
    do
        float xmm4_1 = arg1[4]
        float xmm6_1 = arg1[3]
        float xmm2_3 = (*i - 0.5f) * arg1[9]
        float xmm1_2 = arg1[7] * (*(i - 8) - 0.5f)
        float xmm0_3 = arg1[6]
        float xmm1_4 = xmm0_3 * xmm0_3
        float xmm2_5 = xmm4_1 * xmm4_1
        int64_t xmm1_6 = xmm6_1 * xmm6_1
        float xmm2_6 = arg1[5]
        float xmm5_2 = xmm4_1 * xmm6_1
        float xmm3_2 = xmm2_6 * xmm2_6
        float xmm6_3 = xmm4_1 * xmm0_3
        float xmm3_4 = xmm2_6 * xmm0_3
        float xmm0_5 = xmm2_6 * arg1[3]
        float xmm7_3 = (*(i - 4) - 0.5f) * arg1[8]
        float xmm2_8 = xmm2_3 + xmm2_3
        float xmm7_4 = xmm7_3 + xmm7_3
        float xmm0_19 = xmm1_2 + xmm1_2
        float xmm0_21 = xmm1_4 - xmm1_6.d
        float xmm1_12 = arg1[3] * arg1[6]
        float xmm0_23 = arg1[5] * xmm4_1
        int64_t var_2c_1
        var_2c_1:4.d = xmm0_23
        uint128_t xmm2_13 = zx.o((xmm1_6.d + xmm1_4 - xmm2_5 - xmm3_2) * xmm1_2
            + (xmm5_2 - xmm3_4) * xmm7_4 + (xmm0_5 + xmm6_3) * xmm2_8)
        float xmm2_14[0x4] = xmm2_13 f+ *arg1
        int64_t xmm0_32 = _mm_unpacklo_ps(xmm2_13, 
            (xmm0_21 + xmm2_5 - xmm3_2) * xmm7_3 + (xmm3_4 + xmm5_2) * xmm0_19
                + (xmm0_23 - xmm1_12) * xmm2_8)
        result = arg1[2] + (xmm0_5 - xmm6_3) * xmm0_19 + (xmm1_12 f+ var_2c_1:4.d) * xmm7_4
            + (xmm0_21 - xmm2_5 + xmm3_2) * xmm2_3
        *(arg2 - &data_572b08 + i) = _mm_unpacklo_ps(xmm2_14, arg1[1] f+ xmm0_32:4.d)
        *(arg2 - &data_572b08 + i + 8) = result
        i += 0xc
    while (i s< &data_572b60:8)
    
    return result
}
