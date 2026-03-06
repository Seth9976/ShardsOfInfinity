// 函数名称: sub_454c70
// 虚拟地址: 0x454c70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_454c70()
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* var_4 = ecx
    int32_t result = data_65b35c
    
    if (result != 0)
        return result
    
    void* eax = sub_4459f0(ecx)
    char ecx_1 = *(eax + 8)
    
    if (*(eax + 9) != 0)
        if (ecx_1 != 0)
            return 0x3e8
    else if (ecx_1 != 0)
        sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\draw3d.cpp", 0x22d, 
            "GetSortLayerFromMaterial")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    return 0x7d0
}
