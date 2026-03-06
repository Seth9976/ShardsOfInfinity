// 函数名称: sub_4e6580
// 虚拟地址: 0x4e6580
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4e6580(SOCKET arg1, PSTR arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = send(arg1, arg2, arg3, 0)
    int32_t result = send(arg1, arg2, arg3, 0)
    
    if (result != 0xffffffff)
        return result
    
    int32_t eax_1 = WSAGetLastError() - 0x2733
    int32_t eax_2 = neg.d(eax_1)
    return sbb.d(eax_2, eax_2, eax_1 != 0)
}
