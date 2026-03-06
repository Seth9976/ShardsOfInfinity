// 函数名称: sub_4e6150
// 虚拟地址: 0x4e6150
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4e6150(int32_t arg1, SOCKET arg2, SOCKADDR* arg3, PSTR arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t fromlen = arg1
    int32_t fromlen = arg1
    fromlen = 0x10
    int32_t result = recvfrom(arg2, arg4, arg5, 0, arg3, &fromlen)
    
    if (result == 0xffffffff)
        enum WSA_ERROR eax = WSAGetLastError()
        
        if (eax == WSAEWOULDBLOCK || eax == WSAECONNRESET)
            return 0
    
    return result
}
