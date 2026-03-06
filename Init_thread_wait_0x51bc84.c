// 函数名称: __Init_thread_wait
// 虚拟地址: 0x51bc84
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__Init_thread_wait(uint32_t arg1)
{
    // 第一条实际指令: if (data_659fc8 == 0)
    if (data_659fc8 == 0)
        uint32_t __security_cookie_1 = __security_cookie
        return ror.d(__security_cookie_1 ^ data_659fcc, __security_cookie_1.b & 0x1f)(0x659fc4, 
            &data_659fac, arg1)
    
    LeaveCriticalSection(&data_659fac)
    WaitForSingleObjectEx(data_659fc8, arg1, 0)
    return EnterCriticalSection(&data_659fac)
}
