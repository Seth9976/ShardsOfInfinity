// 函数名称: sub_4d2f50
// 虚拟地址: 0x4d2f50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_4d2f50()
{
    // 第一条实际指令: void* ecx = data_ce26e4
    void* ecx = data_ce26e4
    
    if (ecx == 0)
        return 
    
    int32_t eax = *(ecx + 4)
    
    if (eax == 0x22 || eax == 0x1d || eax == 0x19 || eax == 0x1b || eax == 0x1e || eax == 0x20)
        *(ecx + 0x1c) -= 1
    
    data_ce26e4 = 0
}
