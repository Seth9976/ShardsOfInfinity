// 函数名称: sub_4b8340
// 虚拟地址: 0x4b8340
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b8340(int32_t arg1, int32_t, int128_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    float xmm1[0x4] = *arg3
    int32_t xmm0_1 = xmm1[0] ^ 0x80000000
    float xmm7_1 = *(arg3 + 0x14) ^ 0x80000000
    int32_t var_4c = _mm_shuffle_ps(xmm1, xmm1, 0x55) ^ 0x80000000
    int32_t var_48 = _mm_shuffle_ps(xmm1, xmm1, 0xaa) ^ 0x80000000
    int32_t var_44 = _mm_shuffle_ps(xmm1, xmm1, 0xff)
    *arg4 = xmm0_1.o
    float xmm0_10 = arg3[1].d ^ 0x80000000
    float xmm4 = *(arg4 + 4)
    float xmm0_12 = *(arg3 + 0x18) ^ 0x80000000
    float xmm6 = *(arg4 + 8)
    float xmm2 = *(arg4 + 0xc)
    float xmm0_14 = xmm2 * xmm2
    float xmm3 = *arg4
    float xmm5_1 = xmm4 * xmm3
    float xmm0_16 = xmm4 * xmm4
    float xmm1_3 = xmm3 * xmm3
    float xmm0_18 = xmm6 * xmm6
    float xmm3_2 = xmm6 * xmm2
    float xmm0_20 = xmm7_1 + xmm7_1
    float xmm6_1 = xmm6 f* *arg4
    float xmm7_3 = xmm4 * xmm2
    float xmm2_2 = xmm0_12 + xmm0_12
    var_48.q = (xmm1_3 + xmm0_14 - xmm0_16 - xmm0_18) * xmm0_10
    float xmm0_34 = xmm0_10 + xmm0_10
    var_48.q = var_48 + (xmm5_1 - xmm3_2) * xmm0_20 + (xmm6_1 + xmm7_3) * xmm2_2
    float xmm0_36 = xmm0_14 - xmm1_3
    float xmm0_38 = *(arg4 + 8) * xmm4
    float xmm1_9 = *arg4 f* *(arg4 + 0xc)
    arg4[1].q = _mm_unpacklo_ps(zx.o(var_48.q), 
        (xmm0_36 + xmm0_16 - xmm0_18) * xmm7_1 + (xmm3_2 + xmm5_1) * xmm0_34
            + (xmm0_38 - xmm1_9) * xmm2_2)
    *(arg4 + 0x18) = (xmm1_9 + xmm0_38) * xmm0_20 + (xmm6_1 - xmm7_3) * xmm0_34
        + (xmm0_36 - xmm0_16 + xmm0_18) * xmm0_12
    return arg4
}
