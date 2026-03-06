// 函数名称: ___vcrt_uninitialize_winapi_thunks
// 虚拟地址: 0x51f654
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void___vcrt_uninitialize_winapi_thunks(char arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return 
    
    for (void* i = &data_65a35c; i != &data_65a368; i += 4)
        if (*i != 0)
            if (*i != 0xffffffff)
                FreeLibrary(*i)
            
            *i = 0
}
