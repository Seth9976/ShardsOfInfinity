// 函数名称: sub_443fc0
// 虚拟地址: 0x443fc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_443fc0()
{
    // 第一条实际指令: void* eax = data_65aabc
    void* eax = data_65aabc
    
    if (eax == 0)
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax + 0x434) == 1)
        void** var_8
        int32_t eax_2 = sub_44dea0(*(sub_41ad20() + 0xf8), &var_8)
        int32_t ecx_2 = data_5bcd74
        
        if (ecx_2 s< eax_2)
            return &var_8[ecx_2 * 8]
    
    return 0
}
