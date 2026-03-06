// 函数名称: sub_4d6910
// 虚拟地址: 0x4d6910
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4d6910(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t result = data_ce26e8
    int32_t result = data_ce26e8
    
    if (*(result + (arg3 << 2) + 0x4028) == arg2 && *(result + (arg3 << 2) + 0x402c) == arg4
            && *(result + (arg3 << 2) + 0x4030) == arg5 && *(result + (arg3 << 2) + 0x4034) == arg6)
        result.b = 0
        return result
    
    *(result + (arg3 << 2) + 0x4030) = arg5
    *(result + (arg3 << 2) + 0x4034) = arg6
    *(result + (arg3 << 2) + 0x4028) = arg2
    *(result + (arg3 << 2) + 0x402c) = arg4
    result.b = 1
    return result
}
