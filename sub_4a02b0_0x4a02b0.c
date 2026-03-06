// 函数名称: sub_4a02b0
// 虚拟地址: 0x4a02b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4a02b0(int32_t arg1, int32_t, int128_t* arg3, float arg4)
{
    // 第一条实际指令: int128_t* result = arg4
    int128_t* result = arg4
    *result = *arg3
    result[1] = arg3[1]
    *result = 1f f/ *result
    int32_t xmm4 = *(result + 0xc)
    float xmm6_1 = *(result + 4) ^ 0x80000000
    float xmm1_1 = *(result + 8) ^ 0x80000000
    *(result + 4) = xmm6_1
    float xmm4_1 = xmm4 ^ 0x80000000
    *(result + 8) = xmm1_1
    *(result + 0xc) = xmm4_1
    float xmm5 = result[1].d
    int64_t xmm3 = *(result + 0x18)
    float xmm0_4 = xmm5 * xmm5
    float xmm2_1 = xmm6_1 * xmm6_1
    float xmm0_6 = xmm1_1 * xmm1_1
    float xmm0_8 = xmm4_1 * xmm4_1
    float xmm5_1 = xmm5 * xmm1_1
    float xmm0_10 = xmm1_1 * xmm6_1
    float xmm1_3 = xmm3.d f+ xmm3
    float xmm7_1 = xmm5 * xmm4_1
    float xmm4_2 = xmm4_1 * xmm6_1
    float xmm1_4 = *(result + 0x1c)
    float xmm6_3 = xmm0_4 - xmm2_1
    float xmm1_5 = xmm1_4 + xmm1_4
    float xmm2_3 = result[1].d f* xmm6_1
    float xmm6_5 = xmm1_1 * xmm4_1
    float xmm0_16 = *(result + 0x14)
    float xmm0_17 = xmm0_16 + xmm0_16
    int64_t var_28
    var_28:4.d = xmm0_17
    float xmm0_26 = *result ^ (data_59e5c0.o).d
    float xmm3_14 = ((xmm2_3 + xmm6_5) * xmm1_3 + (xmm4_2 - xmm5_1) f* var_28:4.d
        + (xmm6_3 - xmm0_6 + xmm0_8) f* *(result + 0x1c)) * xmm0_26
    int64_t xmm1_8 = _mm_unpacklo_ps(
        ((xmm2_1 + xmm0_4 - xmm0_6 - xmm0_8) f* *(result + 0x14) + (xmm0_10 - xmm7_1) * xmm1_3
            + (xmm4_2 + xmm5_1) * xmm1_5).d * xmm0_26, 
        ((xmm6_3 + xmm0_6 - xmm0_8) * xmm3.d + (xmm7_1 + xmm0_10) * xmm0_17
        + (xmm6_5 - xmm2_3) * xmm1_5) * xmm0_26)
    *(result + 0x14) = xmm1_8
    int64_t var_30
    var_30:4.d = xmm3_14
    *(result + 0x1c) = var_30:4.d
    return result
}
