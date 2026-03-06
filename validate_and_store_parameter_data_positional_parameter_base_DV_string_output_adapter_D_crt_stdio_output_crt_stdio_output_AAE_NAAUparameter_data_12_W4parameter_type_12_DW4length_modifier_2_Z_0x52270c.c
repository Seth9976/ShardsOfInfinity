// 函数名称: ?validate_and_store_parameter_data@?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@AAE_NAAUparameter_data@12@W4parameter_type@12@DW4length_modifier@2@@Z
// 虚拟地址: 0x52270c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall?validate_and_store_parameter_data@?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@__crt_stdio_output@@AAE_NAAUparameter_data@12@W4parameter_type@12@DW4length_modifier@2@@Z(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t* ecx
    
    if (*arg1 != 0)
        if (__crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::stream_output_adapter<char> >::is_positional_parameter_reappearance_consistent(
                ecx, arg1, arg2, arg3, arg4).b != 0)
            result.b = 1
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result.b = 0
    else
        *arg1 = arg2
        int32_t eax
        eax.b = arg3.b
        arg1[1].b = eax.b
        arg1[3] = arg4
        result.b = 1
    return result
}
