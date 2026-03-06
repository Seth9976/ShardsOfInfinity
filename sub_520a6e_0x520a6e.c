// 函数名称: sub_520a6e
// 虚拟地址: 0x520a6e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_520a6e(int32_t* arg1)
{
    // 第一条实际指令: if (__crt_stdio_input::stream_input_adapter<wchar_t>::validate(&arg1[0x112]) == 0)
    if (__crt_stdio_input::stream_input_adapter<wchar_t>::validate(&arg1[0x112]) == 0)
        return 0xffffffff
    
    if (arg1[4] == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    int32_t edi
    int32_t var_c_1 = edi
    
    if (__crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> >::advance_to_next_pass(
        arg1) == 0)
    label_520b8c:
        return arg1[6]
    
    while (true)
        arg1[0xe] = 0
        arg1[7] = 0
        
        while (true)
            char* eax_10
            eax_10.b = *arg1[4]
            *(arg1 + 0x31) = eax_10.b
            
            if (eax_10.b != 0)
                arg1[4] += 1
                
                if (arg1[6] s>= 0)
                    arg1[7] = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::find_next_state(
                        *(arg1 + 0x31), arg1[7])
                    
                    if (__crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::stream_output_adapter<char> >::validate_and_update_state_at_beginning_of_format_character(
                            arg1) == 0)
                        goto label_520ba3
                    
                    int32_t eax_8 = arg1[7]
                    
                    if (eax_8 == 8)
                        *__errno() = 0x16
                        __invalid_parameter_noinfo()
                        goto label_520ba3
                    
                    if (eax_8 u> 7)
                        goto label_520ba3
                    
                    char eax_9
                    
                    switch (eax_8)
                        case 0
                            eax_9 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_normal(
                                arg1)
                        case 1
                            arg1[9] = 0
                            arg1[0xc].b = 0
                            arg1[8] = 0
                            arg1[0xa] = 0xffffffff
                            arg1[0xb] = 0
                            arg1[0xf].b = 0
                            continue
                            continue
                        case 2
                            eax_9 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::state_case_flag(
                                arg1)
                        case 3
                            eax_9 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_width(
                                arg1)
                        case 4
                            arg1[0xa] = 0
                            continue
                            continue
                        case 5
                            eax_9 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_precision(
                                arg1)
                        case 6
                            eax_9 = sub_5210c2(arg1)
                        case 7
                            eax_9 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> > >::state_case_type(
                                arg1)
                    
                    if (eax_9 == 0)
                        goto label_520ba3
                    
                    continue
            else
                arg1[4] += 1
            
            if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::stream_output_adapter<wchar_t> >::validate_and_update_state_at_end_of_format_string(
                arg1) == 0)
            label_520ba3:
                return 0xffffffff
            
            if (__crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> >::advance_to_next_pass(
                    arg1) != 0)
                break
            
            goto label_520b8c
}
