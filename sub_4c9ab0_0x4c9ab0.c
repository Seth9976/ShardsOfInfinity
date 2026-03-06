// 函数名称: sub_4c9ab0
// 虚拟地址: 0x4c9ab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_4c9ab0()
{
    // 第一条实际指令: LRESULT ecx
    LRESULT ecx
    LRESULT var_4 = ecx
    BOOL result = data_ce26e4
    
    if (result != 0)
        result = *(result + 4)
        WPARAM edx
        
        if (result == 0x19)
            return sub_4c8660(ecx, edx)
        
        if (result == 0x1b)
            return sub_4c8c00(ecx)
    
    return result
}
