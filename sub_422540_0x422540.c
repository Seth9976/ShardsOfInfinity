// 函数名称: sub_422540
// 虚拟地址: 0x422540
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_422540(void* arg1)
{
    // 第一条实际指令: sub_41a9f0(arg1)
    sub_41a9f0(arg1)
    void* result = data_65aabc
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (result != 0)
        if (*(result + 0x434) != 2 || *(result + 0x438) != arg1)
            return sub_41beb0(arg1) __tailcall
        
        if (*(result + 0x428) == 0)
            *(result + 0x428) = arg1
            return result
        
        var_8 = "QueueRemoveMultiplayerGame"
        var_c = 0xca9
        var_10 = "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp"
        ecx = "c.queueRemoveMultiplayerGame == GAMEIDX_NONE"
    else
        var_8 = "GetClient"
        var_c = 0x74
        var_10 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_44e4d0(result, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
