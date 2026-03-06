// 函数名称: _strrchr
// 虚拟地址: 0x51d250
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*_strrchr(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t temp0 = data_65a2f4
    int32_t temp0 = data_65a2f4
    
    if (temp0 u< 1)
        void* edi_2 = arg1
        int32_t i = 0xffffffff
        
        while (i != 0)
            bool cond:0_1 = 0 != *edi_2
            edi_2 += 1
            i -= 1
            
            if (not(cond:0_1))
                break
        
        int32_t i_1 = neg.d(i + 1)
        void* edi_3 = edi_2 - 1
        
        while (i_1 != 0)
            bool cond:1_1 = arg2 != *edi_3
            edi_3 -= 1
            i_1 -= 1
            
            if (not(cond:1_1))
                break
        
        if (*(edi_3 + 1) == arg2)
            return edi_3 + 1
        
        return nullptr
    
    void* i_4 = arg1
    
    if (temp0 u<= 1)
        uint32_t edx = zx.d(arg2)
        int64_t xmm3_1 = _mm_shufflelo_epi16(zx.o(edx << 8) | zx.o(edx), 0)
        void* ecx_1 = 0xf & i_4
        int32_t eax_1 = 0xffffffff << ecx_1.b
        int128_t* edi = i_4 - ecx_1
        void* edx_3 = nullptr
        int32_t ecx_3
        char xmm1_2[0x10]
        
        while (true)
            char xmm1_1[0x10] = *edi
            char xmm2_1[0x10] = _mm_cmpeq_epi8(zx.o(0), xmm1_1)
            xmm1_2 = _mm_cmpeq_epi8(xmm1_1, xmm3_1 | xmm3_1 << 0x40)
            ecx_3 = _mm_movemask_epi8(xmm2_1) & eax_1
            
            if (ecx_3 != 0)
                break
            
            int32_t ecx_5 = _mm_movemask_epi8(xmm1_2) & eax_1
            int32_t eflags_1
            void* eax_2
            eax_2, eflags_1 = _bit_scan_reverse(ecx_5)
            
            if (ecx_5 != 0)
                edx_3 = eax_2 + edi
            
            eax_1 = 0xffffffff
            edi = &edi[1]
        
        int32_t ecx_6 = ecx_3 << 1
        int32_t ecx_9 = ((ecx_6 & (0 - ecx_6)) - 1) & _mm_movemask_epi8(xmm1_2) & eax_1
        int32_t eflags_2
        void* eax_5
        eax_5, eflags_2 = _bit_scan_reverse(ecx_9)
        
        if (ecx_9 == 0)
            return edx_3
        
        return eax_5 + edi
    
    uint32_t edx_4 = zx.d(arg2)
    
    if (edx_4 == 0)
        void* eax_7 = 0xfffffff0 & i_4
        uint32_t i_2
        char xmm0_3[0x10]
        
        for (i_2 = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(zx.o(0), *eax_7))
                & 0xffffffff << (0xf & i_4.b); i_2 == 0; i_2 = _mm_movemask_epi8(xmm0_3))
            xmm0_3 = __pcmpeqb_xmmdq_memdq(zx.o(0), *(eax_7 + 0x10))
            eax_7 += 0x10
        
        int32_t eflags_4
        int32_t edx_6
        edx_6, eflags_4 = _bit_scan_forward(i_2)
        return eax_7 + edx_6
    
    void* i_5 = nullptr
    
    while ((i_4 & 0xf) != 0)
        uint32_t ecx_10 = zx.d(*i_4)
        
        if (ecx_10 == edx_4)
            i_5 = i_4
        
        if (ecx_10 == 0)
            return i_5
        
        i_4 += 1
    
    void* i_3
    
    do
        i_3 = i_4
        i_4 += 0x10
        int32_t eflags_3
        int32_t ecx_11
        ecx_11, eflags_3 = __pcmpistri_xmmdq_memdq_immb(zx.o(edx_4), *(i_4 - 0x10), 0x40)
        
        if (i_3 u>= 0xfffffff0)
            i_5 = ecx_11 + i_4 - 0x10
    while (i_3 != 0xfffffff0)
    return i_5
}
