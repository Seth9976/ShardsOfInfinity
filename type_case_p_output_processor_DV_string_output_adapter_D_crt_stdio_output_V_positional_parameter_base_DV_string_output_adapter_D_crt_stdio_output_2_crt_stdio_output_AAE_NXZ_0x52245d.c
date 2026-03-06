// 函数名称: ?type_case_p@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x52245d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?type_case_p@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x28) = 8
    *(arg1 + 0x28) = 8
    *(arg1 + 0x2c) = 0xa
    return __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_integer(
        arg1, 0x10, 1)
}
