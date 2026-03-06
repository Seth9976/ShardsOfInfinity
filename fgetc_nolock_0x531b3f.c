// 函数名称: __fgetc_nolock
// 虚拟地址: 0x531b3f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__fgetc_nolock(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    int32_t temp0 = arg1[2]
    arg1[2] -= 1
    
    if (temp0 - 1 s< 0)
        int32_t* var_8 = arg1
        return sub_53432e()
    
    char* eax_3 = *arg1
    char ecx = *eax_3
    *arg1 = &eax_3[1]
    return zx.d(ecx)
}
