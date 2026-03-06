// 函数名称: ___vcrt_FlsSetValue
// 虚拟地址: 0x51f5a6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___vcrt_FlsSetValue(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = try_get_function(3, "FlsSetValue", 0x54c780, 0x54c788)
    int32_t eax = try_get_function(3, "FlsSetValue", 0x54c780, 0x54c788)
    
    if (eax == 0)
        return TlsSetValue(arg1, arg2)
    
    return eax(arg1, arg2)
}
