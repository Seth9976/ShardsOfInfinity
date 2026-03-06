// 函数名称: sub_445e10
// 虚拟地址: 0x445e10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_445e10()
{
    // 第一条实际指令: int32_t eax_3 = data_dfedcc
    int32_t eax_3 = data_dfedcc
    int32_t var_8
    char const* const ecx
    
    if (eax_3 s< 0xc8)
        if (data_dfee98 == 0)
            data_dfedcc = eax_3 + 1
            return (eax_3 << 5) + 0xdfd4cc
        
        char const* const var_4_1 = "CardAlloc"
        var_8 = 0xed
        ecx = "g.numMimics == 0"
    else
        char const* const var_4 = "CardAlloc"
        var_8 = 0xec
        ecx = "g.numCards < MAX_CARDS"
    
    sub_44e4d0(eax_3, &data_5559b1, ecx, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_8, 
        "CardAlloc")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
