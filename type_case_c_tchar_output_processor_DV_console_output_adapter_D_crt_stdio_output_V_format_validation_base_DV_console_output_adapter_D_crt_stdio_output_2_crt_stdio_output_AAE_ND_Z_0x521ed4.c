// 函数名称: ?type_case_c_tchar@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z
// 虚拟地址: 0x521ed4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall?type_case_c_tchar@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_8 = edi
    int32_t __saved_ebx = arg1[0xb]
    void* result_1 = &arg1[0x10]
    uint32_t var_10 = zx.d(*(arg1 + 0x31))
    
    if (__crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1]) == 0)
        void* result_2 = *(result_1 + 0x404)
        
        if (result_2 == 0)
            result_2 = result_1
        
        arg1[5] += 4
        void* eax_7
        eax_7.b = *(arg1[5] - 4)
        *result_2 = eax_7.b
        arg1[0xe] = 1
    else
        arg1[5] += 4
        void* result_3 = *(result_1 + 0x404)
        
        if (result_3 == 0)
            result_3 = result_1
        
        if (_wctomb_s(&arg1[0xe], result_3, 
                __crt_stdio_output::formatting_buffer::count<char>(result_1), zx.d(*(arg1[5] - 4))) != 0)
            arg1[0xc].b = 1
    
    void* result = *(result_1 + 0x404)
    
    if (result != 0)
        result_1 = result
    
    arg1[0xd] = result_1
    result.b = 1
    return result
}
