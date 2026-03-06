// 函数名称: sub_4460d0
// 虚拟地址: 0x4460d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4460d0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: *arg5 = 0
    *arg5 = 0
    uint128_t var_18
    sub_445fb0(&var_18, arg3, arg2, arg4)
    uint128_t xmm1 = var_18
    var_18 = xmm1
    void var_28
    sub_4460c0(&var_28)
    uint32_t eax_1 = _mm_bsrli_si128(xmm1, 4)
    int32_t var_24
    
    if (eax_1 != var_24)
        uint32_t* ecx_1 = var_18:4.d
        
        while (true)
            int32_t var_3c_1
            char* ecx_4
            
            if (ecx_1 == 0)
                char const* const var_38_4 = "Cards::CardIt::operator *"
                var_3c_1 = 0x132
                ecx_4 = &data_580cbc
            else
                eax_1 = *ecx_1
                
                if (eax_1 != var_18:8.d)
                    char const* const var_38_3 = "Cards::CardIt::operator *"
                    var_3c_1 = 0x133
                    ecx_4 = "c->where == where"
                else
                    *arg5 += 1
                    void* result = &ecx_1[2]
                    
                    if (*result == 0)
                        return result
                    
                    eax_1 = sub_445ed0(&var_18)
                    ecx_1 = var_18:4.d
                    
                    if (ecx_1 == var_24)
                        break
                    
                    continue
            
            sub_44e4d0(eax_1, &data_5559b1, ecx_4, "c:\ax2017\jams\shards\code\shardsgame.cpp", 
                var_3c_1, "Cards::CardIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return sub_445c50(eax_1, arg2, arg3, arg4)
}
