// 函数名称: sub_432830
// 虚拟地址: 0x432830
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_432830(int32_t arg1, int32_t arg2, void* arg3, char arg4)
{
    // 第一条实际指令: if (arg4 != 0)
    if (arg4 != 0)
        return 
    
    int32_t esi_1 = *(arg3 + 0x450)
    void* edx_1 = esi_1 * 0x70 + arg3
    *(arg3 + 0x450) = esi_1 + 1
    __builtin_memcpy(edx_1 + 0xd0, arg3 + 0x68, 0x68)
    *(edx_1 + 0x13c) = arg2
    *(edx_1 + 0x138) = 9
}
