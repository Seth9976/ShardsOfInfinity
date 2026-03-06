// 函数名称: sub_4e6100
// 虚拟地址: 0x4e6100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4e6100(SOCKET arg1, SOCKADDR* arg2, PSTR arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = sendto(arg1, arg3, arg4, 0, arg2, 0x10)
    int32_t result = sendto(arg1, arg3, arg4, 0, arg2, 0x10)
    
    if (result == 0xffffffff)
        enum WSA_ERROR eax = WSAGetLastError()
        
        if (eax == WSAEWOULDBLOCK)
            return 0
        
        enum WSA_ERROR var_c_1 = eax
        sub_44e260("socket error in UDPSend %d")
    
    return result
}
