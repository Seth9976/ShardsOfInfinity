// 函数名称: ___vcrt_FlsGetValue
// 虚拟地址: 0x51f56b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___vcrt_FlsGetValue(uint32_t arg1)
{
    // 第一条实际指令: int32_t eax = try_get_function(2, "FlsGetValue", 0x54c778, 0x54c780)
    int32_t eax = try_get_function(2, "FlsGetValue", 0x54c778, 0x54c780)
    
    if (eax == 0)
        return TlsGetValue(arg1)
    
    return eax(arg1)
}
