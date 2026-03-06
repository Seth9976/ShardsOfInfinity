// 函数名称: sub_535f14
// 虚拟地址: 0x535f14
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_535f14(void* arg1 @ ebp, int16_t arg2 @ x87control, int16_t arg3 @ x87status, int16_t arg4 @ x87tag, long double arg5 @ st0, long double arg6 @ st1)
{
    // 第一条实际指令: int16_t x87control
    int16_t x87control
    int16_t x87status
    int16_t x87tag
    uint864_t temp0
    temp0, x87control, x87tag, x87status = __fnsave_memmem108(arg2, arg4, arg3)
    double var_78
    char ecx
    int80_t st0
    st0, ecx = __powhlp(fconvert.d(arg6), fconvert.d(arg5), &var_78)
    __frstor_memmem108(temp0)
    return fconvert.t(var_78)
}
