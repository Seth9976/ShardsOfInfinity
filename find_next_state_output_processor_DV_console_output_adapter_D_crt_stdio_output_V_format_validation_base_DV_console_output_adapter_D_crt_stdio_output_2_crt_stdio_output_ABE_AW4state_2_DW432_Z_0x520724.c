// 函数名称: ?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z
// 虚拟地址: 0x520724
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __stdcall?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z(char arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    ecx.b = arg1
    int32_t var_8_1 = 0x54cf78
    int32_t eax_3
    
    if (ecx.b - 0x20 u> 0x5a)
        eax_3 = 0
    else
        eax_3 = zx.d(*(sx.d(ecx.b) + 0x54cf58)) & 0xf
    
    return zx.d(*(eax_3 * 9 + arg2 + 0x54cf78)) u>> 4
}
