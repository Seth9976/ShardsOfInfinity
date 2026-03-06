// 函数名称: sub_4983d0
// 虚拟地址: 0x4983d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t*sub_4983d0(int64_t* arg1)
{
    // 第一条实际指令: float xmm0_4
    float xmm0_4
    float xmm1_4
    float xmm3_4
    float i
    
    do
        float eax_3 = (sub_452ac0() & 0x7fffff) | 0x3f800000
        float xmm1_2 = ((sub_452ac0() & 0x7fffff) | 0x3f800000) - 1f
        float xmm3_2 = eax_3 - 1f
        float xmm0_2 = ((sub_452ac0() & 0x7fffff) | 0x3f800000) - 1f
        xmm1_4 = xmm1_2 + xmm1_2 - 1f
        xmm3_4 = xmm3_2 + xmm3_2 - 1f
        xmm0_4 = xmm0_2 + xmm0_2 - 1f
        i = xmm0_4 * xmm0_4 + xmm1_4 * xmm1_4 + xmm3_4 * xmm3_4
    while (i > 1f)
    
    uint32_t eax_10
    float xmm0_8
    eax_10, xmm0_8 = sub_412d90(i)
    
    if (not(xmm0_8 <= 9.99999975e-06f))
        float xmm1_7 = 1f / xmm0_8
        *arg1 = _mm_unpacklo_ps(xmm0_4 * xmm1_7, xmm1_4 * xmm1_7)
        arg1[1].d = xmm3_4 * xmm1_7
        return arg1
    
    sub_44e4d0(eax_10, &data_5559b1, "length > EPSILON", "c:\ax2017\engine\vec3.cpp", 0x12e, "Norm")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
