// 函数名称: ___acrt_fenv_set_control
// 虚拟地址: 0x53aaef
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_fenv_set_control(int32_t arg1 @ mxcsr, int32_t arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_28 = edi
    uint32_t edx = zx.d(to_machine_x87_control(arg2))
    uint224_t var_24
    __builtin_memset(&var_24, 0, 0x1c)
    int16_t x87status
    uint224_t temp0
    temp0, x87status = __fnstenv_memmem28()
    var_24 = temp0
    int32_t eax_1 = var_24.d
    var_24.d = eax_1 ^ ((edx ^ eax_1) & 0x1f3f)
    __fldenv_memmem28(var_24)
    int32_t result = to_machine_sse_control(arg2)
    
    if (data_65a2f4 s>= 1)
        result = (arg1 & 0xffff003f) | (zx.d(result.w) & 0xffc0)
        int32_t result_1 = result
    
    return result
}
