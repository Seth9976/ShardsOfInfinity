// 函数名称: ?process@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@QAEHXZ
// 虚拟地址: 0x5288e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?process@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@QAEHXZ(int32_t* arg1)
{
    // 第一条实际指令: if (__crt_stdio_output::stream_output_adapter<char>::validate(&arg1[2]) == 0)
    if (__crt_stdio_output::stream_output_adapter<char>::validate(&arg1[2]) == 0)
        return 0xffffffff
    
    int32_t edi
    int32_t var_c_1 = edi
    int32_t result
    
    if (__crt_stdio_input::format_string_parser<char>::validate(&arg1[4]) != 0)
        char i
        
        do
            if (__crt_stdio_input::format_string_parser<char>::advance(&arg1[4]) == 0)
                break
            
            i = __crt_stdio_input::input_processor<wchar_t,class __crt_stdio_input::console_input_adapter<wchar_t> >::process_state(
                arg1)
        while (i != 0)
        int32_t result_1 = arg1[0x1a]
        
        if (result_1 == 0 && arg1[8] != 1)
            int32_t var_10_1 = arg1[2]
            int32_t eax_3 = sub_531b7b()
            
            if (eax_3 == 0xffffffff)
                result_1 = 0xffffffff
            else
                arg1[3] += 1
            
            __crt_stdio_input::stream_input_adapter<char>::unget(&arg1[2], eax_3)
        
        if ((*arg1 & 1) != 0)
            int32_t esi_1 = arg1[7]
            
            if (esi_1 != 0)
                *__errno() = esi_1
                __invalid_parameter_noinfo()
        
        result = result_1
    else
        result = 0xffffffff
    
    return result
}
