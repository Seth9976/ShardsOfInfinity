// 函数名称: ?type_case_integer@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NI_N@Z
// 虚拟地址: 0x522177
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscall?type_case_integer@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NI_N@Z(void* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t eax = __crt_stdio_output::to_integer_size(*(arg1 + 0x2c))
    int32_t eax = __crt_stdio_output::to_integer_size(*(arg1 + 0x2c))
    uint32_t var_10 = 0
    int32_t var_c = 0
    uint32_t result
    
    if (eax == 1)
        uint32_t* __saved_ebx_4 = &var_10
        
        if (((*(arg1 + 0x20) u>> 4).b & 1) == 0)
            result = __crt_stdio_output::positional_parameter_base<uint8_t,int64_t,char,class __crt_stdio_output::stream_output_adapter<char> >::extract_argument_from_va_list<uint8_t,int64_t>(
                arg1, __saved_ebx_4)
        else
            result = __crt_stdio_output::positional_parameter_base<char,int64_t,wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::extract_argument_from_va_list<char,int64_t>(
                arg1, __saved_ebx_4)
        
    label_52223e:
        
        if (result.b == 0)
            result.b = 0
        else
            if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_format(
                    arg1).b != 0)
                int32_t ecx_11 = *(arg1 + 0x20)
                int32_t ebx_1 = var_c
                int32_t edi
                int32_t var_1c_1 = edi
                uint32_t edi_1 = var_10
                
                if (((ecx_11 u>> 4).b & 1) != 0 && ebx_1 s<= 0 && (ebx_1 s< 0 || edi_1 u< 0))
                    uint32_t temp6_1 = edi_1
                    edi_1 = neg.d(edi_1)
                    ebx_1 = neg.d(adc.d(ebx_1, 0, temp6_1 != 0))
                    ecx_11 |= 0x40
                    *(arg1 + 0x20) = ecx_11
                
                if (*(arg1 + 0x28) s>= 0)
                    int32_t var_20_1 = *(arg1 + 0x28)
                    *(arg1 + 0x20) = ecx_11 & 0xfffffff7
                    __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(
                        arg1 + 0x40, var_20_1)
                else
                    *(arg1 + 0x28) = 1
                
                if ((edi_1 | ebx_1) == 0)
                    *(arg1 + 0x20) &= 0xffffffdf
                
                *(arg1 + 0x3c) = 0
                
                if (eax != 8)
                    __crt_stdio_output::output_processor<uint32_t,char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_integer_parse_into_buffer<uint32_t>(
                        arg1, edi_1, arg2, arg3)
                else
                    __crt_stdio_output::output_processor<uint64_t,char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> > >::type_case_integer_parse_into_buffer<uint64_t>(
                        arg1, edi_1, ebx_1, arg2, arg3)
                
                if (((*(arg1 + 0x20) u>> 7).b & 1) != 0
                        && (*(arg1 + 0x38) == 0 || **(arg1 + 0x34) != 0x30))
                    *(arg1 + 0x34) -= 1
                    **(arg1 + 0x34) = 0x30
                    *(arg1 + 0x38) += 1
            
            result.b = 1
    else
        if (eax == 2)
            uint32_t* __saved_ebx_3 = &var_10
            
            if (((*(arg1 + 0x20) u>> 4).b & 1) == 0)
                result = __crt_stdio_output::positional_parameter_base<uint16_t,int64_t,char,class __crt_stdio_output::console_output_adapter<char> >::extract_argument_from_va_list<uint16_t,int64_t>(
                    arg1, __saved_ebx_3)
            else
                result = __crt_stdio_output::positional_parameter_base<int16_t,int64_t,wchar_t,class __crt_stdio_output::string_output_adapter<wchar_t> >::extract_argument_from_va_list<int16_t,int64_t>(
                    arg1, __saved_ebx_3)
            
            goto label_52223e
        
        if (eax == 4)
            uint32_t* __saved_ebx_2 = &var_10
            
            if (((*(arg1 + 0x20) u>> 4).b & 1) == 0)
                result = __crt_stdio_output::positional_parameter_base<uint32_t,int64_t,char,class __crt_stdio_output::stream_output_adapter<char> >::extract_argument_from_va_list<uint32_t,int64_t>(
                    arg1, __saved_ebx_2)
            else
                result = __crt_stdio_output::positional_parameter_base<int32_t,int64_t,wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::extract_argument_from_va_list<int32_t,int64_t>(
                    arg1, __saved_ebx_2)
            
            goto label_52223e
        
        if (eax == 8)
            uint32_t* __saved_ebx_1 = &var_10
            
            if (((*(arg1 + 0x20) u>> 4).b & 1) == 0)
                result = __crt_stdio_output::positional_parameter_base<uint64_t,int64_t,char,class __crt_stdio_output::console_output_adapter<char> >::extract_argument_from_va_list<uint64_t,int64_t>(
                    arg1, __saved_ebx_1)
            else
                result = __crt_stdio_output::positional_parameter_base<uint64_t,int64_t,char,class __crt_stdio_output::console_output_adapter<char> >::extract_argument_from_va_list<uint64_t,int64_t>(
                    arg1, __saved_ebx_1)
            
            goto label_52223e
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result.b = 0
    
    return result
}
