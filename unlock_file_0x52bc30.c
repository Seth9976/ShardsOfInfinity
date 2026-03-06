// 函数名称: __unlock_file
// 虚拟地址: 0x52bc30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__unlock_file(void* arg1)
{
    // 第一条实际指令: return LeaveCriticalSection(arg1 + 0x20)
    return LeaveCriticalSection(arg1 + 0x20)
}
