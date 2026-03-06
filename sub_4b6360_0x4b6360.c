// 函数名称: sub_4b6360
// 虚拟地址: 0x4b6360
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4b6360(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: float xmm0_1 = *arg2 f- arg3[4]
    float xmm0_1 = *arg2 f- arg3[4]
    float xmm7 = arg3[3]
    float xmm5 = arg3[1]
    float xmm4 = *arg3
    float xmm0_3 = arg2[1] f- arg3[5]
    float xmm1_1 = arg2[2] f- arg3[6]
    float xmm3_1 = xmm5 * xmm7
    float xmm2_1 = xmm4 * xmm4
    float xmm0_5 = xmm7 * xmm7
    float xmm0_7 = xmm5 * xmm5
    float xmm0_8 = arg3[2]
    float xmm6_1 = xmm0_8 * xmm0_8
    float xmm0_9 = xmm0_8 * xmm4
    float xmm0_10 = xmm0_9 - xmm3_1
    float xmm3_3 = xmm1_1 + xmm1_1
    float xmm1_3 = arg3[2] f* xmm7
    float xmm0_12 = xmm5 * xmm4
    float xmm4_2 = xmm0_3 + xmm0_3
    float xmm0_13 = xmm0_12 + xmm1_3
    float xmm0_17 = xmm2_1 + xmm0_5 - xmm0_7 - xmm6_1
    float xmm0_22 = xmm0_12 - xmm1_3
    float xmm0_24 = xmm0_1 + xmm0_1
    float xmm0_26 = xmm0_5 - xmm2_1
    float xmm2_3 = arg3[2] f* xmm5
    float xmm5_2 = *arg3 * xmm7
    float xmm7_2 = xmm5_2 + xmm2_3
    float xmm0_28 = xmm0_26 + xmm0_7 - xmm6_1
    float xmm3_5 = xmm2_3 - xmm5_2
    float xmm0_33 = xmm3_1 + xmm0_9
    float xmm5_5 = xmm0_26 - xmm0_7 + xmm6_1
    int64_t xmm6_6 = _mm_unpacklo_ps(xmm0_13 * xmm4_2 + xmm0_17 * xmm0_1 + xmm0_10 * xmm3_3, 
        xmm0_22 * xmm0_24 + xmm0_28 * xmm0_3 + xmm7_2 * xmm3_3)
    float xmm4_3 = arg2[3]
    int64_t var_80 = xmm6_6
    float xmm6_7 = arg2[5]
    float xmm4_4 = xmm4_3 + xmm4_3
    float xmm2_9 = xmm6_7 + xmm6_7
    float xmm1_9 = arg2[4]
    float xmm3_7 = xmm1_9 + xmm1_9
    float var_78 = xmm0_33 * xmm0_24 + xmm3_5 * xmm4_2 + xmm5_5 * xmm1_1
    float xmm2_11[0x4] = arg3[7]
    int64_t var_68 = 0
    int32_t xmm0_49 = arg3[9]
    float var_6c = xmm4_4 * xmm0_33 + xmm3_7 * xmm3_5 + xmm5_5 * xmm6_7
    int32_t var_60 = 0
    int64_t var_74 = _mm_unpacklo_ps(xmm4_3 * xmm0_17 + xmm3_7 * xmm0_13 + xmm2_9 * xmm0_10, 
        xmm0_28 * xmm1_9 + xmm4_4 * xmm0_22 + xmm2_9 * xmm7_2)
    int64_t var_5c = _mm_unpacklo_ps(xmm2_11, arg3[8])
    int32_t var_54 = xmm0_49
    return sub_4c5ef0(xmm0_49, &var_68, &var_80, arg4)
}
