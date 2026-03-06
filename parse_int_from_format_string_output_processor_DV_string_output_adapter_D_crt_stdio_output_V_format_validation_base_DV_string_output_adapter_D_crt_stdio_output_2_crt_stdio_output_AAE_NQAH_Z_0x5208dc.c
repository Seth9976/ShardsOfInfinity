// 函数名称: ?parse_int_from_format_string@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NQAH@Z
// 虚拟地址: 0x5208dc
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __thiscall?parse_int_from_format_string@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NQAH@Z(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* result_1 = arg1
    void* result_1 = arg1
    int32_t edi
    int32_t var_14 = edi
    void* esi = *(arg1 + 0xc)
    int32_t edx
    
    if (esi == 0)
        void* eax_1
        eax_1, edx = __errno()
        esi = eax_1
        *(arg1 + 0xc) = esi
    
    int32_t ebx = *esi
    *esi = 0
    int32_t eax_2 = *(arg1 + 0x10)
    result_1 = nullptr
    *arg2 = _strtol(eax_2 - 1, edx, &result_1, eax_2 - 1, &result_1, 0xa)
    void* result = *(arg1 + 0xc)
    
    if (result == 0)
        result = __errno()
        *(arg1 + 0xc) = result
    
    if (*result == 0x22)
        result.b = 0
    else
        result = result_1
        
        if (result u< *(arg1 + 0x10))
            result.b = 0
        else
            *(arg1 + 0x10) = result
            result.b = 1
    
    if (*esi == 0 && ebx != 0)
        *esi = ebx
    
    return result
}
