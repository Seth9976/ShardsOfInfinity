// 函数名称: $LN13
// 虚拟地址: 0x5236d7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t$LN13(void* arg1 @ ebp, int32_t arg2 @ esi)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        __acrt_stdio_free_stream(*(arg1 - 0x1c))
    
    return __unlock_file(*(arg1 - 0x1c))
}
