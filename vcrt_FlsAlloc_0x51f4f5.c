// 函数名称: ___vcrt_FlsAlloc
// 虚拟地址: 0x51f4f5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___vcrt_FlsAlloc(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = try_get_function(0, "FlsAlloc", 0x54c768, 0x54c770)
    int32_t eax = try_get_function(0, "FlsAlloc", 0x54c768, 0x54c770)
    
    if (eax == 0)
        return TlsAlloc() __tailcall
    
    return eax(arg1)
}
