// 函数名称: __ctrandisp1
// 虚拟地址: 0x53ee68
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__ctrandisp1(int16_t arg1 @ x87control, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int32_t var_2dc = arg3
    int32_t entry_ebx
    long double result = __fload(arg2, entry_ebx.w)
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg1)
    int16_t var_a8 = temp0
    char var_2cc
    char var_2cc_1 = var_2cc & 0xfd
    int32_t ecx
    void* edx
    __trandisp1(ecx, edx, ebp, result)
    ctranexit(ebp)
    return result
}
