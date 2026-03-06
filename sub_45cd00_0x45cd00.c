// 函数名称: sub_45cd00
// 虚拟地址: 0x45cd00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_45cd00()
{
    // 第一条实际指令: int32_t performanceCount_1
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    
    if (SteamAPI_Init() == 0)
        sub_44e260("SteamAPI_Init failed")
        int32_t eax_1
        eax_1.b = 0
        return eax_1
    
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_2 = performanceCount
    int32_t var_14
    int32_t var_c
    uint32_t var_24 = sub_44eab0(performanceCount_2 - performanceCount_1, 
        sbb.d(var_14, var_c, performanceCount_2 u< performanceCount_1))
    sub_44e260("SteamAPI_Init success. (%d ms)")
    sub_44e260("GameCenterQueryDLC")
    int32_t eax_5
    eax_5.b = 1
    return eax_5
}
