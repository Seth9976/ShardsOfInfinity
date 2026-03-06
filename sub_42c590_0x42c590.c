// 函数名称: sub_42c590
// 虚拟地址: 0x42c590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_42c590(void* arg1)
{
    // 第一条实际指令: int32_t esi_1 = *(arg1 + 0x28) + 1
    int32_t esi_1 = *(arg1 + 0x28) + 1
    int32_t edi = esi_1 << 3
    int32_t var_3c = edi
    *(arg1 + 0x64) = _malloc()
    int32_t var_3c_1 = edi
    *(arg1 + 0x68) = _malloc()
    int32_t esi_2 = esi_1 << 2
    int32_t var_3c_2 = esi_2
    *(*(arg1 + 0x64) + edi - 8) = 0x3ff0000000000000
    int32_t var_40 = *(arg1 + 0x40)
    int32_t eax_3 = sub_52383b()
    int32_t var_44 = esi_2
    int32_t var_48 = *(arg1 + 0x44)
    *(arg1 + 0x40) = eax_3
    *(arg1 + 0x44) = sub_52383b()
    *(*(arg1 + 0x40) + esi_2 - 4) = 0xffffffff
    *(*(arg1 + 0x44) + esi_2 - 4) = **(arg1 + 0x48)
    int32_t* eax_8 = *(arg1 + 0x48)
    *eax_8 += 1
    _memset(*(arg1 + 0x68), 0, edi)
    int32_t edi_1 = **(arg1 + 0x48)
    int32_t esi_3 = edi_1 << 2
    int32_t var_3c_3 = esi_3
    *(arg1 + 0x4c) = _malloc()
    int32_t var_3c_4 = esi_3
    int32_t result = _malloc()
    *(arg1 + 0x50) = result
    int32_t esi_4 = 0
    
    if (edi_1 s> 0)
        do
            int32_t var_3c_5 = *(arg1 + 0x3c) << 3
            *(*(arg1 + 0x4c) + (esi_4 << 2)) = _malloc()
            int32_t var_3c_6 = *(arg1 + 0x3c) << 3
            result = _malloc()
            int32_t i = 0
            int32_t i_1 = 0
            *(*(arg1 + 0x50) + (esi_4 << 2)) = result
            
            if (*(arg1 + 0x3c) s> 0)
                int32_t mxcsr
                int16_t x87control
                double xmm0_3
                x87control, xmm0_3 =
                    __libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtepi32_pd(zx.q(edi_1)))
                
                do
                    int32_t edi_2 = i << 3
                    double* eax_18 = *(*(arg1 + 0x4c) + (esi_4 << 2)) + edi_2
                    double xmm0_6
                    double xmm0_9
                    bool p_2
                    
                    do
                        xmm0_6 = _mm_cvtepi32_pd(zx.q(_rand())) / 32767.0
                        xmm0_9 = _mm_cvtepi32_pd(zx.q(_rand())) / 32767.0
                        xmm0_6 - 0.0
                        int32_t eax_20
                        eax_20:1.b = (xmm0_6 == 0.0 ? 1 : 0) << 6
                            | (is_unordered.q(xmm0_6, 0.0) ? 1 : 0) << 2 | (xmm0_6 < 0.0 ? 1 : 0)
                        p_2 = unimplemented  {test ah, 0x44}
                    while (not(p_2))
                    int16_t x87control_1
                    double xmm0_11
                    x87control_1, xmm0_11 = __libm_sse2_log_precise(mxcsr, x87control, xmm0_6)
                    int16_t x87control_2
                    double xmm0_13
                    x87control_2, xmm0_13 =
                        __libm_sse2_sqrt_precise(mxcsr, x87control_1, xmm0_11 * -2.0)
                    double xmm0_16
                    x87control, xmm0_16 =
                        __libm_sse2_cos_precise(mxcsr, x87control_2, xmm0_9 * 6.2831853071795862)
                    *eax_18 = xmm0_13 * xmm0_16 / xmm0_3
                    
                    if (esi_4 == edi_1 - 1)
                        int64_t* eax_25 = *(*(arg1 + 0x4c) + (esi_4 << 2))
                        double xmm0_17 = eax_25[i]
                        
                        if (not(0 f<= xmm0_17))
                            eax_25[i] = xmm0_17 * -1.0
                    
                    result = *(*(arg1 + 0x50) + (esi_4 << 2))
                    *(edi_2 + result) = (zx.o(0)).q
                    i = i_1 + 1
                    i_1 = i
                while (i s< *(arg1 + 0x3c))
            
            esi_4 += 1
        while (esi_4 s< edi_1)
    
    return result
}
