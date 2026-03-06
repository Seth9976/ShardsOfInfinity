// 函数名称: sub_430010
// 虚拟地址: 0x430010
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_430010(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char const* const var_1c
    char const* const var_1c
    int32_t var_18
    char const* const var_14
    void* result
    char* ecx
    
    if (arg3 s> 4)
        uint32_t edx_1 = zx.d(arg3.w)
        result = *(arg1 + 0x1904) - *(arg1 + 0x2164) * 0xa
        
        if (arg3 s>= result)
            if (edx_1 u< 0xc8)
                result = *((edx_1 << 5) + arg1 + 0x14)
                
                if (*(result + 0xc) == 0)
                    result = *(sub_445bb0(arg1, arg3.w) + 4)
                    
                    if (result == arg2)
                        result.b = 1
                        return result
                    
                    if (result != 0xffffffff)
                        result.b = 0
                        return result
                    
                    var_14 = "IsValidPlayerCard"
                    var_18 = 0x102d
                    ecx = "c.owner != -1"
                    var_1c = "c:\ax2017\jams\shards\code\shardsai.cpp"
                else
                    var_14 = "IsValidPlayerCard"
                    var_18 = 0x1024
                    ecx = "CardDef(g, (CardId)cardId).color == WHITE"
                    var_1c = "c:\ax2017\jams\shards\code\shardsai.cpp"
            else
                var_14 = "CardGet"
                var_18 = 0x87
                var_1c = "c:\ax2017\jams\shards\code\shardsgame.cpp"
                ecx = "idNoMimic < MAX_CARDS"
        else if (edx_1 u< 0xc8)
            result = *((edx_1 << 5) + arg1 + 0x14)
            
            if (*(result + 0xc) != 0)
                result.b = 1
                return result
            
            var_14 = "IsValidPlayerCard"
            var_18 = 0x1020
            ecx = "CardDef(g, (CardId)cardId).color != WHITE"
            var_1c = "c:\ax2017\jams\shards\code\shardsai.cpp"
        else
            var_14 = "CardGet"
            var_18 = 0x87
            var_1c = "c:\ax2017\jams\shards\code\shardsgame.cpp"
            ecx = "idNoMimic < MAX_CARDS"
    else
        var_14 = "IsValidPlayerCard"
        var_18 = 0x1017
        ecx = "cardId > CARD_DECIMA"
        var_1c = "c:\ax2017\jams\shards\code\shardsai.cpp"
    
    sub_44e4d0(result, &data_5559b1, ecx, var_1c, var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
