// 函数名称: __chvalidchk_l
// 虚拟地址: 0x523300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__chvalidchk_l(char arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t eax_2
    int32_t eax_2
    int32_t* ecx
    
    if (arg3 == 0)
        eax_2 = ___pctype_func(ecx)
    else
        eax_2 = **arg3
    return zx.d(*(eax_2 + (zx.d(arg1) << 1))) & arg2
}
