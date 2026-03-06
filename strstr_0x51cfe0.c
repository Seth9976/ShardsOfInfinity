// 函数名称: _strstr
// 虚拟地址: 0x51cfe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*_strstr(int32_t arg1[0x4] @ xmm0, char* arg2, void* arg3)
{
    // 第一条实际指令: char* ecx = arg3
    char* ecx = arg3
    int128_t* eax = arg2
    int32_t temp0 = data_65a2f4
    
    if (temp0 u< 1)
        int16_t edx
        edx.b = *ecx
        void* edi_5 = eax
        
        if (edx.b == 0)
            return edi_5
        
        edx:1.b = ecx[1]
        
        if (edx:1.b != 0)
            while (true)
                void* ecx_4 = arg3
                eax.b = *edi_5
                void* esi_6 = edi_5 + 1
                
                if (eax.b != edx.b)
                    if (eax.b == 0)
                        return 0
                    
                    while (true)
                        eax.b = *esi_6
                        esi_6 += 1
                    label_51d1ed:
                        
                        if (eax.b == edx.b)
                            break
                        
                        if (eax.b == 0)
                            return 0
                
                eax.b = *esi_6
                esi_6 += 1
                
                if (eax.b != edx:1.b)
                    break
                
                edi_5 = esi_6 - 1
                
                while (true)
                    eax:1.b = *(ecx_4 + 2)
                    
                    if (eax:1.b != 0)
                        eax.b = *esi_6
                        esi_6 += 2
                        
                        if (eax.b != eax:1.b)
                            break
                        
                        eax.b = *(ecx_4 + 3)
                        
                        if (eax.b != 0)
                            eax:1.b = *(esi_6 - 1)
                            ecx_4 += 2
                            
                            if (eax.b != eax:1.b)
                                break
                            
                            continue
                    
                    return edi_5 - 1
            
            goto label_51d1ed
        
        int32_t eax_5
        eax_5.b = edx.b
        int32_t ebx
        int32_t var_4_1 = ebx
        char* edx_8 = arg2
        
        while ((edx_8 & 3) != 0)
            ecx.b = *edx_8
            edx_8 = &edx_8[1]
            
            if (ecx.b == eax_5.b)
                return &edx_8[0xffffffff]
            
            if (ecx.b == 0)
                return 0
        
        int32_t ebx_26 = eax_5 | eax_5 << 8
        int32_t edi
        int32_t var_8_1 = edi
        int32_t esi
        int32_t var_c_1 = esi
        int32_t ebx_28 = ebx_26 << 0x10 | ebx_26
        
        while (true)
            int32_t ecx_5 = *edx_8
            int32_t ecx_6 = ecx_5 ^ ebx_28
            edx_8 = &edx_8[4]
            
            if (((ecx_6 ^ 0xffffffff ^ (0x7efefeff + ecx_6)) & 0x81010100) != 0)
                int32_t eax_17 = *(edx_8 - 4)
                
                if (eax_17.b == ebx_28.b)
                    return &edx_8[0xfffffffc]
                
                if (eax_17.b == 0)
                    break
                
                if (eax_17:1.b == ebx_28.b)
                    return &edx_8[0xfffffffd]
                
                if (eax_17:1.b == 0)
                    break
                
                uint16_t eax_18 = (eax_17 u>> 0x10).w
                
                if (eax_18.b == ebx_28.b)
                    return &edx_8[0xfffffffe]
                
                if (eax_18.b == 0)
                    break
                
                if (eax_18:1.b == ebx_28.b)
                    return &edx_8[0xffffffff]
                
                if (eax_18:1.b == 0)
                    break
            else
                int32_t eax_13 = (ecx_5 ^ 0xffffffff ^ (0x7efefeff + ecx_5)) & 0x81010100
                
                if (eax_13 != 0)
                    if ((eax_13 & 0x1010100) != 0)
                        break
                    
                    if (((0x7efefeff + ecx_5) & 0x80000000) == 0)
                        break
        
        return 0
    
    if (temp0 u<= 1)
        uint32_t edx_1 = zx.d(*ecx)
        uint32_t edx_3 = edx_1 << 8 | edx_1
        
        if (edx_3 != 0)
            int64_t xmm3_2 = _mm_shufflelo_epi16(zx.o(edx_3), 0)
            char xmm3_3[0x10] = xmm3_2 | xmm3_2 << 0x40
            char* esi_1 = ecx
            int32_t edi_1 = 0xffffffff
            
            while (true)
                uint32_t ebx_2 = zx.d(*ecx)
                ecx = &ecx[1]
                
                if (ebx_2 == 0)
                    break
                
                if ((ecx & 0xf) == 0)
                    if (_mm_movemask_epi8(_mm_cmpeq_epi8(*ecx, zx.o(0))) == 0)
                        edi_1 = 0xf
                    
                    break
            
            while (true)
                char edx_4 = xmm3_3[0]
                
                while (true)
                    if ((0xfff & eax) u<= 0xff0)
                        char xmm1_1[0x10] = *eax
                        char xmm2_3[0x10] = _mm_cmpeq_epi8(zx.o(0), xmm1_1)
                        uint32_t ebx_5 = _mm_movemask_epi8(_mm_cmpeq_epi8(xmm1_1, xmm3_3) | xmm2_3)
                        eax = &eax[1]
                        
                        if (ebx_5 == 0)
                            continue
                        else
                            int32_t eflags_1
                            int32_t ebx_6
                            ebx_6, eflags_1 = _bit_scan_forward(ebx_5)
                            eax = eax - 0x10 + ebx_6
                    
                    uint32_t ebx_7 = zx.d(*eax)
                    
                    if (ebx_7 == 0)
                        return nullptr
                    
                    eax += 1
                    
                    if (edx_4 == ebx_7.b)
                        break
                
                char* edx_5 = eax
                void* ecx_1 = &esi_1[1]
                
                while (true)
                    if ((edi_1 & ecx_1) == 0 && (0xfff & edx_5) u<= 0xff0)
                        char xmm2_4[0x10] = *ecx_1
                        char xmm1_5[0x10] = _mm_cmpeq_epi8(*edx_5, xmm2_4)
                        uint32_t ebx_9 = _mm_movemask_epi8(_mm_cmpeq_epi8(xmm2_4, zx.o(0))
                            | _mm_cmpeq_epi8(xmm1_5, zx.o(0)))
                        
                        if (ebx_9 != 0)
                            int32_t eflags_2
                            int32_t ebx_10
                            ebx_10, eflags_2 = _bit_scan_forward(ebx_9)
                            edx_5 = &edx_5[ebx_10]
                            ecx_1 += ebx_10
                        else
                            edx_5 = &edx_5[0x10]
                            ecx_1 += 0x10
                            continue
                    
                    uint32_t ebx_11 = zx.d(*ecx_1)
                    
                    if (ebx_11 == 0)
                        return eax - 1
                    
                    if (ebx_11.b != *edx_5)
                        break
                    
                    edx_5 = &edx_5[1]
                    ecx_1 += 1
    else if (*ecx != 0)
        char* edi_4 = ecx
        
        if ((0xfff & ecx) u> 0xff0)
            int32_t ebx_15 = 0xf
            
            while (true)
                int32_t i = zx.d(*ecx)
                ecx = &ecx[1]
                
                do
                    arg1 = _mm_bsrli_si128(_mm_insert_epi8(arg1, i, 0xf), 1)
                    int32_t temp1_1 = ebx_15
                    ebx_15 -= 1
                    
                    if (temp1_1 == 1)
                        goto label_51d139
                while (i == 0)
        else
            arg1 = *ecx
        label_51d139:
            
            while (true)
                char edx_6 = arg1[0].b
                
                while (true)
                    if ((0xfff & eax) u<= 0xff0)
                        int128_t* temp2_1 = eax
                        eax = &eax[1]
                        bool c_1 = temp2_1 u>= 0xfffffff0
                        int32_t eflags_3
                        int32_t ecx_2
                        ecx_2, eflags_3 = __pcmpistri_xmmdq_memdq_immb(arg1, eax[-1], 0xc)
                        
                        if (temp2_1 != 0xfffffff0 && not(c_1))
                            continue
                        else if (c_1)
                            eax = eax - 0x10 + ecx_2
                            break
                    else
                        uint32_t ebx_17 = zx.d(*eax)
                        
                        if (ebx_17 != 0)
                            if (edx_6 == ebx_17.b)
                                break
                            
                            eax += 1
                            continue
                    
                    return nullptr
                
                int32_t (* edx_7)[0x4] = edi_4
                int128_t* esi_4 = eax
                
                while (true)
                    if ((0xfff & esi_4) u<= 0xff0 && (0xfff & edx_7) u<= 0xff0)
                        int32_t xmm1_7[0x4] = *edx_7
                        esi_4 = &esi_4[1]
                        int32_t (* temp3_1)[0x4] = edx_7
                        edx_7 = &edx_7[1]
                        int32_t eflags_4
                        int32_t ecx_3
                        ecx_3, eflags_4 = __pcmpistri_xmmdq_memdq_immb(xmm1_7, esi_4[-1], 0xc)
                        
                        if (not(add_overflow(temp3_1, 0x10)))
                            break
                        
                        if (&temp3_1[1] s< 0)
                            return eax
                        
                        continue
                    
                    uint32_t ebx_20 = zx.d(*edx_7)
                    
                    if (ebx_20 == 0)
                        return eax
                    
                    if (ebx_20.b != *esi_4)
                        break
                    
                    esi_4 += 1
                    edx_7 += 1
                
                eax += 1
    
    return eax
}
