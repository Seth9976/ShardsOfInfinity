// 函数名称: sub_4b01e0
// 虚拟地址: 0x4b01e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_4b01e0(int32_t arg1, void* arg2, int32_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: float eax_1
    float eax_1
    int128_t xmm0_1
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        eax_1 = arg3[0xa]
        int128_t var_40_1 = *(arg3 + 8)
        xmm0_1 = *(arg3 + 0x18)
    else
        eax_1 = *(arg2 + 0x4a4)
        int128_t var_40 = *(arg2 + 0x484)
        xmm0_1 = *(arg2 + 0x494)
    
    void var_50
    int64_t* eax_3 = sub_4b0080(&var_50, arg2, arg3, &var_50)
    int64_t xmm0_3 = *eax_3
    float xmm0_5 = eax_1 f* eax_3[1].d
    *arg4 = _mm_unpacklo_ps(xmm0_3.d f* xmm0_1:8.d, xmm0_1:0xc.d f* xmm0_3:4.d)
    arg4[1].d = xmm0_5
    return arg4
}
