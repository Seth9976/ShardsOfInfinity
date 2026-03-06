// 函数名称: _fesetenv
// 虚拟地址: 0x53b349
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")_fesetenv(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_c = arg3
    int32_t mxcsr
    ___acrt_fenv_set_status(___acrt_fenv_set_control(mxcsr, *arg4), arg4[1])
    var_c = 0
    int32_t var_8_1 = 0
    _fegetenv(&var_c)
    
    if (*arg4 == var_c && arg4[1] == var_8_1)
        return 0
    
    return 1
}
