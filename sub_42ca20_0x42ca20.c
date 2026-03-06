// 函数名称: sub_42ca20
// 虚拟地址: 0x42ca20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __fastcallsub_42ca20(int64_t* arg1, int32_t arg2, double arg3[0x2] @ xmm2))[0x4]
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int64_t* edi = arg1
    int64_t* var_34 = edi
    double xmm1_1[0x2] = _mm_unpacklo_pd(arg3, arg3)
    int32_t i = 0
    int64_t var_30 = xmm1_1.q
    double xmm0_1 = *edi f* xmm1_1
    int32_t i_4 = 0
    *(edi + 0x18) = _mm_add_pd(*(edi + 0x18), xmm1_1)
    int32_t mxcsr
    int16_t x87control
    
    if (*(edi + 0x34) s> 0)
        do
            int32_t esi_1 = *(edi + 0x74)
            double xmm0_5
            x87control, xmm0_5 = __libm_sse2_log_precise(mxcsr, x87control, *(esi_1 + (i << 3)))
            edi[2] = edi[2] f- xmm0_5 * *(arg2 + (i_4 << 3)) f* var_30
            int32_t j = 0
            double xmm3_2 = *(esi_1 + (i_4 << 3)) f- *(arg2 + (i_4 << 3))
            
            if (*(edi + 0x2c) s> 0)
                do
                    int32_t ecx_1 = edi[0xc].d
                    double xmm1_9 = ((*(*(edi + 0x6c) + (j << 3)) * xmm3_2) ^ (data_59e5b0).q) * xmm0_1
                    *(ecx_1 + (j << 3)) =
                        *(*(*(edi + 0x54) + (j << 2)) + (i_4 << 3)) * xmm3_2 f+ *(ecx_1 + (j << 3))
                    int32_t eax_5 = *(edi[0xb].d + (j << 2))
                    *(eax_5 + (i_4 << 3)) = xmm1_9 f+ *(eax_5 + (i_4 << 3))
                    int32_t ecx_2 = *(edi[0xb].d + (j << 2))
                    int32_t eax_8 = *(*(edi + 0x54) + (j << 2))
                    j += 1
                    *(ecx_2 + (i_4 << 3)) =
                        *(ecx_2 + (i_4 << 3)) - edi[1] f* xmm0_1 f* *(eax_8 + (i_4 << 3))
                while (j s< *(edi + 0x2c))
            
            int32_t eax_10 = *(edi[0xb].d + (j << 2))
            *(eax_10 + (i_4 << 3)) = *(eax_10 + (i_4 << 3)) - xmm3_2 * xmm0_1
            i = i_4 + 1
            i_4 = i
        while (i s< *(edi + 0x34))
    
    while (i s< edi[6].d)
        int32_t esi_2 = edi[0xe].d
        int16_t x87control_1
        double xmm0_16
        x87control_1, xmm0_16 = __libm_sse2_log_precise(mxcsr, x87control, 1.0 f- *(esi_2 + (i << 3)))
        double xmm0_17 = xmm0_16 * (1.0 f- *(arg2 + (i_4 << 3)))
        double xmm0_19
        x87control, xmm0_19 = __libm_sse2_log_precise(mxcsr, x87control_1, *(esi_2 + (i_4 << 3)))
        edi[2] = (xmm0_17 + xmm0_19 f* *(arg2 + (i_4 << 3))) f* var_30 f+ edi[2]
        int32_t j_1 = 0
        double xmm3_5 = *(esi_2 + (i_4 << 3)) f- *(arg2 + (i_4 << 3))
        
        if (*(edi + 0x2c) s> 0)
            do
                int32_t ecx_4 = edi[0xc].d
                double xmm1_23 = ((*(*(edi + 0x6c) + (j_1 << 3)) * xmm3_5) ^ (data_59e5b0).q) * xmm0_1
                *(ecx_4 + (j_1 << 3)) =
                    *(*(*(edi + 0x54) + (j_1 << 2)) + (i_4 << 3)) * xmm3_5 f+ *(ecx_4 + (j_1 << 3))
                int32_t eax_17 = *(edi[0xb].d + (j_1 << 2))
                *(eax_17 + (i_4 << 3)) = xmm1_23 f+ *(eax_17 + (i_4 << 3))
                int32_t ecx_5 = *(edi[0xb].d + (j_1 << 2))
                int32_t eax_20 = *(*(edi + 0x54) + (j_1 << 2))
                j_1 += 1
                *(ecx_5 + (i_4 << 3)) =
                    *(ecx_5 + (i_4 << 3)) - edi[1] f* xmm0_1 f* *(eax_20 + (i_4 << 3))
            while (j_1 s< *(edi + 0x2c))
        
        int32_t eax_22 = *(edi[0xb].d + (j_1 << 2))
        *(eax_22 + (i_4 << 3)) = *(eax_22 + (i_4 << 3)) - xmm3_5 * xmm0_1
        i = i_4 + 1
        i_4 = i
    
    int32_t var_44 = *(edi + 0x2c) << 3
    int32_t eax_25 = _malloc()
    int32_t i_1 = 0
    var_30:4.d = eax_25
    
    if (*(edi + 0x2c) s> 0)
        do
            int32_t eax_27
            eax_27.b = *(*(edi + 0x6c) + (i_1 << 3)) f> 0
            *(eax_25 + (i_1 << 3)) = (_mm_cvtepi32_pd(zx.q(eax_27)) f* *(edi[0xc].d + (i_1 << 3))
                * xmm0_1) ^ 0x8000000000000000
            i_1 += 1
        while (i_1 s< *(edi + 0x2c))
    
    int32_t ecx_6 = edi[5].d
    int32_t i_2 = 0
    int32_t i_5 = 0
    
    if (ecx_6 + 1 s> 0)
        do
            int32_t eax_31 = *(*(edi + 0x44) + (i_2 << 2))
            int32_t eax_33 = *(edi[8].d + (i_2 << 2))
            double var_28
            var_28:4.d = eax_33
            int32_t eax_34
            int32_t j_2
            
            if (eax_33 s>= 0)
                int32_t eax_35 = *(edi + 0x3c)
                j_2 = eax_35 * var_28:4.d
                eax_34 = eax_35 + j_2
            else
                eax_34 = *(edi + 0x2c)
                j_2 = 0
            
            var_28:4.d = eax_34
            
            if (j_2 s< eax_34)
                double var_20
                var_20:4.d = edi + 0x3c
                
                do
                    double* ecx_9 =
                        *(edi[0xa].d + (eax_31 << 2)) + (mods.dp.d(sx.q(j_2), *var_20:4.d) << 3)
                    i_2 = i_5
                    *ecx_9 = *(*(edi + 0x64) + (i_2 << 3)) f* *(var_30:4.d + (j_2 << 3)) + *ecx_9
                    ecx_6 = edi[5].d
                    
                    if (i_2 != ecx_6)
                        int32_t temp1_2 = mods.dp.d(sx.q(j_2), *var_20:4.d)
                        int32_t ecx_12 = *(edi[0xa].d + (eax_31 << 2))
                        int32_t eax_47 = *(*(edi + 0x4c) + (eax_31 << 2))
                        edi = var_34
                        *(ecx_12 + (temp1_2 << 3)) =
                            *(ecx_12 + (temp1_2 << 3)) - edi[1] f* xmm0_1 f* *(eax_47 + (temp1_2 << 3))
                        ecx_6 = edi[5].d
                        i_2 = i_5
                    
                    j_2 += 1
                while (j_2 s< var_28:4.d)
            
            i_2 += 1
            i_5 = i_2
        while (i_2 s< ecx_6 + 1)
    
    _free(var_30:4.d)
    int32_t i_3 = 0
    
    if (*(edi + 0x2c) s> 0)
        do
            *(edi[0xc].d + (i_3 << 3)) = (zx.o(0)).q
            *(*(edi + 0x5c) + (i_3 << 3)) = (zx.o(0)).q
            i_3 += 1
        while (i_3 s< *(edi + 0x2c))
    
    return _memset(edi[0xd].d, 0, (edi[5].d << 3) + 8)
}
