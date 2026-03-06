// 函数名称: ?__scrt_uninitialize_thread_safe_statics@@YAXXZ
// 虚拟地址: 0x51bb66
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL?__scrt_uninitialize_thread_safe_statics@@YAXXZ()
{
    // 第一条实际指令: DeleteCriticalSection(&data_659fac)
    DeleteCriticalSection(&data_659fac)
    BOOL hObject = data_659fc8
    
    if (hObject == 0)
        return hObject
    
    return CloseHandle(hObject)
}
