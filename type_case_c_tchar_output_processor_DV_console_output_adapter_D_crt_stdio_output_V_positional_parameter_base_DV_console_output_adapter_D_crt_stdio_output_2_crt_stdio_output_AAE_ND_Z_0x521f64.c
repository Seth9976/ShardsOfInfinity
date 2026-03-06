// 函数名称: ?type_case_c_tchar@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z
// 虚拟地址: 0x521f64
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int16_t* __fastcall?type_case_c_tchar@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t edi
    int32_t var_10 = edi
    int32_t __saved_ebx = arg1[0xb]
    uint32_t var_18 = zx.d(*(arg1 + 0x31))
    int16_t* result
    int16_t* result_1
    
    if (__crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1]) == 0)
        result_1 = &arg1[0x10]
        int16_t* result_2 = *(result_1 + 0x404)
        
        if (result_2 == 0)
            result_2 = result_1
        
        if (sub_51fe58(arg1, result_2).b == 0)
            result.b = 0
        else if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_format(
                arg1).b == 0)
            result.b = 1
        else
            arg1[0xe] = 1
        label_52200b:
            result = *(result_1 + 0x404)
            
            if (result != 0)
                result_1 = result
            
            arg1[0xd] = result_1
            result.b = 1
    else
        var_8.w = 0
        
        if (__crt_stdio_output::positional_parameter_base<wchar_t,wchar_t,wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::extract_argument_from_va_list<wchar_t,wchar_t>(
                arg1, &var_8).b != 0)
            if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_format(
                    arg1).b != 0)
                result_1 = &arg1[0x10]
                int16_t* result_3 = *(result_1 + 0x404)
                
                if (result_3 == 0)
                    result_3 = result_1
                
                if (_wctomb_s(&arg1[0xe], result_3, 
                        __crt_stdio_output::formatting_buffer::count<char>(result_1), var_8) != 0)
                    arg1[0xc].b = 1
                
                goto label_52200b
            
            result.b = 1
        else
            result.b = 0
    return result
}
