// 函数名称: ___acrt_fenv_get_control
// 虚拟地址: 0x53a9ab
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_fenv_get_control(int32_t arg1 @ mxcsr)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_2c = edi
    uint224_t var_24
    __builtin_memset(&var_24, 0, 0x1c)
    int16_t x87status
    uint224_t temp0
    temp0, x87status = __fnstenv_memmem28()
    var_24 = temp0
    __fldenv_memmem28(var_24)
    int32_t eax_2 = to_abstract_control(var_24.d & 0x1f3f)
    int32_t ecx_1
    
    if (data_65a2f4 s>= 1)
        ecx_1 = arg1 & 0xffc0
    else
        ecx_1 = 0
    
    int32_t eax_3 = to_abstract_control(ecx_1)
    return eax_3
        | ((((eax_3 & 0x3f) << 2 | (eax_3 & 0xffffff00)) << 6 | (eax_2 & 0x3f)) << 2 | (eax_2 & 0x300))
        << 0xe | eax_2
}
