// 函数名称: ??$parse_integer@KV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YAKQAU__crt_locale_pointers@@V?$c_string_character_source@D@0@H_N@Z
// 虚拟地址: 0x522e07
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$parse_integer@KV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YAKQAU__crt_locale_pointers@@V?$c_string_character_source@D@0@H_N@Z(int32_t* arg1, int32_t* arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: uint32_t ebx
    uint32_t ebx
    uint32_t var_30 = ebx
    char* arg_8
    int32_t result
    
    if (__crt_stdio_input::stream_input_adapter<wchar_t>::validate(&arg_8) == 0)
        result = 0
    else
        int32_t esi_1 = arg3
        
        if (esi_1 == 0 || (esi_1 s>= 2 && esi_1 s<= 0x24))
            int32_t edi
            int32_t var_38_1 = edi
            void* var_2c
            _LocaleUpdate::_LocaleUpdate(&var_2c, arg1)
            char* eax_3 = arg_8
            int32_t result_2 = 0
            char* var_1c_1 = eax_3
            char var_8_1
            
            while (true)
                ebx.b = *eax_3
                arg_8 = &eax_3[1]
                var_8_1 = ebx.b
                void var_28
                
                if (__ischartype_l(zx.d(ebx.b), 8, &var_28) == 0)
                    break
                
                eax_3 = arg_8
            
            uint32_t eax_7 = zx.d(arg4)
            uint32_t var_c_1 = eax_7
            char* edi_2
            
            if (ebx.b != 0x2d)
                if (ebx.b == 0x2b)
                    goto label_522ea8
                
                edi_2 = arg_8
            else
                var_c_1 = eax_7 | 2
            label_522ea8:
                char* edi_1 = arg_8
                ebx.b = *edi_1
                edi_2 = &edi_1[1]
                var_8_1 = ebx.b
                arg_8 = edi_2
            
            if (esi_1 == 0 || esi_1 == 0x10)
                eax_7.b = ebx.b
                eax_7.b -= 0x30
                int32_t eax_9
                
                if (eax_7.b u> 9)
                    eax_7.b = ebx.b
                    eax_7.b -= 0x61
                    
                    if (eax_7.b u> 0x19)
                        eax_7.b = ebx.b
                        eax_7.b -= 0x41
                        
                        if (eax_7.b u> 0x19)
                            eax_9 = 0xffffffff
                        else
                            eax_9 = sx.d(ebx.b) - 0x37
                    else
                        eax_9 = sx.d(ebx.b) - 0x57
                else
                    eax_9 = sx.d(ebx.b) - 0x30
                
                if (eax_9 == 0)
                    eax_9.b = *edi_2
                    char var_14 = eax_9.b
                    arg_8 = &edi_2[1]
                    
                    if (eax_9.b == 0x78 || eax_9.b == 0x58)
                        if (esi_1 == 0)
                            esi_1 = 0x10
                        
                        ebx.b = edi_2[1]
                        edi_2 = &edi_2[2]
                        var_8_1 = ebx.b
                        arg_8 = edi_2
                    else
                        if (esi_1 == 0)
                            esi_1 = 8
                        
                        __crt_strtox::c_string_character_source<char>::unget(&arg_8, var_14)
                        edi_2 = arg_8
                else if (esi_1 == 0)
                    esi_1 = 0xa
            
            int32_t eax_12 = 0xffffffff
            int32_t edx_2 = 0
            uint32_t temp0_1 = divu.dp.d(edx_2:eax_12, esi_1)
            
            while (true)
                uint32_t eax_13
                int32_t edx_5
                
                if (ebx.b - 0x30 u> 9)
                    eax_13.b = ebx.b
                    eax_13.b -= 0x61
                    
                    if (eax_13.b u> 0x19)
                        eax_13.b = ebx.b
                        eax_13.b -= 0x41
                        
                        if (eax_13.b u> 0x19)
                            edx_5 = 0xffffffff
                        else
                            edx_5 = sx.d(ebx.b) - 0x37
                    else
                        edx_5 = sx.d(ebx.b) - 0x57
                else
                    edx_5 = sx.d(ebx.b) - 0x30
                
                if (edx_5 == 0xffffffff)
                    break
                
                if (edx_5 u>= esi_1)
                    break
                
                eax_13 = var_c_1 | 8
                var_c_1 = eax_13
                
                if (result_2 u< temp0_1
                        || (result_2 == temp0_1 && edx_5 u<= modu.dp.d(edx_2:eax_12, esi_1)))
                    result_2 = result_2 * esi_1 + edx_5
                else
                    var_c_1 = eax_13 | 4
                
                ebx.b = *edi_2
                edi_2 = &edi_2[1]
                var_8_1 = ebx.b
                arg_8 = edi_2
            
            __crt_strtox::c_string_character_source<char>::unget(&arg_8, var_8_1)
            char ebx_2 = var_c_1.b
            
            if ((ebx_2 & 8) != 0)
                int32_t result_1 = result_2
                
                if (__crt_strtox::is_overflow_condition<unsigned long>(ebx_2, result_1) == 0)
                    if ((ebx_2 & 2) != 0)
                        result_1 = neg.d(result_1)
                    
                    result = result_1
                else
                    *__errno() = 0x22
                    
                    if ((ebx_2 & 1) == 0)
                        result = 0xffffffff
                    else if ((ebx_2 & 2) == 0)
                        result = 0x7fffffff
                    else
                        result = 0x80000000
            else
                result = 0
                arg_8 = var_1c_1
            
            char var_20
            
            if (var_20 != 0)
                void* eax_18 = var_2c
                *(eax_18 + 0x350) &= 0xfffffffd
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = 0
    
    if (arg2 != 0)
        *arg2 = arg_8
    
    return result
}
