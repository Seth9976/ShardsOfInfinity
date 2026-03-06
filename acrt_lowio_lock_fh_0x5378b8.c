// 函数名称: ___acrt_lowio_lock_fh
// 虚拟地址: 0x5378b8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_lowio_lock_fh(int32_t arg1)
{
    // 第一条实际指令: return EnterCriticalSection((arg1 & 0x3f) * 0x30 + (&data_65a778)[arg1 s>> 6])
    return EnterCriticalSection((arg1 & 0x3f) * 0x30 + (&data_65a778)[arg1 s>> 6])
}
