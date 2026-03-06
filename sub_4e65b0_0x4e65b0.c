// 函数名称: sub_4e65b0
// 虚拟地址: 0x4e65b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4e65b0(SOCKET arg1, PSTR arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = recv(arg1, arg2, arg3, 0)
    int32_t result = recv(arg1, arg2, arg3, 0)
    
    if (result != 0)
        if (result != 0xffffffff)
            return result
        
        if (WSAGetLastError() == WSAEWOULDBLOCK)
            return 0
    
    return 0xffffffff
}
