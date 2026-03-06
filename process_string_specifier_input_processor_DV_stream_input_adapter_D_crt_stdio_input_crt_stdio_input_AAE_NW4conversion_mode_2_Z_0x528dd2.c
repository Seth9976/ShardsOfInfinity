// 函数名称: ?process_string_specifier@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NW4conversion_mode@2@@Z
// 虚拟地址: 0x528dd2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int16_t** __thiscall?process_string_specifier@?$input_processor@DV?$stream_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NW4conversion_mode@2@@Z(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 1)
    if (arg2 == 1)
        __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::process_whitespace(
            arg1)
    
    int32_t eax = __crt_stdio_input::format_string_parser<char>::length(&arg1[4])
    
    if (eax == 1)
        int32_t var_c_2 = 0
        return __crt_stdio_input::input_processor<char,char,class __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier_tchar<char>(
            arg1, arg2)
    
    if (eax == 2)
        int32_t var_c_1 = 0
        return __crt_stdio_input::input_processor<wchar_t,char,class __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier_tchar<wchar_t>(
            arg1, arg2)
    
    int16_t** result
    result.b = 0
    return result
}
