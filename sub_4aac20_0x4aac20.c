// 函数名称: sub_4aac20
// 虚拟地址: 0x4aac20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_4aac20()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    uint32_t result
    
    if (*(data_65ae00 + 0x1c) != 0)
        if (data_ce19bf != 0)
            result.b = 1
            return result
        
        result = data_cdf428
        
        if (result == 0)
            result.b = 1
            return result
        
        result.b = (*(result + 0x1c) u>> 0xd).b & 1
        
        if (result.b == 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
