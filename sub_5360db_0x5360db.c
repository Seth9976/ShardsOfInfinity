// 函数名称: sub_5360db
// 虚拟地址: 0x5360db
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_5360db(void* arg1 @ ebp, long double arg2 @ st0, int80_t arg3 @ st1)
{
    // 第一条实际指令: *(arg1 - 0x9e) = arg3
    *(arg1 - 0x9e) = arg3
    long double x87_r0_1 = *(arg1 - 0x9e)
    
    if ((*(arg1 - 0x97) & 0x40) == 0)
        *(arg1 - 0x90) = 0
    else
        *(arg1 - 0x90) = 0
    
    return arg2 + x87_r0_1
}
