// 函数名称: sub_489320
// 虚拟地址: 0x489320
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_489320(int32_t arg1, uint32_t (* arg2)[0x4], void* arg3, int32_t arg4 @ esi, float arg5 @ edi, float arg6 @ xmm3, int128_t* arg7))[0x4]
{
    // 第一条实际指令: void var_1d8
    void var_1d8
    int32_t eax_1 = __security_cookie ^ &var_1d8
    void* var_1c8 = arg3
    float var_180[0x4]
    int128_t* eax_4 = sub_486050(&var_180, arg2, *(arg3 + 4), arg6, &var_180, arg7)
    int32_t* ecx_1 = *(arg3 + 4)
    float xmm0[0x4] = *eax_4
    bool cond:0 = ecx_1[1] == 0x1e
    float var_b0[0x4] = xmm0
    float var_a0[0x4] = xmm0
    int128_t xmm0_1 = eax_4[1]
    int128_t xmm0_2 = eax_4[2]
    int128_t xmm0_3 = eax_4[3]
    int128_t xmm0_4 = eax_4[4]
    uint32_t (* eax_5)[0x4] = eax_4[5].d
    uint32_t (* var_50)[0x4] = eax_5
    int32_t var_1e8_1
    char const* const var_1e4_1
    char* ecx_2
    
    if (cond:0)
        int32_t eax_7 = *sub_4459f0(ecx_1)
        float edi_2 = arg2 * 0x118 + eax_7
        eax_5 = sub_486810(eax_7, arg2, var_1c8, &data_5559b1)
        int32_t* ecx_5 = *(edi_2 i+ 4) - 1
        int32_t* esi_1 = eax_5
        void** var_1e8_3
        void* var_1e4_4
        int32_t var_1c0
        int128_t var_190
        int128_t var_40
        
        switch (ecx_5)
            case nullptr
                int32_t var_1e4_3 = 0
                int32_t eax_12 = sub_486260(&var_a0, esi_1, edi_2, &var_a0, 0, ecx_5, nullptr)
                @__security_check_cookie@4(eax_1 ^ &var_1d8)
                return eax_12
            case 1
                if (*(edi_2 i+ 0xa0) == 0)
                    @__security_check_cookie@4(eax_1 ^ &var_1d8)
                    return eax_5
                
                bool cond:1_1 = *(edi_2 i+ 0xae) == 0
                void* eax_22 = data_cdf424
                int128_t xmm0_14 = *(eax_22 + 0x28)
                int32_t eax_23 = *(eax_22 + 0x38)
                var_1c0 = eax_23
                var_190 = xmm0_14
                var_40 = xmm0_14
                int128_t var_30
                var_30.d = eax_23
                void* var_1a0
                float xmm1_4[0x4]
                
                if (cond:1_1)
                    xmm1_4 = var_b0
                else
                    int128_t* eax_26 =
                        sub_485510(&var_1a0, edi_2 i+ 0xc, &var_a0, &var_1a0, edi_2 i+ 0x1c)
                    bool cond:2_1 = var_1c0 != 0
                    var_b0 = *eax_26
                    void var_118
                    
                    if (cond:2_1)
                        eax_26 = sub_47bd20(&var_118, &var_b0, &var_40, &var_118)
                    void* eax_27 = data_cdf424
                    xmm1_4 = var_a0
                    *(eax_27 + 0x28) = *eax_26
                    *(eax_27 + 0x38) = 0xffffffff
                
                uint32_t (* var_1cc_2)[0x4]
                int32_t ecx_22
                int32_t edx_8
                
                if (esi_1[0x48] s<= *esi_1)
                    edx_8 = *(edi_2 i+ 0x8c)
                    ecx_22 = edx_8
                    eax_5 = *(edi_2 i+ 0x88)
                    var_1cc_2 = eax_5
                else
                    edx_8 = esi_1[0x4b]
                    ecx_22 = *(edi_2 i+ 0x8c)
                    var_1cc_2 = esi_1[0x4c]
                    eax_5 = *(edi_2 i+ 0x88)
                
                int32_t edx_10
                
                if (esi_1[0x48] s<= *esi_1)
                    edx_10 = ecx_22
                    var_1c8 = eax_5
                else
                    edx_10 = esi_1[0x49]
                    var_1c8 = esi_1[0x4a]
                
                var_b0[0] = edx_10
                var_b0[1] = var_1c8
                int32_t edx_12 = edx_8
                
                if (ecx_22 * eax_5 s<= 0x1e)
                    eax_5 = edx_12 * var_1cc_2
                    
                    if (eax_5 s<= 0x1e)
                        int32_t ecx_24 = 0
                        int128_t var_170 = xmm0_1
                        int128_t var_160 = xmm0_2
                        int128_t var_150 = xmm0_3
                        int128_t var_140 = xmm0_4
                        float xmm0_22 = esi_1[0x55] f+ xmm1_4
                        var_180 = xmm1_4
                        uint32_t (* var_130)[0x4] = var_50
                        int32_t var_1c4_2 = 0
                        var_180[0] = xmm0_22
                        var_180[1] = esi_1[0x56] f+ var_180[1]
                        
                        if (var_1cc_2 s> 0)
                            do
                                void* eax_34 = nullptr
                                var_1c8 = nullptr
                                
                                if (edx_12 s> 0)
                                    do
                                        var_1a0 = eax_34
                                        int32_t var_1e4_8 = ecx_24
                                        int32_t var_19c_1 = ecx_24
                                        void var_108
                                        int128_t* eax_36 = sub_485aa0(&var_108, esi_1, edi_2, &var_108, 
                                            &var_180, &var_1a0, &var_b0)
                                        var_a0 = *eax_36
                                        int128_t var_90_1 = eax_36[1]
                                        int128_t var_80_1 = eax_36[2]
                                        int128_t var_70_1 = eax_36[3]
                                        int128_t var_60_1 = eax_36[4]
                                        int32_t var_50_1 = eax_36[5].d
                                        *(sub_487340(&var_1a0, esi_1, edi_2, &var_1a0) + 0x434)
                                        sub_4899c0(0x3f800000, arg5, arg4)
                                        edx_12 = edx_8
                                        eax_34 = var_1c8 + 1
                                        ecx_24 = var_1c4_2
                                        var_1c8 = eax_34
                                    while (eax_34 s< edx_12)
                                
                                ecx_24 += 1
                                var_1c4_2 = ecx_24
                            while (ecx_24 s< var_1cc_2)
                        
                        void* eax_41 = data_cdf424
                        int32_t ecx_28 = var_1c0
                        *(eax_41 + 0x28) = var_190
                        *(eax_41 + 0x38) = ecx_28
                        @__security_check_cookie@4(eax_1 ^ &var_1d8)
                        return eax_41
                    
                    var_1e4_1 = "UIStateDrawElementInt"
                    var_1e8_1 = 0xa73
                    ecx_2 = "dimsUpdate.x * dimsUpdate.y <= 30"
                else
                    var_1e4_1 = "UIStateDrawElementInt"
                    var_1e8_1 = 0xa72
                    ecx_2 = "el.rows * el.cols <= 30"
            case 2
                var_1e4_4 = nullptr
                var_1e8_3 = nullptr
            label_489552:
                int32_t* eax_14 = sub_488e20(&var_a0, esi_1, edi_2, &var_a0, var_1e8_3, var_1e4_4)
                @__security_check_cookie@4(eax_1 ^ &var_1d8)
                return eax_14
            case 3, 5
                @__security_check_cookie@4(eax_1 ^ &var_1d8)
                return eax_5
            case 4
                if (*(esi_1 + 0x21) != 0)
                    @__security_check_cookie@4(eax_1 ^ &var_1d8)
                    return eax_5
                
                int32_t* ecx_18 = *esi_1
                int32_t eax_15
                
                if (esi_1[0xd] s> ecx_18)
                    eax_15 = esi_1[0xe]
                else if (*(esi_1 + 0x23) != 0 || esi_1[9].b != 0)
                    eax_15 = 3
                else if (*(esi_1 + 0x29) == 0)
                    eax_15 = 0
                else
                    eax_5.b = *(esi_1 + 0x2b)
                    
                    if (eax_5.b == 0)
                        eax_15 = 1
                    else if (esi_1[0xb].b != 0)
                        eax_15 = 2
                    else if (eax_5.b != 0)
                        eax_15 = 0
                    else
                        eax_15 = 1
                
                int32_t var_1cc_1 = eax_15
                int32_t eax_16
                
                if (esi_1[0x53] s> ecx_18 && esi_1[0x54].b != 0 && eax_15 == 0)
                    var_1cc_1 = 1
                label_4895fc:
                    eax_16 = *(edi_2 i+ 0xe0)
                    goto label_489602
                
                if (eax_15 != 3)
                    if (eax_15 == 2)
                        eax_16 = *(edi_2 i+ 0xe4)
                        goto label_489602
                    
                    if (eax_15 == 1)
                        goto label_4895fc
                    
                label_489606:
                    
                    if (esi_1[0x25] s<= ecx_18)
                        eax_16 = *(edi_2 i+ 0x68)
                    else
                        eax_16 = esi_1[0x26]
                else
                    eax_16 = *(edi_2 i+ 0xe8)
                label_489602:
                    
                    if (eax_16 == 0)
                        goto label_489606
                
                int32_t var_1e4_5 = 0
                sub_486260(&var_a0, esi_1, edi_2, &var_a0, eax_16, ecx_18, nullptr)
                int32_t* eax_18 = 0xec
                
                if (var_1cc_1 != 3)
                    eax_18 = 0xb8
                
                var_1c8 = *(eax_18 i+ edi_2)
                int32_t* eax_20 = 0xf0
                
                if (var_1cc_1 != 3)
                    eax_20 = 0xbc
                
                var_1c0 = *(eax_20 i+ edi_2)
                var_1e4_4 = &var_1c0
                var_1e8_3 = &var_1c8
                goto label_489552
            case 8
                eax_5 = sub_495430(esi_1[0x28])
                
                if (eax_5 != 0)
                    int128_t* eax_9 =
                        sub_485510(&var_190, edi_2 i+ 0xc, &var_a0, &var_190, edi_2 i+ 0x1c)
                    float xmm5_1 = *(edi_2 i+ 0x7c)
                    float xmm0_5 = *(edi_2 i+ 0x74)
                    var_b0[2] = 0
                    float xmm2_1[0x4] = *eax_9
                    float eax_10 = var_b0[2]
                    float xmm1_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa) f- xmm2_1
                    float xmm3_1 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
                    float xmm4_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff) - xmm3_1
                    float xmm2_5 =
                        *(edi_2 i+ 0x80) * xmm4_3 + xmm3_1 + *(edi_2 i+ 0x78) * xmm4_3 + xmm3_1
                    var_40 = data_5c779c
                    int128_t var_30_1 = data_5c77ac
                    var_30_1:0xc.d = eax_10
                    float xmm0_13 = var_a0[3]
                    var_30_1:4.q = _mm_unpacklo_ps(
                        (xmm5_1 * xmm1_3 f+ xmm2_1 + xmm0_5 * xmm1_3 f+ xmm2_1) * 0.5f, xmm2_5 * 0.5f)
                    var_40.d = xmm0_13
                    eax_5 = sub_49ee40(eax_5, &var_40)
                
                @__security_check_cookie@4(eax_1 ^ &var_1d8)
                return eax_5
            default
                var_1e4_1 = "UIStateDrawElementInt"
                var_1e8_1 = 0xa87
                ecx_2 = "Halt"
    else
        var_1e4_1 = "UIDefGet"
        var_1e8_1 = 0x10d
        ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_44e4d0(eax_5, &data_5559b1, ecx_2, "c:\ax2017\engine\uidef.cpp", var_1e8_1, var_1e4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
