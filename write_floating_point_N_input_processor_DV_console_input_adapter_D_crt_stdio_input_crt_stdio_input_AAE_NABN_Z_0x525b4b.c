// 函数名称: ??$write_floating_point@N@?$input_processor@DV?$console_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NABN@Z
// 虚拟地址: 0x525b4b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall??$write_floating_point@N@?$input_processor@DV?$console_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NABN@Z(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: *(arg1 + 0x64) += 4
    *(arg1 + 0x64) += 4
    int32_t* edx = *(*(arg1 + 0x64) - 4)
    int32_t result
    
    if (edx != 0)
        *edx = *arg2
        edx[1] = arg2[1]
        result.b = 1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result.b = 0
    
    return result
}
