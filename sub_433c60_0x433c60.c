// 函数名称: sub_433c60
// 虚拟地址: 0x433c60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_433c60(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    char const* const ecx
    
    if (arg1 s>= 0)
        if (arg1 s< 5)
            return arg1 * 0x4c + 0x5bcb08
        
        char const* const var_4_1 = "PGUIGet"
        var_8 = 0x513
        ecx = "(int)who < (int)MAX_PLAYERS"
    else
        char const* const var_4 = "PGUIGet"
        var_8 = 0x512
        ecx = "who >= 0"
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsclient.cpp", var_8, "PGUIGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
