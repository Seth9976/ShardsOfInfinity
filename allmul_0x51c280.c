// 函数名称: __allmul
// 虚拟地址: 0x51c280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall__allmul(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    // 第一条实际指令: if ((arg4 | arg2) == 0)
    if ((arg4 | arg2) == 0)
        return arg1 * arg3
    
    int32_t result
    int32_t edx
    edx:result = mulu.dp.d(arg1, arg3)
    return result
}
