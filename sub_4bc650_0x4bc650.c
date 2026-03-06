// 函数名称: sub_4bc650
// 虚拟地址: 0x4bc650
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4bc650(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[2]
    int32_t eax = arg1[2]
    
    if (eax s<= 0)
        sub_44e4d0(eax, &data_5559b1, "mGrowCount > 0", "c:\ax2017\engine\xalloc.h", 0x122, 
            "XTypedAllocator<struct StructureAnim>::Grow")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* result = sub_45cd70(eax * 0x314 + 4)
    *result = arg1[1]
    int32_t i = 0
    void* result_1 = *arg1
    arg1[1] = result
    
    if (arg1[2] s> 0)
        result += 4
        
        do
            *result = result_1
            i += 1
            result_1 = result
            result += 0x314
        while (i s< arg1[2])
    
    *arg1 = result_1
    return result
}
