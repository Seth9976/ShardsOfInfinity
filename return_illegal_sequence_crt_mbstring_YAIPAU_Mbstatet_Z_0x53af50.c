// 函数名称: ?return_illegal_sequence@__crt_mbstring@@YAIPAU_Mbstatet@@@Z
// 虚拟地址: 0x53af50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?return_illegal_sequence@__crt_mbstring@@YAIPAU_Mbstatet@@@Z(int32_t* arg1)
{
    // 第一条实际指令: *arg1 = 0
    *arg1 = 0
    arg1[1] = 0
    *__errno() = 0x2a
    return 0xffffffff
}
