// 函数名称: sub_454ce0
// 虚拟地址: 0x454ce0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_454ce0()
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* var_4 = ecx
    int32_t result = data_65b2b4
    
    if (result != 0 && result != 1)
        return result
    
    void* eax = sub_4459f0(ecx)
    char ecx_1 = *(eax + 8)
    
    if (*(eax + 9) != 0)
        int32_t eax_2
        eax_2.b = ecx_1 == 0
        return eax_2 + 2
    
    if (ecx_1 == 0)
        return 4
    
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\draw3d.cpp", 0x249, 
        "GetSortTypeFromMaterial")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
