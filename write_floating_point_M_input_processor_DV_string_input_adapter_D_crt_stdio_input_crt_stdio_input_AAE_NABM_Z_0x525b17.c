// 函数名称: ??$write_floating_point@M@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NABM@Z
// 虚拟地址: 0x525b17
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscall??$write_floating_point@M@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NABM@Z(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: *(arg1 + 0x6c) += 4
    *(arg1 + 0x6c) += 4
    int32_t* ecx = *(*(arg1 + 0x6c) - 4)
    int32_t result
    
    if (ecx != 0)
        *ecx = *arg2
        result.b = 1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result.b = 0
    
    return result
}
