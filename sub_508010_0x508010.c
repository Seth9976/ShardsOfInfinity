// 函数名称: sub_508010
// 虚拟地址: 0x508010
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_508010(float arg1)
{
    // 第一条实际指令: float xmm0_1 = sub_41b760(arg1)
    float xmm0_1 = sub_41b760(arg1)
    
    if (1f < xmm0_1)
        return float.t(0)
    
    return float.t(1) - fconvert.t(xmm0_1)
}
