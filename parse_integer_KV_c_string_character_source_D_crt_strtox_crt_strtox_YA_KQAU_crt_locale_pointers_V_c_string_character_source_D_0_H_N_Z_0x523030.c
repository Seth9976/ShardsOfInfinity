// 函数名称: ??$parse_integer@_KV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA_KQAU__crt_locale_pointers@@V?$c_string_character_source@D@0@H_N@Z
// 虚拟地址: 0x523030
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$parse_integer@_KV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA_KQAU__crt_locale_pointers@@V?$c_string_character_source@D@0@H_N@Z(int32_t* arg1, int32_t* arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_44 = ebx
    int32_t edi
    int32_t var_4c = edi
    void* arg_8
    int32_t result
    
    if (__crt_stdio_input::stream_input_adapter<wchar_t>::validate(&arg_8) == 0)
        result = 0
    else if (arg3 == 0 || (arg3 s>= 2 && arg3 s<= 0x24))
        void* var_40
        _LocaleUpdate::_LocaleUpdate(&var_40, arg1)
        char* eax_5 = arg_8
        int32_t result_2 = 0
        int32_t result_1 = 0
        int32_t esi = 0
        char* var_30_1 = eax_5
        char var_10_1
        char var_5_1
        
        while (true)
            ebx.b = *eax_5
            arg_8 = &eax_5[1]
            var_10_1 = ebx.b
            var_5_1 = ebx.b
            void var_3c
            
            if (__ischartype_l(zx.d(ebx.b), 8, &var_3c) == 0)
                break
            
            eax_5 = arg_8
        
        uint32_t eax_9 = zx.d(arg4)
        uint32_t var_c_1 = eax_9
        void* edx_3
        
        if (ebx.b != 0x2d)
            if (ebx.b == 0x2b)
                goto label_5230dd
            
            edx_3 = arg_8
        else
            var_c_1 = eax_9 | 2
        label_5230dd:
            void* edx_2 = arg_8
            ebx.b = *edx_2
            edx_3 = edx_2 + 1
            var_5_1 = ebx.b
            var_10_1 = ebx.b
            arg_8 = edx_3
        
        int32_t eax_14
        
        if (arg3 == 0 || arg3 == 0x10)
            eax_9.b = ebx.b
            eax_9.b -= 0x30
            int32_t eax_11
            
            if (eax_9.b u> 9)
                eax_9.b = ebx.b
                eax_9.b -= 0x61
                
                if (eax_9.b u> 0x19)
                    eax_9.b = ebx.b
                    eax_9.b -= 0x41
                    
                    if (eax_9.b u> 0x19)
                        eax_11 = 0xffffffff
                    else
                        eax_11 = sx.d(ebx.b) - 0x37
                else
                    eax_11 = sx.d(ebx.b) - 0x57
            else
                eax_11 = sx.d(ebx.b) - 0x30
            
            if (eax_11 == 0)
                eax_11.b = *edx_3
                char var_1c = eax_11.b
                arg_8 = edx_3 + 1
                
                if (eax_11.b == 0x78 || eax_11.b == 0x58)
                    if (arg3 == 0)
                        arg3 = 0x10
                    
                    eax_11.b = *(edx_3 + 1)
                    var_5_1 = eax_11.b
                    var_10_1 = eax_11.b
                    arg_8 = edx_3 + 2
                else
                    if (arg3 == 0)
                        arg3 = 8
                    
                    __crt_strtox::c_string_character_source<char>::unget(&arg_8, var_1c)
                
                eax_14 = arg3
            else if (arg3 != 0)
                eax_14 = arg3
            else
                eax_14 = 0xa
                arg3 = 0xa
        else
            eax_14 = arg3
        
        int32_t eax_16
        uint32_t edx_5
        edx_5:eax_16 = sx.q(eax_14)
        int32_t var_50_4 = ebx
        void* eax_17
        int32_t ecx_6
        int32_t edx_6
        eax_17, ecx_6, edx_6 = __aulldvrm(0xffffffff, 0xffffffff, eax_16, edx_5)
        uint32_t ebx_2 = var_c_1
        int32_t var_24_1 = ecx_6
        ecx_6.b = var_5_1
        void* var_18_1 = eax_17
        int32_t var_1c_1 = edx_6
        
        while (true)
            eax_17.b = ecx_6.b
            eax_17.b -= 0x30
            
            if (eax_17.b u> 9)
                eax_17.b = ecx_6.b
                eax_17.b -= 0x61
                
                if (eax_17.b u> 0x19)
                    eax_17.b = ecx_6.b
                    eax_17.b -= 0x41
                    
                    if (eax_17.b u> 0x19)
                        ecx_6 = 0xffffffff
                    else
                        ecx_6 = sx.d(ecx_6.b) - 0x37
                else
                    ecx_6 = sx.d(ecx_6.b) - 0x57
            else
                ecx_6 = sx.d(ecx_6.b) - 0x30
            
            int32_t var_c_2 = ecx_6
            
            if (ecx_6 == 0xffffffff)
                break
            
            if (ecx_6 u>= arg3)
                break
            
            ebx_2 |= 8
            
            if (esi u< edx_6 || (esi u<= edx_6 && result_1 u< var_18_1))
                var_c_2 = ecx_6
            label_52322d:
                int32_t eax_19
                int32_t edx_8
                eax_19, ecx_6, edx_8 = __allmul(eax_16, edx_5, result_1, esi)
                result_1 = eax_19 + var_c_2
                esi = adc.d(edx_8, 0, eax_19 + var_c_2 u< eax_19)
            else
                if (result_1 == var_18_1 && esi == var_1c_1
                        && (0 u< ebx || (0 u<= ebx && ecx_6 u<= var_24_1)))
                    goto label_52322d
                
                ebx_2 |= 4
            
            void* eax_21 = arg_8
            edx_6 = var_1c_1
            ecx_6.b = *eax_21
            var_10_1 = ecx_6.b
            arg_8 = eax_21 + 1
        
        char var_c_3 = ebx_2.b
        __crt_strtox::c_string_character_source<char>::unget(&arg_8, var_10_1)
        
        if ((ebx_2.b & 8) != 0)
            result = result_1
            
            if (__crt_strtox::is_overflow_condition<uint64_t>(var_c_3, result, esi) != 0)
                *__errno() = 0x22
                
                if ((var_c_3 & 1) != 0)
                    if ((var_c_3 & 2) == 0)
                        result_2 = 0xffffffff
                    
                    result = result_2
                else
                    result = 0xffffffff
            else if ((var_c_3 & 2) != 0)
                result = neg.d(result)
        else
            arg_8 = var_30_1
            result = result_2
        
        char var_34
        
        if (var_34 != 0)
            void* eax_26 = var_40
            *(eax_26 + 0x350) &= 0xfffffffd
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0
    
    if (arg2 != 0)
        *arg2 = arg_8
    
    return result
}
