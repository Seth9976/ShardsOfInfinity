// 函数名称: sub_4684c0
// 虚拟地址: 0x4684c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4684c0(void* arg1)
{
    // 第一条实际指令: void* eax = data_cdf424
    void* eax = data_cdf424
    int128_t xmm0 = *(eax + 0x28)
    int32_t esi = *(eax + 0x38)
    float xmm0_1 = *(arg1 + 0x750)
    *(arg1 + 0x750) = xmm0_1 * 0.400000006f
    *(eax + 0x38) = 0
    sub_468020(arg1)
    void* eax_1 = data_cdf424
    *(eax_1 + 0x28) = xmm0
    *(eax_1 + 0x38) = esi
    *(arg1 + 0x750) = xmm0_1
    sub_468020(arg1)
    int128_t* result
    result.b = 0
    return result
}
