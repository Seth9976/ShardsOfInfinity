// 函数名称: sub_4d3450
// 虚拟地址: 0x4d3450
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float*sub_4d3450(float* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    _memset(arg1, 0, 0x38)
    int32_t mxcsr
    int16_t x87control
    double xmm0_1 = __libm_sse2_tan_precise(mxcsr, x87control, 0x3fe0c15240000000)
    bool cond:0 = data_ce26f8 != 2
    void* eax = data_65ae00
    *arg1 = fconvert.s(xmm0_1)
    uint128_t xmm0_3 = zx.o(*(eax + 0x14))
    float xmm1_1 = _mm_cvtepi32_ps(zx.o(*(eax + 0x18)))
    arg1[2] = 0x3e4ccccd
    arg1[3] = 0x447a0000
    arg1[1] = xmm1_1 / _mm_cvtepi32_ps(xmm0_3)
    
    if (cond:0)
        sub_4d5420(&data_ce271c, &data_ce2728, &arg1[4], &data_ce271c, &data_5718bc)
        return arg1
    
    sub_4d5420(&data_5718bc, &data_5718d4, &arg1[4], &data_5718bc, &data_5718c8)
    return arg1
}
