// 函数名称: sub_43edc0
// 虚拟地址: 0x43edc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_43edc0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    char const* const ecx_1
    
    if (*arg1 != 0)
        char const* const var_c = "SortCardOrder"
        var_10 = 0x1a58
        ecx_1 = "card0->type == SHGFX_CARD"
    else if (*arg2 == 0)
        int32_t edx_1 = arg1[4]
        int32_t temp0_1 = arg2[4]
        int32_t* result
        
        if (edx_1 != temp0_1)
            result.b = edx_1 s< temp0_1
            return result
        
        edx_1.b = *(arg2 + 0x16)
        
        if (*(arg1 + 0x16) != 0)
            if (edx_1.b == 0)
                result.b = 1
                return result
            
            result.b = arg1 u< arg2
            return result
        
        if (edx_1.b != 0)
            result.b = 0
            return result
        
        char const* const var_c_2 = "SortCardOrder"
        var_10 = 0x1a5d
        ecx_1 = "card0->card.isMimic || card1->card.isMimic"
    else
        char const* const var_c_1 = "SortCardOrder"
        var_10 = 0x1a59
        ecx_1 = "card1->type == SHGFX_CARD"
    
    sub_44e4d0(arg2, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsclient.cpp", var_10, 
        "SortCardOrder")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
