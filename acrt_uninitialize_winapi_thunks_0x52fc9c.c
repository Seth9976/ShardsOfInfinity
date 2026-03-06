// 函数名称: ___acrt_uninitialize_winapi_thunks
// 虚拟地址: 0x52fc9c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___acrt_uninitialize_winapi_thunks(char arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        for (void* i = &data_65a688; i != &data_65a6d8; i += 4)
            if (*i != 0)
                if (*i != 0xffffffff)
                    FreeLibrary(*i)
                
                *i = 0
    
    BOOL result
    result.b = 1
    return result
}
