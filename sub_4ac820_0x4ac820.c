// 函数名称: sub_4ac820
// 虚拟地址: 0x4ac820
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_4ac820()
{
    // 第一条实际指令: void* ecx = data_cdf428
    void* ecx = data_cdf428
    
    if (ecx == 0)
        return 
    
    if (((*(ecx + 0x1c) u>> 6).b & 1) != 0)
        sub_4ac3c0()
        ecx = data_cdf428
    
    if (ecx == 0)
        return 
    
    if (((*(ecx + 0x1c) u>> 7).b & 1) != 0)
        sub_4a7af0()
        ecx = data_cdf428
    
    if (ecx == 0)
        return 
    
    int32_t ecx_1 = *(ecx + 0x1c)
    
    if (((ecx_1 u>> 5).b & 1) != 0 || ((ecx_1 u>> 7).b & 1) != 0 || ((ecx_1 u>> 6).b & 1) != 0)
        sub_4ac130()
}
