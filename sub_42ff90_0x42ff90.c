// 函数名称: sub_42ff90
// 虚拟地址: 0x42ff90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_42ff90(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx
    
    if (arg2 s> 4)
        uint32_t ecx_1 = zx.d(arg2.w)
        
        if (ecx_1 u< 0xc8)
            void* result
            result.b = *(*((ecx_1 << 5) + arg1 + 0x14) + 0x28) == 2
            return result
        
        var_c = "CardGet"
        var_10 = 0x87
        var_14 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
        ecx = "idNoMimic < MAX_CARDS"
    else
        var_c = "IsValidConstruct"
        var_10 = 0x1011
        var_14 = "c:\ax2017\jams\shards\code\shardsai.cpp"
        ecx = "cardId > CARD_DECIMA"
    
    sub_44e4d0(arg2, &data_5559b1, ecx, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
