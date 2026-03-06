// 函数名称: sub_508750
// 虚拟地址: 0x508750
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_508750(int32_t arg1, int32_t arg2, void* arg3, float arg4 @ xmm3, long double arg5 @ st0, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t ecx = arg8
    float xmm1 = arg4
    uint32_t xmm0_1[0x4] = _mm_shuffle_epi32(zx.o(ecx), 0)
    float var_18 = xmm1
    int32_t eax
    eax.b = xmm1 > 1f
    int32_t var_24
    int16_t top
    
    if (eax == 0)
        int32_t var_64_1 = ecx
        (&data_659a34)[arg6 * 2](xmm1)
        top = 1
        ecx = arg7
        xmm1 = var_18
        int32_t eax_3
        int32_t edx
        edx:eax_3 = sx.q(int.d(sub_4297a0(fconvert.s(arg5 * fconvert.t(2f) / fconvert.t(var_18)))))
        var_24 = ecx + ((eax_3 - edx) s>> 1 << 1)
    else
        var_24 = ecx
    
    int32_t edi = eax
    int32_t var_64_3 = ecx
    float var_64_4
    
    if (edi == 0)
        var_64_4 = xmm1
    else
        var_64_4 = 1f / xmm1
    
    (&data_659a34)[arg6 * 2](var_64_4)
    unimplemented  {fmul st0, dword [0x59da60]}
    float var_30 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
    unimplemented  {fstp dword [ebp-0x20], st0}
    int16_t top_1 = top + 1
    int32_t ecx_1
    float xmm0_6
    ecx_1, xmm0_6 = sub_4297a0(var_30)
    int32_t edx_1 = var_24
    int32_t esi_1 = 0
    int32_t eax_8 = int.d(xmm0_6)
    int32_t result = arg8
    
    if (result s> 0)
        do
            int32_t xmm1_1 = (zx.o(0)).d
            int32_t edi_1 = 0
            int32_t var_2c_1 = 0
            
            if (edx_1 s> 0)
                void* eax_9 = arg3
                
                do
                    ecx_1 = *(eax_9 + (edi_1 << 3))
                    
                    if (esi_1 s< ecx_1)
                        break
                    
                    if (esi_1 s<= *(eax_9 + (edi_1 << 3) + 4))
                        int32_t eax_11 = esi_1 - ecx_1
                        int32_t var_64_5 = ecx_1
                        float xmm0_7
                        
                        if (eax == 0)
                            xmm0_7 = var_18
                        else
                            xmm0_7 = 1f / var_18
                        
                        (&data_659a34)[arg6 * 2](xmm0_7)
                        unimplemented  {fmul st0, dword [0x59da60]}
                        float var_30_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
                        unimplemented  {fstp dword [ebp-0x20], st0}
                        top_1 += 1
                        ecx_1 = arg2
                        edx_1 = var_24
                        xmm1_1 =
                            *(ecx_1 + ((int.d(sub_4297a0(var_30_1)) * edi_1 + eax_11) << 2)) f+ var_2c_1
                        eax_9 = arg3
                        var_2c_1 = xmm1_1
                    
                    edi_1 += 1
                while (edi_1 s< edx_1)
                
                result = arg8
            
            int32_t edi_2 = 0
            
            if (edx_1 s> 0)
                void* eax_17 = arg3
                
                do
                    ecx_1 = *(eax_17 + (edi_2 << 3))
                    
                    if (esi_1 s< ecx_1)
                        break
                    
                    if (esi_1 s<= *(eax_17 + (edi_2 << 3) + 4))
                        int32_t eax_19 = esi_1 - ecx_1
                        int32_t var_64_7 = ecx_1
                        float xmm0_10
                        
                        if (eax == 0)
                            xmm0_10 = var_18
                        else
                            xmm0_10 = 1f / var_18
                        
                        (&data_659a34)[arg6 * 2](xmm0_10)
                        unimplemented  {fmul st0, dword [0x59da60]}
                        float var_30_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
                        unimplemented  {fstp dword [ebp-0x20], st0}
                        top_1 += 1
                        ecx_1 = arg2
                        edx_1 = var_24
                        int32_t eax_24 = int.d(sub_4297a0(var_30_2)) * edi_2 + eax_19
                        *(ecx_1 + (eax_24 << 2)) = *(ecx_1 + (eax_24 << 2)) * 1f f/ xmm1_1
                        eax_17 = arg3
                    
                    edi_2 += 1
                while (edi_2 s< edx_1)
                
                result = arg8
            
            esi_1 += 1
        while (esi_1 s< result)
        
        edi = eax
    
    int32_t var_2c_3 = 0
    
    if (edx_1 s> 0)
        do
            int32_t esi_2 = 0
            
            while (true)
                int32_t var_64_9 = ecx_1
                float xmm0_15
                
                if (edi == 0)
                    xmm0_15 = var_18
                else
                    xmm0_15 = 1f / var_18
                
                (&data_659a34)[arg6 * 2](xmm0_15)
                unimplemented  {fmul st0, dword [0x59da60]}
                float var_30_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
                unimplemented  {fstp dword [ebp-0x20], st0}
                top_1 += 1
                ecx_1 = var_2c_3
                float xmm0_18 = *(arg2 + ((int.d(sub_4297a0(var_30_3)) * ecx_1 + esi_2) << 2))
                xmm0_18 f- 0
                int32_t eax_29
                eax_29:1.b = (xmm0_18 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_18, 0f) ? 1 : 0) << 2
                    | (xmm0_18 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    break
                
                esi_2 += 1
            
            int32_t eax_30 = *(arg3 + (ecx_1 << 3))
            int32_t eax_31 = eax_30 + esi_2
            *(arg3 + (ecx_1 << 3)) = eax_31
            
            if (eax_30 + esi_2 s< 0)
                int32_t temp2_1
                
                do
                    esi_2 += 1
                    temp2_1 = eax_31
                    eax_31 += 1
                while (temp2_1 + 1 s< 0)
                *(arg3 + (ecx_1 << 3)) = eax_31
            
            int32_t ecx_4 = *(arg3 + (ecx_1 << 3) + 4) - eax_31 + 1
            
            if (eax_8 s< ecx_4)
                ecx_4 = eax_8
            
            int32_t var_64_11 = ecx_4
            float xmm0_19
            
            if (edi == 0)
                xmm0_19 = var_18
            else
                xmm0_19 = 1f / var_18
            
            (&data_659a34)[arg6 * 2](xmm0_19)
            unimplemented  {fmul st0, dword [0x59da60]}
            float var_30_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x20], st0})
            unimplemented  {fstp dword [ebp-0x20], st0}
            top_1 += 1
            float xmm0_21
            result, xmm0_21 = sub_4297a0(var_30_4)
            int32_t ecx_5 = int.d(xmm0_21)
            int32_t edx_4 = 0
            int32_t var_30_5 = 0
            int32_t var_3c_1 = ecx_5
            
            if (ecx_4 s> 0)
                do
                    result = esi_2 + edx_4
                    
                    if (result s>= ecx_5)
                        break
                    
                    int32_t var_64_13 = ecx_5
                    float xmm0_22
                    
                    if (edi == 0)
                        xmm0_22 = var_18
                    else
                        xmm0_22 = 1f / var_18
                    
                    (&data_659a34)[arg6 * 2](xmm0_22)
                    unimplemented  {fmul st0, dword [0x59da60]}
                    float var_14_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
                    unimplemented  {fstp dword [ebp-0x4], st0}
                    int32_t ecx_6
                    float xmm0_24
                    ecx_6, xmm0_24 = sub_4297a0(var_14_6)
                    int32_t var_64_15 = ecx_6
                    float xmm0_25
                    
                    if (eax == 0)
                        xmm0_25 = var_18
                    else
                        xmm0_25 = 1f / var_18
                    
                    (&data_659a34)[arg6 * 2](xmm0_25)
                    unimplemented  {fmul st0, dword [0x59da60]}
                    float var_14_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x4], st0})
                    unimplemented  {fstp dword [ebp-0x4], st0}
                    top_1 += 2
                    int32_t ecx_7 = int.d(sub_4297a0(var_14_8))
                    result = *(arg2 + ((int.d(xmm0_24) * var_2c_3 + esi_2 + var_30_5) << 2))
                    int32_t ecx_9 = ecx_7 * var_2c_3 + var_30_5
                    edx_4 = var_30_5 + 1
                    var_30_5 = edx_4
                    *(arg2 + (ecx_9 << 2)) = result
                    edi = eax
                    ecx_5 = var_3c_1
                while (edx_4 s< ecx_4)
            
            edx_1 = var_24
            ecx_1 = var_2c_3 + 1
            var_2c_3 = ecx_1
        while (ecx_1 s< edx_1)
    
    int32_t result_2 = 0
    int32_t result_1 = 0
    
    if (edx_1 s> 0)
        if (edx_1 u>= 8 && data_65a2f4 s>= 2)
            result = edx_1 & 0x80000007
            
            if (result s< 0)
                result = ((result - 1) | 0xfffffff8) + 1
            
            int32_t ecx_12 = edx_1 - result
            int32_t xmm4_2[0x4] = __psubd_xmmdq_memdq(xmm0_1, data_59dd60)
            void* esi_4 = arg3 + 0xc
            int32_t var_3c_2 = ecx_12
            
            do
                int64_t xmm2_2 = zx.q(*(esi_4 + 0x10))
                esi_4 += 0x40
                result_2 += 8
                int32_t xmm3_3[0x4] = _mm_min_epi32(
                    _mm_unpacklo_epi32(
                        _mm_unpacklo_epi32(zx.o(*(esi_4 - 0x48)), zx.q(*(esi_4 - 0x38))), 
                        _mm_unpacklo_epi32(zx.o(*(esi_4 - 0x40)), xmm2_2)), 
                    xmm4_2)
                *(esi_4 - 0x48) = xmm3_3
                uint128_t xmm3_4 = _mm_bsrli_si128(xmm3_3, 4)
                *(esi_4 - 0x40) = xmm3_4
                int32_t xmm1_5[0x4] = zx.o(*(esi_4 - 0x20))
                uint128_t xmm3_5 = _mm_bsrli_si128(xmm3_4, 4)
                *(esi_4 - 0x38) = xmm3_5
                int64_t xmm0_29 = zx.q(*(esi_4 - 0x18))
                *(esi_4 - 0x30) = _mm_bsrli_si128(xmm3_5, 4)
                int32_t xmm3_10[0x4] = _mm_min_epi32(
                    _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(esi_4 - 0x28)), xmm0_29), 
                        _mm_unpacklo_epi32(xmm1_5, zx.q(*(esi_4 - 0x10)))), 
                    xmm4_2)
                *(esi_4 - 0x28) = xmm3_10
                uint128_t xmm3_11 = _mm_bsrli_si128(xmm3_10, 4)
                *(esi_4 - 0x20) = xmm3_11
                uint128_t xmm3_12 = _mm_bsrli_si128(xmm3_11, 4)
                *(esi_4 - 0x18) = xmm3_12
                *(esi_4 - 0x10) = _mm_bsrli_si128(xmm3_12, 4)
            while (result_2 s< ecx_12)
            
            result_1 = result_2
        
        if (result_2 s< edx_1)
            result = result_1
            void* esi_6 = (result << 3) + 4 + arg3
            int32_t i_1 = edx_1 - result
            int32_t i
            
            do
                int32_t ecx_14 = arg8 - 1
                
                if (*esi_6 s< arg8 - 1)
                    ecx_14 = *esi_6
                
                esi_6 += 8
                *(esi_6 - 8) = ecx_14
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
