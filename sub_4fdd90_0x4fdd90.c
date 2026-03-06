// 函数名称: sub_4fdd90
// 虚拟地址: 0x4fdd90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4fdd90(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_d77c6c == 0)
    label_4fe362:
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    float var_64[0x9]
    float* eax_2 = sub_4fbbc0(&var_64)
    bool cond:1_1 = data_d77c72 == 0
    int128_t var_ec = *eax_2
    int128_t var_dc = *(eax_2 + 0x10)
    int128_t var_cc_1 = *(eax_2 + 0x20)
    int128_t var_bc_1 = *(eax_2 + 0x30)
    int32_t var_9c_1 = eax_2[0x14]
    int128_t var_ac_1 = *(eax_2 + 0x40)
    char const* const var_160
    int32_t var_15c_1
    char const* const var_158_2
    int128_t* eax_4
    char* ecx_1
    float var_124[0x4]
    float var_10c
    int128_t var_84
    int128_t var_74_1
    int32_t ecx
    
    if (cond:1_1)
    label_4fe00b:
        int32_t var_15c_3 = ecx
        void* eax_8 = sub_4fbab0(data_d76c6c, nullptr)
        int128_t* eax_9
        int32_t ecx_8
        eax_9, ecx_8 = sub_4857b0(eax_8, &var_ec, eax_8, &var_124, 0)
        int32_t esi_2 = 1
        var_74_1 = *eax_9
        
        if (data_d77c6c s<= 1)
            goto label_4fde79
        
        while (true)
            int32_t var_15c_5 = ecx_8
            void* eax_10 = sub_4fbab0((&data_d76c6c)[esi_2], nullptr)
            eax_4, ecx_8 = sub_4857b0(eax_10, &var_ec, eax_10, &var_124, 0)
            float xmm3_4 = var_74_1:8.d
            float xmm2_3 = var_74_1.d
            var_84 = *eax_4
            
            if (not(xmm3_4 < xmm2_3))
                int32_t xmm0_14 = var_74_1:0xc.d
                int32_t xmm1_6 = var_74_1:4.d
                
                if (not(xmm0_14 f< xmm1_6))
                    float xmm4_3 = var_84.d
                    float var_114_1
                    
                    var_114_1 = xmm4_3 <= xmm2_3 ? xmm4_3 : xmm2_3
                    
                    float xmm2_4 = var_84:8.d
                    
                    var_10c = xmm3_4 <= xmm2_4 ? xmm2_4 : xmm3_4
                    
                    int32_t xmm2_5 = var_84:4.d
                    
                    if (xmm2_5 f<= xmm1_6)
                        int32_t var_110_2 = xmm2_5
                    else
                        int32_t var_110_1 = xmm1_6
                    
                    int32_t xmm1_7 = var_84:0xc.d
                    
                    if (xmm0_14 f<= xmm1_7)
                        int32_t var_108_2 = xmm1_7
                    else
                        int32_t var_108_1 = xmm0_14
                    
                    esi_2 += 1
                    var_74_1 = var_114_1.o
                    
                    if (esi_2 s>= data_d77c6c)
                        goto label_4fde79
                    
                    continue
            
        label_4fe135:
            var_158_2 = "RectUnion"
            var_15c_1 = 0xdb
            ecx_1 = "RectIsNormalized(r0)"
            break
        
        var_160 = "c:\ax2017\engine\rect.cpp"
    else
        eax_4, ecx = GetKeyState(0x11)
        char var_158_3
        void* eax_5
        
        if ((0x8000 & eax_4.w) != 0)
            if (data_d77c72 == 0)
                goto label_4fe00b
            
            eax_4, ecx = GetKeyState(0x11)
            
            if ((0x8000 & eax_4.w) == 0)
                goto label_4fe00b
            
            if (data_d77c6c == 1)
                eax_5 = sub_4fbab0(data_d76c6c, nullptr)
                var_158_3 = 1
                goto label_4fde6e
            
            var_158_2 = "TransformCorner"
            var_15c_1 = 0x3bf
            var_160 = "c:\ax2017\engine\editor\uieditor.cpp"
            ecx_1 = "gUI.s.activeSetCount == 1"
        else if (data_d77c6c == 1)
            eax_5 = sub_4fbab0(data_d76c6c, nullptr)
            var_158_3 = 0
        label_4fde6e:
            var_74_1 = *sub_4857b0(eax_5, &var_ec, eax_5, &var_124, var_158_3)
        label_4fde79:
            int32_t esi_1 = 0
            float xmm2_1 = var_74_1:4.d
            float xmm4_2 = var_74_1:0xc.d - xmm2_1
            __builtin_memcpy(&var_dc, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            float xmm0_7 = var_74_1.d
            float xmm3_2 = var_74_1:8.d - xmm0_7
            float var_f4_1 = xmm4_2
            float var_fc = 16f
            int32_t var_f8_1 = 0x41800000
            float var_f0_1 = xmm3_2
            
            while (true)
                float xmm0_10 = *(&var_dc:4 + (esi_1 << 3)) * xmm4_2 + xmm2_1
                float var_104 = *(&var_dc + (esi_1 << 3)) * xmm3_2 + xmm0_7
                float var_100_1 = xmm0_10
                eax_4 = sub_45c380(&var_124, &var_fc, &var_104, &var_124)
                float xmm0_11[0x4] = *eax_4
                float xmm1_5 = _mm_shuffle_ps(xmm0_11, xmm0_11, 0xaa)
                
                if (xmm1_5 f< xmm0_11)
                    break
                
                float xmm3_3 = xmm0_11[3]
                float xmm2_2 = xmm0_11[1]
                
                if (xmm3_3 < xmm2_2)
                    break
                
                if (not(arg1 f< xmm0_11) && not(arg2 f< xmm2_2) && not(xmm1_5 f< arg1)
                        && xmm3_3 f>= arg2)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return esi_1
                
                esi_1 += 1
                
                if (esi_1 s>= 8)
                    int128_t var_40
                    void* edi_1 = &var_40:4
                    float xmm4_4 = var_74_1:4.d
                    int32_t esi_3 = 0
                    __builtin_memcpy(&var_40, 
                        "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x"
                    "03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x07"
                    "00\x00\x00\x06\x00\x00\x00", 
                        0x30)
                    int32_t ebx_1 = 2
                    var_104 = 16f
                    int32_t var_100_2 = 0x41800000
                    var_84:8.d = 0x41800000
                    var_84:0xc.d = 0x41800000
                    
                    while (true)
                        int32_t eax_12 = *(edi_1 - 4)
                        float xmm0_18 = *(&var_dc:4 + (eax_12 << 3)) * var_f4_1 + xmm4_4
                        var_fc = *(&var_dc + (eax_12 << 3)) * var_f0_1 f+ var_74_1.d
                        float var_f8_2 = xmm0_18
                        void var_134
                        int128_t* eax_14 = sub_45c380(&var_134, &var_104, &var_fc, &var_134)
                        float xmm1_13 = var_f0_1 f* *(&var_dc + (ebx_1 << 3)) f+ var_74_1.d
                        float xmm6_2[0x4] = *eax_14
                        float xmm0_21 = *(&var_dc:4 + (ebx_1 << 3)) * var_f4_1 f+ var_74_1:4.d
                        var_124 = xmm6_2
                        var_10c = xmm1_13
                        float var_108_3 = xmm0_21
                        void var_144
                        eax_4 = sub_45c380(&var_144, &var_84:8, &var_10c, &var_144)
                        float xmm2_7 = _mm_shuffle_ps(xmm6_2, xmm6_2, 0xaa)
                        int128_t xmm0_22 = *eax_4
                        
                        if (xmm2_7 f< xmm6_2)
                            goto label_4fe135
                        
                        float xmm1_14 = var_124[3]
                        float xmm0_23 = var_124[1]
                        
                        if (xmm1_14 < xmm0_23)
                            goto label_4fe135
                        
                        float xmm3_5[0x4] = xmm0_22.d
                        
                        if (not(xmm3_5 f> xmm6_2))
                            xmm6_2 = xmm3_5
                        
                        float xmm3_6 = xmm0_22:8.d
                        
                        if (not(xmm2_7 > xmm3_6))
                            xmm2_7 = xmm3_6
                        
                        float xmm3_7 = xmm0_22:4.d
                        
                        if (not(xmm3_7 > xmm0_23))
                            xmm0_23 = xmm3_7
                        
                        float xmm3_8 = xmm0_22:0xc.d
                        
                        if (not(xmm1_14 > xmm3_8))
                            xmm1_14 = xmm3_8
                        
                        float xmm3_9 = var_74_1.d
                        float xmm5_1[0x4] = var_74_1:8.d
                        
                        if (not(xmm3_9 f> xmm6_2))
                            xmm6_2 = xmm5_1
                        
                        xmm4_4 = var_74_1:4.d
                        
                        if (not(xmm4_4 > xmm0_23))
                            xmm0_23 = var_74_1:0xc.d
                        
                        if (not(xmm2_7 f> xmm5_1))
                            xmm2_7 = xmm3_9
                        
                        if (not(xmm1_14 f> var_74_1:0xc.d))
                            xmm1_14 = xmm4_4
                        
                        if (xmm2_7 f< xmm6_2)
                            break
                        
                        if (xmm1_14 < xmm0_23)
                            break
                        
                        if (not(arg1 f< xmm6_2) && not(arg2 f< xmm0_23) && not(xmm2_7 f< arg1)
                                && xmm1_14 f>= arg2)
                            void var_38
                            int32_t eax_17 = *(&var_38 + esi_3 * 0xc)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_17
                        
                        esi_3 += 1
                        edi_1 += 0xc
                        
                        if (esi_3 s>= 4)
                            goto label_4fe362
                        
                        ebx_1 = *edi_1
                    
                    break
                
                xmm0_7 = var_74_1.d
                xmm2_1 = var_74_1:4.d
                xmm3_2 = var_f0_1
                xmm4_2 = var_f4_1
            
            var_158_2 = "RectContains"
            ecx_1 = "RectIsNormalized(r)"
            var_15c_1 = 0xa4
            var_160 = "c:\ax2017\engine\rect.cpp"
        else
            var_158_2 = "TransformCorner"
            var_15c_1 = 0x3b9
            var_160 = "c:\ax2017\engine\editor\uieditor.cpp"
            ecx_1 = "gUI.s.activeSetCount == 1"
    sub_44e4d0(eax_4, &data_5559b1, ecx_1, var_160, var_15c_1, var_158_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
