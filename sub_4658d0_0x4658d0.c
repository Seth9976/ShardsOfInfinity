// 函数名称: sub_4658d0
// 虚拟地址: 0x4658d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4658d0(int32_t arg1, int32_t* arg2, void* arg3, float arg4 @ xmm2, int32_t arg5, int32_t arg6, char arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = *(arg3 + 0x63c) * 0x208
    void* edi_1 = arg3 + 0x14 + ebx
    void var_104
    float xmm0[0x4] = *sub_485510(arg2, edi_1, arg2, &var_104, arg3 + 0x28 + ebx)
    void var_114
    int128_t* eax_7 = sub_485510(&var_114, edi_1, arg2, &var_114, arg3 + 0x38 + ebx)
    float xmm2 = *(ebx + arg3 + 0x48)
    float xmm3[0x4] = *eax_7
    float xmm0_2 = xmm3[0] f- xmm0
    float xmm1_1 = _mm_shuffle_ps(xmm3, xmm3, 0x55)
    xmm0[0] = xmm0_2 * xmm2 f+ xmm0
    float xmm0_6 = _mm_shuffle_ps(xmm0, xmm0, 0x55)
    float xmm0_8 = _mm_shuffle_ps(xmm0, xmm0, 0xaa)
    float xmm4_1 = _mm_shuffle_ps(xmm0, xmm0, 0xff)
    xmm0[1] = (xmm1_1 - xmm0_6) * xmm2 + xmm0_6
    float xmm1_6 = _mm_shuffle_ps(xmm3, xmm3, 0xaa)
    float xmm3_4 = (_mm_shuffle_ps(xmm3, xmm3, 0xff) - xmm4_1) * xmm2 + xmm4_1
    xmm0[2] = (xmm1_6 - xmm0_8) * xmm2 + xmm0_8
    xmm0[3] = xmm3_4
    *(arg3 + 0x6cc) = xmm0
    int32_t xmm4_2 = 0x3f800000
    void* edx_2 = sub_461a50(arg3)
    void* var_28 = edx_2
    
    if (edx_2 != 0)
        int32_t i = 0
        
        if (*(edx_2 + 8) s> 0)
            int32_t edi_2 = 0
            
            do
                int32_t* ecx_6 = *(edx_2 + 4) + edi_2
                
                if (*ecx_6 == 0x69)
                    float xmm5_1 = ecx_6[1]
                    float xmm2_1 = *(arg3 + 0x62c)
                    int32_t xmm0_10 = (zx.o(0)).d
                    float xmm4_3 = ecx_6[2]
                    xmm5_1 f- 0
                    void* eax_8
                    eax_8:1.b = (xmm5_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_1, 0f) ? 1 : 0) << 2
                        | (xmm5_1 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        float xmm2_3 = (xmm2_1 - xmm4_3) / xmm5_1
                        
                        if (not(0 f> xmm2_3))
                            xmm0_10 = _mm_min_ss(0x3f800000, xmm2_3)
                    else if (not(xmm2_1 < xmm4_3))
                        xmm0_10 = 0x3f800000
                    
                    int32_t ecx_7 = ecx_6[3]
                    float xmm0_11 = xmm0_10 f- 0f
                    
                    if (not(0 f< xmm0_11))
                        xmm4_2 = (zx.o(0)).d
                    else if (xmm0_11 < 1f)
                        int32_t xmm0_12
                        eax_8, xmm0_12 = sub_4145f0(ecx_7, xmm0_11, (zx.o(0)).d, 1f)
                        xmm4_2 = xmm0_12
                        edx_2 = var_28
                    else if (ecx_7 == 0xa || ecx_7 == 0xc || ecx_7 == 0xb || ecx_7 == 0xd
                            || ecx_7 == 0xe || ecx_7 == 0xf || ecx_7 == 0x13)
                        xmm4_2 = (zx.o(0)).d
                    else
                        xmm4_2 = 0x3f800000
                
                i += 1
                edi_2 += 0x10
            while (i s< *(edx_2 + 8))
    
    int32_t eax_9 = *(arg3 + 0x644) * 0x208
    int32_t ecx_8 = *(eax_9 + arg3 + 0x4c)
    float xmm5_2
    
    if (ecx_8 == 2)
        xmm5_2 = *(eax_9 + arg3 + 0x6c)
    else if (ecx_8 != 1)
        xmm5_2 = (zx.o(0)).d
    else
        xmm5_2 = _mm_cvtepi32_ps(zx.o(*(eax_9 + arg3 + 0x6c)))
    
    int32_t eax_10 = *(arg3 + 0x640) * 0x208
    int32_t ecx_9 = *(eax_10 + arg3 + 0x4c)
    float xmm3_5
    
    if (ecx_9 == 2)
        xmm3_5 = *(eax_10 + arg3 + 0x6c)
    else if (ecx_9 != 1)
        xmm3_5 = (zx.o(0)).d
    else
        xmm3_5 = _mm_cvtepi32_ps(zx.o(*(eax_10 + arg3 + 0x6c)))
    
    void var_19c
    int128_t* eax_12 = sub_487840(&var_19c, edx_2, arg2, (xmm3_5 - xmm5_2) f* xmm4_2 + xmm5_2, 
        &var_19c, (*(arg3 + 0x6d4) f+ *(arg3 + 0x6cc)) * 0.5f, 
        (*(arg3 + 0x6d8) f+ *(arg3 + 0x6d0)) * 0.5f)
    int128_t var_9c = *eax_12
    int128_t xmm0_14 = eax_12[1]
    int128_t xmm0_15 = eax_12[2]
    int128_t var_6c = eax_12[3]
    int128_t xmm0_17 = eax_12[4]
    int32_t eax_13 = eax_12[5].d
    void* edi_4 = arg3 + 0x38 + ebx
    void var_3c
    float xmm0_18[0x4] = *sub_485510(&var_3c, edi_1, &var_9c, &var_3c, arg3 + 0x28 + ebx)
    void var_124
    int128_t* eax_19 = sub_485510(&var_124, arg3 + 0x14 + ebx, &var_9c, &var_124, edi_4)
    float xmm2_9 = *(ebx + arg3 + 0x48)
    float xmm3_10[0x4] = *eax_19
    float xmm0_20 = xmm3_10[0] f- xmm0_18
    float xmm1_15 = _mm_shuffle_ps(xmm3_10, xmm3_10, 0x55)
    xmm0_18[0] = xmm0_20 * xmm2_9 f+ xmm0_18
    float xmm0_24 = _mm_shuffle_ps(xmm0_18, xmm0_18, 0x55)
    float xmm0_26 = _mm_shuffle_ps(xmm0_18, xmm0_18, 0xaa)
    float xmm4_5 = _mm_shuffle_ps(xmm0_18, xmm0_18, 0xff)
    xmm0_18[1] = (xmm1_15 - xmm0_24) * xmm2_9 + xmm0_24
    float xmm1_21 = _mm_shuffle_ps(xmm3_10, xmm3_10, 0xaa) - xmm0_26
    float xmm3_14 = (_mm_shuffle_ps(xmm3_10, xmm3_10, 0xff) - xmm4_5) * xmm2_9 + xmm4_5
    xmm0_18[2] = xmm1_21 * xmm2_9 + xmm0_26
    int32_t eax_20 = *(arg3 + 0x63c) * 0x208
    xmm0_18[3] = xmm3_14
    void* ecx_14 = arg3 + 0x14 + ebx
    *(arg3 + 0x6cc) = xmm0_18
    int128_t xmm0_27 = *ecx_14
    *(arg3 + 0x740) = xmm0_18
    *(arg3 + 0x730) = xmm0_27
    char const* const var_268_5
    int32_t var_264_5
    char const* const var_260_5
    int32_t result
    char* ecx_17
    void* var_268_4
    void* var_264_4
    float var_260_4
    void* eax_29
    
    if (*(eax_20 + arg3 + 0xb8) != 4)
        void var_24c
        eax_29 = &var_24c
        void* var_260_6 = ecx_14
        var_260_4 = var_9c:0xc.d
        var_264_4 = ecx_14
        var_268_4 = &var_24c
    label_465eff:
        float* eax_30 = sub_48a510(eax_29, &var_6c, arg3 + 0x6cc, var_268_4, var_264_4, var_260_4)
        bool cond:1_1 = *(arg3 + 0xa) == 0
        int128_t xmm1_40 = *(eax_30 + 0x10)
        int128_t xmm2_19 = *(eax_30 + 0x20)
        int128_t xmm3_25 = *(eax_30 + 0x30)
        int128_t xmm4_10 = *(eax_30 + 0x40)
        int32_t eax_31 = eax_30[0x14]
        *(arg3 + 0x6dc) = *eax_30
        *(arg3 + 0x6ec) = xmm1_40
        *(arg3 + 0x6fc) = xmm2_19
        *(arg3 + 0x70c) = xmm3_25
        *(arg3 + 0x71c) = xmm4_10
        *(arg3 + 0x72c) = eax_31
        *(arg3 + 0x750) = *(ebx + arg3 + 0x24) * arg4
        
        if (not(cond:1_1) && arg7 != 0)
            *(arg3 + 0x750) = 0
        
        *(arg3 + 0x72c) = arg5
        int32_t ecx_19 = *(ebx + arg3 + 0xdc)
        
        if (ecx_19 == 0)
            ecx_19 = arg5
        
        result = arg6
        *(arg3 + 0x78c) = ecx_19
        *(arg3 + 0x790) = result
        
        if (result != 0xffffffff)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        var_260_5 = "UI2UpdateComponents"
        var_264_5 = 0x1347
        var_268_5 = "c:\ax2017\engine\ui2.cpp"
        ecx_17 = "ui.worldUISublayer != -1"
    else
        void* eax_21 = data_65ae00
        float xmm2_11 = *(arg3 + 0x738) f- *(arg3 + 0x730)
        uint128_t xmm3_15 = zx.o(*(eax_21 + 0x18))
        int32_t var_a4_1 = eax_13
        float xmm0_30 = _mm_cvtepi32_ps(zx.o(*(eax_21 + 0x14))) - 0f
        float xmm3_17 = _mm_cvtepi32_ps(xmm3_15) - 0f
        float xmm3_18 =
            1f / _mm_min_ss(xmm2_11 / xmm0_30, (*(arg3 + 0x73c) f- *(arg3 + 0x734)) / xmm3_17)
        float xmm1_29 = *(ecx_14 + 0xc) f- *(ecx_14 + 4)
        int128_t var_f4 = var_9c
        var_f4:0xc.d = xmm3_18
        int128_t var_e4_1 = xmm0_14
        float xmm3_19 = xmm3_18 * xmm1_29
        int128_t var_d4_1 = xmm0_15
        int128_t var_c4_1 = var_6c
        int128_t var_b4_1 = xmm0_17
        float xmm2_15 = xmm3_18 * (*(ecx_14 + 8) f- *ecx_14)
        int32_t edx_6
        result, edx_6 = sub_4afaf0(5)
        xmm0_18[2] = result
        float xmm6_2 = xmm0_18[2] * xmm0_30
        xmm0_18[3] = edx_6
        float xmm6_4 = xmm6_2 + 0f - ((xmm2_15 - 0f) * xmm0_18[2] + 0f)
        float xmm5_7 = xmm0_18[3] * xmm3_17 + 0f - ((xmm3_19 - 0f) * xmm0_18[3] + 0f)
        
        if (not(xmm2_15 + xmm6_4 < xmm6_4) && not(xmm3_19 + xmm5_7 < xmm5_7))
            var_f4.d = xmm6_4
            var_f4:4.d = xmm5_7
            void* edi_6 = arg3 + 0x14 + ebx
            void var_134
            float xmm0_46[0x4] =
                *sub_485510(&var_134, arg3 + 0x14 + ebx, &var_f4, &var_134, arg3 + 0x28 + ebx)
            void var_144
            int128_t* eax_28 = sub_485510(&var_144, edi_6, &var_f4, &var_144, edi_4)
            float xmm2_18 = *(ebx + arg3 + 0x48)
            float xmm3_20[0x4] = *eax_28
            eax_29 = ebx + arg3
            float xmm0_48 = xmm3_20[0] f- xmm0_46
            float xmm1_31 = _mm_shuffle_ps(xmm3_20, xmm3_20, 0x55)
            xmm0_46[0] = xmm0_48 * xmm2_18 f+ xmm0_46
            float xmm0_52 = _mm_shuffle_ps(xmm0_46, xmm0_46, 0x55)
            float xmm0_54 = _mm_shuffle_ps(xmm0_46, xmm0_46, 0xaa)
            float xmm4_9 = _mm_shuffle_ps(xmm0_46, xmm0_46, 0xff)
            xmm0_46[1] = (xmm1_31 - xmm0_52) * xmm2_18 + xmm0_52
            float xmm1_36 = _mm_shuffle_ps(xmm3_20, xmm3_20, 0xaa)
            float xmm3_24 = (_mm_shuffle_ps(xmm3_20, xmm3_20, 0xff) - xmm4_9) * xmm2_18 + xmm4_9
            xmm0_46[2] = (xmm1_36 - xmm0_54) * xmm2_18 + xmm0_54
            xmm0_46[3] = xmm3_24
            *(arg3 + 0x6cc) = xmm0_46
            var_260_4 = var_f4:0xc.d
            var_264_4 = edi_6
            void var_1f4
            var_268_4 = &var_1f4
            goto label_465eff
        
        var_260_5 = "RectTopLeft"
        var_264_5 = 0x127
        var_268_5 = "c:\ax2017\engine\rect.cpp"
        ecx_17 = "RectIsNormalized(r)"
    sub_44e4d0(result, &data_5559b1, ecx_17, var_268_5, var_264_5, var_260_5)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
