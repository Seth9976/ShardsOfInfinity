// 函数名称: __allshl
// 虚拟地址: 0x53bf00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")__allshl(int32_t arg1, int32_t arg2, char arg3) __pure
{
    // 第一条实际指令: if (arg3 u>= 0x40)
    if (arg3 u>= 0x40)
        return 0
    
    if (arg3 u>= 0x20)
        return 0
    
    return arg1 << arg3
}
