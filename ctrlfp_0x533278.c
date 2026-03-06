// 函数名称: __ctrlfp
// 虚拟地址: 0x533278
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__ctrlfp(int16_t arg1 @ x87control, int16_t arg2, int32_t arg3)
{
    // 第一条实际指令: int16_t ecx
    int16_t ecx
    int16_t var_8 = ecx
    int16_t var_c = ecx
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    int16_t x87control
    int16_t x87status_1
    x87control, x87status_1 = __fldcw_memmem16(((not.d(arg3)).w & temp0) | (arg2 & arg3.w))
    return sx.d(temp0)
}
