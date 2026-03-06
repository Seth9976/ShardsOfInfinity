// 函数名称: sub_4857b0
// 虚拟地址: 0x4857b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4857b0(int32_t arg1, int32_t* arg2, void* arg3, int128_t* arg4, char arg5)
{
    // 第一条实际指令: float var_20
    float var_20
    int128_t* eax_1 = sub_485510(arg2, arg3 + 0xc, arg2, &var_20, arg3 + 0x1c)
    
    if (arg5 != 0)
        *arg4 = *eax_1
        return arg4
    
    float xmm2[0x4] = *eax_1
    float xmm0_1 = *(arg3 + 0x74)
    float xmm1_2 = _mm_shuffle_ps(xmm2, xmm2, 0xaa) f- xmm2
    var_20 = xmm0_1 * xmm1_2 f+ xmm2
    float xmm0_5 = *(arg3 + 0x7c) * xmm1_2
    float xmm1_4 = _mm_shuffle_ps(xmm2, xmm2, 0xff)
    float xmm2_1 = _mm_shuffle_ps(xmm2, xmm2, 0x55)
    float xmm1_5 = xmm1_4 - xmm2_1
    float var_18 = xmm0_5 f+ xmm2
    float var_1c = *(arg3 + 0x78) * xmm1_5 + xmm2_1
    float var_14 = *(arg3 + 0x80) * xmm1_5 + xmm2_1
    *arg4 = var_20.o
    return arg4
}
