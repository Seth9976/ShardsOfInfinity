// 函数名称: ??$process_floating_point_specifier_t@N@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 虚拟地址: 0x52545d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall??$process_floating_point_specifier_t@N@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: double var_14
    double var_14
    double* var_1c = &var_14
    char var_5 = 0
    var_14 = fconvert.d(float.t(0))
    void var_3c
    __crt_strtox::make_input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char> >(
        &var_3c, arg1 + 8, *(arg1 + 0x30), *(arg1 + 0x34), &var_5)
    int32_t result = __crt_strtox::parse_floating_point<class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<wchar_t> >,double>(
        *(arg1 + 0x68))
    
    if (var_5 == 0 || result == 1)
        result.b = 0
    else
        if (*(arg1 + 0x2e) == 0)
            return __crt_stdio_input::input_processor<double,char,class __crt_stdio_input::string_input_adapter<char> >::write_floating_point<double>(
                arg1, &var_14)
        
        result.b = 1
    
    return result
}
