// 函数名称: ?__scrt_initialize_thread_safe_statics@@YAHXZ
// 虚拟地址: 0x51ba50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?__scrt_initialize_thread_safe_statics@@YAHXZ()
{
    // 第一条实际指令: __scrt_initialize_thread_safe_statics_platform_specific()
    __scrt_initialize_thread_safe_statics_platform_specific()
    
    if (___scrt_initialize_onexit_tables(0) == 0)
        ___scrt_fastfail(7)
        breakpoint
    
    _atexit(__scrt_uninitialize_thread_safe_statics)
    return 0
}
