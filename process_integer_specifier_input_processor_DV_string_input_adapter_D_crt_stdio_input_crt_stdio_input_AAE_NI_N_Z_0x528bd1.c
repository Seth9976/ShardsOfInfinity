// 函数名称: ?process_integer_specifier@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NI_N@Z
// 虚拟地址: 0x528bd1
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall?process_integer_specifier@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NI_N@Z(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* var_c = arg1
    __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_whitespace(
        arg1)
    int32_t var_14 = arg3
    var_8:3.b = 0
    int32_t var_18 = arg2
    void var_38
    __crt_strtox::make_input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char> >(
        &var_38, arg1 + 8, *(arg1 + 0x30), *(arg1 + 0x34), &var_8:3)
    char eax_1
    int32_t edx
    eax_1, edx = sub_525066(*(arg1 + 0x68))
    
    if (var_8:3.b == 0)
        return 0
    
    if (*(arg1 + 0x2e) == 0)
        return __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::write_integer(
            arg1, eax_1, edx)
    
    return 1
}
