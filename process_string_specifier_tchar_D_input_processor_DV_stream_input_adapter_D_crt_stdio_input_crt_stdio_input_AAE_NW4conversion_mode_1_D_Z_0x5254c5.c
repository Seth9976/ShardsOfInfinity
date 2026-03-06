// 函数名称: ??$process_string_specifier_tchar@D@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NW4conversion_mode@1@D@Z
// 虚拟地址: 0x5254c5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __thiscall??$process_string_specifier_tchar@D@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NW4conversion_mode@1@D@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: char* ebx = nullptr
    char* ebx = nullptr
    int32_t edi
    int32_t var_2c = edi
    char* result
    int32_t edi_1
    
    if (*(arg1 + 0x26) != 0)
    label_525513:
        edi_1 = 0xffffffff
    label_525518:
        
        if (edi_1 != 0)
            int32_t eax_10 = arg1[0xa]
            int32_t eax_11 = arg1[0xb]
            char* var_1c_1 = ebx
            int32_t var_8_1 = edi_1
            
            if (arg2 != 0 && edi_1 != 0xffffffff)
                var_8_1 = edi_1 - 1
            
            int32_t edx_1 = 0
            int32_t ecx_2 = 0
            
            while (true)
                if ((eax_10 | eax_11) == 0 || edx_1 != eax_10 || ecx_2 != eax_11)
                    int32_t var_30_2 = arg1[2]
                    int32_t eax_15 = sub_531b7b()
                    
                    if (eax_15 != 0xffffffff)
                        arg1[3] += 1
                    
                    if (__crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::is_character_allowed_in_string(
                            arg1, arg2, eax_15) == 0)
                        __crt_stdio_input::stream_input_adapter<char>::unget(&arg1[2], eax_15)
                    else
                        if (*(arg1 + 0x26) == 0)
                            if (var_8_1 == 0)
                                break
                            
                            *var_1c_1 = eax_15.b
                            var_1c_1 = &var_1c_1[1]
                            var_8_1 -= 1
                        
                        int32_t temp1_1 = edx_1
                        edx_1 += 1
                        ecx_2 = adc.d(ecx_2, 0, temp1_1 u>= 0xffffffff)
                        continue
                
                if ((edx_1 | ecx_2) == 0)
                    goto label_5254f7
                
                if (arg2 == 0 && (edx_1 != eax_10 || ecx_2 != eax_11) && (*arg1 & 4) == 0)
                    goto label_5254f7
                
                if (*(arg1 + 0x26) == 0 && arg2 != 0)
                    *var_1c_1 = 0
                
                result.b = 1
                goto label_525635
            
            if (edi_1 != 0xffffffff)
                *ebx = 0
        else if (((*arg1 & 4) | edi_1) != 0)
            int32_t var_30_1 = arg1[2]
            
            if (sub_531b7b() != 0xffffffff)
                arg1[3] += 1
            
            *ebx = 0
        
        *__errno() = 0xc
    else
        arg1[0x19] += 4
        void* ecx = arg1[0x19]
        ebx = *(ecx - 4)
        
        if (ebx != 0)
            if ((*arg1 & 1) == 0)
                goto label_525513
            
            arg1[0x19] = ecx + 4
            edi_1 = *ecx
            goto label_525518
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    label_5254f7:
    result.b = 0
    label_525635:
    return result
}
