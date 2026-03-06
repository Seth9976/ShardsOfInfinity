// 函数名称: sub_447450
// 虚拟地址: 0x447450
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_447450(void* arg1, int32_t arg2)
{
    // 第一条实际指令: uint128_t var_18
    uint128_t var_18
    sub_445fb0(&var_18, arg1, 0xa, arg2)
    uint128_t xmm1 = var_18
    var_18 = xmm1
    void var_28
    sub_4460c0(&var_28)
    uint32_t eax = _mm_bsrli_si128(xmm1, 4)
    int32_t var_24
    
    if (eax != var_24)
        uint32_t* edx = var_18:4.d
        
        while (true)
            int32_t var_38
            char* ecx_2
            
            if (edx == 0)
                char const* const var_34_3 = "Cards::CardIt::operator *"
                var_38 = 0x132
                ecx_2 = &data_580cbc
            else
                eax = *edx
                
                if (eax != var_18:8.d)
                    char const* const var_34_2 = "Cards::CardIt::operator *"
                    var_38 = 0x133
                    ecx_2 = "c->where == where"
                else
                    int32_t i = 0
                    char* eax_2 = edx[4] + 0x34
                    
                    do
                        if (*eax_2 == 0x16)
                            eax_2.b = 1
                            return eax_2
                        
                        i += 1
                        eax_2 = &eax_2[0xc]
                    while (i s< 4)
                    
                    eax = sub_445ed0(&var_18)
                    edx = var_18:4.d
                    
                    if (edx == var_24)
                        break
                    
                    continue
            
            sub_44e4d0(eax, &data_5559b1, ecx_2, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_38, 
                "Cards::CardIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    eax.b = 0
    return eax
}
