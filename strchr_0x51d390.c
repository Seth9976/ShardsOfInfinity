// 函数名称: _strchr
// 虚拟地址: 0x51d390
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*_strchr(char* arg1, char arg2)
{
    // 第一条实际指令: if (data_65a2f4 u>= 1)
    if (data_65a2f4 u>= 1)
        uint32_t eax = zx.d(arg2)
        int64_t xmm3_1 = _mm_shufflelo_epi16(zx.o(eax) | zx.o(eax << 8), 0)
        char xmm3_2[0x10] = xmm3_1 | xmm3_1 << 0x40
        void* ecx_1 = 0xf & arg1
        int32_t eax_2 = 0xffffffff << ecx_1.b
        int128_t* edx_3 = arg1 - ecx_1
        int32_t ecx_3
        
        while (true)
            char xmm1_1[0x10] = *edx_3
            ecx_3 = _mm_movemask_epi8(_mm_cmpeq_epi8(zx.o(0), xmm1_1) | _mm_cmpeq_epi8(xmm1_1, xmm3_2))
                & eax_2
            
            if (ecx_3 != 0)
                break
            
            eax_2 = 0xffffffff
            edx_3 = &edx_3[1]
        
        int32_t eflags
        void* eax_3
        eax_3, eflags = _bit_scan_forward(ecx_3)
        void* result = eax_3 + edx_3
        
        if (xmm3_2[0] != *result)
            return nullptr
        
        return result
    
    int32_t eax_4
    eax_4.b = arg2
    char* edx_5 = arg1
    
    while ((edx_5 & 3) != 0)
        char ecx = *edx_5
        edx_5 = &edx_5[1]
        
        if (ecx == eax_4.b)
            return &edx_5[0xffffffff]
        
        if (ecx == 0)
            return 0
    
    int32_t ebx_1 = eax_4 | eax_4 << 8
    int32_t ebx_3 = ebx_1 << 0x10 | ebx_1
    
    while (true)
        int32_t ecx_4 = *edx_5
        int32_t ecx_5 = ecx_4 ^ ebx_3
        edx_5 = &edx_5[4]
        
        if (((ecx_5 ^ 0xffffffff ^ (0x7efefeff + ecx_5)) & 0x81010100) != 0)
            int32_t eax_14 = *(edx_5 - 4)
            
            if (eax_14.b == ebx_3.b)
                return &edx_5[0xfffffffc]
            
            if (eax_14.b == 0)
                break
            
            if (eax_14:1.b == ebx_3.b)
                return &edx_5[0xfffffffd]
            
            if (eax_14:1.b == 0)
                break
            
            uint16_t eax_15 = (eax_14 u>> 0x10).w
            
            if (eax_15.b == ebx_3.b)
                return &edx_5[0xfffffffe]
            
            if (eax_15.b == 0)
                break
            
            if (eax_15:1.b == ebx_3.b)
                return &edx_5[0xffffffff]
            
            if (eax_15:1.b == 0)
                break
        else
            int32_t eax_10 = (ecx_4 ^ 0xffffffff ^ (0x7efefeff + ecx_4)) & 0x81010100
            
            if (eax_10 != 0)
                if ((eax_10 & 0x1010100) != 0)
                    break
                
                if (((0x7efefeff + ecx_4) & 0x80000000) == 0)
                    break
    
    return 0
}
