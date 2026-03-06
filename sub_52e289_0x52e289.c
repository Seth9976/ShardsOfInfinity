// 函数名称: sub_52e289
// 虚拟地址: 0x52e289
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_52e289() __noreturn
{
    // 第一条实际指令: if (___acrt_get_sigabrt_handler() != 0)
    if (___acrt_get_sigabrt_handler() != 0)
        sub_536645(0x16)
    
    if ((data_5b01d0 & 2) != 0)
        if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
            trap(0xd)
        
        sub_52d554(3, 0x40000015, 1)
    
    sub_52a0ce(3)
    breakpoint
}
