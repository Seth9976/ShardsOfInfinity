// 函数名称: ___vcrt_freefls@4
// 虚拟地址: 0x51e338
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall___vcrt_freefls@4(int32_t arg1)
{
    // 第一条实际指令: int32_t result = arg1
    int32_t result = arg1
    
    if (result != 0 && result != 0x65a314)
        result = _free(result)
    
    return result
}
