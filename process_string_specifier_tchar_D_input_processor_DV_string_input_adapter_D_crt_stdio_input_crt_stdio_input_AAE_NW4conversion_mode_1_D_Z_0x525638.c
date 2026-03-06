// 函数名称: ??$process_string_specifier_tchar@D@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NW4conversion_mode@1@D@Z
// 虚拟地址: 0x525638
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __thiscall??$process_string_specifier_tchar@D@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NW4conversion_mode@1@D@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: char* ebx = nullptr
    char* ebx = nullptr
    int32_t edi
    int32_t var_2c = edi
    char* result
    int32_t edi_1
    
    if (*(arg1 + 0x2e) != 0)
    label_525686:
        edi_1 = 0xffffffff
    label_52568b:
        
        if (edi_1 != 0)
            int32_t eax_9 = arg1[0xc]
            int32_t eax_10 = arg1[0xd]
            char* var_1c_1 = ebx
            int32_t var_8_1 = edi_1
            
            if (arg2 != 0 && edi_1 != 0xffffffff)
                var_8_1 = edi_1 - 1
            
            int32_t edx_1 = 0
            int32_t ecx_2 = 0
            
            while (true)
                if ((eax_9 | eax_10) == 0 || edx_1 != eax_9 || ecx_2 != eax_10)
                    uint32_t eax_14 = __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
                    
                    if (__crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::is_character_allowed_in_string(
                            arg1, arg2, eax_14) == 0)
                        __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], eax_14)
                    else
                        if (*(arg1 + 0x2e) == 0)
                            if (var_8_1 == 0)
                                break
                            
                            *var_1c_1 = eax_14.b
                            var_1c_1 = &var_1c_1[1]
                            var_8_1 -= 1
                        
                        int32_t temp1_1 = edx_1
                        edx_1 += 1
                        ecx_2 = adc.d(ecx_2, 0, temp1_1 u>= 0xffffffff)
                        continue
                
                if ((edx_1 | ecx_2) == 0)
                    goto label_52566a
                
                if (arg2 == 0 && (edx_1 != eax_9 || ecx_2 != eax_10) && (*arg1 & 4) == 0)
                    goto label_52566a
                
                if (*(arg1 + 0x2e) == 0 && arg2 != 0)
                    *var_1c_1 = 0
                
                result.b = 1
                goto label_525794
            
            if (edi_1 != 0xffffffff)
                *ebx = 0
        else if (((*arg1 & 4) | edi_1) != 0)
            __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
            *ebx = 0
        
        *__errno() = 0xc
    else
        arg1[0x1b] += 4
        void* ecx = arg1[0x1b]
        ebx = *(ecx - 4)
        
        if (ebx != 0)
            if ((*arg1 & 1) == 0)
                goto label_525686
            
            arg1[0x1b] = ecx + 4
            edi_1 = *ecx
            goto label_52568b
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    label_52566a:
    result.b = 0
    label_525794:
    return result
}
