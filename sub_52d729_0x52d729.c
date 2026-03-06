// 函数名称: sub_52d729
// 虚拟地址: 0x52d729
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_52d729() __noreturn
{
    // 第一条实际指令: if (IsProcessorFeaturePresent(0x17) != 0)
    if (IsProcessorFeaturePresent(0x17) != 0)
        trap(0xd)
    
    sub_52d554(2, 0xc0000417, 1)
    TerminateProcess(GetCurrentProcess(), 0xc0000417)
    noreturn
}
