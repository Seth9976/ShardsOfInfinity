// 函数名称: sub_525066
// 虚拟地址: 0x525066
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_525066(int32_t* arg1, int32_t arg2, char* arg3, char* arg4, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_54 = edi
    int32_t arg_8[0x4]
    int32_t result
    
    if (__crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<wchar_t> >::validate(
            &arg_8) == 0)
        result = 0
    else
        int32_t edi_1 = arg5
        
        if (edi_1 == 0 || (edi_1 s>= 2 && edi_1 s<= 0x24))
            void* var_4c
            _LocaleUpdate::_LocaleUpdate(&var_4c, arg1)
            int32_t result_3 = 0
            int32_t esi = 0
            int32_t ebx
            ebx.b = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                &arg_8)
            void var_48
            void* var_5c_2 = &var_48
            int32_t var_60_1 = 8
            uint32_t var_64_1 = zx.d(ebx.b)
            char var_c_1
            
            while (true)
                var_c_1 = ebx.b
                
                if (__ischartype_l(var_64_1, 8, var_5c_2) == 0)
                    break
                
                ebx.b = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                    &arg_8)
                var_5c_2 = &var_48
                int32_t var_60_2 = 8
                var_64_1 = zx.d(ebx.b)
            
            uint32_t eax_8 = zx.d(arg6)
            uint32_t var_8_1 = eax_8
            
            if (ebx.b == 0x2d)
                var_8_1 = eax_8 | 2
                ebx.b = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                    &arg_8).b
                var_c_1 = ebx.b
            else if (ebx.b == 0x2b)
                ebx.b = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                    &arg_8).b
                var_c_1 = ebx.b
            
            int32_t result_1 = 0xffffffff
            
            if (edi_1 == 0 || edi_1 == 0x10)
                eax_8.b = ebx.b
                eax_8.b -= 0x30
                int32_t eax_11
                
                if (eax_8.b u> 9)
                    eax_8.b = ebx.b
                    eax_8.b -= 0x61
                    
                    if (eax_8.b u> 0x19)
                        eax_8.b = ebx.b
                        eax_8.b -= 0x41
                        
                        if (eax_8.b u> 0x19)
                            eax_11 = 0xffffffff
                        else
                            eax_11 = sx.d(ebx.b) - 0x37
                    else
                        eax_11 = sx.d(ebx.b) - 0x57
                else
                    eax_11 = sx.d(ebx.b) - 0x30
                
                if (eax_11 == 0)
                    char eax_14 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                        &arg_8)
                    
                    if (eax_14 == 0x78 || eax_14 == 0x58)
                        if (edi_1 == 0)
                            edi_1 = 0x10
                        
                        var_c_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                            &arg_8)
                    else
                        if (edi_1 == 0)
                            edi_1 = 8
                        
                        sub_529468(&arg_8, eax_14)
                else if (edi_1 == 0)
                    edi_1 = 0xa
            
            int32_t var_5c_4 = ebx
            int32_t eax_17
            uint32_t edx
            edx:eax_17 = sx.q(edi_1)
            uint32_t eax_18
            int32_t ecx_9
            int32_t edx_1
            eax_18, ecx_9, edx_1 = __aulldvrm(0xffffffff, 0xffffffff, eax_17, edx)
            int32_t var_2c_1 = ecx_9
            ecx_9.b = var_c_1
            uint32_t var_1c_1 = eax_18
            
            while (true)
                eax_18.b = ecx_9.b
                eax_18.b -= 0x30
                int32_t edx_3
                
                if (eax_18.b u> 9)
                    eax_18.b = ecx_9.b
                    eax_18.b -= 0x61
                    
                    if (eax_18.b u> 0x19)
                        eax_18.b = ecx_9.b
                        eax_18.b -= 0x41
                        
                        if (eax_18.b u> 0x19)
                            edx_3 = 0xffffffff
                        else
                            edx_3 = sx.d(ecx_9.b) - 0x37
                    else
                        edx_3 = sx.d(ecx_9.b) - 0x57
                else
                    edx_3 = sx.d(ecx_9.b) - 0x30
                
                int32_t var_10_1 = edx_3
                
                if (edx_3 == 0xffffffff)
                    break
                
                if (edx_3 u>= edi_1)
                    break
                
                uint32_t eax_20 = var_8_1 | 8
                var_8_1 = eax_20
                char var_24
                
                if (esi u< edx_1 || (esi u<= edx_1 && result_3 u< var_1c_1))
                    var_10_1 = edx_3
                    var_24.d = 0
                label_52525b:
                    int32_t eax_22
                    int32_t edx_6
                    eax_22, edx_6 = __allmul(eax_17, edx, result_3, esi)
                    result_3 = eax_22 + var_10_1
                    esi = adc.d(edx_6, var_24.d, eax_22 + var_10_1 u< eax_22)
                else
                    if (result_3 == var_1c_1 && esi == edx_1)
                        var_24.d = 0
                    
                    if (result_3 == var_1c_1 && esi == edx_1
                            && (0 u< ebx || (0 u<= ebx && edx_3 u<= var_2c_1)))
                        goto label_52525b
                    
                    var_8_1 = eax_20 | 4
                eax_18, ecx_9 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                    &arg_8)
                ecx_9.b = eax_18.b
                var_c_1 = ecx_9.b
            
            sub_529468(&arg_8, var_c_1)
            char eax_24 = var_8_1.b
            
            if ((eax_24 & 8) != 0)
                int32_t result_2 = result_3
                
                if (__crt_strtox::is_overflow_condition<uint64_t>(eax_24, result_2, esi) == 0)
                    if ((var_8_1.b & 2) != 0)
                        result_2 = neg.d(result_2)
                    
                    result = result_2
                else
                    *__errno() = 0x22
                    char eax_27 = var_8_1.b
                    
                    if ((eax_27 & 1) != 0)
                        if ((eax_27 & 2) != 0)
                            result_1 = 0
                        
                        result = result_1
                    else
                        result = 0xffffffff
            else
                __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<wchar_t> >::restore_state(
                    &arg_8, arg2, arg3)
                result = 0
            
            char var_40
            
            if (var_40 != 0)
                void* eax_28 = var_4c
                *(eax_28 + 0x350) &= 0xfffffffd
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = 0
    
    if (arg4 != 0 && (arg2 | arg3) == 0)
        *arg4 = 0
    
    return result
}
