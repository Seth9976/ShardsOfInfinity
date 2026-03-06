// 函数名称: sub_528a25
// 虚拟地址: 0x528a25
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int16_t** __fastcallsub_528a25(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = arg1[0xe]
    int32_t result = arg1[0xe]
    
    if (result u> 9)
        result.b = 0
        return result
    
    switch (result)
        case 0
            return __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier(
                arg1, 0)
        case 1
            return __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier(
                arg1, 1)
        case 2
            return __crt_stdio_input::input_processor<wchar_t,class __crt_stdio_input::console_input_adapter<wchar_t> >::process_integer_specifier(
                arg1, 0, 1)
        case 3
            return __crt_stdio_input::input_processor<wchar_t,class __crt_stdio_input::console_input_adapter<wchar_t> >::process_integer_specifier(
                arg1, 0xa, 1)
        case 4
            return __crt_stdio_input::input_processor<wchar_t,class __crt_stdio_input::console_input_adapter<wchar_t> >::process_integer_specifier(
                arg1, 8, 0)
        case 5
            return __crt_stdio_input::input_processor<wchar_t,class __crt_stdio_input::console_input_adapter<wchar_t> >::process_integer_specifier(
                arg1, 0xa, 0)
        case 6
            return __crt_stdio_input::input_processor<wchar_t,class __crt_stdio_input::console_input_adapter<wchar_t> >::process_integer_specifier(
                arg1, 0x10, 0)
        case 7
            return __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::process_floating_point_specifier(
                arg1) __tailcall
        case 8
            return __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier(
                arg1, 8)
        case 9
            return __crt_stdio_input::input_processor<char,class __crt_stdio_input::stream_input_adapter<char> >::process_character_count_specifier(
                arg1) __tailcall
}
