// 函数名称: sub_53b500
// 虚拟地址: 0x53b500
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_53b500(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, double arg3)
{
    // 第一条实际指令: if (data_e4abb4 != 0)
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
            int32_t xmm2[0x4] = data_554dc0
            int64_t xmm7 = xmm0.q
            uint64_t xmm0_1[0x2] = _mm_srli_epi64(xmm0, 0x34)
            int32_t eax_3 = xmm0_1
            int32_t xmm2_1[0x4] = _mm_sub_epi32(xmm2, __andpd_xmmxuq_memxuq(xmm0_1, data_554de0))
            int32_t xmm1_1[0x4] = _mm_srl_epi64(xmm0, xmm2_1)
            
            if ((eax_3 & 0x800) == 0)
                double xmm0_3[0x2] = zx.o(arg3)
                uint64_t xmm1_3[0x2] = _mm_sll_epi64(xmm1_1, xmm2_1)
                uint64_t xmm0_4[0x2] = _mm_cmpeq_pd(xmm0_3, xmm1_3, 6)
                
                if (eax_3 s< 0x3ff)
                    arg3 = __andpd_xmmxuq_memxuq(__cmppd_xmmpd_mempd_immb(xmm0_3, data_554dd0, 6), 
                        data_554db0)
                    return fconvert.t(arg3)
                
                if (eax_3 s<= 0x432)
                    arg3 = xmm1_3 f+ __andpd_xmmxuq_memxuq(xmm0_4, data_554db0)
                    return fconvert.t(arg3)
            else
                if (eax_3 s< 0xbff)
                    return fconvert.t(-0.0)
                
                double xmm1_2 = _mm_sll_epi64(xmm1_1, xmm2_1)
                
                if (eax_3 s<= 0xc32)
                    arg3 = xmm1_2
                    return fconvert.t(arg3)
            
            if (not(is_ordered.q(xmm7, xmm7)))
                int32_t __saved_ebp_2 = 0x3ec
                sub_534d94(&arg3, &arg3, &arg3, 0x3ec)
            
            return fconvert.t(arg3)
    
    int32_t __saved_ebp_4
    int32_t __saved_ebp_3 = __saved_ebp_4
    int32_t ecx
    int32_t var_8_2 = ecx
    int32_t var_c_2 = ecx
    int32_t __saved_ebx_3
    int32_t __saved_ebx_2 = __saved_ebx_3
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t var_18 = 0xffff
    int32_t var_1c = 0x1b3f
    int32_t eax_4
    int16_t x87control
    eax_4, x87control = __ctrlfp(arg2)
    int32_t ecx_2 = zx.d(arg3:6.w) & 0x7ff0
    int32_t var_18_1 = ecx_2
    int32_t var_1c_1 = ecx_2
    var_1c_1.q = fconvert.d(fconvert.t(arg3))
    int32_t var_30_1
    int32_t var_28_1
    
    if (ecx_2.w != 0x7ff0)
        long double st0_1 = __frnd()
        var_c_2.q = fconvert.d(st0_1)
        long double x87_r6_3 = fconvert.t(arg3)
        x87_r6_3 - st0_1
        int32_t eax_5
        eax_5.w = (x87_r6_3 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, st0_1) ? 1 : 0) << 0xa
            | (x87_r6_3 == st0_1 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1) || (eax_4.b & 0x20) != 0)
            int32_t var_18_4 = 0xffff
            int32_t var_1c_3 = eax_4
            __ctrlfp(x87control)
            return fconvert.t(var_c_2.q)
        
        int32_t var_18_5 = eax_4
        double var_20_2 = fconvert.d(st0_1)
        var_28_1 = (fconvert.d(x87_r6_3)).d
        int32_t var_2c_2 = 0xc
        var_30_1 = 0x10
    else
        if (__sptype() - 1 u<= 2)
            int32_t var_18_2 = 0xffff
            int32_t var_1c_2 = eax_4
            __ctrlfp(x87control)
            return fconvert.t(arg3)
        
        long double x87_r7_7 = fconvert.t(arg3)
        int32_t var_18_3 = eax_4
        double var_20_1 = fconvert.d(fconvert.t(1.0) + x87_r7_7)
        var_28_1 = (fconvert.d(x87_r7_7)).d
        int32_t var_2c_1 = 0xc
        var_30_1 = 8
    
    return sub_5328f0(var_30_1, 0xc, var_28_1)
}
