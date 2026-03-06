// 函数名称: sub_41bf30
// 虚拟地址: 0x41bf30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_41bf30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    char const* const ecx
    
    if (arg2 s< 4)
        if (arg2 s>= 0)
            return arg2 * 0x2c + 8 + arg1
        
        char const* const var_4_1 = "PlayerConfigFromSlot"
        var_8 = 0x2c2
        ecx = "slot >= 0"
    else
        char const* const var_4 = "PlayerConfigFromSlot"
        var_8 = 0x2c1
        ecx = "slot < GameSpecific_MaxPlayers()"
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", var_8, 
        "PlayerConfigFromSlot")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
