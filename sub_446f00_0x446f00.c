// 函数名称: sub_446f00
// 虚拟地址: 0x446f00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_446f00()
{
    // 第一条实际指令: uint128_t var_14
    uint128_t var_14
    sub_445fb0(&var_14, &data_dfd4c8, 1, 0xffffffff)
    uint128_t xmm1 = var_14
    var_14 = xmm1
    void var_24
    sub_4460c0(&var_24)
    uint32_t result = _mm_bsrli_si128(xmm1, 4)
    int32_t var_20
    
    if (result != var_20)
        uint32_t* ecx_1 = var_14:4.d
        
        while (true)
            int32_t var_34
            char* ecx_6
            
            if (ecx_1 == 0)
                char const* const var_30_2 = "Cards::CardIt::operator *"
                var_34 = 0x132
                ecx_6 = &data_580cbc
            else
                result = *ecx_1
                
                if (result != var_14:8.d)
                    char const* const var_30_1 = "Cards::CardIt::operator *"
                    var_34 = 0x133
                    ecx_6 = "c->where == where"
                else
                    int32_t ecx_2 = ecx_1[6]
                    int32_t eax_3 = (ecx_1 - 0xdfd4cc) s>> 5
                    int32_t ecx_4
                    
                    if (ecx_2 == 0)
                        ecx_4 = eax_3
                    else
                        ecx_4 = ecx_2 << 0x10 | eax_3
                    
                    sub_445a20(eax_3, 0xd, &data_dfd4c8, 0xffffffff, ecx_4, 0, 0, 0)
                    result = sub_445ed0(&var_14)
                    ecx_1 = var_14:4.d
                    
                    if (ecx_1 == var_20)
                        break
                    
                    continue
            
            sub_44e4d0(result, &data_5559b1, ecx_6, "c:\ax2017\jams\shards\code\shardsgame.cpp", 
                var_34, "Cards::CardIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return result
}
