// 函数名称: __tosnan1
// 虚拟地址: 0x5360b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__tosnan1(void* arg1 @ ebp, int80_t arg2 @ st0)
{
    // 第一条实际指令: *(arg1 - 0x9e) = arg2
    *(arg1 - 0x9e) = arg2
    long double result = *(arg1 - 0x9e)
    
    if ((*(arg1 - 0x97) & 0x40) == 0)
        *(arg1 - 0x90) = 0
        return result + fconvert.t(1.0)
    
    *(arg1 - 0x90) = 0
    return result
}
