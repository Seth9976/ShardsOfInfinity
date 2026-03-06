// 函数名称: sub_5432a8
// 虚拟地址: 0x5432a8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_5432a8(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 1
    int32_t result = *(arg1 - 0x10) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffe
    return sub_429d10(*(arg1 - 0x14)) __tailcall
}
