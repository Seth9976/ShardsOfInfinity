// 函数名称: ___acrt_fenv_set_status
// 虚拟地址: 0x53ab59
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_fenv_set_status(int32_t arg1 @ mxcsr, int32_t arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_30 = edi
    int32_t ecx_2 = arg2 u>> 0x10 & 0x3f
    int32_t edx_5 = (ecx_2 & 1) << 5 | (zx.d((ecx_2 u>> 1).b) & 1) << 4
        | (zx.d((ecx_2 u>> 2).b) & 1) << 3 | (zx.d((ecx_2 u>> 3).b) & 1) << 2
    uint224_t var_24
    __builtin_memset(&var_24, 0, 0x1c)
    int16_t x87status
    uint224_t temp0
    temp0, x87status = __fnstenv_memmem28()
    var_24 = temp0
    int32_t ecx_4 = var_24:4.d
    var_24:4.d = ecx_4
        ^ ((ecx_4 ^ (edx_5 | (zx.d((ecx_2 u>> 4).b) & 1) | ((zx.d((ecx_2 u>> 5).b) & 1) * 2))) & 0x3f)
    __fldenv_memmem28(var_24)
    int32_t ebx_2 = arg2 u>> 0x18 & 0x3f
    int32_t ecx_11 = (ebx_2 & 1) << 5 | (zx.d((ebx_2 u>> 1).b) & 1) << 4
        | (zx.d((ebx_2 u>> 2).b) & 1) << 3 | (zx.d((ebx_2 u>> 3).b) & 1) << 2
    int32_t result = (zx.d((ebx_2 u>> 5).b) & 1) * 2
    
    if (data_65a2f4 s>= 1)
        result = (arg1 & 0xffffffc0) | ((ecx_11 | (zx.d((ebx_2 u>> 4).b) & 1) | result) & 0x3f)
        int32_t result_1 = result
    
    return result
}
