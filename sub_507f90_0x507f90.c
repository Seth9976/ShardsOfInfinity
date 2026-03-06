// 函数名称: sub_507f90
// 虚拟地址: 0x507f90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_507f90(float arg1, float arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    float xmm3_1 = arg2 * 0.5f
    float xmm1_1 = xmm3_1 + 0.5f
    float xmm0_1 = sub_41b760(arg1)
    
    if (not(xmm0_1 < xmm1_1))
        return float.t(0)
    
    if (0.5f - xmm3_1 < xmm0_1)
        return (fconvert.t(xmm1_1) - fconvert.t(xmm0_1)) / fconvert.t(arg2)
    
    return float.t(1)
}
