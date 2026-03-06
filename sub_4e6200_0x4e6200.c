// 函数名称: sub_4e6200
// 虚拟地址: 0x4e6200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4e6200(int32_t arg1)
{
    // 第一条实际指令: void var_22c
    void var_22c
    int32_t eax_1 = __security_cookie ^ &var_22c
    int32_t var_220
    _memset(&var_220, 0, 0x104)
    int32_t var_21c = arg1
    var_220 = 1
    int32_t var_118
    _memset(&var_118, 0, 0x104)
    int32_t var_114 = arg1
    var_118 = 1
    TIMEVAL timeout
    __builtin_memset(&timeout, 0, 8)
    int32_t eax_2 = select(arg1, nullptr, &var_220, &var_118, &timeout)
    
    if (eax_2 == 0xffffffff)
        sub_44e4d0(eax_2, &data_5559b1, "result != SOCKET_ERROR", 
            "c:\ax2017\engine\windows\windowsnetwork.cpp", 0xeb, 
            "WinsockNetworkInterface::TCPIsConnected")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (__WSAFDIsSet(arg1, &var_220) != 0)
        @__security_check_cookie@4(eax_1 ^ &var_22c)
        return 4
    
    int32_t eax_5 = __WSAFDIsSet(arg1, &var_118)
    int32_t eax_6 = neg.d(eax_5)
    @__security_check_cookie@4(eax_1 ^ &var_22c)
    return (sbb.d(eax_6, eax_6, eax_5 != 0) & 3) + 2
}
