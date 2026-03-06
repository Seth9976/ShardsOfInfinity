// 函数名称: sub_49fd50
// 虚拟地址: 0x49fd50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_49fd50(int32_t arg1, int32_t* arg2, int32_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: float xmm0 = *arg3
    float xmm0 = *arg3
    float xmm1_1 = *arg2 * xmm0
    float xmm2 = arg3[4]
    float xmm7_1 = arg2[1] f* xmm0
    float xmm4 = arg3[2]
    float xmm1_3 = arg2[2] f* xmm0
    float xmm0_2 = xmm2 * xmm2
    float xmm6 = arg3[3]
    float xmm3 = arg3[1]
    float xmm0_4 = xmm4 * xmm4
    int64_t xmm1_5 = xmm3 * xmm3
    float xmm0_6 = xmm6 * xmm6
    float xmm5_1 = xmm4 * xmm3
    float xmm0_8 = xmm7_1 + xmm7_1
    float xmm3_2 = xmm6 * xmm2
    float xmm7_3 = xmm4 * xmm2
    float xmm6_1 = xmm6 f* arg3[1]
    float xmm2_2 = xmm1_3 + xmm1_3
    float xmm0_22 = xmm1_1 + xmm1_1
    float xmm0_24 = xmm0_2 - xmm1_5.d
    float xmm1_11 = arg3[1] f* arg3[4]
    float xmm0_26 = arg3[3] f* xmm4
    int64_t var_2c
    var_2c:4.d = xmm0_26
    int64_t xmm0_34 = _mm_unpacklo_ps(
        zx.o((xmm1_5.d + xmm0_2 - xmm0_4 - xmm0_6) * xmm1_1 + (xmm5_1 - xmm3_2) * xmm0_8
            + (xmm6_1 + xmm7_3) * xmm2_2), 
        (xmm0_24 + xmm0_4 - xmm0_6) * xmm7_1 + (xmm3_2 + xmm5_1) * xmm0_22
        + (xmm0_26 - xmm1_11) * xmm2_2)
    *arg4 = xmm0_34
    var_2c:4.d = (xmm1_11 f+ var_2c:4.d) * xmm0_8 + (xmm6_1 - xmm7_3) * xmm0_22
        + (xmm0_24 - xmm0_4 + xmm0_6) * xmm1_3
    arg4[1].d = var_2c:4.d
    *arg4 = arg3[5] f+ *arg4
    *(arg4 + 4) = arg3[6] f+ *(arg4 + 4)
    arg4[1].d = arg3[7] f+ arg4[1].d
    return arg4
}
