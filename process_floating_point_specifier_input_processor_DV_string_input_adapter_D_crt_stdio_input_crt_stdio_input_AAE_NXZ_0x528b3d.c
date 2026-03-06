// 函数名称: ?process_floating_point_specifier@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x528b3d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?process_floating_point_specifier@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_whitespace(arg1)
    __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_whitespace(
        arg1)
    int32_t result = __crt_stdio_input::format_string_parser<char>::length(arg1 + 0x18)
    
    if (result == 4)
        return __crt_stdio_input::input_processor<float,char,class __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier_t<float>(
            arg1) __tailcall
    
    if (result == 8)
        return __crt_stdio_input::input_processor<double,char,class __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier_t<double>(
            arg1) __tailcall
    
    result.b = 0
    return result
}
