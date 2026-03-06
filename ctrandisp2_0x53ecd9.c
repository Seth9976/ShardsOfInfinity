// 函数名称: __ctrandisp2
// 虚拟地址: 0x53ecd9
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__ctrandisp2(int16_t arg1 @ x87control, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int32_t var_2dc = arg3
    int32_t entry_ebx
    long double st0 = __fload(arg2, entry_ebx.w)
    int32_t var_2dc_1 = arg5
    long double result = __fload(arg4)
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    int16_t var_a8 = temp0
    char var_2cc
    char var_2cc_1 = var_2cc | 2
    int32_t ecx
    void* edx
    __trandisp2(ecx, edx, ebp, result, st0)
    ctranexit(ebp)
    return result
}
