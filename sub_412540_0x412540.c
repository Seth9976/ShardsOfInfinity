// 函数名称: sub_412540
// 虚拟地址: 0x412540
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HANDLEsub_412540()
{
    // 第一条实际指令: sub_44e450("app resume")
    sub_44e450("app resume")
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    int32_t var_c
    sub_44eab0(performanceCount_1 - data_65aac0, 
        sbb.d(var_c, data_65aac4, performanceCount_1 u< data_65aac0))
    QueryPerformanceCounter(&performanceCount)
    data_65aac0 = performanceCount
    data_65aac4 = var_c
    return CreateThread(nullptr, 0x100000, sub_411200, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
}
