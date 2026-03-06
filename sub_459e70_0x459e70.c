// 函数名称: sub_459e70
// 虚拟地址: 0x459e70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_459e70(float arg1 @ eax, void* arg2, float* arg3, int32_t arg4)
{
    // 第一条实际指令: float xmm1 = arg3[2]
    float xmm1 = arg3[2]
    float xmm3 = arg3[3]
    float xmm2 = arg3[1]
    float xmm7_1 = xmm1 + xmm1
    float xmm5 = arg3[4]
    float xmm5_1 = xmm5 + xmm5
    int32_t i_1 = arg4
    float xmm0_1 = xmm7_1 * xmm1
    float xmm6_2 = (xmm3 + xmm3) * xmm3
    float xmm0_3 = xmm2 + xmm2
    float xmm7_2 = xmm7_1 * xmm3
    float xmm5_2 = xmm5_1 * xmm1
    float xmm6_4 = xmm5_1 * xmm3
    float xmm4_1 = xmm0_3 * xmm1
    float xmm1_2 = xmm0_3 * xmm3
    float xmm1_3 = 1f - xmm0_3 * xmm2
    float xmm0_6 = xmm5_1 * xmm2
    float xmm0_7 = *arg3
    float xmm3_3 = (1f - xmm0_1 - xmm6_2) * xmm0_7
    float var_28 = xmm3_3
    
    if (i_1 s<= 0)
        return 
    
    int32_t i
    
    do
        float xmm5_3 = *(arg2 + 4)
        float xmm1_16 = *arg2
        float xmm2_7 = *(arg2 + 8)
        float xmm5_7 = xmm5_3 * (xmm0_6 + xmm7_2) * xmm0_7 + xmm1_16 * (xmm1_2 - xmm5_2) * xmm0_7
            + xmm2_7 * (xmm1_3 - xmm0_1) * xmm0_7 + arg3[7]
        int64_t xmm4_10 = _mm_unpacklo_ps(
            xmm5_3 * (xmm4_1 - xmm6_4) * xmm0_7 + xmm1_16 * xmm3_3 + xmm2_7 * (xmm1_2 + xmm5_2) * xmm0_7
                + arg3[5], 
            xmm5_3 * (xmm1_3 - xmm6_2) * xmm0_7 + xmm1_16 * (xmm6_4 + xmm4_1) * xmm0_7
            + xmm2_7 * (xmm7_2 - xmm0_6) * xmm0_7 + arg3[6])
        xmm3_3 = var_28
        *arg2 = xmm4_10
        *(arg2 + 8) = xmm5_7
        arg2 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
}
