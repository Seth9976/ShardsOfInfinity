// 函数名称: __controlfp_s
// 虚拟地址: 0x52f61e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__controlfp_s(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx_1 = arg3 & 0xfff7ffff
    int32_t ecx_1 = arg3 & 0xfff7ffff
    int32_t mxcsr
    int16_t x87control
    
    if ((arg2 & ecx_1 & 0xfcf0fce0) == 0)
        if (arg1 == 0)
            __control87(mxcsr, x87control, arg2, ecx_1)
        else
            *arg1 = __control87(mxcsr, x87control, arg2, ecx_1)
        
        return 0
    
    if (arg1 != 0)
        *arg1 = __control87(mxcsr, x87control, 0, 0)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
