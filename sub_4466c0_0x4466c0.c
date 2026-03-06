// 函数名称: sub_4466c0
// 虚拟地址: 0x4466c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4466c0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    uint128_t var_14
    sub_445fb0(&var_14, arg3, arg2, arg4)
    uint128_t xmm1 = var_14
    var_14 = xmm1
    void var_24
    sub_4460c0(&var_24)
    uint32_t eax = _mm_bsrli_si128(xmm1, 4)
    int32_t var_20
    
    if (eax != var_20)
        uint32_t* ecx_1 = var_14:4.d
        
        while (true)
            int32_t var_3c_1
            char* ecx_3
            
            if (ecx_1 == 0)
                char const* const var_38_3 = "Cards::CardIt::operator *"
                var_3c_1 = 0x132
                ecx_3 = &data_580cbc
            else
                eax = *ecx_1
                
                if (eax != var_14:8.d)
                    char const* const var_38_2 = "Cards::CardIt::operator *"
                    var_3c_1 = 0x133
                    ecx_3 = "c->where == where"
                else
                    int32_t result_1 = result + 1
                    
                    if (*ecx_1[4] != arg5)
                        result_1 = result
                    
                    result = result_1
                    eax = sub_445ed0(&var_14)
                    ecx_1 = var_14:4.d
                    
                    if (ecx_1 == var_20)
                        break
                    
                    continue
            
            sub_44e4d0(eax, &data_5559b1, ecx_3, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_3c_1, 
                "Cards::CardIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    return result
}
