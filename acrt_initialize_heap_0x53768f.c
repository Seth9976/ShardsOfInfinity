// 函数名称: ___acrt_initialize_heap
// 虚拟地址: 0x53768f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HANDLE___acrt_initialize_heap()
{
    // 第一条实际指令: HANDLE result = GetProcessHeap()
    HANDLE result = GetProcessHeap()
    data_65aa88 = result
    result.b = result != 0
    return result
}
