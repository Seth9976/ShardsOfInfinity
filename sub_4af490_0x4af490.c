// 函数名称: sub_4af490
// 虚拟地址: 0x4af490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4af490(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, struct _EXCEPTION_REGISTRATION_RECORD** arg5, char arg6, int32_t arg7, struct _EXCEPTION_REGISTRATION_RECORD** arg8)
{
    // 第一条实际指令: int32_t* result_1 = arg2
    int32_t* result_1 = arg2
    struct _EXCEPTION_REGISTRATION_RECORD** edx = arg5
    
    if (arg8 != 0)
        edx = arg8
    
    char* eax_1 = *arg3
    struct _EXCEPTION_REGISTRATION_RECORD** var_f0 = edx
    char* const var_d0
    int32_t ecx
    
    if (eax_1 != 0)
        bool cond:1_1 = *eax_1 != 0
        var_d0 = eax_1
        
        if (cond:1_1)
            edx = var_f0
            ecx = *(sub_44f000(arg3) + 8)
        else
            ecx = 0
    else
        var_d0 = &data_5559b1
        ecx = 0
    
    float* eax_3 = arg4
    float var_58 = 0f
    void* esi = nullptr
    float var_c0 = 0f
    float var_d4 = 0f
    float var_bc = 0f
    float xmm0_1 = eax_3[2] - *eax_3
    int32_t edi = edx[3]
    int32_t ebx = edx[4]
    int32_t* Next = edx[1]->Next
    int32_t* Next_1 = Next
    int32_t* Next_2 = Next
    int32_t var_9c = edx[5]
    int32_t var_98 = edx[6]
    int32_t var_94 = *(edx + 0x3d)
    int32_t var_90 = arg7
    struct _EXCEPTION_REGISTRATION_RECORD** var_88 = arg5
    int32_t* result_3 = result_1
    float xmm0_2 = edx[7]
    float var_e4 = xmm0_2
    float var_a8 = xmm0_2
    void* var_c8 = nullptr
    float var_ac = eax_3[1]
    int128_t var_84 = *result_3
    int32_t var_a0 = edi
    int32_t var_64 = result_3[8]
    int32_t* result = 0xffffffff
    int32_t var_8c = ebx
    int128_t var_74 = *(result_3 + 0x10)
    float var_e8 = 0f
    float var_60 = 0f
    float var_ec = 0f
    float var_5c = 0f
    
    if (ecx s> 0)
        while (true)
            float var_c4_1 = 0f
            void* result_2 = result + 1
            char var_b4_1 = 0
            float xmm0_5 = *arg4
            int32_t mxcsr_1
            int16_t x87control_1
            mxcsr_1, x87control_1 = sub_4af170(&var_d0, edx)
            int32_t var_108
            
            if (arg6 != 0)
                var_a8 = var_e4
                var_60 = var_e8
                Next_2 = Next_1
                var_5c = var_ec
                var_c0 = var_58
                var_a0 = edi
                var_bc = var_d4
                var_c8 = esi
                var_8c = ebx
                char var_b4_2 = 1
                char* const eax_14
                struct _EXCEPTION_REGISTRATION_RECORD** esi_1
                float xmm1_1
                float xmm2_1
                float xmm3_1
                float xmm4_1
                
                if (*(esi + var_d0) != 0x7b)
                label_4af680:
                    xmm3_1 = var_c4_1
                label_4af689:
                    xmm1_1 = var_e4
                    xmm2_1 = var_e8
                    xmm4_1 = var_ec
                    esi_1 = var_f0
                else
                    char* var_50
                    char* const edi_1
                    
                    while (true)
                        eax_14 = sub_4aeef0(&var_d0, &var_50)
                        edi_1 = eax_14
                        
                        if (edi_1 != 0)
                            break
                        
                        if (*(esi + var_d0) != 0x7b)
                            goto label_4af680
                    
                    if (*(edi_1 + 0x10) == 0 || edi_1[0x30] != 0)
                        goto label_4af680
                    
                    int32_t** ecx_3 = *(edi_1 + 8)
                    float xmm2_4
                    
                    if (ecx_3 == 0)
                        xmm2_4 = (zx.o(0)).d
                    else
                        eax_14 = *(edi_1 + 0x38)
                        
                        if (eax_14 == 0)
                            eax_14, mxcsr_1, x87control_1 = sub_432570(*ecx_3)
                            xmm2_4 = *(edi_1 + 0x1c) f* eax_14
                        else
                            xmm2_4 = _mm_cvtepi32_ps(zx.o(eax_14)) f* *(edi_1 + 0x1c)
                    
                    xmm3_1 = var_c4_1
                    bool p_2
                    
                    if (not(xmm0_1 >= xmm2_4 + xmm3_1))
                        xmm3_1 f- 0
                        eax_14:1.b = (xmm3_1 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2 | (xmm3_1 < 0f ? 1 : 0)
                        p_2 = unimplemented  {test ah, 0x44}
                    
                    if (not(xmm0_1 >= xmm2_4 + xmm3_1) && p_2)
                        goto label_4af689
                    
                    esi_1 = var_f0
                    mxcsr_1, x87control_1 = sub_4ae8c0(eax_14, edi_1, &var_d0, xmm2_4, esi_1)
                    var_c8 += var_50
                    xmm4_1 = var_5c
                    xmm2_1 = var_60
                    ebx = var_8c
                    xmm1_1 = var_a8
                    xmm3_1 = var_c4_1
                
                if (ebx == 2 || ebx == 5 || ebx == 8)
                    xmm1_1 - 1f
                    eax_14:1.b = (xmm1_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 1f) ? 1 : 0) << 2
                        | (xmm1_1 < 1f ? 1 : 0)
                    float xmm0_21[0x2] = _mm_max_ss(xmm0_1 - xmm3_1, 0) * 0.5f + xmm0_5
                    int32_t var_b0_4 = xmm0_21
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        var_58.q = _mm_cvtps_pd(xmm0_21)
                        var_108.q = fconvert.d(fconvert.t(var_58.q))
                        float var_b0_5 = fconvert.s(sub_53ea80(mxcsr_1, x87control_1, var_108))
                else if (ebx == 3 || ebx == 6 || ebx == 9)
                    float var_b0_3 = xmm0_1 - xmm3_1 + xmm0_5
                else
                    float xmm0_11 = xmm0_5
                    
                    if (result_2 s>= 1)
                        xmm0_11 = xmm0_11 + xmm2_1
                    
                    float var_b0_2 = xmm0_11 + xmm4_1
                
                int32_t var_c4_2 = 0
                sub_4af170(&var_d0, esi_1)
            
            int32_t* var_4c
            int32_t** var_104_2 = &var_4c
            var_108 = 0x12
            Next_1 = Next_2
            sub_42ce10(&result_1, Next_2, 0x12)
            int32_t* eax_16 = var_4c
            edx = var_f0
            int32_t ecx_8 = eax_16[3]
            float xmm1_6
            float xmm2_8
            
            if (ecx_8 == 0)
                xmm1_6 = _mm_cvtepi32_ps(zx.o(*eax_16)) f* edx[7]
                xmm2_8 = xmm1_6
            else
                float xmm1_5 = _mm_cvtepi32_ps(zx.o(eax_16[2]))
                float xmm2_7 = _mm_cvtepi32_ps(zx.o(ecx_8))
                xmm1_6 = xmm1_5 f* edx[7]
                xmm2_8 = xmm2_7 f* edx[7]
            
            esi = var_c8
            float xmm2_9 = xmm2_8 + var_bc
            char* const eax_17 = var_d0
            var_d4 = var_bc
            var_58 = var_c0
            float xmm1_9
            
            if (*(esi + eax_17) != 0xd)
                xmm1_9 = xmm2_9
            else
                esi += 1
                xmm1_9 = xmm1_6 + var_c0
                var_c8 = esi
                result_2 = 0xffffffff
            
            int128_t xmm1 = xmm1_9 + var_ac
            var_ac = xmm1
            
            if (xmm2_9 f+ xmm1 > arg4[3] f+ 0.00999999978f)
                result = result_1
                
                if (result == 0)
                    break
                
                result[7] -= 1
                return result
            
            if (esi s< ecx)
                while (*(esi + eax_17) == 0x20)
                    esi += 1
                    
                    if (esi s>= ecx)
                        break
                
                var_c8 = esi
            
            result = result_1
            
            if (result != 0)
                result[7] -= 1
                result_1 = nullptr
            
            if (esi s>= ecx)
                break
            
            ebx = var_8c
            edi = var_a0
            result = result_2
            var_ec = var_5c
            var_e8 = var_60
            var_e4 = var_a8
    
    return result
}
