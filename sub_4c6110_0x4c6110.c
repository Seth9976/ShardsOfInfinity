// 函数名称: sub_4c6110
// 虚拟地址: 0x4c6110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_4c6110(int32_t arg1, float* arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: float xmm3_1 = arg2[3] - *arg2
    float xmm3_1 = arg2[3] - *arg2
    float xmm0_1 = arg2[8] - arg2[2]
    float xmm4_1 = arg2[7] - arg2[1]
    float xmm2 = arg3[5]
    float xmm7_1 = arg2[6] - *arg2
    float xmm5_1 = arg2[4] - arg2[1]
    float xmm4_3 = arg3[4] * xmm0_1 - xmm2 * xmm4_1
    float xmm6_1 = arg2[5] - arg2[2]
    float xmm4_4 = arg3[3]
    float xmm2_2 = xmm2 * xmm7_1 - xmm4_4 * xmm0_1
    float xmm3_6 = xmm4_4 * xmm4_1 - arg3[4] * xmm7_1
    float xmm3_10 = xmm3_1 * xmm4_3 + xmm5_1 * xmm2_2 + xmm6_1 * xmm3_6
    float* result
    
    if (not(9.99999975e-05f f> sub_41b760(xmm3_10)))
        float xmm6_3 = arg3[1] - arg2[1]
        float xmm2_4 = arg3[2] - arg2[2]
        float xmm7_2 = 1f / xmm3_10
        float xmm3_12 = *arg3 - *arg2
        float xmm5_6 = (xmm3_12 * xmm4_3 + xmm6_3 * xmm2_2 + xmm2_4 * xmm3_6) * xmm7_2
        
        if (not(-9.99999975e-05f > xmm5_6) && not(xmm5_6 > 1.00010002f))
            float xmm1_3 = xmm6_3 * xmm6_1 - xmm2_4 * xmm5_1
            float xmm3_14 = xmm3_12 * xmm5_1 - xmm6_3 * xmm3_1
            float xmm2_6 = xmm2_4 * xmm3_1 - xmm3_12 * xmm6_1
            float xmm4_8 = (xmm4_4 * xmm1_3 + arg3[4] * xmm2_6 + arg3[5] * xmm3_14) * xmm7_2
            
            if (not(-9.99999975e-05f > xmm4_8) && not(xmm4_8 + xmm5_6 > 1.00010002f))
                float xmm1_7 = (xmm1_3 * xmm7_1 + xmm2_6 * xmm4_1 + xmm3_14 * xmm0_1) * xmm7_2
                *arg4 = xmm1_7
                
                if (not(0f > xmm1_7))
                    result.b = 1
                    return result
    
    result.b = 0
    return result
}
