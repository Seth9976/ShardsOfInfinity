// 函数名称: __pow_pentium4
// 虚拟地址: 0x535239
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__pow_pentium4(int32_t arg1 @ edi, double arg2, double arg3)
{
    // 第一条实际指令: uint64_t xmm0_47[0x2] = arg2
    uint64_t xmm0_47[0x2] = arg2
    uint64_t xmm7[0x2] = _mm_and_pd(0xfffffffffffff, xmm0_47)
    int32_t xmm4[0x4] = xmm0_47.q
    uint64_t xmm0[0x2] = _mm_srli_epi64(xmm0_47, 0x2c)
    char eax = _mm_extract_epi16(xmm0, 0)
    double xmm7_1 = _mm_or_pd(xmm7, 0x3ff0000000000000)
    uint32_t ecx = _mm_extract_epi16(xmm4, 3)
    int32_t eax_3 = (zx.d(eax) + 1) & 0x1fe
    uint64_t xmm7_2[0x2] = xmm7_1 f* *((eax_3 << 2) + &data_551518)
    double xmm5 = *((eax_3 << 2) + &data_551518)
    double xmm6[0x2] = *(eax_3 * 8 + &data_551930)
    double var_c
    int32_t ecx_3
    int32_t edx_1
    uint32_t edx_2
    int32_t edx_17
    int32_t xmm0_26[0x4]
    int32_t xmm1_4[0x4]
    uint64_t xmm2_17[0x2]
    
    if (((ecx - 0x10) | (0x7fef - ecx)) u>= 0x80000000)
        uint64_t xmm1_12[0x2] = arg3
        xmm2_17 = xmm1_12.q
        xmm1_4 = _mm_srli_epi64(_mm_and_pd(xmm1_12, 0x7fffffffffffffff), 0x20)
        int32_t ecx_7 = xmm1_4
        
        if (ecx_7 u>= 0x7ff00000)
            uint64_t xmm7_13[0x2] = arg2
            xmm4 = arg2
            edx_2 = xmm7_13
            int32_t xmm7_14 = _mm_srli_epi64(xmm7_13, 0x20)
            ecx_3 = xmm7_14
            int32_t eax_34 = xmm7_14 & 0x7fffffff
            
            if (eax_34 u>= 0x7ff00000 && (eax_34 u> 0x7ff00000 || edx_2 u> 0))
            label_5358a3:
                xmm0_26 = xmm4 f+ xmm4
                edx_17 = 0x3ee
                goto label_535a11
            
        label_535945:
            
            if (zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_xor_pd(xmm1_4, xmm1_4), 
                    _mm_and_pd(0xfffffffffffff, xmm2_17)))) != 0xff)
                xmm0_26 = xmm2_17 f+ xmm2_17
                edx_17 = 0x3ee
            label_535a11:
                var_c = xmm0_26
                sub_534d94(&arg2, &arg3, &var_c, edx_17)
                return fconvert.t(var_c)
            
            uint32_t eax_56 = _mm_extract_epi16(xmm2_17, 3)
            int32_t xmm4_17[0x4] = arg2
            
            if ((edx_2 | (ecx_3 ^ 0xbff00000)) == 0)
                return float.t(1)
            
            if ((eax_56 & 0x8000) == 0)
                if ((_mm_extract_epi16(xmm4_17, 3) & 0x7ff0) u< 0x3ff0)
                    return float.t(0)
            else if ((_mm_extract_epi16(xmm4_17, 3) & 0x7ff0) u>= 0x3ff0)
                return float.t(0)
            
            return fconvert.t(inf.0)
        
        if ((xmm1_12 | ecx_7) == 0)
            int32_t eax_62 = xmm4
            int32_t xmm4_18 = _mm_srli_epi64(xmm4, 0x20)
            xmm0_26 = 0x3ff0000000000000
            edx_17 = 0x1a
            
            if ((eax_62 | (xmm4_18 & 0x7fffffff)) != 0)
                edx_17 = 0x1d
                int32_t eax_65 = xmm4_18 & 0x7fffffff
                
                if (eax_65 u<= 0x7ff00000 && (eax_65 u< 0x7ff00000 || eax_62 u<= 0))
                    var_c = 1.0
                    return fconvert.t(var_c)
            
            goto label_535a11
        
        int32_t eax_35
        uint64_t xmm2_25[0x2]
        
        if (0x7fef - ecx s>= 0)
            ecx_3 = 0
        label_5356e2:
            xmm7_2 = 0xfffffffffffff
            xmm2_25 = 0x3ff0000000000000
            xmm0 = _mm_insert_epi16(_mm_xor_pd(xmm0, xmm0), 0x43f0, 3) f* xmm4
            eax_35 = _mm_srli_epi64(xmm4, 0x20)
            
            if (xmm4 != 0 || (eax_35 & 0x7fffffff) != 0)
            label_535708:
                uint64_t xmm7_15[0x2] = _mm_and_pd(xmm7_2, xmm0)
                xmm4 = xmm0.q
                xmm0 = _mm_srli_epi64(__andpd_xmmxuq_memxuq(xmm0, data_54f2c0), 0x2c)
                int32_t eax_39 = (zx.d(_mm_extract_epi16(xmm0, 0)) + 1) & 0x1fe
                xmm7_2 = _mm_or_pd(xmm7_15, xmm2_25) f* *((eax_39 << 2) + &data_551518)
                xmm5 = *((eax_39 << 2) + &data_551518)
                xmm6 = *(eax_39 * 8 + &data_551930)
                edx_1 = 0x43e7f
                goto label_5352c3
        else
            uint64_t xmm2_18[0x2] = _mm_or_pd(xmm2_17, _mm_slli_epi64(0x7fffffffffffffff, 0x34))
            uint64_t xmm1_16[0x2] =
                _mm_max_epi16(_mm_sub_epi32(_mm_srli_epi64(xmm1_4, 0x14), 0x3f3), zx.o(0))
            char eax_29 = _mm_movemask_epi8(_mm_cmpeq_epi32(_mm_sll_epi64(xmm2_18, xmm1_16), zx.o(0)))
            int32_t edx_10 = (neg.d(0x7fef - ecx) + 0x7fef) & 0x7fff
            
            if (edx_10 u>= 0x7ff0)
                if (zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(_mm_xor_pd(xmm1_16, xmm1_16), 
                        _mm_and_pd(0xfffffffffffff, xmm4)))) != 0xff)
                    goto label_5358a3
                
                if ((_mm_extract_epi16(xmm4, 3) & 0x8000) == 0)
                    if ((_mm_extract_epi16(arg3, 3) & 0x8000) != 0)
                        return float.t(0)
                    
                    return fconvert.t(inf.0)
                
                uint32_t eax_45
                
                if (zx.d(eax_29) == 0xff)
                    eax_45 = zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(
                        _mm_sll_epi64(arg3, 
                            _mm_sub_epi32(
                                _mm_srli_epi64(__andpd_xmmxuq_memxuq(arg3, data_54f2c0), 0x34), 
                                0x3f4)), 
                        zx.o(0))))
                
                if (zx.d(eax_29) != 0xff || eax_45 == 0xff)
                    if ((_mm_extract_epi16(arg3, 3) & 0x8000) != 0)
                        return float.t(0)
                    
                    return fconvert.t(inf.0)
                
                if ((_mm_extract_epi16(arg3, 3) & 0x8000) == 0)
                    return fconvert.t(-inf.0)
                
                return fconvert.t(-0.0)
            
            if (zx.d(eax_29) == 0xff)
                ecx_3 = (0x3ff01 + zx.d(_mm_movemask_epi8(_mm_cmpeq_epi32(
                    _mm_sll_epi64(arg3, 
                        _mm_sub_epi32(_mm_srli_epi64(__andpd_xmmxuq_memxuq(arg3, data_54f2c0), 0x34), 
                            0x3f4)), 
                    -0x8000000000000000)))) & 0x40000
                
                if (edx_10 u< 0x10)
                    goto label_5356e2
                
                edx_1 = 0xbfe7f
                goto label_5352c3
            
            uint64_t xmm2_30[0x2] = arg2
            xmm2_25 = _mm_srli_epi64(xmm2_30, 0x20)
            eax_35 = xmm2_30 | (xmm2_25 & 0x7fffffff)
            ecx_3 = 0
            
            if (eax_35 != 0)
                xmm0_26 = -0x8000000000000
                edx_17 = 0x1c
                goto label_535a11
            
            if ((eax_35 & 0x7fffffff) != 0)
                goto label_535708
        
        if ((arg3:4.d & 0x80000000) != 0)
            xmm0_26 = _mm_slli_epi64(0x7ff00000 | (zx.o(eax_35) & zx.o(ecx_3 << 0xd)), 0x20)
            edx_17 = 0x1b
            goto label_535a11
        
        if ((eax_35 & ecx_3 << 0xd) == 0)
            return float.t(0)
        
        return fconvert.t(-0.0)
    
    ecx_3 = 0
    edx_1 = 0x3fe7f
    label_5352c3:
    double xmm0_3 = _mm_cvtepi32_pd(_mm_srli_epi64(_mm_sub_epi64(xmm0, zx.o(edx_1)), 8))
    char eax_5 = _mm_extract_epi16(_mm_srli_epi64(xmm7_2, 0x26), 0)
    uint64_t xmm4_1[0x2] = __andpd_xmmxuq_memxuq(xmm4, data_54f2a0)
    int32_t eax_8 = (zx.d(eax_5) + 1) & 0x1fe
    uint64_t xmm3_2[0x2] = xmm7_2.q f* *((eax_8 << 2) + &data_552140)
    double xmm5_1 = xmm5 f* *((eax_8 << 2) + &data_552140)
    double xmm6_1 = __addpd_xmmpd_mempd(xmm6, *(eax_8 * 8 + &data_552550))
    uint64_t xmm4_2[0x2] = __orpd_xmmxuq_memxuq(xmm4_1, data_54f2b0)
    double xmm1_2 = _mm_and_pd(-0x8000000, xmm4_2)
    double xmm4_3 = xmm4_2 f- xmm1_2
    int32_t eax_13 = ((_mm_extract_epi16(_mm_srli_epi64(xmm3_2, 0x1f), 0) & 0x1ff) + 1) & 0x3fe
    uint64_t xmm5_2[0x2] = xmm5_1 f* *((eax_13 << 2) + &data_552d60)
    double xmm2_2 = xmm3_2.q f* *((eax_13 << 2) + &data_552d60)
    double xmm6_3 = __addpd_xmmpd_mempd(xmm6_1 + xmm0_3, *((eax_13 << 3) + &data_553570))
    double xmm0_4 = _mm_and_pd(-0x8000000, xmm5_2)
    double xmm5_3 = xmm5_2 f- xmm0_4
    double xmm7_4 = -1.4426949024200439 + xmm2_2
    int32_t xmm6_4[0x4] = xmm6_3 + xmm7_4
    xmm1_4 = arg3
    uint32_t eax_14 = _mm_extract_epi16(xmm1_4, 3)
    edx_2 = _mm_extract_epi16(xmm6_4, 3)
    double xmm2_6 = xmm2_2 - xmm0_4 * xmm1_2 - xmm1_2 * xmm5_3 - xmm0_4 * xmm4_3 - xmm4_3 * xmm5_3
    double xmm4_5[0x2] = xmm6_4.q
    double xmm7_5[0x2] = xmm7_4 - xmm2_6
    uint64_t xmm6_5[0x2] = xmm6_4 f- xmm2_6
    double xmm7_6[0x2] = _mm_unpacklo_pd(xmm7_5, xmm7_5)
    int32_t eax_15 = eax_14 & 0x7ff0
    
    if (eax_15 u>= 0x7ff0)
        uint64_t xmm4_15[0x2] = arg2
        xmm2_17 = arg3
        
        if (xmm4_15 != 0)
            goto label_535945
        
        edx_2 = _mm_srli_epi64(xmm4_15, 0x20)
        
        if (edx_2 == 0x3ff00000)
            return float.t(1)
        
        if (edx_2 == 0xbff00000)
            return float.t(1)
        
        goto label_535945
    
    int32_t eax_17 = eax_15 - 0x3ff0 + (edx_2 & 0x7ff0)
    int32_t eax_78
    
    if (((0x40a0 - eax_17) | (eax_17 - 0x3c70)) u>= 0x80000000)
        xmm4_5 = _mm_mul_pd(_mm_shuffle_epi32(xmm1_4, 0x44), xmm6_5)
        eax_78 = _mm_extract_epi16(xmm4_5, 3) & 0x7ff0
    
    if (((0x40a0 - eax_17) | (eax_17 - 0x3c70)) u< 0x80000000
            || ((0x40a0 - eax_78) | (eax_78 - 0x3c70)) u< 0x80000000)
        uint64_t xmm2_7[0x2] = xmm2_6 - (xmm4_5 f- xmm6_5)
        double xmm3_6 = _mm_and_pd(-0x8000000, xmm1_4)
        double xmm4_7 = _mm_and_pd(-0x8000000, xmm6_5)
        double xmm0_9 = xmm6_3 f- xmm6_4 + xmm7_4 f- xmm2_7
        double xmm6_6 = xmm6_5 f- xmm4_7
        double xmm1_5 = xmm1_4 f- xmm3_6
        double xmm3_8 = xmm3_6 * xmm4_7 * _mm_insert_epi16(_mm_xor_pd(xmm2_7, xmm2_7), 0x4060, 3)
        double xmm2_10[0x2] = data_554580
        int32_t eax_19 = int.d(xmm3_8)
        uint32_t xmm6_7[0x4] = xmm6_6 * xmm1_5
        double xmm1_6[0x2] = data_554590
        double xmm4_9 = _mm_shuffle_epi32(xmm6_7, 0xee)
        double xmm5_7 = xmm3_6 * xmm6_6 + xmm4_7 * xmm1_5 f+ xmm6_7
        
        if (((0x1ff7f - eax_19) | (eax_19 + 0x1e1ff)) s> 0)
            double xmm2_11[0x2] = _mm_mul_pd(xmm2_10, xmm7_6)
            double xmm7_7[0x2] = _mm_mul_pd(xmm7_6, xmm7_6)
            double xmm3_11[0x2] = *((eax_19 & 0x7f) * 0x10 + 0x5545a0)
            double xmm6_8[0x2] = data_54f2d0
            double xmm2_12[0x2] = _mm_add_pd(xmm2_11, _mm_mul_pd(xmm1_6, xmm7_7))
            double xmm1_8 = _mm_shuffle_epi32(xmm2_12, 0xee)
            double xmm7_9 = _mm_insert_epi16(_mm_xor_pd(xmm7_7, xmm7_7), 0x3f80, 3)
            double xmm2_16 = (xmm2_12 f* xmm7_7 + xmm1_8 + xmm4_9 + xmm0_9) * arg3
            uint32_t xmm1_11[0x4] = _mm_shuffle_epi32(
                _mm_slli_epi64(zx.o(((ecx_3 + eax_19) & 0xffffff80) + 0x1ff80), 0x2d), 0x44)
            double xmm7_10[0x2] = data_54f2e0
            double xmm3_12[0x2] = _mm_mul_pd(xmm3_11, xmm1_11)
            double xmm0_13[0x2] = (xmm3_8 - (xmm3_8 + 6755399441055744.0 - 6755399441055744.0)) * xmm7_9
                + xmm5_7 + xmm2_16
            double xmm0_14[0x2] = _mm_unpacklo_pd(xmm0_13, xmm0_13)
            double xmm6_9[0x2] = _mm_mul_pd(xmm6_8, xmm0_14)
            double xmm0_15[0x2] = _mm_mul_pd(xmm0_14, xmm0_14)
            double xmm7_12[0x2] = _mm_mul_pd(_mm_add_pd(xmm7_10, xmm6_9), xmm0_15)
            double xmm6_10 = _mm_shuffle_epi32(xmm7_12, 0xee)
            var_c = xmm0_15 f* xmm3_12 f* xmm7_12 + _mm_shuffle_epi32(xmm3_12, 0xee)
                + xmm6_10 f* xmm3_12 + 0.69314718055994529 f* xmm0_14 f* xmm3_12 f+ xmm3_12
            return fconvert.t(var_c)
        
        int32_t var_4_1
        void* eax_66
        int32_t ecx_18
        int32_t edx_25
        int32_t esi
        uint32_t edi
        
        if (eax_19 s> 0)
            if (eax_19 u>= 0x40000)
                goto label_535c8a
            
            var_4_1 = esi
            eax_66 = eax_19 & 0x7f
            ecx_18 = ecx_3 + 0x3ff00
            edx_25 = (eax_19 - 0x80) & 0xffffff80
            var_c:4.d = arg1
            edi = 0x3ff0
            goto label_535aa9
        
        if (eax_19 s<= 0xfffc0200)
            xmm0_26 = _mm_or_pd(2.2250738585072014e-308 * 2.2250738585072014e-308, 
                _mm_slli_epi64(zx.o(ecx_3), 0x2d))
            edx_17 = 0x19
        else
            var_4_1 = esi
            eax_66 = eax_19 & 0x7f
            ecx_18 = ecx_3 + 0x80
            edx_25 = (eax_19 & 0xffffff80) + 0x3fe80
            var_c:4.d = arg1
            edi = 0
        label_535aa9:
            double xmm2_32[0x2] = _mm_mul_pd(xmm2_10, xmm7_6)
            double xmm7_17[0x2] = _mm_mul_pd(xmm7_6, xmm7_6)
            double xmm3_22[0x2] = *(eax_66 * 0x10 + 0x5545a0)
            double xmm6_12[0x2] = data_54f2d0
            uint32_t xmm2_33[0x4] = _mm_add_pd(xmm2_32, _mm_mul_pd(xmm1_6, xmm7_17))
            double xmm2_36 = xmm2_33 f* xmm7_17 + _mm_shuffle_epi32(xmm2_33, 0xee) + xmm4_9 + xmm0_9
            double xmm7_19 = _mm_insert_epi16(_mm_xor_pd(xmm7_17, xmm7_17), 0x3f80, 3)
            double xmm2_37 = xmm2_36 * arg3
            uint32_t xmm1_38[0x4] = _mm_shuffle_epi32(_mm_slli_epi64(zx.o(edx_25), 0x2d), 0x44)
            double xmm7_20[0x2] = data_54f2e0
            double xmm3_23[0x2] = _mm_mul_pd(xmm3_22, xmm1_38)
            double xmm0_30[0x2] =
                (xmm3_8 - (xmm3_8 + 6755399441055744.0 - 6755399441055744.0)) * xmm7_19 + xmm5_7
                + xmm2_37
            double xmm0_31[0x2] = _mm_unpacklo_pd(xmm0_30, xmm0_30)
            double xmm6_13[0x2] = _mm_mul_pd(xmm6_12, xmm0_31)
            double xmm0_32[0x2] = _mm_mul_pd(xmm0_31, xmm0_31)
            double xmm7_22[0x2] = _mm_mul_pd(_mm_add_pd(xmm7_20, xmm6_13), xmm0_32)
            double xmm6_14 = _mm_shuffle_epi32(xmm7_22, 0xee)
            double xmm5_11 = _mm_shuffle_epi32(xmm3_23, 0xee)
            uint64_t xmm6_15[0x2] = xmm6_14 f* xmm3_23
            int32_t xmm4_21[0x4] = 0.69314718055994529 f* xmm0_31 f* xmm3_23
            double xmm7_24 = _mm_slli_epi64(zx.o(ecx_18), 0x2d)
            uint64_t xmm2_38[0x2] = zx.o((neg.d(edx_25 - 0x1ff80) s>> 7) + 2
                + (((neg.d(edx_25 - 0x1ff80) s>> 7) + 2) & 0x20))
            double xmm1_41 =
                _mm_and_pd(_mm_sll_epi64(_mm_cmpeq_epi32(xmm1_38, xmm1_38), xmm2_38), xmm3_23)
            double xmm0_37 = xmm0_32 f* xmm3_23 f* xmm7_22 + xmm5_11 f+ xmm6_15 f+ xmm4_21
            uint64_t xmm6_16[0x2] = _mm_xor_pd(xmm6_15, xmm6_15)
            double xmm1_43 =
                _mm_and_pd(xmm1_41 + xmm0_37, _mm_sll_epi64(_mm_cmpeq_epi32(xmm4_21, xmm4_21), xmm2_38))
            double xmm6_17 = _mm_insert_epi16(xmm6_16, edi, 3)
            double xmm0_39 = xmm0_37 + xmm1_41 - xmm1_43 + xmm3_23 f- xmm1_41
            
            if (edx_25 - 0x1ff80 s> 0)
                double xmm0_43 = (xmm0_39 + xmm1_43) * xmm7_24
                xmm0_26 = xmm0_43 + xmm6_17 * xmm0_43
                int32_t eax_76 = _mm_extract_epi16(xmm0_26, 3) & 0x7ff0
                edx_17 = 0x18
                
                if (eax_76 != 0x7ff0)
                    edx_17 = 0x19
                    
                    if (eax_76 != 0)
                        var_c = xmm0_26
                        return fconvert.t(var_c)
            else
                double xmm0_41 = xmm0_39 * xmm7_24 + xmm1_43 * xmm7_24
                xmm0_26 = xmm0_41 + xmm6_17 * xmm0_41
                int32_t eax_74 = _mm_extract_epi16(xmm0_26, 3) & 0x7ff0
                edx_17 = 0x18
                
                if (eax_74 != 0x7ff0)
                    edx_17 = 0x19
                    
                    if (eax_74 != 0)
                        var_c = xmm0_26
                        return fconvert.t(var_c)
    else
        if (eax_78 - 0x3c70 u>= 0x80000000)
            var_c = _mm_slli_epi64(zx.o(ecx_3) | 0x1ff80, 0x2d)
            return fconvert.t(var_c)
        
        int32_t edx_37 = (_mm_extract_epi16(arg2, 3) & 0x7ff0) - 0x3ff0
        
        if (((_mm_extract_epi16(xmm1_4, 3) ^ edx_37) & 0x8000) != 0)
            xmm0_26 = _mm_or_pd(2.2250738585072014e-308 * 2.2250738585072014e-308, 
                _mm_slli_epi64(zx.o(ecx_3), 0x2d))
            edx_17 = 0x19
        else
        label_535c8a:
            edx_17 = 0x18
            
            if (ecx_3 == 0)
                xmm0_26 = 8.9884656743115795e+307 * 8.9884656743115795e+307
            else
                xmm0_26 = -8.9884656743115795e+307 * 8.9884656743115795e+307
    
    goto label_535a11
}
