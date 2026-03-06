// 函数名称: ?state_case_type@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x521376
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?state_case_type@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(int32_t* arg1)
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
        label_52142a:
            arg1[8] |= 0x10
        label_52142e:
            var_18_1 = 0
            var_1c_1 = 0xa
        label_521433:
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_integer(
                arg1, var_1c_1, var_18_1)
            goto label_5213c6
        
        if (result s> 0x58)
            if (result == 0x5a)
                result = __crt_stdio_output::output_processor<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t>,class __crt_stdio_output::standard_base<wchar_t,class __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_Z(
                    arg1)
                goto label_5213c6
            
            if (result == 0x61)
                goto label_52143c
            
            if (result == 0x63)
            label_5213ea:
                int32_t var_18_2 = 0
                result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_c_tchar(
                    arg1)
                goto label_5213c6
            
            result.b = 0
        else
            if (result == 0x58)
                var_18_1 = 1
                var_1c_1 = 0x10
                goto label_521433
            
            if (result == 0x41)
                goto label_52143c
            
            if (result == 0x43)
                goto label_5213ea
            
            if (result s<= 0x44)
                result.b = 0
            else
                if (result s<= 0x47)
                    goto label_52143c
                
                if (result == 0x53)
                    goto label_5213c1
                
                result.b = 0
    else if (result s> 0x70)
        if (result == 0x73)
        label_5213c1:
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_s(
                arg1)
            goto label_5213c6
        
        if (result == 0x75)
            goto label_52142e
        
        if (result == 0x78)
            var_18_1 = 0
            var_1c_1 = 0x10
            goto label_521433
        
        result.b = 0
    else if (result == 0x70)
        result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_p(
            arg1)
    label_5213c6:
        
        if (result.b == 0)
            result.b = 0
        else if (arg1[0xc].b == 0)
            int32_t edx_1 = arg1[8]
            int32_t edi
            int32_t var_18_3 = edi
            var_8.w = 0
            int32_t* edi_1 = nullptr
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
            
            char ecx_1 = *(arg1 + 0x31)
            
            if (ecx_1 == 0x78)
                if ((1 & (edx_1 u>> 5).b) == 0)
                    ebx = 0
            else if (ecx_1 != 0x58 || (1 & (edx_1 u>> 5).b) == 0)
                ebx = 0
            
            uint8_t eax_7
            
            if (ecx_1 == 0x61 || ecx_1 == 0x41)
                eax_7 = 1
            else
                eax_7 = 0
            
            if (ebx != 0 || eax_7 != 0)
                *(&var_8 + edi_1) = 0x30
                
                if (ecx_1 == 0x58 || ecx_1 == 0x41)
                    eax_7 = 0x58
                else
                    eax_7 = 0x78
                
                *(&var_8:1 + edi_1) = eax_7
                edi_1 += 2
            
            void* ecx_9 = &arg1[0x112]
            void* eax_13 = arg1[9] - arg1[0xe] - edi_1
            
            if ((edx_1.b & 0xc) == 0)
                __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::stream_output_adapter<char>,char>(
                    ecx_9, 0x20, eax_13, &arg1[6])
                ecx_9 = &arg1[0x112]
            
            void* var_1c_3 = &arg1[3]
            int32_t* var_20_2 = &arg1[6]
            sub_522b96(ecx_9, &var_8, edi_1)
            int32_t ecx_10 = arg1[8]
            
            if (((ecx_10 u>> 3).b & 1) != 0 && ((ecx_10 u>> 2).b & 1) == 0)
                __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::stream_output_adapter<char>,char>(
                    &arg1[0x112], 0x30, eax_13, &arg1[6])
            
            int32_t var_1c_5 = 0
            __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::write_stored_string_tchar(
                arg1)
            
            if (arg1[6] s>= 0 && ((arg1[8] u>> 2).b & 1) != 0)
                __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::stream_output_adapter<char>,char>(
                    &arg1[0x112], 0x20, eax_13, &arg1[6])
            
            result.b = 1
        else
            result.b = 1
    else
        if (result s<= 0x67)
        label_52143c:
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_a(
                arg1)
            goto label_5213c6
        
        if (result == 0x69)
            goto label_52142a
        
        if (result == 0x6e)
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_n(
                arg1)
            goto label_5213c6
        
        if (result == 0x6f)
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::type_case_o(
                arg1)
            goto label_5213c6
        
        result.b = 0
    return result
}
