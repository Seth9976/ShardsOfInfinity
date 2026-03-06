// 函数名称: ___acrt_unlock
// 虚拟地址: 0x52e01e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_unlock(int32_t arg1)
{
    // 第一条实际指令: return LeaveCriticalSection(arg1 * 0x18 + &data_65a3d8)
    return LeaveCriticalSection(arg1 * 0x18 + &data_65a3d8)
}
