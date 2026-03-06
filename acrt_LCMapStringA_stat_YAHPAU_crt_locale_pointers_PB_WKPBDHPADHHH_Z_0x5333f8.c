// 函数名称: ?__acrt_LCMapStringA_stat@@YAHPAU__crt_locale_pointers@@PB_WKPBDHPADHHH@Z
// 虚拟地址: 0x5333f8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?__acrt_LCMapStringA_stat@@YAHPAU__crt_locale_pointers@@PB_WKPBDHPADHHH@Z(int32_t* arg1, int32_t arg2, uint32_t arg3, uint8_t* arg4, char* arg5, PWSTR arg6, int32_t arg7, uint32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* esi = arg5
    int32_t edi
    int32_t var_18 = edi
    
    if (esi s> 0)
        char* eax_2 = ___strncnt(arg4, esi)
        bool cond:0_1 = eax_2 s< esi
        esi = &eax_2[1]
        
        if (not(cond:0_1))
            esi = eax_2
    
    uint32_t edi_1 = arg8
    
    if (edi_1 == 0)
        edi_1 = *(*arg1 + 8)
        arg8 = edi_1
    
    int32_t eax_5
    eax_5.b = arg9 != 0
    int32_t result = ___acrt_MultiByteToWideChar(edi_1, (eax_5 << 3) + 1, arg4, esi, nullptr, 0)
    int32_t result_1 = result
    int32_t result_3 = result_1
    
    if (result_1 != 0)
        int32_t eax_7 = result_1 * 2
        uint32_t eax_9 = sbb.d(eax_7, eax_7, eax_7 u< eax_7 + 8) & (eax_7 + 8)
        int32_t* ebx_1
        
        if (eax_9 == 0)
            ebx_1 = nullptr
        else
            if (eax_9 u> 0x400)
                ebx_1 = __malloc_base(eax_9)
                
                if (ebx_1 != 0)
                    *ebx_1 = 0xdddd
                    ebx_1 = &ebx_1[2]
            else
                __alloca_probe_16(eax_9)
                ebx_1 = &var_18
                
                if (&var_18 != 0)
                    var_18 = 0xcccc
                    ebx_1 = &ebx_1[2]
            
            result_1 = result_3
        
        int32_t result_2
        
        if (ebx_1 == 0)
            result_2 = 0
        else if (___acrt_MultiByteToWideChar(edi_1, MB_PRECOMPOSED, arg4, esi, ebx_1, result_1) == 0)
            result_2 = 0
        else
            result_2 = ___acrt_LCMapStringEx@36(arg2, arg3, ebx_1, result_3, nullptr, 0, 0, 0, 0)
            
            if (result_2 == 0)
                result_2 = 0
            else if ((arg3 & 0x400) == 0)
                int32_t eax_15 = result_2 * 2
                uint32_t eax_17 = sbb.d(eax_15, eax_15, eax_15 u< eax_15 + 8) & (eax_15 + 8)
                PWSTR edi_3
                
                if (eax_17 == 0)
                    edi_3 = nullptr
                label_53356f:
                    
                    if (edi_3 == 0)
                        sub_51b5f2(edi_3)
                        result_2 = 0
                    else if (___acrt_LCMapStringEx@36(arg2, arg3, ebx_1, result_3, edi_3, result_2, 0, 
                            0, 0) == 0)
                        sub_51b5f2(edi_3)
                        result_2 = 0
                    else
                        PSTR var_28_4
                        int32_t var_24_2
                        
                        if (arg7 != 0)
                            var_24_2 = arg7
                            var_28_4 = arg6
                        else
                            var_24_2 = 0
                            var_28_4 = nullptr
                        
                        result_2 = ___acrt_WideCharToMultiByte(arg8, 0, edi_3, result_2, var_28_4, 
                            var_24_2, 0, 0)
                        
                        if (result_2 != 0)
                            sub_51b5f2(edi_3)
                        else
                            sub_51b5f2(edi_3)
                            result_2 = 0
                else if (eax_17 u> 0x400)
                    edi_3 = __malloc_base(eax_17)
                    
                    if (edi_3 != 0)
                        *edi_3 = 0xdddd
                    label_533568:
                        edi_3 = &edi_3[4]
                        goto label_53356f
                    
                    sub_51b5f2(edi_3)
                    result_2 = 0
                else
                    __alloca_probe_16(eax_17)
                    edi_3 = &var_18
                    
                    if (&var_18 != 0)
                        var_18 = 0xcccc
                        goto label_533568
                    
                    sub_51b5f2(edi_3)
                    result_2 = 0
            else if (arg7 != 0)
                if (result_2 s> arg7)
                    result_2 = 0
                else
                    result_2 =
                        ___acrt_LCMapStringEx@36(arg2, arg3, ebx_1, result_3, arg6, arg7, 0, 0, 0)
                    
                    if (result_2 == 0)
                        result_2 = 0
        
        sub_51b5f2(ebx_1)
        result = result_2
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
