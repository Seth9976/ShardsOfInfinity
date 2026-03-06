// 函数名称: sub_500630
// 虚拟地址: 0x500630
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_500630()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    void* eax_1 = __security_cookie ^ &__saved_ebp
    void* var_14 = eax_1
    int32_t* ecx = data_d76c60
    char var_31 = 0
    char const* const var_ec
    int32_t var_e8
    char const* const var_e4_1
    char* ecx_1
    
    if (ecx[1] == 0x1e)
        int32_t* result = sub_4459f0(ecx)
        int32_t edi_1 = 0
        int32_t* result_1 = result
        
        if (data_d77c6c s<= 0)
        label_500a1e:
            @__security_check_cookie@4(var_14 ^ &__saved_ebp)
            return result
        
        float var_74
        float var_68
        int128_t var_50
        float var_48
        float var_44
        int128_t var_30
        char ecx_3
        
        do
            void* eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_4fbab0((&data_d76c6c)[edi_1], nullptr)
            eax_1 = *(eax_2 + 4)
            void* eax_7
            int32_t* edx_2
            int128_t xmm0_9
            
            if (eax_1 == 1 || eax_1 == 4 || eax_1 == 5)
                int32_t* ecx_6 = *(eax_2 + 0x68)
                
                if (ecx_6 == 0)
                    var_e4_1 = "SizeToSource"
                    var_e8 = 0x7fe
                    var_ec = "c:\ax2017\engine\editor\uieditor.cpp"
                    ecx_1 = "el.image"
                    goto label_500a59
                
                sub_48d180(ecx_6)
                float eax_8
                int32_t edx_3
                eax_8, edx_3 = sub_432570(*(eax_2 + 0x68))
                float xmm1_10 = *(eax_2 + 0x14) f+ *(eax_2 + 0xc)
                float xmm0_11 = *(eax_2 + 0x18) f+ *(eax_2 + 0x10)
                var_68 = eax_8
                int32_t var_64_1 = edx_3
                edx_2 = &var_68
                var_48 = xmm1_10 * 0.5f
                var_44 = xmm0_11 * 0.5f
                void var_c0
                xmm0_9 = *sub_45c380(&var_c0, edx_2, &var_50:8, &var_c0)
                void var_d0
                eax_7 = &var_d0
                goto label_500827
            
            if (eax_1 == 2)
                void var_90
                int128_t* eax_4 = sub_486000(&var_90, edx_1, *(eax_2 + 0xa0), &var_90)
                float var_80
                edx_2 = &var_80
                uint128_t xmm4_1 = zx.o(*(eax_2 + 0x88))
                float xmm3_2 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x8c)))
                float xmm2_1[0x4] = *eax_4
                float xmm4_2 = _mm_cvtepi32_ps(xmm4_1)
                float xmm1_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
                float xmm0_5 = (_mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
                    - _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)) * xmm4_2 + (xmm4_2 - 1f) f* *(eax_2 + 0x90)
                var_80 = (xmm1_2 f- xmm2_1) * xmm3_2 + (xmm3_2 - 1f) f* *(eax_2 + 0x94)
                float var_7c_1 = xmm0_5
                float xmm0_8 = (*(eax_2 + 0x18) f+ *(eax_2 + 0x10)) * 0.5f
                float var_78 = (*(eax_2 + 0x14) f+ *(eax_2 + 0xc)) * 0.5f
                var_74 = xmm0_8
                void var_a0
                xmm0_9 = *sub_45c380(&var_a0, edx_2, &var_78, &var_a0)
                void var_b0
                eax_7 = &var_b0
            label_500827:
                var_30 = xmm0_9
                *(eax_2 + 0xc) = *sub_47bc00(eax_7, edx_2, &var_30, eax_7)
                ecx_3 = var_31
            else if (eax_1 != 6)
                ecx_3 = var_31
            else
                ecx_3 = 1
                var_31 = 1
            
            result = data_d77c6c
            edi_1 += 1
        while (edi_1 s< result)
        
        if (ecx_3 == 0)
            goto label_500a1e
        
        int32_t edi_2 = 0
        
        if (result s<= 0)
            goto label_500a1e
        
        while (true)
            result = sub_4fbab0((&data_d76c6c)[edi_2], &var_74)
            
            if (result[1] == 6)
                float edx_5 = var_74
                int32_t eax_12 = result[0x12]
                int32_t esi_2 = *result_1
                int128_t xmm0_14 = *(edx_5 i* 0x118 + esi_2 + 0x124)
                int32_t ecx_13 = edx_5 i+ 2
                var_50 = xmm0_14
                
                if (eax_12 != 0xffffffff)
                    int32_t edx_7 = edx_5 i+ eax_12
                    
                    if (ecx_13 s<= edx_7)
                        eax_1 = ecx_13 * 0x118 + 0x10 + esi_2
                        
                        while (true)
                            int32_t xmm0_19 = var_50.d
                            
                            if (var_48 f< xmm0_19)
                                break
                            
                            int32_t xmm2_4 = var_50:4.d
                            
                            if (var_44 f< xmm2_4)
                                break
                            
                            int32_t xmm4_4 = *(eax_1 - 4)
                            
                            if (xmm4_4 f<= xmm0_19)
                                var_30.d = xmm4_4
                            else
                                var_30.d = xmm0_19
                            
                            int32_t xmm0_20 = *(eax_1 + 4)
                            
                            if (var_48 f<= xmm0_20)
                                var_30:8.d = xmm0_20
                            else
                                var_30:8.d = var_48
                            
                            int32_t xmm0_21 = *eax_1
                            
                            if (xmm0_21 f<= xmm2_4)
                                var_30:4.d = xmm0_21
                            else
                                var_30:4.d = xmm2_4
                            
                            int32_t xmm0_22 = *(eax_1 + 8)
                            
                            if (var_44 f<= xmm0_22)
                                var_30:0xc.d = xmm0_22
                            else
                                var_30:0xc.d = var_44
                            
                            xmm0_14 = var_30
                            ecx_13 += 1
                            eax_1 += 0x118
                            var_50 = xmm0_14
                            
                            if (ecx_13 s> edx_7)
                                goto label_500a06
                        
                    label_500a2a:
                        var_e4_1 = "RectUnion"
                        var_e8 = 0xdb
                        var_ec = "c:\ax2017\engine\rect.cpp"
                        ecx_1 = "RectIsNormalized(r0)"
                        break
                else
                    int32_t edx_6 = result_1[1]
                    
                    if (ecx_13 s< edx_6)
                        eax_1 = ecx_13 * 0x118 + 0x10 + esi_2
                        
                        while (true)
                            int32_t xmm0_15 = var_50.d
                            
                            if (var_48 f< xmm0_15)
                                break
                            
                            int32_t xmm2_3 = var_50:4.d
                            
                            if (var_44 f< xmm2_3)
                                break
                            
                            int32_t xmm4_3 = *(eax_1 - 4)
                            int32_t var_70_1
                            
                            var_70_1 = xmm4_3 f<= xmm0_15 ? xmm4_3 : xmm0_15
                            
                            float xmm0_16 = *(eax_1 + 4)
                            
                            var_68 = var_48 <= xmm0_16 ? xmm0_16 : var_48
                            
                            int32_t xmm0_17 = *eax_1
                            
                            if (xmm0_17 f<= xmm2_3)
                                int32_t var_6c_2 = xmm0_17
                            else
                                int32_t var_6c_1 = xmm2_3
                            
                            int32_t xmm0_18 = *(eax_1 + 8)
                            
                            if (var_44 f<= xmm0_18)
                                int32_t var_64_3 = xmm0_18
                            else
                                float var_64_2 = var_44
                            
                            xmm0_14 = var_70_1.o
                            ecx_13 += 1
                            eax_1 += 0x118
                            var_50 = xmm0_14
                            
                            if (ecx_13 s>= edx_6)
                                goto label_500a06
                        
                        goto label_500a2a
                
            label_500a06:
                *(result + 0xc) = xmm0_14
            
            edi_2 += 1
            
            if (edi_2 s>= data_d77c6c)
                goto label_500a1e
    else
        var_e4_1 = "UIDefGet"
        var_e8 = 0x10d
        var_ec = "c:\ax2017\engine\uidef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    
    label_500a59:
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_ec, var_e8, var_e4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
