// 函数名称: ??$type_case_integer_parse_into_buffer@_K@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAEX_KI_N@Z
// 虚拟地址: 0x52032e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __thiscall??$type_case_integer_parse_into_buffer@_K@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAEX_KI_N@Z(void* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_1c = edi
    void* edi_1 = *(arg1 + 0x444)
    
    if (edi_1 == 0)
        edi_1 = arg1 + 0x40
    
    uint32_t ebx = arg3
    void* edi_2 = edi_1 + __crt_stdio_output::formatting_buffer::count<char>(arg1 + 0x40) - 1
    void* ecx_1 = edi_2
    *(arg1 + 0x34) = edi_2
    uint32_t edi_3 = arg2
    
    while (true)
        int32_t edx_1 = *(arg1 + 0x28)
        
        if (edx_1 s<= 0)
            uint32_t result = edi_3 | ebx
            
            if (result == 0)
                *(arg1 + 0x38) = edi_2 - ecx_1
                *(arg1 + 0x34) += 1
                return result
        
        uint32_t var_20_1 = ebx
        *(arg1 + 0x28) = edx_1 - 1
        uint32_t eax_4
        char ecx_2
        uint32_t edx_2
        eax_4, ecx_2, edx_2 = __aulldvrm(edi_3, ebx, arg4, 0)
        uint32_t var_c_1 = ebx
        ecx_2 += 0x30
        edi_3 = eax_4
        ebx = edx_2
        
        if (ecx_2 s> 0x39)
            eax_4.b = arg5
            eax_4.b ^= 1
            eax_4.b <<= 5
            eax_4.b += 7
            ecx_2 += eax_4.b
        
        **(arg1 + 0x34) = ecx_2
        *(arg1 + 0x34) -= 1
        ecx_1 = *(arg1 + 0x34)
}
