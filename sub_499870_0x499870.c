// 函数名称: sub_499870
// 虚拟地址: 0x499870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_499870(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    void var_d8
    int32_t eax_1 = __security_cookie ^ &var_d8
    void* eax_2 = arg2
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    void* var_b0 = eax_2
    int32_t i = 0
    int32_t edx = 0
    int32_t esi = 0
    float xmm3 = 1f
    int32_t xmm1 = (zx.o(0)).d
    float var_c8 = 1f
    char var_d2 = 0
    char var_d1 = 0
    char var_c2_1
    __builtin_memset(&var_c2_1, 0, 0x12)
    int32_t var_d0 = 0
    char var_c1_1
    int32_t var_b4_1
    int32_t mxcsr
    int16_t x87control
    
    if (*(eax_2 + 0x110) s> 0)
        do
            int32_t eax_3 = *(eax_2 + 0x114)
            int32_t edx_1 = *(eax_3 + (i << 3))
            int32_t* esi_1 = eax_3 + (i << 3)
            int32_t i_1
            int32_t var_c0_1
            int32_t var_bc_1
            
            if (edx_1 - 0xf u> 5)
                edx = var_c0_1
                esi = var_bc_1
            else
                switch (edx_1)
                    case 0xf
                        int32_t eax_34
                        eax_34, x87control = sub_4956e0(arg1, esi_1)
                        xmm1 = var_d0
                        edx = eax_34
                        i = i_1
                        var_c0_1 = edx
                        var_d1 = 1
                        esi = var_bc_1
                    case 0x10
                        int32_t eax_35
                        eax_35, x87control = sub_4956e0(arg1, esi_1)
                        var_b4_1 = eax_35
                        var_c2_1 = 1
                    label_499be4:
                        xmm1 = var_d0
                    label_499bea:
                        i = i_1
                        edx = var_c0_1
                        esi = var_bc_1
                    case 0x11
                        float** esi_2 = esi_1[1]
                        var_d2 = 1
                        float xmm3_1
                        bool p_2
                        
                        if (esi_2[1] == 1)
                            float* eax_5 = *esi_2
                            xmm3_1 = *eax_5
                            float temp2_1 = eax_5[1]
                            xmm3_1 - temp2_1
                            eax_5:1.b = (xmm3_1 == temp2_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm3_1, temp2_1) ? 1 : 0) << 2
                                | (xmm3_1 < temp2_1 ? 1 : 0)
                            p_2 = unimplemented  {test ah, 0x44}
                        
                        if (esi_2[1] != 1 || p_2)
                            int32_t eax_8 = (*(arg1 + 0x2c) + edx_1) * edx_1
                            int32_t ecx_2 = (eax_8 << 0xf) + not.d(eax_8)
                            int32_t ecx_3 = (ecx_2 u>> 0xc ^ ecx_2) * 5
                            int32_t eax_16 = (ecx_3 u>> 4 ^ ecx_3) * 0x809
                            float xmm0_1
                            x87control, xmm0_1 = sub_4e0380(esi_2, *(arg1 + 0x2f4), *(arg1 + 0x2e8), 
                                (((eax_16 u>> 0x10 ^ eax_16) & 0x7fffff) | 0x3f800000) - 1f)
                            xmm1 = var_d0
                            xmm3_1 = xmm0_1
                            i = i_1
                        
                        xmm1 = xmm1 f+ *(*(arg1 + 0x2e4) + 0x58) * xmm3_1
                        var_d0 = xmm1
                        edx = var_c0_1
                        esi = var_bc_1
                    case 0x12
                        float** esi_3 = esi_1[1]
                        var_d2 = 1
                        float var_cc_2
                        bool p_4
                        
                        if (esi_3[1] == 1)
                            float* eax_18 = *esi_3
                            float xmm0_4 = *eax_18
                            float temp3_1 = eax_18[1]
                            xmm0_4 - temp3_1
                            var_cc_2 = xmm0_4
                            eax_18:1.b = (xmm0_4 == temp3_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, temp3_1) ? 1 : 0) << 2
                                | (xmm0_4 < temp3_1 ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        if (esi_3[1] != 1 || p_4)
                            int32_t eax_21 = (*(arg1 + 0x2c) + edx_1) * edx_1
                            int32_t ecx_7 = (eax_21 << 0xf) + not.d(eax_21)
                            int32_t ecx_8 = (ecx_7 u>> 0xc ^ ecx_7) * 5
                            int32_t eax_29 = (ecx_8 u>> 4 ^ ecx_8) * 0x809
                            var_cc_2 = sub_4e0380(esi_3, *(arg1 + 0x2f4), *(arg1 + 0x2e8), 
                                (((eax_29 u>> 0x10 ^ eax_29) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        void* ecx_10 = *(arg1 + 0x2e4)
                        int64_t xmm0_6 = *(ecx_10 + 0x40)
                        float xmm2_2 = *(ecx_10 + 0x6c) f- xmm0_6:4.d
                        float xmm1_4 = *(ecx_10 + 0x68) f- xmm0_6.d
                        float xmm0_8 = *(ecx_10 + 0x70) - *(ecx_10 + 0x48)
                        float xmm0_11
                        x87control, xmm0_11 =
                            sub_412d90(xmm0_8 * xmm0_8 + xmm2_2 * xmm2_2 + xmm1_4 * xmm1_4)
                        xmm1 = var_d0 f+ xmm0_11 * var_cc_2
                        var_d0 = xmm1
                        goto label_499bea
                    case 0x13
                        int32_t eax_36
                        eax_36, x87control = sub_4956e0(arg1, esi_1)
                        xmm1 = var_d0
                        esi = eax_36
                        i = i_1
                        edx = var_c0_1
                        var_bc_1 = esi
                        var_c1_1 = 1
                    case 0x14
                        int128_t var_70
                        int128_t* var_e4_1 = &var_70
                        int128_t* eax_32
                        eax_32, mxcsr = sub_49a2d0(&var_70, edx_1, arg1)
                        int32_t* esi_4 = esi_1[1]
                        int32_t edx_14 = *(arg1 + 0x2f4)
                        float xmm1_7[0x4] = eax_32[1]
                        float eax_33 = data_65aec8
                        int128_t var_90_1 = *eax_32
                        int128_t var_40_1 = data_65aeb0
                        int64_t xmm0_15 = data_65aec0
                        float xmm0_18 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0x55) f- xmm0_15.d
                        float xmm0_21 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xaa) f- xmm0_15:4.d
                        var_70 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xff) - eax_33
                        float xmm0_22 = sub_4e0380(esi_4, edx_14, *(arg1 + 0x2e8), (zx.o(0)).d)
                        float xmm0_23 = sub_4e0380(esi_4, *(arg1 + 0x2f4), *(arg1 + 0x2e8), 1f)
                        float xmm1_14 = var_70.d
                        float xmm0_28
                        x87control, xmm0_28 =
                            sub_412d90(xmm0_21 * xmm0_21 + xmm0_18 * xmm0_18 + xmm1_14 * xmm1_14)
                        float xmm3_9 = (xmm0_28 - xmm0_22) / (xmm0_23 - xmm0_22)
                        float xmm0_31 = (zx.o(0)).d
                        
                        if (not(0 f>= xmm3_9) && not(xmm3_9 >= 1f))
                            x87control, xmm0_31 = sub_4145f0(0xa, xmm3_9, (zx.o(0)).d, 1f)
                        
                        var_c8 = xmm0_31
                        goto label_499be4
            eax_2 = var_b0
            i += 1
            i_1 = i
        while (i s< *(eax_2 + 0x110))
        
        xmm3 = var_c8
    
    float xmm1_18 = xmm1 f* xmm3 f+ *(arg1 + 0x2c8)
    
    if (var_d2 == 0)
        if (var_d1 == 0)
            edx = 1
        
        xmm1_18 = _mm_max_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(edx - *(arg1 + 0x2d8))))
    else if (var_d1 != 0)
        xmm1_18 = _mm_max_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(edx - *(arg1 + 0x2d8))))
    
    float var_d0_1 = xmm1_18
    
    if (var_c2_1 != 0)
        int32_t eax_37 = 0
        
        if (var_b4_1 - *(arg1 + 0x2d8) s>= 0)
            eax_37 = var_b4_1 - *(arg1 + 0x2d8)
        
        xmm1_18 = _mm_min_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(eax_37)))
        var_d0_1 = xmm1_18
    
    if (var_c1_1 != 0)
        int32_t eax_38 = 0
        
        if (esi - *(arg1 + 0x2cc) s>= 0)
            eax_38 = esi - *(arg1 + 0x2cc)
        
        xmm1_18 = _mm_min_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(eax_38)))
        var_d0_1 = xmm1_18
    
    var_b0.q = fconvert.d(xmm1_18)
    void* result
    long double st0
    st0, result = sub_53ea80(mxcsr, x87control, fconvert.d(fconvert.t(var_b0.q)))
    float var_b0_1 = fconvert.s(st0)
    *(arg1 + 0x2c8) = var_d0_1 - var_b0_1
    float xmm0_41
    
    if (0 f<= var_b0_1)
        xmm0_41 = var_b0_1 + 0.5f
    else
        xmm0_41 = var_b0_1 - 0.5f
    
    int32_t* ecx_19 = *(arg1 + 0x2e4)
    int32_t esi_6 = int.d(xmm0_41)
    int32_t var_c0_2 = esi_6
    
    if (not(ecx_19[0x13] f<= 0f))
        int32_t ecx_21 = *sub_4459f0(*ecx_19)
        result = *(arg1 + 0x2dc) * 0x134
        
        if (*(result + ecx_21 + 0xde) != 0)
            esi_6 = 0
        
        var_c0_2 = esi_6
    
    void* result_1 = nullptr
    char const* const var_ec_2
    double var_e8_1
    char const* const var_e4_3
    char* ecx_33
    
    if (esi_6 s<= 0)
    label_499f3c:
        int32_t* esi_10 = *(arg1 + 0x2d0)
        
        if (esi_10 == 0)
        label_49a03f:
            result.b = 1
            @__security_check_cookie@4(eax_1 ^ &var_d8)
            return result
        
        while (true)
            int32_t* var_b4_3 = esi_10
            
            if (esi_10 == 0)
                var_e4_3 = "XList<struct ParticleEmitter>::GetNextIter"
                var_e8_1.d = 0x1a1
                var_ec_2 = "c:\ax2017\engine\xlist.h"
                ecx_33 = "iter != NULL"
                break
            
            void* ecx_31 = &esi_10[0xbf]
            int32_t* eax_57 = esi_10
            esi_10 = *ecx_31
            result = sub_49a0a0(eax_57)
            
            if (result.b == 0)
                void* esi_11 = nullptr
                
                while (true)
                    if (esi_11 != 0)
                        esi_11 = *(esi_11 + 0x2fc)
                    else
                        esi_11 = eax_57[0xb4]
                    
                    if (esi_11 == 0)
                        break
                    
                    sub_495490(esi_11)
                
                sub_49fa50(&eax_57[0xb4])
                void* eax_58 = eax_57[0xb9]
                *(eax_58 + 0x14) -= 1
                void* edx_22 = var_b4_3[0xc0]
                int32_t ecx_36 = *ecx_31
                
                if (edx_22 == 0)
                    *(arg1 + 0x2d0) = ecx_36
                else
                    *(edx_22 + 0x2fc) = ecx_36
                
                void* ecx_37 = *ecx_31
                int32_t eax_60 = var_b4_3[0xc0]
                
                if (ecx_37 == 0)
                    *(arg1 + 0x2d4) = eax_60
                else
                    *(ecx_37 + 0x300) = eax_60
                
                *(arg1 + 0x2d8) -= 1
                sub_495690(var_b4_3)
                result = sub_45d050(var_b4_3, 0x304)
            
            if (esi_10 == 0)
                goto label_49a03f
    else
        while (true)
            int32_t* eax_41 = sub_4459f0(**(arg1 + 0x2e4))
            int32_t* eax_42 = sub_4459f0(**(arg1 + 0x2e4))
            int32_t esi_7 = *(arg1 + 0x2dc)
            int32_t esi_8 = esi_7 + 1
            int32_t var_c8_2 = esi_8
            int32_t eax_43 = *(esi_7 * 0x134 + *eax_42 + 8)
            int32_t* eax_44 = eax_41
            
            if (esi_8 s< eax_44[1])
                int32_t ecx_26 = esi_8 * 0x134
                int32_t var_b8_1 = ecx_26
                
                while (true)
                    int32_t edx_21 = *(ecx_26 + *eax_44 + 8)
                    
                    if (edx_21 s<= eax_43)
                        goto label_499f2d
                    
                    if (edx_21 == eax_43 + 1)
                        result = sub_4459f0(**(arg1 + 0x2e4))
                        ecx_26 = var_b8_1
                        
                        if (ecx_26 s< 0 || esi_8 s>= *(result + 4))
                            var_e4_3 = "ParticleEmitOneByIndex"
                            var_e8_1.d = 0x53a
                            var_ec_2 = "c:\ax2017\engine\particle.cpp"
                            ecx_33 = "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount"
                            break
                        
                        if (*(*(arg1 + 0x2e4) + 0x14) s<= 0xbb8)
                            float* eax_50 = sub_45cfa0(0x304)
                            eax_50[3] += 1
                            float* esi_9 = *eax_50
                            float* ecx_29
                            
                            if (esi_9 != 0)
                                ecx_29 = eax_50
                            else
                                sub_45ce30(eax_50)
                                ecx_29 = eax_50
                                esi_9 = *ecx_29
                            
                            int32_t var_e4_2 = 0x304
                            var_e8_1.d = 0
                            *ecx_29 = *esi_9
                            _memset(esi_9, 0, 0x304)
                            esi_9[0xb5] = 0
                            esi_9[0xb6] = 0
                            esi_9[0xbf] = *(arg1 + 0x2d0)
                            esi_9[0xc0] = 0
                            void* eax_53 = *(arg1 + 0x2d0)
                            
                            if (eax_53 == 0)
                                *(arg1 + 0x2d4) = esi_9
                            else
                                *(eax_53 + 0x300) = esi_9
                            
                            *(arg1 + 0x2d8) += 1
                            *(arg1 + 0x2d0) = esi_9
                            esi_9[0xb7] = var_c8_2
                            esi_9[0xb9] = *(arg1 + 0x2e4)
                            esi_9[0xb8] = arg1
                            sub_4997e0(esi_9)
                            *(arg1 + 0x2cc) += 1
                            esi_8 = var_c8_2
                            ecx_26 = var_b8_1
                    
                    eax_44 = eax_41
                    esi_8 += 1
                    ecx_26 += 0x134
                    var_c8_2 = esi_8
                    var_b8_1 = ecx_26
                    
                    if (esi_8 s>= eax_44[1])
                        goto label_499f2d
                
                break
            
        label_499f2d:
            result = result_1 + 1
            result_1 = result
            
            if (result s>= var_c0_2)
                goto label_499f3c
    
    sub_44e4d0(result, &data_5559b1, ecx_33, var_ec_2, var_e8_1.d, var_e4_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
