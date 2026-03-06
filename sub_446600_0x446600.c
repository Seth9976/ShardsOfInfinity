// 函数名称: sub_446600
// 虚拟地址: 0x446600
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_446600(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    uint128_t var_14
    sub_445fb0(&var_14, arg3, arg4, arg5)
    uint128_t xmm1 = var_14
    var_14 = xmm1
    void var_24
    sub_4460c0(&var_24)
    uint32_t eax = _mm_bsrli_si128(xmm1, 4)
    int32_t var_20
    
    if (eax != var_20)
        uint32_t* ecx_1 = var_14:4.d
        
        while (true)
            int32_t var_34_1
            char* ecx_4
            
            if (ecx_1 == 0)
                char const* const var_30_3 = "Cards::CardIt::operator *"
                var_34_1 = 0x132
                ecx_4 = &data_580cbc
            else
                eax = *ecx_1
                
                if (eax != var_14:8.d)
                    char const* const var_30_2 = "Cards::CardIt::operator *"
                    var_34_1 = 0x133
                    ecx_4 = "c->where == where"
                else
                    void* eax_1 = ecx_1[4]
                    int32_t ecx_2 = *(eax_1 + 0x28)
                    
                    if ((ecx_2 == 0 || ecx_2 == 1) && *(eax_1 + 0xc) == 3)
                        result += 1
                    
                    eax = sub_445ed0(&var_14)
                    ecx_1 = var_14:4.d
                    
                    if (ecx_1 == var_20)
                        break
                    
                    continue
            
            sub_44e4d0(eax, &data_5559b1, ecx_4, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_34_1, 
                "Cards::CardIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return result
}
