// 函数名称: sub_4a8920
// 虚拟地址: 0x4a8920
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4a8920()
{
    // 第一条实际指令: int32_t eax_2 = data_ce19a4:8
    int32_t eax_2 = data_ce19a4:8
    
    if (eax_2 s<= 0)
        sub_44e4d0(eax_2, &data_5559b1, "mGrowCount > 0", "c:\ax2017\engine\xalloc.h", 0x122, 
            "XTypedAllocator<struct RTreeNode>::Grow")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_44e680() __tailcall
        
        breakpoint
    
    void* result = sub_45cd70(eax_2 * 0x24 + 4)
    *result = data_ce19a4:4
    int32_t i = 0
    void* result_1 = data_ce19a4.d
    data_ce19a4:4 = result
    
    if (data_ce19a4:8 s> 0)
        result += 4
        
        do
            *result = result_1
            i += 1
            result_1 = result
            result += 0x24
        while (i s< data_ce19a4:8)
    
    data_ce19a4.d = result_1
    return result
}
