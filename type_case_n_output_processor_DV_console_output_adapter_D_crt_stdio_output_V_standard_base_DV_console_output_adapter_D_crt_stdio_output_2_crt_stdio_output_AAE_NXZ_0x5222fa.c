// 函数名称: ?type_case_n@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x5222fa
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?type_case_n@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(void* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    *(arg1 + 0x14) += 4
    int32_t* edi_1 = *(*(arg1 + 0x14) - 4)
    int32_t result
    
    if (__get_printf_count_output() != 0)
        int32_t eax_3 = __crt_stdio_output::to_integer_size(*(arg1 + 0x2c))
        
        if (eax_3 == 1)
            result.b = *(arg1 + 0x18)
            *edi_1 = result.b
            *(arg1 + 0x30) = 1
            result.b = 1
        else if (eax_3 == 2)
            result.w = *(arg1 + 0x18)
            *edi_1 = result.w
            *(arg1 + 0x30) = 1
            result.b = 1
        else if (eax_3 == 4)
            *edi_1 = *(arg1 + 0x18)
            *(arg1 + 0x30) = 1
            result.b = 1
        else
            if (eax_3 != 8)
                goto label_522318
            
            int32_t edx_1
            edx_1:result = sx.q(*(arg1 + 0x18))
            *edi_1 = result
            edi_1[1] = edx_1
            *(arg1 + 0x30) = 1
            result.b = 1
    else
    label_522318:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result.b = 0
    
    return result
}
