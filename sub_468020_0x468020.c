// 函数名称: sub_468020
// 虚拟地址: 0x468020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __fastcallsub_468020(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int128_t* eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* var_8 = eax_1
    void* ebx = *(arg1 + 0x63c) * 0x208
    int32_t* edi = *(ebx + arg1 + 0x10c)
    
    if (edi != 0)
        void* eax_2 = data_cdf428
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(ebx + arg1 + 0x10)))
        double var_14 = _mm_cvtps_pd((*(eax_2 + 0x2c) f- *(arg1 + 0x634)) * 1000f / xmm0_2)
        sub_53c580()
        int32_t ecx = *(ebx + arg1 + 0x110)
        void* ebx_2 = ebx + 0x114 + arg1
        int32_t* var_18 = nullptr
        int32_t* eax_3 = var_18
        var_14 = fconvert.d(float.t(1))
        var_14:4.d = eax_3
        int32_t eax_4 = *(ebx_2 + 4)
        var_14.d = ecx
        float xmm5_2 = _mm_cvtpd_ps(zx.o(var_14))
        char const* const var_80_1
        int32_t var_7c_1
        char const* const var_78_1
        int32_t* var_20
        char* eax_8
        char* ecx_1
        
        if (eax_4 != 0)
            eax_1 = eax_4 - 1
            
            if (eax_4 != 1)
                var_78_1 = "ResultAsColor"
                var_7c_1 = 0x6af
                var_80_1 = "c:\ax2017\engine\ui2.cpp"
                ecx_1 = "Halt"
            label_468499:
                sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_80_1, var_7c_1, var_78_1)
                
                if (IsDebuggerPresent() != 1)
                    sub_44e680()
                    noreturn
                
                breakpoint
            
            var_18 = sub_45d410(ebx_2, 1)
            int32_t* eax_7 = sub_45d410(ebx_2, 0)
            int32_t ecx_4 = *(ebx_2 + 8)
            float xmm5_3 = xmm5_2 - 0f
            var_20 = eax_7
            
            if (0 f< xmm5_3)
                if (xmm5_3 < 1f)
                    eax_8 = sub_47bf90(&var_20, &var_18, sub_4145f0(ecx_4, xmm5_3, (zx.o(0)).d, 1f))
                else if (ecx_4 == 0xa || ecx_4 == 0xc || ecx_4 == 0xb || ecx_4 == 0xd || ecx_4 == 0xe
                        || ecx_4 == 0xf || ecx_4 == 0x13)
                    eax_8 = sub_47bf90(&var_20, &var_18, (zx.o(0)).d)
                else
                    eax_8 = sub_47bf90(&var_20, &var_18, 1f)
            else
                eax_8 = sub_47bf90(&var_20, &var_18, (zx.o(0)).d)
            
            goto label_46818b
        
        eax_8 = sub_45d410(ebx_2, 0)
    label_46818b:
        var_14:4.d = eax_8
        float xmm0_8 = _mm_cvtepi32_ps(zx.o(var_14:3.b)) f* *(arg1 + 0x750)
        float xmm0_9
        
        if (0 f<= xmm0_8)
            xmm0_9 = xmm0_8 + 0.5f
        else
            xmm0_9 = xmm0_8 - 0.5f
        
        float xmm3_1[0x4] = *(arg1 + 0x6cc)
        char ebx_3 = (int.d(xmm0_9)).b
        float xmm5_5 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        float xmm4_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
        float xmm1_7 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
        var_14:3.b = ebx_3
        float xmm2_6 = xmm5_5 f- xmm3_1
        var_20 = xmm4_2 - xmm1_7
        float var_1c = (xmm5_5 f+ xmm3_1) * 0.5f
        var_18 = (xmm4_2 + xmm1_7) * 0.5f
        void var_64
        int128_t var_2c
        eax_1 = sub_45c380(&var_64, &var_2c:8, &var_1c, &var_64)
        var_2c = *eax_1
        
        if (ebx_3 != 0)
            int32_t eax_11 = *(arg1 + 0x63c) * 0x208
            int32_t* ecx_10 = *(eax_11 + arg1 + 0x104)
            
            if (ecx_10 == 0 || ecx_10[1] != 0x1d)
                int32_t edx_6 = *(eax_11 + arg1 + 0xb8)
                char var_78_4
                int128_t var_50
                float xmm0_24
                float xmm1_12
                float xmm2_7
                float xmm3_2
                float xmm4_6
                
                if (edx_6 == 1)
                    xmm4_6 = *(eax_11 + arg1 + 0xc4) f* *(arg1 + 0x6e8)
                    eax_1 = 0x3f800000
                    int128_t xmm0_13 = data_57251c
                    float xmm1_8[0x4] = data_57252c
                    __builtin_memcpy(&var_50, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x24)
                    xmm2_7 = var_2c.d
                    var_50.d = xmm0_13 f* xmm4_6
                    float xmm0_16 = var_50:0xc.d * xmm4_6
                    float xmm1_10 = _mm_shuffle_ps(xmm1_8, xmm1_8, 0xaa) * xmm4_6
                    var_50:0xc.d = xmm0_16
                    int128_t var_40
                    var_40:8.d = xmm1_10
                    var_50:4.d = var_50:4.d * xmm4_6
                    var_40.d = var_40.d * xmm4_6
                    var_40:0xc.d = var_40:0xc.d * xmm4_6
                    
                    if (xmm2_6 < xmm2_7)
                    label_468480:
                        var_78_1 = "RectTopLeft"
                        var_7c_1 = 0x127
                        ecx_1 = "RectIsNormalized(r)"
                        var_80_1 = "c:\ax2017\engine\rect.cpp"
                        goto label_468499
                    
                    float xmm0_23 = var_20
                    xmm3_2 = var_2c:4.d
                    
                    if (xmm0_23 < xmm3_2)
                        goto label_468480
                    
                    xmm1_12 = xmm2_6 - xmm2_7
                    xmm0_24 = xmm0_23 - xmm3_2
                    xmm1_12 f- 0
                    eax_1:1.b = (xmm1_12 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_12, 0f) ? 1 : 0) << 2 | (xmm1_12 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        xmm0_24 f- 0
                        eax_1:1.b = (xmm0_24 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_24, 0f) ? 1 : 0) << 2 | (xmm0_24 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            xmm4_6 f- 0
                            eax_1:1.b = (xmm4_6 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm4_6, 0f) ? 1 : 0) << 2 | (xmm4_6 < 0f ? 1 : 0)
                            bool p_6 = unimplemented  {test ah, 0x44}
                            
                            if (p_6)
                                var_78_4 = edx_6.b
                            label_46843d:
                                int32_t eax_14 = sub_4c6310(&var_14, &var_50, edi, xmm2_7 / xmm4_6, 
                                    xmm3_2 / xmm4_6, xmm1_12 / xmm4_6, xmm0_24 / xmm4_6, &var_14, 
                                    var_78_4)
                                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                return eax_14
                else if (edx_6 != 2)
                    eax_1 = sub_47f0b0(&var_14, &var_2c, edi, &var_14, ecx_10, *(eax_11 + arg1 + 0x174))
                else
                    xmm4_6 = *(eax_11 + arg1 + 0xc4) f* *(arg1 + 0x6e8)
                    eax_1 = 0x3f800000
                    int128_t xmm0_25 = data_57251c
                    float xmm1_13[0x4] = data_57252c
                    __builtin_memcpy(&var_50, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x24)
                    xmm2_7 = var_2c.d
                    var_50.d = xmm0_25 f* xmm4_6
                    float xmm0_28 = var_50:0xc.d * xmm4_6
                    float xmm1_15 = _mm_shuffle_ps(xmm1_13, xmm1_13, 0xaa) * xmm4_6
                    var_50:0xc.d = xmm0_28
                    int128_t var_40_1
                    var_40_1:8.d = xmm1_15
                    var_50:4.d = var_50:4.d * xmm4_6
                    var_40_1.d = var_40_1.d * xmm4_6
                    var_40_1:0xc.d = var_40_1:0xc.d * xmm4_6
                    
                    if (xmm2_6 < xmm2_7)
                        goto label_468480
                    
                    int32_t* xmm0_35 = var_20
                    xmm3_2 = var_2c:4.d
                    
                    if (xmm0_35 f< xmm3_2)
                        goto label_468480
                    
                    xmm1_12 = xmm2_6 - xmm2_7
                    xmm0_24 = xmm0_35 f- xmm3_2
                    xmm1_12 f- 0
                    eax_1:1.b = (xmm1_12 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_12, 0f) ? 1 : 0) << 2 | (xmm1_12 < 0f ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        xmm0_24 f- 0
                        eax_1:1.b = (xmm0_24 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_24, 0f) ? 1 : 0) << 2 | (xmm0_24 < 0f ? 1 : 0)
                        bool p_10 = unimplemented  {test ah, 0x44}
                        
                        if (p_10)
                            xmm4_6 f- 0
                            eax_1:1.b = (xmm4_6 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm4_6, 0f) ? 1 : 0) << 2 | (xmm4_6 < 0f ? 1 : 0)
                            bool p_12 = unimplemented  {test ah, 0x44}
                            
                            if (p_12)
                                var_78_4 = 0
                                goto label_46843d
            else
                eax_1 = sub_47f0b0(&var_14, &var_2c, edi, &var_14, sub_4a31a0(ecx_10), 
                    *(*(arg1 + 0x63c) * 0x208 + arg1 + 0x174))
    
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return eax_1
}
