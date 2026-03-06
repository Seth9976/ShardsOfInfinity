// 函数名称: sub_4153c0
// 虚拟地址: 0x4153c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4153c0()
{
    // 第一条实际指令: void* eax = data_65ae00
    void* eax = data_65ae00
    int32_t result = data_5b09b8
    int32_t i = 0
    float xmm4_3 =
        (_mm_cvtepi32_ps(zx.o(*(eax + 0x14))) - 0f) / (_mm_cvtepi32_ps(zx.o(*(eax + 0x18))) - 0f)
    
    do
        int32_t eax_1 = result * 3
        int32_t xmm0_4 =
            sub_41b760(xmm4_3 - float.s(*(i + &data_5b09bc)) / float.s(*(i + &data_5b09c0)))
        
        if (not(sub_41b760(xmm4_3
                - float.s(*((eax_1 << 2) + &data_5b09bc)) / float.s(*((eax_1 << 2) + &data_5b09c0)))
                f<= xmm0_4))
            result = *(i + &data_5b09b8)
        
        i += 0xc
    while (i u< 0x24)
    
    return result
}
