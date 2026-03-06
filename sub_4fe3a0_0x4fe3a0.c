// 函数名称: sub_4fe3a0
// 虚拟地址: 0x4fe3a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4fe3a0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int128_t* eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* var_14 = eax_1
    int32_t* ecx = data_d76c60
    char const* const var_15c
    int32_t var_158
    char const* const var_154_1
    char* ecx_1
    
    if (ecx[1] == 0x1e)
        void* eax_2 = sub_4459f0(ecx)
        int32_t esi_1 = 0
        float xmm7_1 = data_df847c
        float xmm2_1[0x4] = *(eax_2 + 8)
        int128_t var_58
        __builtin_memcpy(&var_58, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x40)
        float xmm3_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
        float xmm4_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
        int128_t xmm3_3 = xmm3_2 f- xmm2_1
        float xmm5_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
        int128_t xmm4_3 = xmm4_2 f- xmm5_2
        float var_100_1[0x4] = xmm2_1
        float var_b8[0x4] = xmm2_1
        int128_t var_f0_1 = xmm3_3
        float var_120_1[0x4] = xmm5_2
        int128_t var_110_1 = xmm4_3
        float var_a0_1 = 16f
        int32_t var_9c_1 = 0x41800000
        
        while (true)
            int128_t var_a8
            int32_t* edx_1 = &var_a8:8
            float xmm0_5 = (*(&var_58:4 + (esi_1 << 3)) f* xmm4_3 f+ xmm5_2 f- data_df8484) * xmm7_1
            float var_c0 = (*(&var_58 + (esi_1 << 3)) f* xmm3_3 f+ xmm2_1 f- data_df8480) * xmm7_1
            float var_bc_1 = xmm0_5
            void var_e0
            eax_1 = sub_45c380(&var_e0, edx_1, &var_c0, &var_e0)
            float xmm0_6[0x4] = *eax_1
            float xmm1_7 = _mm_shuffle_ps(xmm0_6, xmm0_6, 0xaa)
            float var_98[0x4] = xmm0_6
            
            if (not(xmm1_7 f< xmm0_6))
                float xmm3_4 = var_98[3]
                float xmm2_2 = var_98[1]
                
                if (not(xmm3_4 < xmm2_2))
                    if (not(arg1 f< xmm0_6) && not(arg2 f< xmm2_2) && not(xmm1_7 f< arg1)
                            && xmm3_4 f>= arg2)
                        @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                        return esi_1
                    
                    esi_1 += 1
                    
                    if (esi_1 s< 8)
                        xmm2_1 = var_100_1
                        xmm3_3 = var_f0_1
                        xmm4_3 = var_110_1
                        xmm5_2 = var_120_1
                        continue
                    
                    int128_t var_88
                    __builtin_memcpy(&var_88, 
                        "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x"
                    "03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x07"
                    "00\x00\x00\x06\x00\x00\x00", 
                        0x30)
                    int128_t* eax_6 = sub_4fb7b0(&var_98, edx_1, &var_b8, &var_98)
                    void* edi_1 = &var_88:4
                    float var_9c_2 = 2.80259693e-45f
                    int32_t esi_2 = 0
                    var_98 = *eax_6
                    var_c0 = 16f
                    int32_t var_bc_2 = 0x41800000
                    int32_t var_d0 = 0x41800000
                    int32_t var_cc_1 = 0x41800000
                    
                    while (true)
                        int32_t eax_7 = *(edi_1 - 4)
                        float xmm2_3 = data_df847c
                        float xmm0_13 = (*(&var_58:4 + (eax_7 << 3)) f* var_110_1.d
                            + var_120_1[0] f- data_df8484) * xmm2_3
                        float var_c8 = (var_f0_1.d f* *(&var_58 + (eax_7 << 3))
                            + var_100_1[0] f- data_df8480) * xmm2_3
                        float var_c4_1 = xmm0_13
                        void var_130
                        float xmm6_2[0x4] = *sub_45c380(&var_130, &var_c0, &var_c8, &var_130)
                        var_b8 = xmm6_2
                        float xmm0_18 = (*(&var_58:4 + (var_9c_2 << 3)) f* var_110_1.d
                            + var_120_1[0] f- data_df8484) f* data_df847c
                        float var_d8 = (var_f0_1.d f* *(&var_58 + (var_9c_2 << 3))
                            + var_100_1[0] f- data_df8480) f* data_df847c
                        float var_d4_1 = xmm0_18
                        void var_140
                        eax_1 = sub_45c380(&var_140, &var_d0, &var_d8, &var_140)
                        float xmm2_5 = _mm_shuffle_ps(xmm6_2, xmm6_2, 0xaa)
                        var_a8 = *eax_1
                        
                        if (not(xmm2_5 f< xmm6_2))
                            float xmm1_18 = var_b8[3]
                            float xmm0_20 = var_b8[1]
                            
                            if (not(xmm1_18 < xmm0_20))
                                float xmm3_5[0x4] = var_a8.d
                                
                                if (not(xmm3_5 f> xmm6_2))
                                    xmm6_2 = xmm3_5
                                
                                if (not(xmm2_5 > var_a0_1))
                                    xmm2_5 = var_a0_1
                                
                                float xmm3_7 = var_a8:4.d
                                
                                if (not(xmm3_7 > xmm0_20))
                                    xmm0_20 = xmm3_7
                                
                                if (not(xmm1_18 > var_9c_2))
                                    xmm1_18 = var_9c_2
                                
                                float xmm4_4[0x4] = var_98[2]
                                
                                if (not(var_98[0] f> xmm6_2))
                                    xmm6_2 = xmm4_4
                                
                                float xmm5_3 = var_98[1]
                                float xmm3_10 = var_98[3]
                                
                                if (not(xmm5_3 > xmm0_20))
                                    xmm0_20 = xmm3_10
                                
                                if (not(xmm2_5 f> xmm4_4))
                                    xmm2_5 = var_98[0]
                                
                                if (not(xmm1_18 > xmm3_10))
                                    xmm1_18 = xmm5_3
                                
                                if (xmm2_5 f< xmm6_2)
                                    goto label_4fe81d
                                
                                if (xmm1_18 < xmm0_20)
                                    goto label_4fe81d
                                
                                if (not(arg1 f< xmm6_2) && not(arg2 f< xmm0_20) && not(xmm2_5 f< arg1)
                                        && xmm1_18 f>= arg2)
                                    int32_t eax_14 = *(&var_88:8 + esi_2 * 0xc)
                                    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                                    return eax_14
                                
                                esi_2 += 1
                                edi_1 += 0xc
                                
                                if (esi_2 s>= 4)
                                    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                                    return 0xffffffff
                                
                                var_9c_2 = *edi_1
                                continue
                        
                        var_154_1 = "RectUnion"
                        var_158 = 0xdb
                        ecx_1 = "RectIsNormalized(r0)"
                        break
                    
                    break
            
        label_4fe81d:
            var_154_1 = "RectContains"
            var_158 = 0xa4
            ecx_1 = "RectIsNormalized(r)"
            break
        
        var_15c = "c:\ax2017\engine\rect.cpp"
    else
        var_154_1 = "UIDefGet"
        var_158 = 0x10d
        var_15c = "c:\ax2017\engine\uidef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_15c, var_158, var_154_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
