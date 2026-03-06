// 函数名称: sub_4affb0
// 虚拟地址: 0x4affb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4affb0()
{
    // 第一条实际指令: int32_t eax_1 = data_ce1adc:8
    int32_t eax_1 = data_ce1adc:8
    
    if (eax_1 s<= 0)
        sub_44e4d0(eax_1, &data_5559b1, "mGrowCount > 0", "c:\ax2017\engine\xalloc.h", 0x122, 
            "XTypedAllocator<struct SphereTreeNode>::Grow")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_44e680() __tailcall
        
        breakpoint
    
    void* result = sub_45cd70(eax_1 * 0x1c + 4)
    *result = data_ce1adc:4
    int32_t i = 0
    void* result_1 = data_ce1adc.d
    data_ce1adc:4 = result
    
    if (data_ce1adc:8 s> 0)
        result += 4
        
        do
            *result = result_1
            i += 1
            result_1 = result
            result += 0x1c
        while (i s< data_ce1adc:8)
    
    data_ce1adc.d = result_1
    return result
}
