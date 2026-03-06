// 函数名称: __Init_thread_abort
// 虚拟地址: 0x51bb82
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__Init_thread_abort(int32_t* arg1)
{
    // 第一条实际指令: EnterCriticalSection(&data_659fac)
    EnterCriticalSection(&data_659fac)
    *arg1 = 0
    LeaveCriticalSection(&data_659fac)
    return __Init_thread_notify() __tailcall
}
