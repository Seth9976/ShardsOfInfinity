// 函数名称: sub_544f8e
// 虚拟地址: 0x544f8e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_544f8e(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x54) & 1
    int32_t result = *(arg1 - 0x54) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x54) &= 0xfffffffe
    return sub_4c0240(*(arg1 - 0x6c)) __tailcall
}
