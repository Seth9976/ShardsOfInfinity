// 函数名称: __startTwoArgErrorHandling
// 虚拟地址: 0x5361b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double __convention("regparm")__startTwoArgErrorHandling(int32_t arg1, int32_t arg2, long double arg3 @ st0, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_24 = arg1
    int32_t var_24 = arg1
    int32_t var_14 = arg6
    int32_t var_10 = arg7
    double var_c = fconvert.d(arg3)
    int32_t ecx
    int32_t var_20 = ecx
    int32_t var_1c = arg4
    int32_t var_18 = arg5
    int16_t arg_4
    sub_53af6f(arg2, &var_24, &arg_4)
    int16_t x87control_1
    int16_t x87status_1
    
    if (arg_4 != 0x27f)
        x87control_1, x87status_1 = __fldcw_memmem16(arg_4)
    return fconvert.t(var_c)
}
