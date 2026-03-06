// 函数名称: sub_417060
// 虚拟地址: 0x417060
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_417060()
{
    // 第一条实际指令: void* edi = data_65aabc
    void* edi = data_65aabc
    
    if (edi == 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi = *(edi + 0x434)
    void* result = sub_432bd0()
    
    if (esi != 2)
        result = sub_429a00(edi + 0x460)
    
    *(edi + 0x434) = 0
    return result
}
