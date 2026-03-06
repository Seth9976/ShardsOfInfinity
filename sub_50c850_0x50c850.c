// 函数名称: sub_50c850
// 虚拟地址: 0x50c850
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50c850(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t (* arg5)[0x4], int32_t arg6, int32_t arg7, float arg8, float arg9, float arg10, float arg11)
{
    // 第一条实际指令: float xmm3_1 = _mm_cvtepi32_ps(zx.o(arg6))
    float xmm3_1 = _mm_cvtepi32_ps(zx.o(arg6))
    int32_t var_e0 = arg3
    int32_t var_d0 = arg6
    int32_t var_dc = arg4
    int32_t var_cc = arg7
    float xmm4_1 = xmm3_1 / _mm_cvtepi32_ps(zx.o(arg3))
    int32_t var_a4 = 4
    float var_c0 = arg9
    float var_b8 = arg11
    float xmm6_1 = arg11 - arg9
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(arg7))
    float var_bc = arg10
    float xmm5_1 = arg10 - arg8
    float xmm2_2 = xmm1_2 / _mm_cvtepi32_ps(zx.o(arg4)) / xmm6_1
    float xmm4_2 = xmm4_1 / xmm5_1
    int32_t ecx_1
    ecx_1.b = xmm4_2 <= 1f
    int32_t var_94 = ecx_1 + 4
    int32_t eax_1
    eax_1.b = xmm2_2 <= 1f
    int32_t var_90 = eax_1 + 4
    float var_c4 = arg8
    float var_ac = xmm4_2
    float var_a8 = xmm2_2
    float var_b4 = xmm3_1 * arg8 / xmm5_1
    float var_b0 = xmm1_2 * arg9 / xmm6_1
    void var_e4
    long double x87_r0
    long double x87_r1
    long double x87_r2
    int32_t eax_3 = sub_50c100(&var_e4, x87_r0, x87_r1, x87_r2)
    int32_t var_f4 = eax_3
    int32_t eax_4
    int32_t ecx_4
    eax_4, ecx_4 = _malloc()
    
    if (eax_4 == 0)
        return eax_4
    
    int32_t var_f4_1 = eax_3
    int32_t var_f8 = eax_4
    void var_114
    long double x87_r3
    long double x87_r6
    int32_t eax_5 = sub_50c430(eax_4, arg2, &var_e4, x87_r3, x87_r6, x87_r2, ecx_4, arg5, var_114)
    _free(eax_4)
    return eax_5
}
