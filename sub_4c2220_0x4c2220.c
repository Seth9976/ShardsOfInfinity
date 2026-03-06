// 函数名称: sub_4c2220
// 虚拟地址: 0x4c2220
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

double* __convention("regparm")sub_4c2220(float arg1 @ eax, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_30
    int32_t var_30
    char const* const ecx_6
    
    if (arg2 s< 0 || arg2 s>= *(arg3 + 0x14))
        char const* const var_2c_13 = "FlanimGetShapeTransformAtFrame"
        var_30 = 0x33b
        ecx_6 = "layerIndex >= 0 && layerIndex < pFlanimDef->mLayerCount"
    else
        int32_t ecx = *(arg3 + 0x10)
        int32_t eax = arg2 * 5
        arg1 = *(ecx + (eax << 2) + 4)
        
        if (arg1 s< 0 || arg1 s>= *(arg3 + 0x1c))
            char const* const var_2c_12 = "FlanimGetShapeTransformAtFrame"
            var_30 = 0x340
            ecx_6 = "vertexIndexImage >= 0 && vertexIndexImage < pFlanimDef->mVertexCount"
        else
            int32_t esi_3 = arg1 i* 0x60 + *(arg3 + 0x18)
            int32_t eax_1 = sub_4c2060(arg1, 4, esi_3, arg4)
            arg5[8] = eax_1
            int32_t eax_2 = sub_4c2060(eax_1, 5, esi_3, arg4)
            arg5[9] = eax_2
            arg1 = sub_4c2060(eax_2, 6, esi_3, arg4)
            
            if (arg1 s< 0 || arg1 s>= *(arg3 + 0x24))
                char const* const var_2c_11 = "FlanimGetShapeTransformAtFrame"
                var_30 = 0x347
                ecx_6 = "imageIndex >=0 && imageIndex < pFlanimDef->mImageCount"
            else
                int32_t eax_3 = *(*(arg3 + 0x20) + (arg1 << 2))
                arg5[0xa] = eax_3
                arg5[0xb] = sub_4c2060(eax_3, 7, esi_3, arg4)
                arg1 = *(ecx + (eax << 2) + 4)
                
                if (arg1 != *(ecx + (eax << 2) + 8))
                    char const* const var_2c_4 = "FlanimGetShapeTransformAtFrame"
                    var_30 = 0x34d
                    ecx_6 = "pLayerDef->mQuad.x == pLayerDef->mQuad.y"
                else if (arg1 s< 0 || arg1 s>= *(arg3 + 0x1c))
                    char const* const var_2c_10 = "FlanimGetShapeTransformAtFrame"
                    var_30 = 0x351
                    ecx_6 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"
                else
                    int32_t esi_6 = arg1 i* 0x60 + *(arg3 + 0x18)
                    float eax_5
                    int32_t edx_2
                    eax_5, edx_2 = sub_4c2130(arg1, 0, esi_6, arg4)
                    arg5[1] = edx_2
                    *arg5 = eax_5
                    float eax_6
                    int32_t edx_3
                    eax_6, edx_3 = sub_4c2130(eax_5, 2, esi_6, arg4)
                    arg5[2] = eax_6
                    arg5[3] = edx_3
                    int32_t edx_4
                    arg1, edx_4 = sub_4c2130(eax_6, 3, esi_6, arg4)
                    int32_t* esi_7 = arg5[0xa]
                    arg5[4] = arg1
                    arg5[5] = edx_4
                    float xmm2_1 = 1f
                    float xmm3_1 = 1f
                    int32_t mxcsr
                    int16_t x87control
                    
                    if (esi_7 != 0)
                        int32_t* eax_7 = *esi_7
                        
                        if (eax_7 == 0)
                            edx_4.b = 0
                            mxcsr, x87control = sub_4aa5d0(esi_7, edx_4.b)
                            eax_7 = *esi_7
                            
                            if (eax_7 == 0)
                                mxcsr, x87control = sub_48dac0(esi_7)
                                eax_7 = *esi_7
                        
                        int32_t* ecx_12 = **eax_7
                        int32_t eax_9 = *ecx_12
                        double xmm0_7[0x2] =
                            _mm_cvtepi32_pd(zx.q(eax_9)) f+ *((eax_9 u>> 0x1f << 3) + &data_59e4f0)
                        int32_t eax_11 = ecx_12[1]
                        xmm2_1 = _mm_cvtpd_ps(xmm0_7) f* ecx_12[2]
                        arg1 = eax_11 u>> 0x1f
                        xmm3_1 =
                            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_11)) f+ *((arg1 << 3) + &data_59e4f0))
                            f* ecx_12[2]
                    
                    arg5[6] = xmm2_1
                    arg5[7] = xmm3_1
                    
                    if (*(arg3 + 0x38) == 0)
                        if (*(arg3 + 0x39) == 0)
                            float xmm0_14 = arg5[2] f* xmm2_1
                            float xmm0_16 = arg5[3] f* xmm3_1
                            int16_t x87control_1
                            double xmm0_19
                            x87control_1, xmm0_19 =
                                __libm_sse2_sin_precise(mxcsr, x87control, _mm_cvtps_pd(arg5[4]))
                            int16_t x87control_2
                            double xmm0_24
                            x87control_2, xmm0_24 =
                                __libm_sse2_cos_precise(mxcsr, x87control_1, _mm_cvtps_pd(arg5[5]))
                            int16_t x87control_3
                            double xmm0_29
                            x87control_3, xmm0_29 =
                                __libm_sse2_cos_precise(mxcsr, x87control_2, _mm_cvtps_pd(arg5[4]))
                            double* result
                            double xmm0_35
                            result, xmm0_35 =
                                __libm_sse2_sin_precise(mxcsr, x87control_3, _mm_cvtps_pd(arg5[5]))
                            float xmm3_6 = fconvert.s(xmm0_24) * xmm0_16 * 0.5f
                                + fconvert.s(xmm0_19) * xmm0_14 * 0.5f f+ arg5[1]
                            *arg5 = fconvert.s(xmm0_29) * xmm0_14 * 0.5f
                                - fconvert.s(xmm0_35) * xmm0_16 * 0.5f f+ *arg5
                            arg5[1] = xmm3_6
                            return result
                        
                        char const* const var_2c_9 = "FlanimGetShapeTransformAtFrame"
                        var_30 = 0x370
                        ecx_6 = "Halt"
                    else
                        char const* const var_2c_8 = "FlanimGetShapeTransformAtFrame"
                        var_30 = 0x369
                        ecx_6 = "Halt"
                        float xmm0_11 = 1f / xmm3_1
                        float xmm0_12 = xmm0_11 f* arg5[3]
                        arg5[2] = xmm2_1 / xmm3_1 f* arg5[2] * xmm0_11
                        arg5[3] = xmm0_12
    
    sub_44e4d0(arg1, &data_5559b1, ecx_6, "c:\ax2017\engine\flanim.cpp", var_30, 
        "FlanimGetShapeTransformAtFrame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
