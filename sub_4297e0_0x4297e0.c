// 函数名称: sub_4297e0
// 虚拟地址: 0x4297e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4297e0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    int32_t eax
    char const* const ecx
    
    if (arg2 s>= 0)
        eax = *(arg1 + 0xec)
        
        if (eax s< 5)
            if (arg2 s< eax)
                return arg1 + ((arg2 + ((arg2 + 0x11) << 2)) << 2)
            
            char const* const var_4_2 = "LogGet"
            var_8 = 0x2f
            ecx = "who < save.setup.numPlayers"
        else
            char const* const var_4_1 = "LogGet"
            var_8 = 0x2e
            ecx = "save.setup.numPlayers < MAX_PLAYERS"
    else
        char const* const var_4 = "LogGet"
        var_8 = 0x2d
        ecx = "who >= 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shared\tgggame\code\gamesave.cpp", var_8, 
        "LogGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
