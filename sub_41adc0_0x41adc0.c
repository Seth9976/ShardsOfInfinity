// 函数名称: sub_41adc0
// 虚拟地址: 0x41adc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_41adc0()
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
    
    if (*(eax + 0x434) == 0)
        eax.b = 0
        return eax
    
    void* eax_1 = sub_41ad20()
    int32_t edx = 0
    int32_t i_1 = *(eax_1 + 0xec)
    
    if (i_1 s> 0)
        eax_1 += 0x24
        int32_t i
        
        do
            int32_t ecx_1 = *eax_1
            
            if (ecx_1 == 0x3e8 || ecx_1 == 0x3e9)
                edx += 1
            
            eax_1 += 0x2c
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    eax_1.b = edx s> 1
    return eax_1
}
