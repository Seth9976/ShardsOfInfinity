// 函数名称: sub_447510
// 虚拟地址: 0x447510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_447510(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: uint128_t var_30
    uint128_t var_30
    sub_445fb0(&var_30, arg3, 0xa, arg2)
    uint128_t xmm1 = var_30
    var_30 = xmm1
    void var_20
    sub_4460c0(&var_20)
    uint32_t eax = _mm_bsrli_si128(xmm1, 4)
    int32_t var_1c
    
    if (eax != var_1c)
        uint32_t* ecx_1 = var_30:4.d
        
        while (true)
            int32_t var_48
            char* ecx_3
            
            if (ecx_1 == 0)
                char const* const var_44_3 = "Cards::CardIt::operator *"
                var_48 = 0x132
                ecx_3 = &data_580cbc
            else
                eax = *ecx_1
                
                if (eax != var_30:8.d)
                    char const* const var_44_2 = "Cards::CardIt::operator *"
                    var_48 = 0x133
                    ecx_3 = "c->where == where"
                else
                    if (*ecx_1[4] == arg4)
                        int32_t* eax_1
                        eax_1.b = 1
                        return eax_1
                    
                    eax = sub_445ed0(&var_30)
                    ecx_1 = var_30:4.d
                    
                    if (ecx_1 == var_1c)
                        break
                    
                    continue
            
            sub_44e4d0(eax, &data_5559b1, ecx_3, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_48, 
                "Cards::CardIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    eax.b = 0
    return eax
}
