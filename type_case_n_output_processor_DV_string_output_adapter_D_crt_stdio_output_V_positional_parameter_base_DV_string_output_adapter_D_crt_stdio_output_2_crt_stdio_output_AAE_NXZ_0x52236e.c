// 函数名称: ?type_case_n@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x52236e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcall?type_case_n@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(int32_t** arg1)
{
    // 第一条实际指令: int32_t** var_8 = arg1
    int32_t** var_8 = arg1
    var_8 = nullptr
    int32_t* result
    
    if (__crt_stdio_output::positional_parameter_base<char*,char*,char,class __crt_stdio_output::string_output_adapter<char> >::extract_argument_from_va_list<char*,char*>(
            arg1, &var_8).b != 0)
        if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_format(
                arg1).b == 0)
            result.b = 1
        else if (__get_printf_count_output() != 0)
            int32_t eax_2 = __crt_stdio_output::to_integer_size(arg1[0xb])
            
            if (eax_2 == 1)
                int16_t ecx_1
                ecx_1.b = arg1[6].b
                *var_8 = ecx_1.b
                arg1[0xc].b = 1
                result.b = 1
            else if (eax_2 == 2)
                *var_8 = arg1[6].w
                arg1[0xc].b = 1
                result.b = 1
            else if (eax_2 == 4)
                *var_8 = arg1[6]
                arg1[0xc].b = 1
                result.b = 1
            else
                if (eax_2 != 8)
                    goto label_5223a5
                
                int32_t** ecx_2 = var_8
                int32_t edx_1
                edx_1:result = sx.q(arg1[6])
                *ecx_2 = result
                ecx_2[1] = edx_1
                arg1[0xc].b = 1
                result.b = 1
        else
        label_5223a5:
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result.b = 0
    else
        result.b = 0
    
    return result
}
