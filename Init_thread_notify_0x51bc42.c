// 函数名称: __Init_thread_notify
// 虚拟地址: 0x51bc42
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL__Init_thread_notify()
{
    // 第一条实际指令: HANDLE hEvent = data_659fc8
    HANDLE hEvent = data_659fc8
    
    if (hEvent != 0)
        SetEvent(hEvent)
        return ResetEvent(data_659fc8)
    
    uint32_t __security_cookie_1 = __security_cookie
    return ror.d(__security_cookie_1 ^ data_659fd0, __security_cookie_1.b & 0x1f)(0x659fc4)
}
