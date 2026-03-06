// 函数名称: __unwindfunclet$?do_transform@?$collate@G@std@@MBE?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PBG0@Z$0
// 虚拟地址: 0x544eb8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__unwindfunclet$?do_transform@?$collate@G@std@@MBE?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PBG0@Z$0(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 1
    int32_t result = *(arg1 - 0x10) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffe
    return sub_411610(*(arg1 + 8)) __tailcall
}
