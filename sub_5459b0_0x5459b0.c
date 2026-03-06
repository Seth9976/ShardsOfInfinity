// 函数名称: sub_5459b0
// 虚拟地址: 0x5459b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_5459b0(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x14) & 0x10
    int32_t result = *(arg1 - 0x14) & 0x10
    
    if (result == 0)
        return result
    
    *(arg1 - 0x14) &= 0xffffffef
    return sub_44f380(arg1 - 0x2c) __tailcall
}
