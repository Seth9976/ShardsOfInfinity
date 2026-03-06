// 函数名称: sub_5080e0
// 虚拟地址: 0x5080e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_5080e0(float arg1)
{
    // 第一条实际指令: float xmm0_1 = sub_41b760(arg1)
    float xmm0_1 = sub_41b760(arg1)
    
    if (not(1f <= xmm0_1))
        return fconvert.t(1f - (2.5f - xmm0_1 * 1.5f) * xmm0_1 * xmm0_1)
    
    if (2f <= xmm0_1)
        return float.t(0)
    
    return fconvert.t(2f - ((xmm0_1 * 0.5f - 2.5f) * xmm0_1 + 4f) * xmm0_1)
}
