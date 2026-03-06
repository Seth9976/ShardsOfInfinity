// 函数名称: sub_46cc20
// 虚拟地址: 0x46cc20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_46cc20(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_5cea2c == 0)
    label_46d2c1:
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    int32_t var_114
    char const* const var_110_1
    float var_bc
    float var_a4_1
    float var_a0_1
    float var_8c[0x4]
    int128_t* eax_2
    char* ecx_1
    float xmm1_1
    float xmm4_1
    float xmm6_1
    float xmm7_1
    
    if (data_5cea36 == 0)
    label_46ce74:
        void* eax_7 = sub_469160(data_5cda2c)
        int32_t esi_2 = 1
        int32_t ecx_7 = *(eax_7 + 0x63c) * 0x208
        float xmm3_4 = *(eax_7 + 0x6cc)
        float xmm1_8 = *(eax_7 + 0x6d4) - xmm3_4
        float xmm2_4 = *(eax_7 + 0x6d0)
        float xmm0_8 = *(eax_7 + 0x6d8) - xmm2_4
        xmm7_1 = *(ecx_7 + eax_7 + 0xcc) * xmm1_8 + xmm3_4
        xmm4_1 = *(ecx_7 + eax_7 + 0xd4) * xmm1_8 + xmm3_4
        xmm6_1 = *(ecx_7 + eax_7 + 0xd0) * xmm0_8 + xmm2_4
        float var_a8_2 = xmm7_1
        xmm1_1 = *(ecx_7 + eax_7 + 0xd8) * xmm0_8 + xmm2_4
        var_a0_1 = xmm4_1
        float var_ac_2 = xmm6_1
        var_a4_1 = xmm1_1
        
        if (data_5cea2c s<= 1)
            goto label_46cd14
        
        while (true)
            eax_2 = sub_469160((&data_5cda2c)[esi_2])
            int32_t ecx_9 = *(eax_2 + 0x63c) * 0x208
            float xmm3_5 = *(eax_2 + 0x6cc)
            float xmm2_5 = eax_2[0x6d].d
            float xmm1_12 = *(eax_2 + 0x6d4) - xmm3_5
            float xmm0_10 = *(eax_2 + 0x6d8) - xmm2_5
            float xmm7_6 = *(ecx_9 + eax_2 + 0xcc) * xmm1_12 + xmm3_5
            float xmm6_6 = *(ecx_9 + eax_2 + 0xd4) * xmm1_12 + xmm3_5
            float xmm5_3 = *(ecx_9 + eax_2 + 0xd0) * xmm0_10 + xmm2_5
            float xmm4_7 = *(ecx_9 + eax_2 + 0xd8) * xmm0_10 + xmm2_5
            
            if (var_a0_1 < var_a8_2 || var_a4_1 < var_ac_2)
            label_46d08a:
                var_110_1 = "RectUnion"
                var_114 = 0xdb
                ecx_1 = "RectIsNormalized(r0)"
                goto label_46d2d9
            
            float var_c4_1
            
            var_c4_1 = xmm7_6 <= var_a8_2 ? xmm7_6 : var_a8_2
            
            var_bc = var_a0_1 <= xmm6_6 ? xmm6_6 : var_a0_1
            
            if (xmm5_3 <= var_ac_2)
                float var_c0_2 = xmm5_3
            else
                float var_c0_1 = var_ac_2
            
            if (var_a4_1 <= xmm4_7)
                float var_b8_2 = xmm4_7
            else
                float var_b8_1 = var_a4_1
            
            esi_2 += 1
            var_8c = var_c4_1.o
            
            if (esi_2 s>= data_5cea2c)
                break
            
            var_a4_1 = var_8c[3]
            var_a0_1 = var_8c[2]
            var_ac_2 = var_8c[1]
            var_a8_2 = var_8c[0]
            continue
        
        goto label_46cce0
    
    eax_2 = GetKeyState(0x11)
    char const* const var_118
    float xmm0_1[0x4]
    
    if ((0x8000 & eax_2.w) == 0)
    label_46ce28:
        
        if (data_5cea2c == 1)
            void* eax_5
            int32_t edx_2
            eax_5, edx_2 = sub_469160(data_5cda2c)
            int128_t var_dc
            xmm0_1 = *sub_462ec0(eax_5, edx_2, eax_5, &var_dc)
        label_46ccd9:
            var_8c = xmm0_1
        label_46cce0:
            xmm1_1 = var_8c[3]
            xmm4_1 = var_8c[2]
            xmm6_1 = var_8c[1]
            xmm7_1 = var_8c[0]
            var_a4_1 = xmm1_1
            var_a0_1 = xmm4_1
        label_46cd14:
            int128_t var_4c
            __builtin_memcpy(&var_4c, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            int32_t esi_1 = 0
            float xmm2_2 = xmm4_1 - xmm7_1
            float xmm3_2 = xmm1_1 - xmm6_1
            float var_a8_1 = xmm2_2
            float var_ac_1 = xmm3_2
            float var_94_1 = 16f
            int32_t var_90_1 = 0x41800000
            
            while (true)
                float xmm0_4 = *(&var_4c:4 + (esi_1 << 3)) * xmm3_2 + xmm6_1
                float var_b4 = *(&var_4c + (esi_1 << 3)) * xmm2_2 + xmm7_1
                float var_b0_1 = xmm0_4
                int128_t var_9c
                eax_2 = sub_45c380(&var_dc, &var_9c:8, &var_b4, &var_dc)
                float xmm0_5[0x4] = *eax_2
                float xmm1_6 = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xaa)
                var_8c = xmm0_5
                
                if (xmm1_6 f< xmm0_5)
                    break
                
                float xmm3_3 = var_8c[3]
                float xmm2_3 = var_8c[1]
                
                if (xmm3_3 < xmm2_3)
                    break
                
                if (not(arg1 f< xmm0_5) && not(arg2 f< xmm2_3) && not(xmm1_6 f< arg1)
                        && xmm3_3 f>= arg2)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return esi_1
                
                esi_1 += 1
                
                if (esi_1 s>= 8)
                    int128_t var_7c
                    void* ebx_1 = &var_7c:4
                    __builtin_memcpy(&var_7c, 
                        "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x"
                    "03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x07"
                    "00\x00\x00\x06\x00\x00\x00", 
                        0x30)
                    int32_t edi_1 = 0
                    float var_90_2 = 2.80259693e-45f
                    var_b4 = 16f
                    int32_t var_b0_2 = 0x41800000
                    var_bc = 16f
                    int32_t var_b8_3 = 0x41800000
                    
                    while (true)
                        int32_t eax_9 = *(ebx_1 - 4)
                        float xmm0_19 = *(&var_4c:4 + (eax_9 << 3)) * var_ac_1 + xmm6_1
                        float var_cc = var_a8_1 f* *(&var_4c + (eax_9 << 3)) + xmm7_1
                        float var_c8_1 = xmm0_19
                        void var_ec
                        int128_t* eax_11 = sub_45c380(&var_ec, &var_b4, &var_cc, &var_ec)
                        float xmm1_18 = *(&var_4c + (var_90_2 << 3)) * var_a8_1
                        var_dc = *eax_11
                        float xmm0_23 = *(&var_4c:4 + (var_90_2 << 3)) * var_ac_1 + xmm6_1
                        var_8c[2] = xmm1_18 + xmm7_1
                        var_8c[3] = xmm0_23
                        void var_fc
                        eax_2 = sub_45c380(&var_fc, &var_bc, &var_8c[2], &var_fc)
                        float xmm4_8[0x4] = *eax_11
                        int128_t xmm0_24 = *eax_2
                        float xmm5_5 = _mm_shuffle_ps(xmm4_8, xmm4_8, 0xaa)
                        var_9c = xmm0_24
                        
                        if (xmm5_5 f< xmm4_8)
                            goto label_46d08a
                        
                        float xmm1_20 = var_dc:0xc.d
                        float xmm0_25 = var_dc:4.d
                        
                        if (xmm1_20 < xmm0_25)
                            goto label_46d08a
                        
                        float xmm2_7[0x4] = var_9c.d
                        
                        if (not(xmm2_7 f> xmm4_8))
                            xmm4_8 = xmm2_7
                        
                        if (not(xmm5_5 > var_94_1))
                            xmm5_5 = var_94_1
                        
                        float xmm2_9 = var_9c:4.d
                        
                        if (not(xmm2_9 > xmm0_25))
                            xmm0_25 = xmm2_9
                        
                        if (not(xmm1_20 > var_90_2))
                            xmm1_20 = var_90_2
                        
                        float xmm3_7[0x4] = var_a0_1
                        
                        if (not(xmm7_1 f> xmm4_8))
                            xmm4_8 = xmm3_7
                        
                        if (not(xmm6_1 > xmm0_25))
                            xmm0_25 = var_a4_1
                        
                        if (not(xmm5_5 f> xmm3_7))
                            xmm5_5 = xmm7_1
                        
                        if (not(xmm1_20 > var_a4_1))
                            xmm1_20 = xmm6_1
                        
                        if (xmm5_5 f< xmm4_8)
                            break
                        
                        if (xmm1_20 < xmm0_25)
                            break
                        
                        if (not(arg1 f< xmm4_8) && not(arg2 f< xmm0_25) && not(xmm5_5 f< arg1)
                                && xmm1_20 f>= arg2)
                            void var_74
                            int32_t eax_16 = *(&var_74 + edi_1 * 0xc)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_16
                        
                        edi_1 += 1
                        ebx_1 += 0xc
                        
                        if (edi_1 s>= 4)
                            goto label_46d2c1
                        
                        var_90_2 = *ebx_1
                    
                    break
                
                xmm2_2 = var_a8_1
                xmm3_2 = var_ac_1
            
            var_110_1 = "RectContains"
            ecx_1 = "RectIsNormalized(r)"
            var_114 = 0xa4
        label_46d2d9:
            var_118 = "c:\ax2017\engine\rect.cpp"
        else
            var_110_1 = "UI2TransformCorner"
            var_114 = 0x1e8a
            var_118 = "c:\ax2017\engine\ui2.cpp"
            ecx_1 = "gUI2Editor.s.activeSetCount == 1"
    else
        eax_2 = data_65ae04
        
        if (*(eax_2 + 0x18) == 0)
            goto label_46ce28
        
        eax_2 = GetFocus()
        
        if (eax_2 != data_ce1790 && eax_2 != 0)
            goto label_46ce28
        
        if (data_5cea36 == 0)
            goto label_46ce74
        
        eax_2 = sub_468df0()
        
        if (eax_2.b == 0)
            goto label_46ce74
        
        if (data_5cea2c == 1)
            xmm0_1 = *(sub_469160(data_5cda2c) + 0x6cc)
            goto label_46ccd9
        
        var_110_1 = "UI2TransformCorner"
        var_114 = 0x1e91
        var_118 = "c:\ax2017\engine\ui2.cpp"
        ecx_1 = "gUI2Editor.s.activeSetCount == 1"
    sub_44e4d0(eax_2, &data_5559b1, ecx_1, var_118, var_114, var_110_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
