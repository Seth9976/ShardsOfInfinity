// 函数名称: ___vcrt_FlsFree
// 虚拟地址: 0x51f530
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___vcrt_FlsFree(uint32_t arg1)
{
    // 第一条实际指令: int32_t eax = try_get_function(1, "FlsFree", 0x54c770, 0x54c778)
    int32_t eax = try_get_function(1, "FlsFree", 0x54c770, 0x54c778)
    
    if (eax == 0)
        return TlsFree(arg1)
    
    return eax(arg1)
}
