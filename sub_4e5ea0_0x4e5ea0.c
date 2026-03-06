// 函数名称: sub_4e5ea0
// 虚拟地址: 0x4e5ea0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

SOCKET __fastcallsub_4e5ea0(uint32_t arg1)
{
    // 第一条实际指令: SOCKET s
    SOCKET s
    
    if (arg1 == 1)
        s = WSASocketA(2, arg1, 6, nullptr, 0, arg1)
        
        if (s == 0xffffffff)
            return 0xffffffff
        
        int32_t optval = 1
        int32_t eax_2 = setsockopt(s, 6, 1, &optval, 4)
        
        if (eax_2 != 0xffffffff)
            goto label_4e5f0c
        
        sub_44e4d0(eax_2, &data_5559b1, "result != SOCKET_ERROR", 
            "c:\ax2017\engine\windows\windowsnetwork.cpp", 0x43, "SocketCreate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_18_3
    int32_t eax
    char* ecx
    
    if (arg1 != 0)
        char const* const var_14_4 = "SocketCreate"
        var_18_3 = 0x50
        ecx = "Halt"
    else
        s = WSASocketA(2, 2, 0x11, arg1, arg1, 1)
        
        if (s == 0xffffffff)
            return 0xffffffff
        
    label_4e5f0c:
        uint32_t argp = 1
        eax = ioctlsocket(s, 0x8004667e, &argp)
        
        if (eax != 0xffffffff)
            return s
        
        char const* const var_14_3 = "SocketCreate"
        var_18_3 = 0x55
        ecx = "result != SOCKET_ERROR"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\windows\windowsnetwork.cpp", var_18_3, 
        "SocketCreate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
