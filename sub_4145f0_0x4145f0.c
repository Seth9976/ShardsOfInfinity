// 函数名称: sub_4145f0
// 虚拟地址: 0x4145f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4145f0(int32_t arg1, float arg2 @ xmm0, float arg3 @ xmm1, float arg4 @ xmm2)
{
    // 第一条实际指令: double* eax
    double* eax
    int32_t esi
    int32_t edi
    int32_t mxcsr
    int16_t x87control
    double xmm0_71
    
    switch (arg1)
        case 6
            if (0.5f < arg2)
                float xmm3_8 = arg2 - 0.5f
            else
                float xmm3_5 = arg2 + arg2
            
            return 
        case 7
            return 
        case 0xa
            _mm_cvtpd_ps(__andps_xmmxud_memxud(_mm_cvtps_pd(1f - (arg2 + arg2)), data_59e5a0))
            return 
        case 0xb
            _mm_cvtpd_ps(__andps_xmmxud_memxud(_mm_cvtps_pd(1f - (arg2 + arg2)), data_59e5a0))
            return 
        case 0xc
            _mm_cvtpd_ps(__andps_xmmxud_memxud(_mm_cvtps_pd(1f - (arg2 + arg2)), data_59e5a0))
            return 
        case 0xd
            _mm_cvtpd_ps(__andps_xmmxud_memxud(_mm_cvtps_pd(1f - (arg2 + arg2)), data_59e5a0))
            return 
        case 0xe
            eax, xmm0_71 = __libm_sse2_sin_precise(mxcsr, x87control, fconvert.d(arg2 * 6.28318548f))
            return 
        case 0xf
            eax, xmm0_71 = __libm_sse2_sin_precise(mxcsr, x87control, 
                _mm_cvtps_pd((3f - (arg2 + arg2)) * arg2 * arg2 * 6.28318548f))
            return 
        case 0x13
            return 
        case 0x14
            int16_t x87control_1
            double xmm0_50
            x87control_1, xmm0_50 = __libm_sse2_sin_precise(mxcsr, x87control, 
                fconvert.d((arg2 - 0.075000003f) * 6.28318548f / 0.300000012f))
            _mm_cvtps_pd(arg2 * -10f)
            double xmm0_53
            eax, xmm0_53 = __libm_sse2_pow_precise(esi, edi, mxcsr, x87control_1, 2.0)
            return 
        case 0x15
            int16_t x87control_2
            double xmm0_60
            x87control_2, xmm0_60 = __libm_sse2_sin_precise(mxcsr, x87control, 
                fconvert.d((arg2 - 0.075000003f) * 6.28318548f / 0.300000012f))
            _mm_cvtps_pd(arg2 * -25f)
            double xmm0_63
            eax, xmm0_63 = __libm_sse2_pow_precise(esi, edi, mxcsr, x87control_2, 2.0)
            return 
        case 0x18
            double xmm0_67
            eax, xmm0_67 = __libm_sse2_cos_precise(mxcsr, x87control, fconvert.d(arg2 * 6.28318548f))
            return 
        case 0x1c
            return 
    
    sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\mathfunctions.cpp", 0x25a, 
        "XCurveEvalNormal")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
