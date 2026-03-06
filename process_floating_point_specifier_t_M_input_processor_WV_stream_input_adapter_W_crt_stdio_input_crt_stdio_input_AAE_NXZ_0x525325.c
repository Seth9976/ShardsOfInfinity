// 函数名称: ??$process_floating_point_specifier_t@M@?$input_processor@_WV?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x525325
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall??$process_floating_point_specifier_t@M@?$input_processor@_WV?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: float var_c
    float var_c
    float* var_18 = &var_c
    char var_5 = 0
    var_c = fconvert.s(float.t(0))
    void var_38
    __crt_strtox::make_input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char> >(
        &var_38, arg1 + 8, *(arg1 + 0x28), *(arg1 + 0x2c), &var_5)
    int32_t result = __crt_strtox::parse_floating_point<class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<wchar_t> >,float>(
        *(arg1 + 0x60))
    
    if (var_5 == 0 || result == 1)
        result.b = 0
    else
        if (*(arg1 + 0x26) == 0)
            return __crt_stdio_input::input_processor<float,char,class __crt_stdio_input::console_input_adapter<char> >::write_floating_point<float>(
                arg1, &var_c)
        
        result.b = 1
    
    return result
}
