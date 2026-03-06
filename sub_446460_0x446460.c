// 函数名称: sub_446460
// 虚拟地址: 0x446460
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_446460(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    uint128_t var_1c
    sub_445fb0(&var_1c, arg3, arg2, arg4)
    uint128_t xmm1 = var_1c
    var_1c = xmm1
    void var_2c
    sub_4460c0(&var_2c)
    int32_t* eax_1 = _mm_bsrli_si128(xmm1, 4)
    int32_t var_40_1
    char const* const var_3c_3
    int32_t var_28
    char* ecx_3
    
    if (eax_1 == var_28)
    label_4464c6:
        eax_1 = sub_446390(eax_1, arg2, arg3, arg4)
        
        if (result == eax_1)
            return result
        
        var_3c_3 = "CountCards"
        var_40_1 = 0x20f
        ecx_3 = "total == CountCards_All(g, where, who)"
    else
        eax_1 = var_1c:4.d
        
        while (true)
            if (eax_1 == 0)
                var_3c_3 = "Cards::CardIt::operator *"
                var_40_1 = 0x132
                ecx_3 = &data_580cbc
                break
            
            eax_1 = *eax_1
            
            if (eax_1 != var_1c:8.d)
                var_3c_3 = "Cards::CardIt::operator *"
                var_40_1 = 0x133
                ecx_3 = "c->where == where"
                break
            
            result += 1
            sub_445ed0(&var_1c)
            eax_1 = var_1c:4.d
            
            if (eax_1 == var_28)
                goto label_4464c6
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_3, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_40_1, 
        var_3c_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
