// 函数名称: sub_4e6320
// 虚拟地址: 0x4e6320
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

SOCKET __stdcallsub_4e6320(int16_t arg1)
{
    // 第一条实际指令: SOCKADDR name
    SOCKADDR name
    SOCKET s = __security_cookie ^ &name
    SOCKET s_1 = s
    int32_t var_28
    char const* const ecx
    
    if (arg1 != 0)
        s = sub_4e5ea0(1)
        
        if (s != 0)
            name.sa_family = 2
            uint32_t eax_1 = htonl(0)
            name.sa_data[2] = eax_1.b
            name.sa_data[3] = eax_1:1.b
            name.sa_data[4] = eax_1:2.b
            name.sa_data[5] = eax_1:3.b
            uint16_t eax_2 = htons(arg1)
            name.sa_data[0] = eax_2.b
            name.sa_data[1] = eax_2:1.b
            
            if (bind(s, &name, 0x10) != 0)
                sub_44e260("tcp bind failed\n")
                @__security_check_cookie@4(s_1 ^ &name)
                return 0
            
            if (listen(s, 0x10) == 0)
                @__security_check_cookie@4(s_1 ^ &name)
                return s
            
            sub_44e260("tcp listen failed\n")
            @__security_check_cookie@4(s_1 ^ &name)
            return 0
        
        char const* const var_24_2 = "WinsockNetworkInterface::TCPListenStart"
        var_28 = 0xfb
        ecx = "socket != 0"
    else
        char const* const var_24 = "WinsockNetworkInterface::TCPListenStart"
        var_28 = 0xf8
        ecx = "port != 0"
    
    sub_44e4d0(s, &data_5559b1, ecx, "c:\ax2017\engine\windows\windowsnetwork.cpp", var_28, 
        "WinsockNetworkInterface::TCPListenStart")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
