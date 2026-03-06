// 函数名称: sub_4df1a0
// 虚拟地址: 0x4df1a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4df1a0(int32_t* arg1, float arg2 @ xmm1, float arg3 @ xmm2)
{
    // 第一条实际指令: void var_b4
    void var_b4
    int32_t eax_1 = __security_cookie ^ &var_b4
    int32_t edi = arg1[1]
    int32_t ebx = arg1[2]
    float xmm0_3[0x2] = _mm_cvtepi32_ps(zx.o(edi)) * arg2 - 0.5f
    float var_78 = xmm0_3
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    int80_t st0
    st0, x87control_1 = sub_53ea80(mxcsr, x87control, fconvert.d(fconvert.t(_mm_cvtps_pd(xmm0_3))))
    double var_70
    var_70.d = fconvert.s(st0)
    float xmm0_8[0x2] = _mm_cvtepi32_ps(zx.o(ebx)) * arg3 - 0.5f
    float var_74 = xmm0_8
    float var_80
    var_80.q = _mm_cvtps_pd(xmm0_8)
    float xmm1 = var_70.d
    float var_80_1 = fconvert.s(sub_53ea80(mxcsr, x87control_1, fconvert.d(fconvert.t(var_80.q))))
    float xmm0_11
    
    if (0f <= xmm1)
        xmm0_11 = xmm1 + 0.5f
    else
        xmm0_11 = xmm1 - 0.5f
    
    int32_t ecx = int.d(xmm0_11)
    var_70.d = ecx
    float xmm0_13
    
    if (0f <= var_80_1)
        xmm0_13 = var_80_1 + 0.5f
    else
        xmm0_13 = var_80_1 - 0.5f
    
    int32_t eax_3 = edi + ecx
    int32_t esi = int.d(xmm0_13)
    
    if (ecx s>= 0)
        eax_3 = ecx
    
    int32_t ebx_2 = eax_3 - edi
    
    if (eax_3 s< edi)
        ebx_2 = eax_3
    
    float xmm0_15 = var_78 - xmm1
    float xmm1_2 = var_74 - var_80_1
    float xmm3 = 1f - xmm0_15
    float xmm2_1 = 1f - xmm1_2
    int32_t ecx_1
    
    if (esi s>= 0)
        ecx_1 = esi
        
        if (esi s> ebx - 1)
            ecx_1 = ebx - 1
    else
        ecx_1 = 0
    
    int32_t eax_9 = var_70.d
    int32_t ecx_3 = edi + eax_9 + 1
    
    if (eax_9 + 1 s>= 0)
        ecx_3 = eax_9 + 1
    
    int32_t eax_12 = ecx_3 - edi
    
    if (ecx_3 s< edi)
        eax_12 = ecx_3
    
    var_70.d = eax_12
    int32_t ecx_4
    
    if (esi s>= 0)
        ecx_4 = esi
        
        if (esi s> ebx - 1)
            ecx_4 = ebx - 1
    else
        ecx_4 = 0
    
    int32_t ecx_5 = esi + 1
    int32_t var_54 = *(arg1[3] * ecx_4 + *arg1 + (var_70.d << 2))
    int32_t esi_1
    
    if (ecx_5 s>= 0)
        esi_1 = ecx_5
        
        if (ecx_5 s> ebx - 1)
            esi_1 = ebx - 1
    else
        esi_1 = 0
    
    int32_t esi_2 = *arg1
    int32_t var_50 = *(arg1[3] * esi_1 + esi_2 + (ebx_2 << 2))
    
    if (ecx_5 s< 0)
        ecx_5 = 0
    else if (ecx_5 s> ebx - 1)
        ecx_5 = ebx - 1
    
    uint32_t xmm5[0x4] = data_59e590
    int128_t xmm3_1 = data_59e260
    int32_t var_4c = *(arg1[3] * ecx_5 + esi_2 + (var_70.d << 2))
    int32_t xmm2_2[0x4] = (*(arg1[3] * ecx_1 + *arg1 + (ebx_2 << 2))).o
    float xmm0_17[0x4] = _mm_cvtepi32_ps(_mm_srl_epi32(xmm2_2, 0x18))
    var_70.o = _mm_add_ps(_mm_and_ps(_mm_cmpeq_ps(xmm0_17, zx.o(0), 1), xmm5), xmm0_17)
    float xmm0_19[0x4] = _mm_cvtepi32_ps(_mm_srl_epi32(xmm2_2, 0x10) & xmm3_1)
    float xmm6_3[0x4] = _mm_add_ps(_mm_and_ps(_mm_cmpeq_ps(xmm0_19, zx.o(0), 1), xmm5), xmm0_19)
    float xmm0_21[0x4] = _mm_cvtepi32_ps(_mm_srl_epi32(xmm2_2, 8) & xmm3_1)
    float xmm1_18[0x4] = _mm_add_ps(_mm_and_ps(_mm_cmpeq_ps(xmm0_21, zx.o(0), 1), xmm5), xmm0_21)
    float xmm0_22[0x4] = _mm_cvtepi32_ps(xmm3_1 & xmm2_2)
    int32_t var_58
    var_58.o = xmm1_18
    float xmm1_20 = xmm6_3[0] * xmm3
    float xmm3_6[0x4] = _mm_add_ps(_mm_and_ps(_mm_cmpeq_ps(xmm0_22, zx.o(0), 1), xmm5), xmm0_22)
    float xmm1_24 = xmm1_20 * xmm2_1 + _mm_shuffle_ps(xmm6_3, xmm6_3, 0x55) * xmm0_15 * xmm2_1
        + _mm_shuffle_ps(xmm6_3, xmm6_3, 0xaa) * xmm3 * xmm1_2
        + _mm_shuffle_ps(xmm6_3, xmm6_3, 0xff) * xmm0_15 * xmm1_2
    float xmm1_25
    
    if (0 f<= xmm1_24)
        xmm1_25 = xmm1_24 + 0.5f
    else
        xmm1_25 = xmm1_24 - 0.5f
    
    float xmm2_3[0x4] = var_58.o
    int32_t ecx_6 = int.d(xmm1_25)
    float xmm1_31 = xmm2_3[0] * xmm3 * xmm2_1 + _mm_shuffle_ps(xmm2_3, xmm2_3, 0x55) * xmm0_15 * xmm2_1
        + _mm_shuffle_ps(xmm2_3, xmm2_3, 0xaa) * xmm3 * xmm1_2
        + _mm_shuffle_ps(xmm2_3, xmm2_3, 0xff) * xmm0_15 * xmm1_2
    float xmm1_32
    
    if (0 f<= xmm1_31)
        xmm1_32 = xmm1_31 + 0.5f
    else
        xmm1_32 = xmm1_31 - 0.5f
    
    int32_t ebx_3 = int.d(xmm1_32)
    float xmm1_38 = xmm3_6[0] * xmm3 * xmm2_1 + _mm_shuffle_ps(xmm3_6, xmm3_6, 0x55) * xmm0_15 * xmm2_1
        + _mm_shuffle_ps(xmm3_6, xmm3_6, 0xaa) * xmm3 * xmm1_2
        + _mm_shuffle_ps(xmm3_6, xmm3_6, 0xff) * xmm0_15 * xmm1_2
    float xmm1_39
    
    if (0 f<= xmm1_38)
        xmm1_39 = xmm1_38 + 0.5f
    else
        xmm1_39 = xmm1_38 - 0.5f
    
    float xmm2_7[0x4] = var_70.o
    int32_t edx_3 = int.d(xmm1_39)
    float xmm1_45 = xmm2_7[0] * xmm3 * xmm2_1 + _mm_shuffle_ps(xmm2_7, xmm2_7, 0x55) * xmm0_15 * xmm2_1
        + _mm_shuffle_ps(xmm2_7, xmm2_7, 0xaa) * xmm3 * xmm1_2
        + _mm_shuffle_ps(xmm2_7, xmm2_7, 0xff) * xmm0_15 * xmm1_2
    float xmm1_46
    
    if (0 f<= xmm1_45)
        xmm1_46 = xmm1_45 + 0.5f
    else
        xmm1_46 = xmm1_45 - 0.5f
    
    int32_t eax_26 = int.d(xmm1_46)
    
    if (ecx_6 s< 0)
        ecx_6 = 0
    else if (ecx_6 s> 0xff)
        ecx_6 = 0xff
    
    if (ebx_3 s< 0)
        ebx_3 = 0
    else if (ebx_3 s> 0xff)
        ebx_3 = 0xff
    
    if (edx_3 s< 0)
        edx_3 = 0
    else if (edx_3 s> 0xff)
        edx_3 = 0xff
    
    if (eax_26 s< 0)
        eax_26 = 0
    else if (eax_26 s> 0xff)
        eax_26 = 0xff
    
    @__security_check_cookie@4(eax_1 ^ &var_b4)
    return (((((zx.d(eax_26.b) << 8) + zx.d(ecx_6.b)) << 8) + zx.d(ebx_3.b)) << 8) + zx.d(edx_3.b)
}
