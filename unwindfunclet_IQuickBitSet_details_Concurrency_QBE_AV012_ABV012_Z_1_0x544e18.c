// 函数名称: __unwindfunclet$??IQuickBitSet@details@Concurrency@@QBE?AV012@ABV012@@Z$1
// 虚拟地址: 0x544e18
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__unwindfunclet$??IQuickBitSet@details@Concurrency@@QBE?AV012@ABV012@@Z$1(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x18) & 1
    int32_t result = *(arg1 - 0x18) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x18) &= 0xfffffffe
    return sub_411610(*(arg1 + 8)) __tailcall
}
