// 函数名称: ?type_case_Z@?$output_processor@_WV?$console_output_adapter@_W@__crt_stdio_output@@V?$standard_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 虚拟地址: 0x521ac3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcall?type_case_Z@?$output_processor@_WV?$console_output_adapter@_W@__crt_stdio_output@@V?$standard_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    arg1[5] += 4
    int16_t* edi_1 = *(arg1[5] - 4)
    int32_t ebx_1
    
    if (edi_1 != 0)
        ebx_1 = *(edi_1 + 4)
    
    uint32_t result
    void* ecx
    
    if (edi_1 == 0 || ebx_1 == 0)
        arg1[0xd] = "(null)"
        ecx = &arg1[0xe]
        result = 6
        arg1[0xf].b = 0
    else
        int32_t var_10_1 = arg1[0xb]
        uint32_t var_14_1 = zx.d(*(arg1 + 0x31))
        char eax_2 = __crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1])
        arg1[0xd] = ebx_1
        ecx = &arg1[0xe]
        result = zx.d(*edi_1)
        
        if (eax_2 == 0)
            arg1[0xf].b = 0
        else
            arg1[0xf].b = 1
            result u>>= 1
    
    *ecx = result
    result.b = 1
    return result
}
