// 函数名称: ?type_case_integer@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NI_N@Z
// 虚拟地址: 0x522024
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscall?type_case_integer@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NI_N@Z(void* arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t edi
    int32_t var_14 = edi
    int32_t eax = __crt_stdio_output::to_integer_size(*(arg1 + 0x2c))
    int32_t eax_6
    
    if (eax == 1)
        int32_t eax_10 = *(arg1 + 0x20)
        *(arg1 + 0x14) += 4
        void* eax_12 = *(arg1 + 0x14)
        
        if (((eax_10 u>> 4).b & 1) == 0)
            eax_6 = zx.d(*(eax_12 - 4))
        else
            eax_6 = sx.d(*(eax_12 - 4))
        
        goto label_5220d5
    
    if (eax == 2)
        int32_t eax_7 = *(arg1 + 0x20)
        *(arg1 + 0x14) += 4
        void* eax_9 = *(arg1 + 0x14)
        
        if (((eax_7 u>> 4).b & 1) == 0)
            eax_6 = zx.d(*(eax_9 - 4))
        else
            eax_6 = sx.d(*(eax_9 - 4))
        
        goto label_5220d5
    
    uint32_t result
    uint32_t ebx_1
    uint32_t edi_1
    
    if (eax == 4)
        int32_t eax_3 = *(arg1 + 0x20)
        *(arg1 + 0x14) += 4
        void* eax_5 = *(arg1 + 0x14)
        
        if (((eax_3 u>> 4).b & 1) == 0)
            edi_1 = *(eax_5 - 4)
            ebx_1 = 0
            goto label_5220da
        
        eax_6 = *(eax_5 - 4)
    label_5220d5:
        uint32_t eax_13
        uint32_t edx_1
        edx_1:eax_13 = sx.q(eax_6)
        edi_1 = eax_13
        ebx_1 = edx_1
    label_5220da:
        int32_t ecx_6 = *(arg1 + 0x20)
        
        if (((ecx_6 u>> 4).b & 1) != 0 && ebx_1 s<= 0 && (ebx_1 s< 0 || edi_1 u< 0))
            uint32_t temp6_1 = edi_1
            edi_1 = neg.d(edi_1)
            ebx_1 = neg.d(adc.d(ebx_1, 0, temp6_1 != 0))
            ecx_6 |= 0x40
            *(arg1 + 0x20) = ecx_6
        
        if (*(arg1 + 0x28) s>= 0)
            int32_t var_18_1 = *(arg1 + 0x28)
            *(arg1 + 0x20) = ecx_6 & 0xfffffff7
            __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(arg1 + 0x40, 
                var_18_1)
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
        
        if (((*(arg1 + 0x20) u>> 7).b & 1) != 0 && (*(arg1 + 0x38) == 0 || **(arg1 + 0x34) != 0x30))
            *(arg1 + 0x34) -= 1
            **(arg1 + 0x34) = 0x30
            *(arg1 + 0x38) += 1
        
        result.b = 1
    else
        if (eax == 8)
            *(arg1 + 0x14) += 8
            void* eax_2 = *(arg1 + 0x14)
            edi_1 = *(eax_2 - 8)
            ebx_1 = *(eax_2 - 4)
            goto label_5220da
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result.b = 0
    return result
}
