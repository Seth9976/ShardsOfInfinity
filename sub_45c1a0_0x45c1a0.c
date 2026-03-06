// 函数名称: sub_45c1a0
// 虚拟地址: 0x45c1a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_45c1a0(int32_t arg1, int32_t, int32_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: float xmm4 = arg3[3]
    float xmm4 = arg3[3]
    float xmm3 = *arg3
    float xmm5 = arg3[2]
    float xmm2 = arg3[1]
    float xmm1_2 = xmm2 * xmm3 + xmm5 * xmm4
    float xmm5_2 = xmm5 * xmm3 - xmm2 * xmm4
    *arg4 = _mm_unpacklo_ps(xmm3 * xmm3 + xmm4 * xmm4 - xmm5 * xmm5 - xmm2 * xmm2, xmm1_2 + xmm1_2)
    arg4[1].d = xmm5_2 + xmm5_2
    return arg4
}
