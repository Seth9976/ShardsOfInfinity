// 函数名称: sub_452d30
// 虚拟地址: 0x452d30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t* __convention("regparm")sub_452d30(int32_t arg1, int32_t arg2, int32_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: float xmm1 = *arg3
    float xmm1 = *arg3
    float xmm1_1 = arg3[1]
    float xmm1_3 = arg3[2]
    uint32_t eax
    float xmm0_4
    eax, xmm0_4 = sub_412d90(xmm1 * xmm1 + xmm1_1 * xmm1_1 + xmm1_3 * xmm1_3)
    
    if (not(xmm0_4 <= 9.99999975e-06f))
        float xmm0_5 = 1f / xmm0_4
        float xmm3_1 = arg3[2] f* xmm0_5
        *arg4 = _mm_unpacklo_ps(xmm1 * xmm0_5, arg3[1] f* xmm0_5)
        arg4[1].d = xmm3_1
        return arg4
    
    sub_44e4d0(eax, &data_5559b1, "length > EPSILON", "c:\ax2017\engine\vec3.cpp", 0x12e, "Norm")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
