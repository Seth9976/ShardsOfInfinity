// 函数名称: sub_446780
// 虚拟地址: 0x446780
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_446780(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: uint128_t var_1c
    uint128_t var_1c
    sub_445fb0(&var_1c, arg3, arg2, arg4)
    uint128_t xmm1 = var_1c
    var_1c = xmm1
    void var_2c
    sub_4460c0(&var_2c)
    uint32_t result = _mm_bsrli_si128(xmm1, 4)
    int32_t var_28
    
    if (result != var_28)
        uint32_t* esi_1 = var_1c:4.d
        
        while (true)
            int32_t var_40_1
            char* ecx_3
            
            if (esi_1 == 0)
                char const* const var_3c_3 = "Cards::CardIt::operator *"
                var_40_1 = 0x132
                ecx_3 = &data_580cbc
            else
                result = *esi_1
                
                if (result != var_1c:8.d)
                    char const* const var_3c_2 = "Cards::CardIt::operator *"
                    var_40_1 = 0x133
                    ecx_3 = "c->where == where"
                else
                    if (esi_1[6] == 0 && esi_1[5].b == 0)
                        float xmm0_2 =
                            sub_42ea60(arg3, *esi_1[4]) + _mm_cvtepi32_ps(zx.o(*(esi_1[4] + 8)))
                        *arg5 = *arg5 + xmm0_2
                    
                    result = sub_445ed0(&var_1c)
                    esi_1 = var_1c:4.d
                    
                    if (esi_1 == var_28)
                        break
                    
                    continue
            
            sub_44e4d0(result, &data_5559b1, ecx_3, "c:\ax2017\jams\shards\code\shardsgame.cpp", 
                var_40_1, "Cards::CardIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return result
}
