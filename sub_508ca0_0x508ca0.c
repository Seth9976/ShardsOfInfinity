// 函数名称: sub_508ca0
// 虚拟地址: 0x508ca0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_508ca0(int32_t arg1, int32_t arg2, int32_t* arg3, float arg4 @ xmm3, long double arg5 @ st0, int32_t arg6, float arg7, int32_t* arg8, void* arg9)
{
    // 第一条实际指令: float xmm0 = arg4
    float xmm0 = arg4
    int32_t* ebx = arg3
    int32_t edi = arg6
    float var_74 = xmm0
    int32_t eax
    eax.b = xmm0 > 1f
    void* esi
    int16_t x87control
    int16_t top
    
    if (eax == 0)
        int32_t* var_84_1 = arg3
        (&data_659a34)[edi * 2](xmm0)
        top = 1
        float xmm0_2
        x87control, xmm0_2 = sub_4297a0(fconvert.s(arg5 * fconvert.t(2f) / fconvert.t(var_74)))
        arg3 = arg8
        xmm0 = var_74
        int32_t eax_3
        int32_t edx
        edx:eax_3 = sx.q(int.d(xmm0_2))
        esi = arg3 + ((eax_3 - edx) s>> 1 << 1)
    else
        esi = arg9
    
    int32_t eax_6 = (&data_659a34)[edi * 2]
    int32_t* var_84_3 = arg3
    int32_t* var_88
    int32_t mxcsr
    
    if (eax != 0)
        float xmm1_1 = 1f / xmm0
        eax_6(xmm1_1)
        unimplemented  {fmul st0, dword [esp+0x10]}
        int32_t result = 0
        int32_t result_1 = 0
        float var_64_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
        unimplemented  {fstp dword [esp+0x1c], st0}
        int16_t top_1 = top + 1
        
        if (esi s<= 0)
            return result
        
        float xmm3 = arg7
        
        do
            float xmm0_5 = _mm_cvtepi32_ps(zx.o(result)) + 0.5f
            double var_48_1 = _mm_cvtps_pd((xmm0_5 - var_64_1 + xmm3) / var_74) + 0.5
            unimplemented  {fld st0, qword [esp+0x40]}
            var_88.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            int16_t x87control_1 = sub_53ea80(mxcsr, x87control, var_88)
            unimplemented  {call 0x53ea80}
            double var_48_2 = fconvert.d(unimplemented  {fstp qword [esp+0x40], st0})
            unimplemented  {fstp qword [esp+0x40], st0}
            double var_48_3 = _mm_cvtps_pd((xmm0_5 + var_64_1 + arg7) / var_74) - 0.5
            unimplemented  {fld st0, qword [esp+0x40]}
            var_88.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            sub_53ea80(mxcsr, x87control_1, var_88)
            unimplemented  {call 0x53ea80}
            double var_48_4 = fconvert.d(unimplemented  {fstp qword [esp+0x3c], st0})
            unimplemented  {fstp qword [esp+0x3c], st0}
            (&data_659a34)[arg6 * 2](xmm1_1)
            unimplemented  {fmul st0, dword [0x59da60]}
            float var_5c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
            unimplemented  {fstp dword [esp+0x24], st0}
            top_1 += 1
            float xmm0_19
            x87control, xmm0_19 = sub_4297a0(var_5c_3)
            void* eax_11 = arg2 + ((int.d(xmm0_19) * result_1) << 2)
            int32_t var_8c_1 = arg2
            sub_508560(eax_11, int.d(fconvert.t(var_48_2)), arg6, var_74, int.d(fconvert.t(var_48_4)), 
                (xmm0_5 + xmm3) / var_74, ebx, eax_11)
            xmm3 = arg7
            result = result_1 + 1
            ebx = &ebx[2]
            result_1 = result
        while (result s< esi)
        
        return result
    
    int32_t eax_13
    int32_t* ecx_2
    eax_13, ecx_2 = eax_6(xmm0)
    unimplemented  {fdiv st0, dword [esp+0x10]}
    int32_t ebx_1 = 0
    int32_t var_5c_4 = 0
    float var_64_2 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
    unimplemented  {fstp dword [esp+0x1c], st0}
    int16_t top_10 = top + 1
    long double st0
    
    if (esi s> 0)
        do
            int32_t* var_84_8 = ecx_2
            (&data_659a34)[edi * 2](var_74)
            unimplemented  {fmul st0, dword [0x59da60]}
            unimplemented  {fdiv st0, dword [esp+0xc]}
            float var_58_2 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
            unimplemented  {fstp dword [esp+0x28], st0}
            int16_t x87control_2
            float xmm0_23
            x87control_2, xmm0_23 = sub_4297a0(var_58_2)
            int32_t eax_16
            int32_t edx_2
            edx_2:eax_16 = sx.q(int.d(xmm0_23))
            float xmm0_26 = _mm_cvtepi32_ps(zx.o(ebx_1 - ((eax_16 - edx_2) s>> 1))) + 0.5f
            double var_48_5 = _mm_cvtps_pd((xmm0_26 - var_64_2) * var_74 - arg7) + 0.5
            unimplemented  {fld st0, qword [esp+0x40]}
            var_88.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            int16_t x87control_3 = sub_53ea80(mxcsr, x87control_2, var_88)
            unimplemented  {call 0x53ea80}
            double var_48_6 = fconvert.d(unimplemented  {fstp qword [esp+0x40], st0})
            unimplemented  {fstp qword [esp+0x40], st0}
            float var_58_3
            var_58_3.q = _mm_cvtps_pd((xmm0_26 + var_64_2) * var_74 - arg7) - 0.5
            unimplemented  {fld st0, qword [esp+0x30]}
            var_88.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
            unimplemented  {fstp qword [esp], st0}
            st0 = sub_53ea80(mxcsr, x87control_3, var_88)
            unimplemented  {call 0x53ea80}
            var_58_3.q = fconvert.d(unimplemented  {fstp qword [esp+0x2c], st0})
            unimplemented  {fstp qword [esp+0x2c], st0}
            int32_t esi_2 = int.d(fconvert.t(var_58_3.q))
            (&data_659a34)[edi * 2](var_74)
            unimplemented  {fmul st0, dword [0x59da60]}
            float var_58_4 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
            unimplemented  {fstp dword [esp+0x28], st0}
            top_10 += 2
            int32_t edi_2 = 0
            int32_t edx_3 = arg2 + ((int.d(sub_4297a0(var_58_4)) * ebx_1) << 2)
            ecx_2 = ebx
            eax_13 = int.d(fconvert.t(var_48_6))
            ecx_2[ebx_1 * 2 + 1] = esi_2
            int32_t esi_3 = esi_2 - eax_13
            ecx_2[ebx_1 * 2] = eax_13
            
            if (esi_2 - eax_13 s>= 0)
                do
                    (*((arg6 << 3) + &data_659a30))(
                        _mm_cvtepi32_ps(zx.o(eax_13 + edi_2)) + 0.5f - (xmm0_26 * var_74 - arg7), 
                        var_74)
                    unimplemented  {fmul st0, dword [esp+0x14]}
                    eax_13 = int.d(fconvert.t(var_48_6))
                    *(edx_3 + (edi_2 << 2)) = fconvert.s(unimplemented  {fstp dword [ebx+edi*4], st0})
                    unimplemented  {fstp dword [ebx+edi*4], st0}
                    top_10 += 1
                    edi_2 += 1
                while (edi_2 s<= esi_3)
                
                ebx_1 = var_5c_4
                ecx_2 = ebx
            
            if (esi_3 s>= 0)
                int32_t temp1_1
                
                do
                    float xmm0_46 = *(edx_3 + (esi_3 << 2))
                    xmm0_46 f- 0
                    eax_13:1.b = (xmm0_46 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_46, 0f) ? 1 : 0) << 2 | (xmm0_46 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        break
                    
                    eax_13 = ecx_2[ebx_1 * 2] - 1 + esi_3
                    temp1_1 = esi_3
                    esi_3 -= 1
                    ecx_2[ebx_1 * 2 + 1] = eax_13
                while (temp1_1 - 1 s>= 0)
            
            edi = arg6
            ebx_1 += 1
            var_5c_4 = ebx_1
        while (ebx_1 s< esi)
    
    return sub_508750(eax_13, arg2, ebx, var_74, st0, edi, arg8, arg9)
}
