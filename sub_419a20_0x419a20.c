// 函数名称: sub_419a20
// 虚拟地址: 0x419a20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_419a20()
{
    // 第一条实际指令: void* esi = data_65aabc
    void* esi = data_65aabc
    void* result
    
    if (esi != 0)
        int32_t* esi_1 = *(esi + 0x438)
        sub_41a9f0(esi_1)
        sub_41beb0(esi_1)
        result = data_65aabc
        
        if (result != 0)
            *(result + 0x42c) = 5
            return result
    
    sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
