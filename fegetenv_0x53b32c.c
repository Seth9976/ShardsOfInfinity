// 函数名称: _fegetenv
// 虚拟地址: 0x53b32c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_fegetenv(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t mxcsr
    eax, ecx = ___acrt_fenv_get_control(mxcsr)
    *arg1 = eax
    arg1[1] = ___acrt_fenv_get_status(ecx, mxcsr)
    return 0
}
