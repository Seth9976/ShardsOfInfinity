// 函数名称: sub_412b90
// 虚拟地址: 0x412b90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_412b90(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t result = ___stdio_common_vsprintf(data_65aaa8 | 1, data_65aaac, arg3, arg2, arg4, nullptr, arg5)
    int32_t result =
        ___stdio_common_vsprintf(data_65aaa8 | 1, data_65aaac, arg3, arg2, arg4, nullptr, arg5)
    
    if (result s< 0)
        return 0xffffffff
    
    return result
}
