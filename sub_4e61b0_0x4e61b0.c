// 函数名称: sub_4e61b0
// 虚拟地址: 0x4e61b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

SOCKET __stdcallsub_4e61b0(SOCKADDR* arg1)
{
    // 第一条实际指令: SOCKET s = sub_4e5ea0(1)
    SOCKET s = sub_4e5ea0(1)
    
    if (s != 0xffffffff)
        int32_t eax = connect(s, arg1, 0x10)
        enum WSA_ERROR eax_1
        
        if (eax == 0xffffffff)
            eax_1 = WSAGetLastError()
        
        if (eax != 0xffffffff || eax_1 == WSAEWOULDBLOCK)
            return s
        
        closesocket(s)
    
    return 0xffffffff
}
