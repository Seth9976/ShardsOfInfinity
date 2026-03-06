// 函数名称: ?state_case_normal_tchar@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z
// 虚拟地址: 0x520eaf
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcall?state_case_normal_tchar@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t* eax = *(esi + 8)
    arg1.b = *(esi + 0x31)
    *(esi + 0x3c) = 0
    char ecx_1
    
    if (*(**eax + (zx.d(arg1.b) << 1)) s< 0)
        __crt_stdio_output::string_output_adapter<char>::write_character(esi + 0x448, arg1.b, 
            esi + 0x18)
        char* eax_3 = *(esi + 0x10)
        ecx_1 = *eax_3
        *(esi + 0x31) = ecx_1
        *(esi + 0x10) = &eax_3[1]
    
    void* result
    
    if (*(**eax + (zx.d(arg1.b) << 1)) s>= 0 || ecx_1 != 0)
        result.b = 1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result.b = 0
    
    return result
}
