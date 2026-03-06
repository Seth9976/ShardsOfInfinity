// 函数名称: sub_42c7a0
// 虚拟地址: 0x42c7a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_42c7a0(void* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t i = 0
    void* var_14 = arg1
    int32_t i_4 = 0
    int64_t xmm1 = (zx.o(0)).q
    int64_t var_38 = (zx.o(0)).q
    int64_t xmm2 = (zx.o(0)).q
    int64_t var_40 = (zx.o(0)).q
    
    if (*(arg1 + 0x28) + 1 s> 0)
        do
            int32_t edi_4 = *(arg1 + 0x64)
            int32_t eax_2 = *(arg1 + 0x68)
            int32_t var_2c_1 = eax_2
            double xmm0_1 = *(edi_4 + (i << 3))
            double temp2_1 = *(eax_2 + (i << 3))
            xmm0_1 - temp2_1
            eax_2:1.b = (xmm0_1 == temp2_1 ? 1 : 0) << 6
                | (is_unordered.q(xmm0_1, temp2_1) ? 1 : 0) << 2 | (xmm0_1 < temp2_1 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                int32_t eax_4 = *(*(arg1 + 0x44) + (i << 2))
                int32_t eax_6 = *(*(arg1 + 0x40) + (i << 2))
                int32_t eax_7
                int32_t esi_1
                
                if (eax_6 s>= 0)
                    int32_t eax_8 = *(arg1 + 0x3c)
                    esi_1 = eax_8 * eax_6
                    eax_7 = eax_8 + esi_1
                else
                    eax_7 = *(arg1 + 0x2c)
                    esi_1 = 0
                
                int32_t var_1c_1 = esi_1
                int32_t eax_15
                
                if (esi_1 s>= eax_7)
                    eax_15 = var_2c_1
                else
                    void* eax_9 = arg1 + 0x3c
                    
                    do
                        int32_t edi_1 = *(arg1 + 0x5c)
                        int32_t esi_5 = *(*(arg1 + 0x4c) + (eax_4 << 2))
                        double xmm0_3 = *(*(arg1 + 0x64) + (i_4 << 3)) f- *(*(arg1 + 0x68) + (i_4 << 3))
                        arg1 = var_14
                        *(edi_1 + (var_1c_1 << 3)) = xmm0_3 f*
                            *(esi_5 + (mods.dp.d(sx.q(esi_1), *eax_9) << 3)) f+
                            *(edi_1 + (var_1c_1 << 3))
                        esi_1 = var_1c_1 + 1
                        var_1c_1 = esi_1
                    while (esi_1 s< eax_7)
                    
                    edi_4 = *(arg1 + 0x64)
                    eax_15 = *(arg1 + 0x68)
                    i = i_4
                
                *(eax_15 + (i << 3)) = *(edi_4 + (i << 3))
            
            i += 1
            i_4 = i
        while (i s< *(arg1 + 0x28) + 1)
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x2c) s> 0)
        do
            double xmm0_7 = *((i_1 << 3) + *(var_14 + 0x5c))
            
            if (not(0.0 <= xmm0_7))
                xmm0_7 = (zx.o(0)).q
            
            (*(var_14 + 0x6c))[i_1] = xmm0_7
            i_1 += 1
            arg1 = var_14
        while (i_1 s< *(arg1 + 0x2c))
    
    int32_t result = *(arg1 + 0x34)
    int32_t edi_5 = 0
    int64_t xmm3 = -0x8000000000000000
    *(arg1 + 0x78) = (zx.o(0)).q
    int32_t mxcsr
    int16_t x87control
    
    if (result s> 0)
        int32_t var_20_3 = *(arg1 + 0x70)
        
        do
            int32_t i_5 = *(arg1 + 0x2c) + 1
            
            if (i_5 s> 0)
                double* edx_3 = *(arg1 + 0x6c)
                int32_t* ecx_2 = *(arg1 + 0x54)
                int32_t i_2
                
                do
                    int32_t eax_21 = *ecx_2
                    ecx_2 = &ecx_2[1]
                    double xmm0_9 = *(eax_21 + (edi_5 << 3)) * *edx_3
                    edx_3 = &edx_3[1]
                    xmm1 = xmm1 f+ xmm0_9
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
            
            if (edi_5 == 0)
                xmm2 = xmm1 ^ xmm3
                var_40 = xmm2
            
            int64_t xmm0_11
            x87control, xmm0_11 = __libm_sse2_exp_precise(mxcsr, x87control, xmm1 f+ xmm2)
            arg1 = var_14
            xmm1 = var_38
            xmm2 = var_40
            xmm3 = -0x8000000000000000
            *(var_20_3 + (edi_5 << 3)) = xmm0_11
            int32_t edx_4 = *(arg1 + 0x70)
            var_20_3 = edx_4
            double xmm0_12 = *(edx_4 + (edi_5 << 3))
            edi_5 += 1
            *(arg1 + 0x78) = xmm0_12 f+ *(arg1 + 0x78)
            result = *(arg1 + 0x34)
        while (edi_5 s< result)
    
    int32_t i_3 = 0
    
    if (result s> 0)
        do
            result = *(arg1 + 0x74)
            *(result + (i_3 << 3)) = *(*(arg1 + 0x70) + (i_3 << 3)) f/ *(arg1 + 0x78)
            i_3 += 1
        while (i_3 s< *(arg1 + 0x34))
    
    while (i_3 s< *(arg1 + 0x30))
        int32_t j_1 = *(arg1 + 0x2c) + 1
        
        if (j_1 s> 0)
            double* edx_5 = *(arg1 + 0x6c)
            int32_t* ecx_3 = *(arg1 + 0x54)
            int32_t j
            
            do
                int32_t eax_24 = *ecx_3
                ecx_3 = &ecx_3[1]
                double xmm0_17 = *(eax_24 + (i_3 << 3)) * *edx_5
                edx_5 = &edx_5[1]
                xmm1 = xmm1 f+ xmm0_17
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        double xmm0_19
        x87control, xmm0_19 = __libm_sse2_exp_precise(mxcsr, x87control, xmm1 ^ xmm3)
        arg1 = var_14
        xmm3 = -0x8000000000000000
        result = *(arg1 + 0x70)
        *(result + (i_3 << 3)) = 1.0 / (xmm0_19 + 1.0)
        i_3 += 1
        xmm1 = var_38
    
    return result
}
