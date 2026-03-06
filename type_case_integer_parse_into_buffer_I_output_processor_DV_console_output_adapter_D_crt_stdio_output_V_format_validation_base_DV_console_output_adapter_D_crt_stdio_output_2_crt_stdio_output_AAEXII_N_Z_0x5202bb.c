// 函数名称: ??$type_case_integer_parse_into_buffer@I@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAEXII_N@Z
// 虚拟地址: 0x5202bb
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint8_t* __thiscall??$type_case_integer_parse_into_buffer@I@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAEXII_N@Z(void* arg1, uint32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    void* edi_1 = *(arg1 + 0x444)
    
    if (edi_1 == 0)
        edi_1 = arg1 + 0x40
    
    uint32_t ebx = arg2
    uint8_t* result = __crt_stdio_output::formatting_buffer::count<char>(arg1 + 0x40) - 1
    void* edi_2 = edi_1 + result
    *(arg1 + 0x34) = edi_2
    void* ecx_1 = edi_2
    
    while (true)
        int32_t edx_1 = *(arg1 + 0x28)
        
        if (edx_1 s<= 0 && ebx == 0)
            *(arg1 + 0x38) = edi_2 - ecx_1
            *(arg1 + 0x34) += 1
            return result
        
        int32_t edx_2 = 0
        *(arg1 + 0x28) = edx_1 - 1
        uint8_t edx_3 = (modu.dp.d(edx_2:ebx, arg3)).b + 0x30
        ebx = divu.dp.d(edx_2:ebx, arg3)
        
        if (edx_3 s> 0x39)
            uint32_t eax_2
            eax_2.b = arg4
            eax_2.b ^= 1
            eax_2.b <<= 5
            eax_2.b += 7
            edx_3 += eax_2.b
        
        result = *(arg1 + 0x34)
        *result = edx_3
        *(arg1 + 0x34) -= 1
        ecx_1 = *(arg1 + 0x34)
}
