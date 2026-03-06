// 函数名称: sub_508040
// 虚拟地址: 0x508040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_508040(float arg1)
{
    // 第一条实际指令: float xmm0_1 = sub_41b760(arg1)
    float xmm0_1 = sub_41b760(arg1)
    
    if (not(1f <= xmm0_1))
        return fconvert.t((xmm0_1 * xmm0_1 * (xmm0_1 * 3f - 6f) + 4f) / 6f)
    
    if (2f <= xmm0_1)
        return float.t(0)
    
    return fconvert.t((((6f - xmm0_1) * xmm0_1 - 12f) * xmm0_1 + 8f) / 6f)
}
