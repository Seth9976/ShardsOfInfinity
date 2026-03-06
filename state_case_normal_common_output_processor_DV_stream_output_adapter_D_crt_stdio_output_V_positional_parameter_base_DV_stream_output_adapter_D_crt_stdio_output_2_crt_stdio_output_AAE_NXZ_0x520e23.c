// 函数名称: ?state_case_normal_common@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x520e23
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcall?state_case_normal_common@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    char eax = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_normal_tchar(
        arg1)
    
    if (eax == 0)
        return eax
    
    __crt_stdio_output::string_output_adapter<char>::write_character(arg1 + 0x448, *(arg1 + 0x31), 
        arg1 + 0x18)
    int32_t* eax_3
    eax_3.b = 1
    return eax_3
}
