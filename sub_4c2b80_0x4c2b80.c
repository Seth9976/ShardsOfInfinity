// 函数名称: sub_4c2b80
// 虚拟地址: 0x4c2b80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4c2b80(float* arg1, float* arg2)
{
    // 第一条实际指令: float* edi = arg2
    float* edi = arg2
    float xmm5_3 = (arg1[4] - *arg1) * (arg1[9] - arg1[1]) - (arg1[5] - arg1[1]) * (arg1[8] - *arg1)
    float xmm4_3 = (edi[4] - *edi) * (edi[9] - edi[1]) - (edi[5] - edi[1]) * (edi[8] - *edi)
    uint32_t result
    
    if ((0 f<= xmm5_3 || not(xmm4_3 f> 0)) && (xmm5_3 f<= 0 || not(0 f> xmm4_3)))
        int32_t* esi_1 = arg1[0x12]
        result = edi[0x12]
        
        if (esi_1 == result || esi_1 == 0 || result == 0)
            result.b = 0
            return result
        
        int32_t* eax = *esi_1
        
        if (eax == 0)
            arg2.b = 0
            sub_4aa5d0(esi_1, arg2.b)
            eax = *esi_1
            
            if (eax == 0)
                sub_48dac0(esi_1)
                eax = *esi_1
        
        int32_t* esi_2 = edi[0x12]
        int32_t* ecx_2 = **eax
        int32_t eax_2 = *ecx_2
        double xmm0_8[0x2] = _mm_cvtepi32_pd(zx.q(eax_2)) f+ *((eax_2 u>> 0x1f << 3) + &data_59e4f0)
        int32_t eax_4 = ecx_2[1]
        float xmm0_10 = _mm_cvtpd_ps(xmm0_8) f* ecx_2[2]
        double xmm0_13[0x2] = _mm_cvtepi32_pd(zx.q(eax_4)) f+ *((eax_4 u>> 0x1f << 3) + &data_59e4f0)
        int32_t* eax_6 = *esi_2
        float xmm3_5 = _mm_cvtpd_ps(xmm0_13) f* ecx_2[2]
        
        if (eax_6 == 0)
            arg2.b = 0
            sub_4aa5d0(esi_2, arg2.b)
            eax_6 = *esi_2
            
            if (eax_6 == 0)
                sub_48dac0(esi_2)
                eax_6 = *esi_2
        
        int32_t* ecx_5 = **eax_6
        int32_t eax_8 = *ecx_5
        double xmm0_16[0x2] = _mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_59e4f0)
        int32_t eax_10 = ecx_5[1]
        float xmm1_2 = _mm_cvtpd_ps(xmm0_16) f* ecx_5[2]
        xmm0_10 - xmm1_2
        result:1.b = (xmm0_10 == xmm1_2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, xmm1_2) ? 1 : 0) << 2
            | (xmm0_10 < xmm1_2 ? 1 : 0)
        float xmm0_21 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_10)) f+ *((eax_10 u>> 0x1f << 3) + &data_59e4f0))
            f* ecx_5[2]
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            xmm3_5 - xmm0_21
            result:1.b = (xmm3_5 == xmm0_21 ? 1 : 0) << 6
                | (is_unordered.d(xmm3_5, xmm0_21) ? 1 : 0) << 2 | (xmm3_5 < xmm0_21 ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (not(p_4))
                result.b = 0
                return result
    
    result.b = 1
    return result
}
