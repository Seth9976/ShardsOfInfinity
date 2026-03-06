// 函数名称: sub_432670
// 虚拟地址: 0x432670
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_432670(int32_t arg1, int128_t* arg2, void* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t var_6c = 1
    int32_t var_6c = 1
    int128_t var_68 = *arg2
    
    if (arg5 != 0)
        __builtin_memcpy(arg3, &var_6c, 0x68)
        __builtin_memcpy(arg3 + 0x68, &var_6c, 0x68)
        *(arg3 + 0x450) = 0
        return arg2
    
    __builtin_memcpy(arg3, arg3 + 0x68, 0x68)
    *(arg3 + 0x45c) = 0
    void var_dc
    __builtin_memcpy(&var_dc, &var_6c, 0x68)
    int32_t var_74 = arg4
    int32_t var_70 = 0
    __builtin_memcpy(arg3 + 0xd0, &var_dc, 0x70)
    *(arg3 + 0x450) = 1
    return arg4
}
