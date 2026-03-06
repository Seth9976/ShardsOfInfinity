// 函数名称: ?state_case_type@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x52159f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?state_case_type@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* var_c = arg1
    char ebx = 1
    int32_t result = sx.d(*(arg1 + 0x31))
    int32_t var_1c_1
    char var_18_1
    
    if (result s<= 0x64)
        if (result == 0x64)
        label_521653:
            arg1[8] |= 0x10
        label_521657:
            var_18_1 = 0
            var_1c_1 = 0xa
        label_52165c:
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_integer(
                arg1, var_1c_1, var_18_1)
            goto label_5215ef
        
        if (result s> 0x58)
            if (result == 0x5a)
                result = sub_521b24(arg1)
                goto label_5215ef
            
            if (result == 0x61)
                goto label_521665
            
            if (result == 0x63)
            label_521613:
                int32_t var_18_2 = 0
                result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_c_tchar(
                    arg1)
                goto label_5215ef
            
            result.b = 0
        else
            if (result == 0x58)
                var_18_1 = 1
                var_1c_1 = 0x10
                goto label_52165c
            
            if (result == 0x41)
                goto label_521665
            
            if (result == 0x43)
                goto label_521613
            
            if (result s<= 0x44)
                result.b = 0
            else
                if (result s<= 0x47)
                    goto label_521665
                
                if (result == 0x53)
                    goto label_5215ea
                
                result.b = 0
    else if (result s> 0x70)
        if (result == 0x73)
        label_5215ea:
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> > >::type_case_s(
                arg1)
            goto label_5215ef
        
        if (result == 0x75)
            goto label_521657
        
        if (result == 0x78)
            var_18_1 = 0
            var_1c_1 = 0x10
            goto label_52165c
        
        result.b = 0
    else if (result == 0x70)
        result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> > >::type_case_p(
            arg1)
    label_5215ef:
        
        if (result.b != 0)
            if (__crt_stdio_output::positional_parameter_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> >::should_skip_type_state_output(
                    arg1).b == 0 && arg1[0xc].b == 0)
                int32_t edx_1 = arg1[8]
                int32_t edi
                int32_t var_18_3 = edi
                var_8.w = 0
                void* edi_1 = nullptr
                var_8:2.b = 0
                
                if ((1 & (edx_1 u>> 4).b) != 0)
                    if ((1 & (edx_1 u>> 6).b) != 0)
                        var_8.b = 0x2d
                        edi_1 = 1
                    else if ((1 & edx_1.b) != 0)
                        var_8.b = 0x2b
                        edi_1 = 1
                    else if ((1 & (edx_1 u>> 1).b) != 0)
                        var_8.b = 0x20
                        edi_1 = 1
                
                int32_t* ecx_8
                ecx_8.b = *(arg1 + 0x31)
                
                if (ecx_8.b == 0x78)
                    if ((1 & (edx_1 u>> 5).b) == 0)
                        ebx = 0
                else if (ecx_8.b != 0x58 || (1 & (edx_1 u>> 5).b) == 0)
                    ebx = 0
                
                uint8_t eax_7
                
                if (ecx_8.b == 0x61 || ecx_8.b == 0x41)
                    eax_7 = 1
                else
                    eax_7 = 0
                
                if (ebx != 0 || eax_7 != 0)
                    *(&var_8 + edi_1) = 0x30
                    
                    if (ecx_8.b == 0x58 || ecx_8.b == 0x41)
                        eax_7 = 0x58
                    else
                        eax_7 = 0x78
                    
                    *(&var_8:1 + edi_1) = eax_7
                    edi_1 += 2
                
                void* ecx_9 = &arg1[0x112]
                void* eax_13 = arg1[9] - arg1[0xe] - edi_1
                
                if ((edx_1.b & 0xc) == 0)
                    __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::string_output_adapter<char>,char>(
                        ecx_9, 0x20, eax_13, &arg1[6])
                    ecx_9 = &arg1[0x112]
                
                void* var_1c_3 = &arg1[3]
                __crt_stdio_output::string_output_adapter<char>::write_string(ecx_9, &var_8, edi_1, 
                    &arg1[6])
                int32_t ecx_10 = arg1[8]
                
                if (((ecx_10 u>> 3).b & 1) != 0 && ((ecx_10 u>> 2).b & 1) == 0)
                    __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::string_output_adapter<char>,char>(
                        &arg1[0x112], 0x30, eax_13, &arg1[6])
                
                int32_t var_1c_5 = 0
                __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> > >::write_stored_string_tchar(
                    arg1)
                
                if (arg1[6] s>= 0 && ((arg1[8] u>> 2).b & 1) != 0)
                    __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::string_output_adapter<char>,char>(
                        &arg1[0x112], 0x20, eax_13, &arg1[6])
                
                result.b = 1
            else
                result.b = 1
        else
            result.b = 0
    else
        if (result s<= 0x67)
        label_521665:
            result = sub_521d5c(arg1)
            goto label_5215ef
        
        if (result == 0x69)
            goto label_521653
        
        if (result == 0x6e)
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> > >::type_case_n(
                arg1)
            goto label_5215ef
        
        if (result == 0x6f)
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::positional_parameter_base<char,class __crt_stdio_output::string_output_adapter<char> > >::type_case_o(
                arg1)
            goto label_5215ef
        
        result.b = 0
    return result
}
