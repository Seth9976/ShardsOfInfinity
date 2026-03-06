// 函数名称: ___vcrt_InitializeCriticalSectionEx
// 虚拟地址: 0x51f5e4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___vcrt_InitializeCriticalSectionEx(CRITICAL_SECTION* arg1, uint32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax = try_get_function(4, "InitializeCriticalSectionEx", 0x54c788, &data_54c790)
    int32_t eax = try_get_function(4, "InitializeCriticalSectionEx", 0x54c788, &data_54c790)
    
    if (eax == 0)
        return InitializeCriticalSectionAndSpinCount(arg1, arg2)
    
    return eax(arg1, arg2, arg3)
}
