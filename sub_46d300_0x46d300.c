// 函数名称: sub_46d300
// 虚拟地址: 0x46d300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_46d300(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_140
    int32_t edx
    int128_t* eax_3 = sub_45f080(&var_140, edx, data_5cd9f8, &var_140)
    int128_t var_58
    __builtin_memcpy(&var_58, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x40)
    int32_t edi = 0
    float xmm2[0x4] = *eax_3
    float xmm4_1[0x4] = _mm_shuffle_ps(xmm2, xmm2, 0x55)
    float xmm0_1 = _mm_shuffle_ps(xmm2, xmm2, 0xaa)
    float xmm5_1 = xmm0_1 f- xmm2
    float xmm0_3 = _mm_shuffle_ps(xmm2, xmm2, 0xff)
    float xmm0_4 = xmm0_3 f- xmm4_1
    float var_130[0x4] = xmm2
    float var_9c = xmm5_1
    float var_110[0x4] = xmm4_1
    int32_t var_b0 = 0x41800000
    int32_t var_ac = 0x41800000
    int32_t var_178
    char const* const var_174_4
    int128_t* eax_5
    char* ecx_11
    
    while (true)
        float xmm3_1 = data_5cda1c
        float xmm1_5 = (*(&var_58 + (edi << 3)) * xmm5_1 f+ xmm2 f- data_5cda20) * xmm3_1
        float var_8c_1 = (*(&var_58:4 + (edi << 3)) * xmm0_4 f+ xmm4_1 f- data_5cda24) * xmm3_1
        float var_120[0x4]
        int128_t var_98
        eax_5 = sub_45c380(&var_120, &var_b0, &var_98:8, &var_120)
        float xmm0_10[0x4] = *eax_5
        float xmm1_7 = _mm_shuffle_ps(xmm0_10, xmm0_10, 0xaa)
        float var_c0[0x4] = xmm0_10
        float xmm2_1
        float xmm3_2
        
        if (not(xmm1_7 f< xmm0_10))
            xmm3_2 = var_c0[3]
            xmm2_1 = var_c0[1]
        
        if (xmm1_7 f< xmm0_10 || xmm3_2 < xmm2_1)
        label_46d807:
            var_174_4 = "RectContains"
            var_178 = 0xa4
        else
            if (not(arg1 f< xmm0_10) && not(arg2 f< xmm2_1) && not(xmm1_7 f< arg1) && xmm3_2 f>= arg2)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return edi
            
            edi += 1
            
            if (edi s>= 8)
                float xmm4_2 = (*eax_3).d
                int128_t var_88
                __builtin_memcpy(&var_88, 
                    "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x03\x"
                "00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x07\x00\x00"
                "00\x06\x00\x00\x00", 
                    0x30)
                
                if (not(xmm0_1 < xmm4_2))
                    float xmm6_1 = var_110[0]
                    
                    if (not(xmm0_3 < xmm6_1))
                        float xmm5_2 = data_5cda1c
                        void* eax_7 = &var_88:4
                        void* var_a8_1 = &var_88:4
                        float xmm0_13 = (xmm0_3 f- data_5cda24) * xmm5_2
                        int32_t edi_1 = 0
                        float var_8c_2 = 2.80259693e-45f
                        float xmm1_10[0x4] = (xmm0_1 f- data_5cda20) * xmm5_2
                        float xmm2_4 = (xmm4_2 f- data_5cda20) * xmm5_2
                        float xmm3_5 = (xmm6_1 f- data_5cda24) * xmm5_2
                        var_c0[3] = xmm0_13
                        var_c0[0] = xmm2_4
                        var_c0[1] = xmm3_5
                        var_c0[2] = xmm1_10
                        int32_t var_c8 = 0x41800000
                        int32_t var_c4_1 = 0x41800000
                        int32_t var_d8 = 0x41800000
                        int32_t var_d4_1 = 0x41800000
                        
                        while (true)
                            int32_t eax_8 = *(eax_7 - 4)
                            float xmm0_18 =
                                (*(&var_58:4 + (eax_8 << 3)) * xmm0_4 + xmm6_1 f- data_5cda24) * xmm5_2
                            float var_d0 =
                                (var_9c f* *(&var_58 + (eax_8 << 3)) + xmm4_2 f- data_5cda20) * xmm5_2
                            float var_cc_1 = xmm0_18
                            void var_150
                            float xmm6_2[0x4] = *sub_45c380(&var_150, &var_c8, &var_d0, &var_150)
                            var_120 = xmm6_2
                            float xmm0_23 = (*(&var_58:4 + (var_8c_2 << 3)) * xmm0_4
                                + var_110[0] f- data_5cda24) f* data_5cda1c
                            var_c0[2] = (*(&var_58 + (var_8c_2 << 3)) * var_9c f+ *eax_3 f- data_5cda20)
                                f* data_5cda1c
                            var_c0[3] = xmm0_23
                            void var_160
                            eax_5 = sub_45c380(&var_160, &var_d8, &var_c0[2], &var_160)
                            float xmm2_6 = _mm_shuffle_ps(xmm6_2, xmm6_2, 0xaa)
                            var_98 = *eax_5
                            
                            if (not(xmm2_6 f< xmm6_2))
                                float xmm1_21 = var_120[3]
                                float xmm0_25 = var_120[1]
                                
                                if (not(xmm1_21 < xmm0_25))
                                    float xmm3_6[0x4] = var_98.d
                                    
                                    if (not(xmm3_6 f> xmm6_2))
                                        xmm6_2 = xmm3_6
                                    
                                    if (not(xmm2_6 > xmm1_5))
                                        xmm2_6 = xmm1_5
                                    
                                    float xmm3_8 = var_98:4.d
                                    
                                    if (not(xmm3_8 > xmm0_25))
                                        xmm0_25 = xmm3_8
                                    
                                    if (not(xmm1_21 > var_8c_2))
                                        xmm1_21 = var_8c_2
                                    
                                    if (not(xmm2_4 f> xmm6_2))
                                        xmm6_2 = xmm1_10
                                    
                                    if (not(xmm3_5 > xmm0_25))
                                        xmm0_25 = xmm0_13
                                    
                                    if (not(xmm2_6 f> xmm1_10))
                                        xmm2_6 = xmm2_4
                                    
                                    if (not(xmm1_21 > xmm0_13))
                                        xmm1_21 = xmm3_5
                                    
                                    if (xmm2_6 f< xmm6_2)
                                        goto label_46d807
                                    
                                    if (xmm1_21 < xmm0_25)
                                        goto label_46d807
                                    
                                    if (not(arg1 f< xmm6_2) && not(arg2 f< xmm0_25)
                                            && not(xmm2_6 f< arg1) && xmm1_21 f>= arg2)
                                        int32_t eax_15 = *(&var_88:8 + edi_1 * 0xc)
                                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                        return eax_15
                                    
                                    edi_1 += 1
                                    eax_7 = var_a8_1 + 0xc
                                    var_a8_1 = eax_7
                                    
                                    if (edi_1 s>= 4)
                                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                        return 0xffffffff
                                    
                                    xmm4_2 = var_130[0]
                                    var_8c_2 = *eax_7
                                    xmm5_2 = data_5cda1c
                                    xmm6_1 = var_110[0]
                                    continue
                            
                            var_174_4 = "RectUnion"
                            var_178 = 0xdb
                            ecx_11 = "RectIsNormalized(r0)"
                            break
                        
                        break
                
                var_174_4 = "RectTopLeft"
                var_178 = 0x127
            else
                xmm2 = var_130
                xmm4_1 = var_110
                xmm5_1 = var_9c
                continue
        
        ecx_11 = "RectIsNormalized(r)"
        break
    
    sub_44e4d0(eax_5, &data_5559b1, ecx_11, "c:\ax2017\engine\rect.cpp", var_178, var_174_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
