// 函数名称: ?process_state@?$input_processor@_WV?$string_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x528d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?process_state@?$input_processor@_WV?$string_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = arg1[0xa] - 1
    int32_t eax_1 = arg1[0xa] - 1
    
    if (eax_1 == 1)
        return __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_whitespace(
            arg1) __tailcall
    
    if (eax_1 == 2)
        return __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_literal_character(
            arg1) __tailcall
    
    if (eax_1 != 3)
        return 0
    
    char result = sub_528a99(arg1)
    
    if (result == 0 || arg1[0x10] == 9 || *(arg1 + 0x2e) != 0)
        return result
    
    arg1[0x1c] += 1
    return result
}
