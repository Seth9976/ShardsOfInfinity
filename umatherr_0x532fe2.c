// 函数名称: __umatherr
// 虚拟地址: 0x532fe2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__umatherr(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, double arg7, int16_t arg8)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    
    for (int32_t i = 0; i s< 0x1d; i += 1)
        if (*((i << 3) + &data_54f0a0) == arg2)
            ecx = (&data_54f0a4)[i * 2]
            break
    
    int32_t var_20 = ecx
    int16_t x87control
    
    if (ecx == 0)
        __ctrlfp(x87control, arg8, 0xffff)
        __set_errno_from_matherr(arg1)
        return fconvert.t(arg7)
    
    int32_t var_1c_1 = arg3
    int32_t var_18_1 = arg4
    int32_t var_14_1 = arg5
    int32_t var_10_1 = arg6
    void* var_24 = arg1
    int32_t var_8_1 = arg7:4.d
    __ctrlfp(x87control, arg8, 0xffff)
    
    if (___acrt_invoke_user_matherr(&var_24) == 0)
        __set_errno_from_matherr(arg1)
    
    return fconvert.t(arg7.d.q)
}
