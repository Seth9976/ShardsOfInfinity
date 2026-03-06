// 函数名称: sub_4a3230
// 虚拟地址: 0x4a3230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_4a3230(void* arg1)
{
    // 第一条实际指令: if (data_cdf428 == 0)
    if (data_cdf428 == 0)
        return 
    
    int32_t* ecx_1 = *(arg1 + 0xc)
    
    if (ecx_1 != 0)
        sub_48d180(ecx_1)
        *(arg1 + 0xc) = 0
    
    int32_t* ecx_2 = *(arg1 + 0x10)
    
    if (ecx_2 != 0)
        sub_48d180(ecx_2)
        *(arg1 + 0x10) = 0
}
