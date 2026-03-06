// 函数名称: sub_41ad20
// 虚拟地址: 0x41ad20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_41ad20()
{
    // 第一条实际指令: void* eax = data_65aabc
    void* eax = data_65aabc
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (eax != 0)
        int32_t ecx_1 = *(eax + 0x434)
        
        if (ecx_1 - 1 u> 3)
            var_8 = "ActiveGame"
            var_c = 0xa71
            ecx = "Halt"
        else
            switch (ecx_1)
                case 1, 3, 4
                    return eax + 0x460
                case 2
                    if (ecx_1 == 2)
                        return sub_416cc0(*(eax + 0x438))
                    
                    var_8 = "GetNetworkGame"
                    var_c = 0xa59
                    ecx = "handle.gameType == GAME_NETWORK"
        
        var_10 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
    else
        var_8 = "GetClient"
        var_c = 0x74
        var_10 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
