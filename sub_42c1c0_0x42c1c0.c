// 函数名称: sub_42c1c0
// 虚拟地址: 0x42c1c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_42c1c0(int128_t* arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t var_34 = 8
    int32_t var_34 = 8
    int32_t ecx = arg2[1].d
    int128_t xmm0 = *arg2
    int32_t edx = *(arg2 + 0x14)
    arg1[3].d = *(arg2 + 0x18)
    *(arg1 + 0x34) = *(arg2 + 0x1c)
    *arg1 = xmm0
    *(arg1 + 0x3c) = ecx
    *(arg1 + 0x38) = edx
    *(arg1 + 0x2c) = ecx * edx
    __builtin_memset(&arg1[1], 0, 0x1c)
    *(arg1 + 0x64) = _malloc()
    int32_t var_34_1 = 8
    *(arg1 + 0x68) = _malloc()
    int32_t var_34_2 = 4
    arg1[4].d = _malloc()
    int32_t var_34_3 = 4
    arg1[9].d = _malloc()
    int32_t var_34_4 = 4
    *(arg1 + 0x44) = _malloc()
    void* edi = arg1 + 0x48
    int32_t var_34_5 = *(arg2 + 0x14) << 2
    *edi = _malloc()
    int32_t var_34_6 = *(arg1 + 0x2c) << 3
    *(arg1 + 0x5c) = _malloc()
    void* var_34_7 = (*(arg1 + 0x2c) << 3) + 8
    *(arg1 + 0x6c) = _malloc()
    int32_t var_34_8 = *(arg1 + 0x2c) << 3
    arg1[6].d = _malloc()
    int32_t var_34_9 = arg1[3].d << 3
    arg1[7].d = _malloc()
    int32_t var_34_10 = arg1[3].d << 3
    int32_t eax_26 = _malloc()
    int32_t ecx_1 = *(arg1 + 0x2c)
    *(arg1 + 0x74) = eax_26
    int32_t var_34_11 = 4
    *(*(arg1 + 0x6c) + (ecx_1 << 3)) = 0x3ff0000000000000
    *(arg1 + 0x4c) = _malloc()
    int32_t var_34_12 = 4
    int32_t eax_29 = _malloc()
    int32_t ecx_2 = *(arg2 + 0x14)
    int32_t i = 0
    arg1[5].d = eax_29
    
    if (ecx_2 s> 0)
        if (ecx_2 u>= 4)
            int32_t eax_30 = *edi
            
            if (eax_30 u> edi || eax_30 + ((ecx_2 - 1) << 2) u< edi)
                int32_t eax_32 = ecx_2 & 0x80000003
                
                if (eax_32 s< 0)
                    eax_32 = ((eax_32 - 1) | 0xfffffffc) + 1
                
                int32_t ecx_3 = ecx_2 - eax_32
                
                do
                    i += 4
                while (i s< ecx_3)
                
                int32_t eax_36
                int32_t edx_3
                edx_3:eax_36 = sx.q(ecx_3 + 3)
                __builtin_memset(eax_30, 0, ((edx_3 & 3) + eax_36) s>> 2 << 4 u>> 2 << 2)
                edi = arg1 + 0x48
        
        for (; i s< ecx_2; i += 1)
            *(*edi + (i << 2)) = 0
    
    void* var_34_13 = (*(arg1 + 0x2c) << 2) + 4
    *(arg1 + 0x54) = _malloc()
    void* var_34_14 = (*(arg1 + 0x2c) << 2) + 4
    int32_t eax_43 = _malloc()
    int32_t ecx_8 = *(arg1 + 0x2c)
    *(arg1 + 0x58) = eax_43
    int32_t i_1 = 0
    
    if (ecx_8 + 1 s> 0)
        do
            int32_t var_34_15 = arg1[3].d << 3
            *(*(arg1 + 0x54) + (i_1 << 2)) = _malloc()
            int32_t var_34_16 = arg1[3].d << 3
            *(*(arg1 + 0x58) + (i_1 << 2)) = _malloc()
            int32_t j = 0
            int32_t j_1 = 0
            
            if (arg1[3].d s> 0)
                do
                    int32_t edi_2 = j << 3
                    int32_t ecx_12 = *(arg1 + 0x2c) + 1
                    double* eax_53 = *(*(arg1 + 0x54) + (i_1 << 2)) + edi_2
                    double xmm0_4
                    double xmm0_7
                    bool p_2
                    
                    do
                        xmm0_4 = _mm_cvtepi32_pd(zx.q(_rand())) / 32767.0
                        xmm0_7 = _mm_cvtepi32_pd(zx.q(_rand())) / 32767.0
                        xmm0_4 - 0.0
                        int32_t eax_55
                        eax_55:1.b = (xmm0_4 == 0.0 ? 1 : 0) << 6
                            | (is_unordered.q(xmm0_4, 0.0) ? 1 : 0) << 2 | (xmm0_4 < 0.0 ? 1 : 0)
                        p_2 = unimplemented  {test ah, 0x44}
                    while (not(p_2))
                    int32_t mxcsr
                    int16_t x87control
                    int16_t x87control_1
                    double xmm0_9
                    x87control_1, xmm0_9 = __libm_sse2_log_precise(mxcsr, x87control, xmm0_4)
                    int16_t x87control_2
                    double xmm0_11
                    x87control_2, xmm0_11 = __libm_sse2_sqrt_precise(mxcsr, x87control_1, xmm0_9 * -2.0)
                    int16_t x87control_3
                    double xmm0_14
                    x87control_3, xmm0_14 =
                        __libm_sse2_cos_precise(mxcsr, x87control_2, xmm0_7 * 6.2831853071795862)
                    double xmm0_17
                    x87control, xmm0_17 =
                        __libm_sse2_sqrt_precise(mxcsr, x87control_3, _mm_cvtepi32_pd(zx.q(ecx_12)))
                    *eax_53 = xmm0_11 * xmm0_14 / xmm0_17
                    
                    if (i_1 == *(arg1 + 0x2c))
                        int64_t* eax_58 = *(*(arg1 + 0x54) + (i_1 << 2))
                        double xmm0_18 = eax_58[j]
                        
                        if (not(0 f<= xmm0_18))
                            eax_58[j] = xmm0_18 * -1.0
                    
                    *(edi_2 + *(*(arg1 + 0x58) + (i_1 << 2))) = (zx.o(0)).q
                    j = j_1 + 1
                    j_1 = j
                while (j s< arg1[3].d)
            
            ecx_8 = *(arg1 + 0x2c)
            i_1 += 1
        while (i_1 s< ecx_8 + 1)
    
    _memset(*(arg1 + 0x5c), 0, ecx_8 << 3)
    _memset(arg1[6].d, 0, *(arg1 + 0x2c) << 3)
    int32_t var_34_19 = 0x410
    arg1[8].d = _malloc()
    
    for (int32_t* i_2 = nullptr; i_2 s< 0x410; i_2 = &i_2[1])
        int32_t var_34_20 = 0x8000
        *(i_2 + arg1[8].d) = _malloc()
    
    int32_t var_34_21 = 0x410
    int32_t result = _malloc()
    *(arg1 + 0x84) = result
    *(arg1 + 0x88) = 0
    *(arg1 + 0x8c) = 0
    return result
}
