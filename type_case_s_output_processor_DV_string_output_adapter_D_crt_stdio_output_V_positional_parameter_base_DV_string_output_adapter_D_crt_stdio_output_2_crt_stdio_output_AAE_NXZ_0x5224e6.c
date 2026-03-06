// 函数名称: ?type_case_s@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x5224e6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcall?type_case_s@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t* result = __crt_stdio_output::positional_parameter_base<char*,char*,char,class __crt_stdio_output::string_output_adapter<char> >::extract_argument_from_va_list<char*,char*>(
        arg1, &arg1[0xd])
    
    if (result.b != 0)
        if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_format(
                arg1).b != 0)
            uint32_t ebx_1 = arg1[0xa]
            
            if (ebx_1 == 0xffffffff)
                ebx_1 = 0x7fffffff
            
            int32_t var_10_1 = arg1[0xb]
            wchar16 const* const edi_2 = arg1[0xd]
            uint32_t var_14_1 = zx.d(*(arg1 + 0x31))
            void invalid
            
            if (__crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1]) == 0)
                if (edi_2 == 0)
                    edi_2 = "(null)"
                    arg1[0xd] = "(null)"
                
                result = _strnlen(invalid, edi_2, ebx_1)
            else
                if (edi_2 == 0)
                    edi_2 = u"(null)"
                    arg1[0xd] = u"(null)"
                
                arg1[0xf].b = 1
                result = _wcsnlen(invalid, edi_2, ebx_1)
            arg1[0xe] = result
        
        result.b = 1
    
    return result
}
