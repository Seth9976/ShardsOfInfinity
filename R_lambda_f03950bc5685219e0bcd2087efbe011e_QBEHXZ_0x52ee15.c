// 函数名称: ??R<lambda_f03950bc5685219e0bcd2087efbe011e>@@QBEHXZ
// 虚拟地址: 0x52ee15
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall??R<lambda_f03950bc5685219e0bcd2087efbe011e>@@QBEHXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_24 = edi
    int32_t* edi_1 = **arg1
    int32_t result
    
    if (edi_1 != 0)
        uint32_t __security_cookie_1 = __security_cookie
        char edx_2 = __security_cookie_1.b & 0x1f
        int32_t esi_3 = ror.d(*edi_1 ^ __security_cookie_1, edx_2)
        int32_t edi_4 = ror.d(edi_1[1] ^ __security_cookie_1, edx_2)
        
        if (esi_3 != 0 && esi_3 != 0xffffffff)
            int32_t var_30_1 = 0x20
            int32_t var_10_1 = esi_3
            int32_t var_14_1 = edi_4
            int32_t __security_cookie_2 = __security_cookie_1
            int32_t __security_cookie_3 = __security_cookie_2
            
            while (true)
                edi_4 -= 4
                
                if (edi_4 u< esi_3)
                    break
                
                int32_t ecx_1 = *edi_4
                
                if (ecx_1 != __security_cookie_2)
                    *edi_4 = __security_cookie_2
                    ror.d(ecx_1 ^ __security_cookie_1, edx_2)()
                    __security_cookie_1 = __security_cookie
                    edx_2 = __security_cookie_1.b & 0x1f
                    int32_t* eax_6 = **arg1
                    int32_t var_c_3 = ror.d(*eax_6 ^ __security_cookie_1, edx_2)
                    int32_t eax_9 = ror.d(eax_6[1] ^ __security_cookie_1, edx_2)
                    
                    if (var_c_3 == var_10_1)
                        __security_cookie_2 = __security_cookie_3
                        
                        if (eax_9 == var_14_1)
                            continue
                    
                    var_14_1 = eax_9
                    edi_4 = eax_9
                    __security_cookie_2 = __security_cookie_3
                    esi_3 = var_c_3
                    var_10_1 = var_c_3
            
            if (esi_3 != 0xffffffff)
                __free_base(esi_3)
                __security_cookie_1 = __security_cookie
            
            int32_t var_30_3 = 0x20
            ***arg1 = __security_cookie_1
            *(**arg1 + 4) = __security_cookie_1
            *(**arg1 + 8) = __security_cookie_1
        
        result = 0
    else
        result = 0xffffffff
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
