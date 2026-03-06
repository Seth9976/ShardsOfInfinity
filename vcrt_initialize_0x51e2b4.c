// 函数名称: ___vcrt_initialize
// 虚拟地址: 0x51e2b4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___vcrt_initialize()
{
    // 第一条实际指令: sub_51f1d9()
    sub_51f1d9()
    ___vcrt_initialize_winapi_thunks()
    
    if (___vcrt_initialize_locks() != 0)
        if (___vcrt_initialize_ptd() != 0)
            return 1
        
        ___vcrt_uninitialize_locks()
    
    return 0
}
