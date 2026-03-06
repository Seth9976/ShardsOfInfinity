// 函数名称: ?get_global_action_nolock@@YAPAP6AXH@ZH@Z
// 虚拟地址: 0x53658b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?get_global_action_nolock@@YAPAP6AXH@ZH@Z(int32_t arg1) __pure
{
    // 第一条实际指令: if (arg1 == 2)
    if (arg1 == 2)
        return &data_65a984
    
    if (arg1 != 6)
        if (arg1 == 0xf)
            return &data_65a990
        
        if (arg1 == 0x15)
            return &data_65a988
        
        if (arg1 != 0x16)
            return 0
    
    return &data_65a98c
}
