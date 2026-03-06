// 函数名称: sub_52c5b0
// 虚拟地址: 0x52c5b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_52c5b0(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, double arg3, int16_t arg4, uint64_t (* arg5)[0x2])
{
    // 第一条实际指令: double var_c
    double var_c
    
    if (data_e4abb4 != 0)
        int32_t eax_2 = arg1 & 0x7f80
        bool cond:0_1 = eax_2 != 0x1f80
        
        if (eax_2 == 0x1f80)
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
            eax_2.w = temp0_1
            eax_2.w &= 0x7f
            cond:0_1 = eax_2.w != 0x7f
        
        if (not(cond:0_1))
            uint128_t xmm0 = zx.o(arg3)
            int32_t xmm2[0x4] = data_54dc30
            uint64_t xmm0_2[0x2] = _mm_srli_epi64(_mm_slli_epi64(xmm0, 1), 0x35)
            int32_t xmm3_1 = _mm_srli_epi64(xmm0, 0x34)
            uint64_t xmm4_1[0x2] = __andpd_xmmxuq_memxuq(xmm0, data_54dc40)
            int32_t eax_3 = xmm0_2
            int32_t xmm2_1[0x4] = _mm_sub_epi32(xmm2, xmm0_2)
            uint64_t (* ecx)[0x2] = arg5
            double xmm1_2 = _mm_sll_epi64(_mm_srl_epi64(xmm0, xmm2_1), xmm2_1)
            
            if (eax_3 s< 0x3ff)
                *ecx = xmm4_1
                return fconvert.t(arg3)
            
            if (eax_3 s<= 0x432)
                *ecx = xmm1_2
                arg3 = _mm_or_pd(xmm0.q - xmm1_2, xmm4_1)
                return fconvert.t(arg3)
            
            uint64_t xmm0_3[0x2] = zx.o(arg3)
            
            if (eax_3 != 0x7ff)
                *ecx = xmm0_3
                long double x87_r7_2 = float.t(0)
                
                if (xmm3_1 s< 0x800)
                    return x87_r7_2
                
                return fneg(x87_r7_2)
            
            uint64_t xmm0_4[0x2] = xmm0_3 f+ xmm0_3
            *ecx = xmm0_4
            uint64_t xmm0_6[0x2] =
                __cmppd_xmmpd_mempd_immb(__andpd_xmmxuq_memxuq(xmm0_4, data_54dc20), data_54dc50, 4)
            uint32_t eax_4 = _mm_extract_epi16(xmm0_6, 0)
            double xmm0_8 = _mm_or_pd(_mm_and_pd(xmm0_6, xmm0_3), xmm4_1)
            
            if (eax_4 == 0)
                arg3 = xmm0_8
                return fconvert.t(arg3)
            
            var_c = xmm0_8
            int64_t var_14
            var_14:4.d = 0x3ef
            var_14.d = &var_c
            sub_534d94(&arg3, &arg5, var_14, var_c, arg1)
            return fconvert.t(var_c)
    
    int32_t __saved_ebp_3
    int32_t __saved_ebp_2 = __saved_ebp_3
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_esi_2
    int32_t __saved_esi_1 = __saved_esi_2
    int32_t edi
    int32_t var_20 = edi
    int32_t var_24 = 0
    int32_t var_28 = 0
    int32_t eax_5
    int16_t x87control
    eax_5, x87control = __ctrlfp(arg2, 0, 0)
    int32_t var_2c = 0xffff
    int32_t var_30 = data_5b03e0
    int16_t x87control_1 = __ctrlfp(x87control)
    __saved_esi_2.w = arg4
    int32_t ecx_2 = zx.d(__saved_esi_2.w) & 0x7ff0
    int32_t var_28_1 = ecx_2
    long double x87_r7_11
    
    if (ecx_2.w != 0x7ff0)
        var_28_1.q = fconvert.d(fconvert.t(arg3))
        long double st0_3 = __frnd(var_28_1)
        *arg5 = fconvert.d(st0_3)
        long double x87_r7_15 = fconvert.t(arg3) - st0_3
        double var_14_1 = fconvert.d(x87_r7_15)
        var_c = fconvert.d(x87_r7_15)
        long double x87_r6_3 = float.t(0)
        x87_r6_3 - x87_r7_15
        double* eax_7
        eax_7.w = (x87_r6_3 < x87_r7_15 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_15) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_15 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            int16_t var_6
            int16_t var_6_1 = var_6 | (__saved_esi_2.w & 0x8000)
            var_14_1 = fconvert.d(fconvert.t(var_c))
        
        int32_t var_24_4 = 0xffff
        __ctrlfp(x87control_1, eax_5.w, 0xffff)
        x87_r7_11 = fconvert.t(var_14_1)
    else
        uint64_t (* esi)[0x2] = arg5
        *esi = fconvert.d(fconvert.t(-nan(ind).0))
        long double x87_r7_6 = fconvert.t(arg3)
        var_c = fconvert.d(x87_r7_6)
        var_28_1.q = fconvert.d(x87_r7_6)
        int32_t eax_6 = __sptype(var_28_1, ecx_2)
        
        if (eax_6 s<= 0)
        label_534d23:
            long double x87_r7_12 = fconvert.t(arg3)
            long double x87_r6_2 = fconvert.t(1.0) + x87_r7_12
            int32_t var_24_3 = eax_5
            *esi = fconvert.d(x87_r6_2)
            var_2c.q = fconvert.d(x87_r6_2)
            int32_t var_38_1 = 0x1c
            int32_t var_3c_1 = 8
            return sub_5328f0(8, 0x1c, (fconvert.d(x87_r7_12)).d)
        
        if (eax_6 s<= 2)
            long double x87_r7_8 = fconvert.t(arg3)
            *esi = fconvert.d(x87_r7_8)
            var_28_1.q = fconvert.d(x87_r7_8)
            var_30.q = fconvert.d(float.t(0))
            var_c = fconvert.d(__copysign())
        else
            if (eax_6 != 3)
                goto label_534d23
            
            *esi = fconvert.d(fconvert.t(arg3))
        
        int32_t var_24_2 = 0xffff
        __ctrlfp(x87control_1, eax_5.w, 0xffff)
        x87_r7_11 = fconvert.t(var_c)
    
    return x87_r7_11
}
