// 函数名称: ?process@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@QAEHXZ
// 虚拟地址: 0x520952
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?process@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@QAEHXZ(int32_t* arg1)
{
    // 第一条实际指令: if (__crt_stdio_output::stream_output_adapter<char>::validate(&arg1[0x112]) == 0)
    if (__crt_stdio_output::stream_output_adapter<char>::validate(&arg1[0x112]) == 0)
        return 0xffffffff
    
    if (arg1[4] != 0)
    label_520a32:
        arg1[0x114] += 1
        
        if (arg1[0x114] == 2)
            return arg1[6]
        
        arg1[0xe] = 0
        arg1[7] = 0
        
        while (true)
            char* eax_6
            eax_6.b = *arg1[4]
            *(arg1 + 0x31) = eax_6.b
            
            if (eax_6.b == 0)
                arg1[4] += 1
                goto label_520a32
            
            arg1[4] += 1
            
            if (arg1[6] s< 0)
                goto label_520a32
            
            uint32_t eax_4 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::find_next_state(
                *(arg1 + 0x31), arg1[7])
            arg1[7] = eax_4
            
            if (eax_4 == 8)
                break
            
            if (eax_4 u> 7)
                return 0xffffffff
            
            char eax_5
            
            switch (eax_4)
                case 0
                    eax_5 = __crt_stdio_output::output_processor<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t>,class __crt_stdio_output::format_validation_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> > >::state_case_normal()
                case 1
                    arg1[0xa] = 0xffffffff
                    arg1[9] = 0
                    arg1[0xc].b = 0
                    arg1[8] = 0
                    arg1[0xb] = 0
                    arg1[0xf].b = 0
                    continue
                    continue
                case 2
                    eax_5 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::state_case_flag(
                        arg1)
                case 3
                    eax_5 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> > >::state_case_width(
                        arg1)
                case 4
                    arg1[0xa] = 0
                    continue
                    continue
                case 5
                    eax_5 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_precision(
                        arg1)
                case 6
                    eax_5 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_size(
                        arg1)
                case 7
                    eax_5 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_type(
                        arg1)
            
            if (eax_5 == 0)
                return 0xffffffff
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff
}
