// 函数名称: sub_4c25b0
// 虚拟地址: 0x4c25b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4c25b0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_50_2
    int32_t var_50_2
    char const* const ecx_16
    
    if (arg2 s< 0 || arg2 s>= *(arg3 + 0x14))
        char const* const var_4c_16 = "FlanimGetTransformAtFrame"
        var_50_2 = 0x382
        ecx_16 = "layerIndex >= 0 && layerIndex < pFlanimDef->mLayerCount"
    else
        int32_t ecx = *(arg3 + 0x10)
        int32_t eax = arg2 * 5
        int32_t* eax_2 = ecx + ((eax + 1) << 2)
        int32_t* var_18_1 = eax_2
        arg1 = *eax_2
        
        if (arg1 s< 0 || arg1 s>= *(arg3 + 0x1c))
            char const* const var_4c_15 = "FlanimGetTransformAtFrame"
            var_50_2 = 0x387
            ecx_16 = "vertexIndexImage >= 0 && vertexIndexImage < pFlanimDef->mVertexCount"
        else
            int32_t eax_5 = arg1 * 0x60 + *(arg3 + 0x18)
            int32_t eax_6 = sub_4c2060(eax_5, 4, eax_5, arg4)
            arg5[0x10] = eax_6
            int32_t eax_7 = sub_4c2060(eax_6, 5, eax_5, arg4)
            arg5[0x11] = eax_7
            int32_t ecx_6 = sub_4c2060(eax_7, 6, eax_5, arg4)
            int32_t var_2c_1 = ecx_6
            int32_t mxcsr
            int16_t x87control
            
            if (ecx_6 s< 0)
                int32_t var_4c_3 = ecx_6
                mxcsr, x87control = sub_44e260("image index <0 (%d)")
                ecx_6 = var_2c_1
            
            arg1 = *(arg3 + 0x24)
            
            if (ecx_6 s>= arg1)
                int32_t var_4c_4 = arg1
                int32_t var_50_1 = ecx_6
                arg1, mxcsr, x87control = sub_44e260("image index >end (%d >= %d)")
                ecx_6 = var_2c_1
            
            if (ecx_6 s< 0 || ecx_6 s>= *(arg3 + 0x24))
                char const* const var_4c_14 = "FlanimGetTransformAtFrame"
                var_50_2 = 0x390
                ecx_16 = "imageIndex >=0 && imageIndex < pFlanimDef->mImageCount"
            else
                int32_t eax_10 = *(*(arg3 + 0x20) + (ecx_6 << 2))
                arg5[0x12] = eax_10
                arg5[0x13] = sub_4c2060(eax_10, 7, eax_5, arg4)
                void* eax_12 = var_18_1
                void* esi_2 = arg3
                
                if (*eax_12 != *(ecx + (eax << 2) + 8))
                    int32_t var_24_5 = 0
                    void* edi_4 = &arg5[1]
                    
                    while (true)
                        arg1 = *eax_12
                        
                        if (arg1 s< 0 || arg1 s>= *(esi_2 + 0x1c))
                            char const* const var_4c_13 = "FlanimGetTransformAtFrame"
                            var_50_2 = 0x3dc
                            ecx_16 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"
                            break
                        
                        int32_t esi_9 = arg1 * 0x60 + *(arg3 + 0x18)
                        float eax_24
                        int32_t edx_6
                        eax_24, edx_6 = sub_4c2130(arg3, 0, esi_9, arg4)
                        *(edi_4 - 4) = eax_24
                        *edi_4 = edx_6
                        float eax_25
                        int32_t edx_7
                        eax_25, edx_7 = sub_4c2130(eax_24, 1, esi_9, arg4)
                        esi_2 = arg3
                        int32_t ecx_20 = var_24_5 + 1
                        *(edi_4 + 4) = eax_25
                        eax_12 = &var_18_1[1]
                        *(edi_4 + 8) = edx_7
                        edi_4 += 0x10
                        var_24_5 = ecx_20
                        var_18_1 = eax_12
                        
                        if (ecx_20 s>= 4)
                            return eax_12
                        
                        continue
                else
                    arg1 = *(ecx + (eax << 2) + 0xc)
                    
                    if (*(ecx + (eax << 2) + 8) != arg1 || arg1 != *(ecx + (eax << 2) + 0x10))
                        char const* const var_4c_10 = "FlanimGetTransformAtFrame"
                        var_50_2 = 0x398
                        ecx_16 = "pLayerDef->mQuad.y == pLayerDef->mQuad.z && pLayerDef->mQuad.z == "
                        "pLayerDef->mQuad.w"
                    else
                        arg1 = *eax_12
                        
                        if (arg1 s>= 0 && arg1 s< *(esi_2 + 0x1c))
                            int32_t esi_5 = arg1 * 0x60 + *(arg3 + 0x18)
                            float eax_13
                            float edx_2
                            eax_13, edx_2 = sub_4c2130(arg1, 0, esi_5, arg4)
                            float eax_14
                            float edx_3
                            eax_14, edx_3 = sub_4c2130(eax_13, 2, esi_5, arg4)
                            float eax_15
                            int32_t edx_4
                            eax_15, edx_4 = sub_4c2130(eax_14, 3, esi_5, arg4)
                            int16_t x87control_1
                            double xmm0_3
                            x87control_1, xmm0_3 =
                                __libm_sse2_cos_precise(mxcsr, x87control, _mm_cvtps_pd(eax_15))
                            float xmm0_5 = fconvert.s(xmm0_3) * eax_14
                            int16_t x87control_2
                            double xmm0_8
                            x87control_2, xmm0_8 =
                                __libm_sse2_sin_precise(mxcsr, x87control_1, _mm_cvtps_pd(eax_15))
                            float xmm0_10 = fconvert.s(xmm0_8) * eax_14
                            int16_t x87control_3
                            double xmm0_13
                            x87control_3, xmm0_13 =
                                __libm_sse2_sin_precise(mxcsr, x87control_2, _mm_cvtps_pd(edx_4))
                            float xmm0_16 = (fconvert.s(xmm0_13) * edx_3) ^ (data_59e5c0.o).d
                            int32_t* eax_16 = arg5
                            float xmm1 = fconvert.s(__libm_sse2_cos_precise(mxcsr, x87control_3, 
                                _mm_cvtps_pd(edx_4)))
                            int32_t* esi_6 = eax_16[0x12]
                            float xmm7 = (zx.o(0)).d
                            float xmm1_1 = xmm1 * edx_3
                            float var_24_4 = xmm1_1
                            float xmm5_1
                            float xmm6_1
                            
                            if (esi_6 == 0)
                                xmm5_1 = (zx.o(0)).d
                                xmm6_1 = (zx.o(0)).d
                            else
                                int32_t* eax_17 = *esi_6
                                
                                if (eax_17 == 0)
                                    sub_4aa5d0(esi_6, 0)
                                    eax_17 = *esi_6
                                    
                                    if (eax_17 == 0)
                                        sub_48dac0(esi_6)
                                        eax_17 = *esi_6
                                    
                                    xmm7 = (zx.o(0)).d
                                
                                xmm1_1 = var_24_4
                                int32_t* ecx_15 = **eax_17
                                int32_t eax_19 = *ecx_15
                                double xmm0_22[0x2] = _mm_cvtepi32_pd(zx.q(eax_19)) f+
                                    *((eax_19 u>> 0x1f << 3) + &data_59e4f0)
                                int32_t eax_21 = ecx_15[1]
                                xmm5_1 = _mm_cvtpd_ps(xmm0_22) f* ecx_15[2]
                                eax_16 = arg5
                                xmm6_1 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_21)) f+
                                    *((eax_21 u>> 0x1f << 3) + &data_59e4f0)) f* ecx_15[2]
                            
                            float var_3c
                            float xmm3
                            float xmm4
                            
                            if (*(arg3 + 0x38) != 0)
                                float xmm5_2 = xmm5_1 / xmm6_1
                                xmm6_1 = 0.5f
                                xmm7 = xmm5_2 * -0.5f
                                xmm4 = -0.5f
                                var_3c = -0.5f
                                xmm5_1 = xmm5_2 * 0.5f
                                xmm3 = xmm7
                            else if (*(arg3 + 0x39) == 0)
                                xmm3 = (zx.o(0)).d
                                var_3c = 0f
                                xmm4 = (zx.o(0)).d
                            else
                                float xmm2_2 = xmm6_1 * -0.5f
                                xmm7 = xmm5_1 * -0.5f
                                xmm5_1 = xmm5_1 * 0.5f
                                xmm4 = xmm2_2
                                xmm6_1 = xmm6_1 * 0.5f
                                xmm3 = xmm7
                                var_3c = xmm2_2
                            
                            eax_16[2] = 0
                            eax_16[3] = 0
                            eax_16[6] = 0x3f800000
                            eax_16[7] = 0
                            float var_38 = xmm5_1
                            float var_34_2 = xmm6_1
                            eax_16[0xa] = 0
                            *eax_16 = xmm0_16 * xmm4 + xmm0_5 * xmm3 + eax_13
                            eax_16[0xb] = 0x3f800000
                            eax_16[0xe] = 0x3f800000
                            eax_16[0xf] = 0x3f800000
                            eax_16[1] = xmm1_1 * xmm4 + xmm0_10 * xmm3 + edx_2
                            eax_16[4] = xmm0_16 * var_3c + xmm0_5 * xmm5_1 + eax_13
                            eax_16[5] = var_24_4 * var_3c + xmm0_10 * xmm5_1 + edx_2
                            eax_16[8] = xmm0_16 * xmm6_1 + xmm0_5 * xmm7 + eax_13
                            eax_16[9] = var_24_4 * xmm6_1 + xmm0_10 * xmm7 + edx_2
                            eax_16[0xc] = xmm0_16 * xmm6_1 + xmm0_5 * xmm5_1 + eax_13
                            eax_16[0xd] = var_24_4 * xmm6_1 + xmm0_10 * xmm5_1 + edx_2
                            return eax_16
                        
                        char const* const var_4c_9 = "FlanimGetTransformAtFrame"
                        var_50_2 = 0x39c
                        ecx_16 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"
    
    sub_44e4d0(arg1, &data_5559b1, ecx_16, "c:\ax2017\engine\flanim.cpp", var_50_2, 
        "FlanimGetTransformAtFrame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
