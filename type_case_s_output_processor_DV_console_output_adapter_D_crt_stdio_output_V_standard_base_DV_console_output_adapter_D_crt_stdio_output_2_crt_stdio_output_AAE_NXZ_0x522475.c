// 函数名称: ?type_case_s@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x522475
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?type_case_s@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    arg1[5] += 4
    uint32_t ebx = arg1[0xa]
    wchar16 const* const edi_1 = *(arg1[5] - 4)
    arg1[0xd] = edi_1
    
    if (ebx == 0xffffffff)
        ebx = 0x7fffffff
    
    int32_t var_10 = arg1[0xb]
    uint32_t var_14 = zx.d(*(arg1 + 0x31))
    int32_t result
    void invalid
    
    if (__crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1]) == 0)
        if (edi_1 == 0)
            edi_1 = "(null)"
            arg1[0xd] = "(null)"
        
        result = _strnlen(invalid, edi_1, ebx)
    else
        if (edi_1 == 0)
            edi_1 = u"(null)"
            arg1[0xd] = u"(null)"
        
        arg1[0xf].b = 1
        result = _wcsnlen(invalid, edi_1, ebx)
    arg1[0xe] = result
    result.b = 1
    return result
}
