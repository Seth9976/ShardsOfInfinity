// 函数名称: sub_419a90
// 虚拟地址: 0x419a90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_419a90()
{
    // 第一条实际指令: void* ecx_1 = data_65aabc
    void* ecx_1 = data_65aabc
    void* result
    
    if (ecx_1 != 0)
        sub_41beb0(*(ecx_1 + 0x438))
        result = data_65aabc
        
        if (result != 0)
            *(result + 0x42c) = 5
            return result
    
    sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
