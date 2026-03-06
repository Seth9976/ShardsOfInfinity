// 函数名称: sub_4e6430
// 虚拟地址: 0x4e6430
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4e6430(int32_t arg1, SOCKADDR* arg2)
{
    // 第一条实际指令: void var_128
    void var_128
    int32_t eax_1 = __security_cookie ^ &var_128
    int32_t readfds
    _memset(&readfds, 0, 0x104)
    int32_t var_114 = arg1
    readfds = 1
    TIMEVAL timeout
    __builtin_memset(&timeout, 0, 8)
    int32_t result = select(arg1, &readfds, nullptr, nullptr, &timeout)
    int32_t var_138
    char const* const ecx
    
    if (result != 0xffffffff)
        int32_t* param1 = &readfds
        
        if (result s> 0)
            int32_t addrlen = 0x10
            result = __WSAFDIsSet(arg1, param1)
            int32_t var_138_2
            char* ecx_1
            
            if (result != 0)
                result = accept(arg1, arg2, &addrlen)
                
                if (result == 0xffffffff)
                    char const* const var_134_4 = "WinsockNetworkInterface::TCPListenAccept"
                    var_138_2 = 0x126
                    ecx_1 = "acceptSocket != INVALID_SOCKET"
                    goto label_4e652a
                
                @__security_check_cookie@4(eax_1 ^ &var_128)
                return result
            
            char const* const var_134_2 = "WinsockNetworkInterface::TCPListenAccept"
            var_138_2 = 0x124
            ecx_1 = "FD_ISSET((SOCKET)handle, &fdread)"
        label_4e652a:
            sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\engine\windows\windowsnetwork.cpp", 
                var_138_2, "WinsockNetworkInterface::TCPListenAccept")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = __WSAFDIsSet(arg1, param1)
        
        if (result == 0)
            @__security_check_cookie@4(eax_1 ^ &var_128)
            return result
        
        char const* const var_134_5 = "WinsockNetworkInterface::TCPListenAccept"
        var_138 = 0x12b
        ecx = "FD_ISSET((SOCKET)handle, &fdread) == false"
    else
        char const* const var_134_1 = "WinsockNetworkInterface::TCPListenAccept"
        var_138 = 0x11f
        ecx = "result != SOCKET_ERROR"
    
    sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\windows\windowsnetwork.cpp", var_138, 
        "WinsockNetworkInterface::TCPListenAccept")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
