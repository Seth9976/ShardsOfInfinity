// 函数名称: sub_498230
// 虚拟地址: 0x498230
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_498230(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    void* ecx = nullptr
    void* var_8 = nullptr
    void* result
    
    if (arg2 s> 0 && arg2 u>= 8)
        int32_t eax_1 = arg2 & 0x80000007
        
        if (eax_1 s< 0)
            eax_1 = ((eax_1 - 1) | 0xfffffff8) + 1
        
        int32_t xmm5_1[0x4] = zx.o(0)
        int32_t xmm4_1[0x4] = zx.o(0)
        result = arg1 + 0x2c
        
        do
            uint64_t xmm2_1 = zx.q(*(result + 0x10))
            result += 0x80
            i += 8
            uint128_t xmm1_1 = zx.o(*(result - 0x90))
            int32_t xmm3_2[0x4] = _mm_unpacklo_epi32(zx.o(*(result - 0xa0)), zx.q(*(result - 0x80)))
            uint64_t xmm0_2 = zx.q(*(result - 0x40))
            int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
            uint64_t xmm2_2 = zx.q(*(result - 0x30))
            int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_2)
            int32_t xmm1_3[0x4] = zx.o(*(result - 0x50))
            xmm5_1 = _mm_add_epi32(xmm5_1, xmm3_3)
            xmm4_1 = _mm_add_epi32(xmm4_1, 
                _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(result - 0x60)), xmm0_2), 
                    _mm_unpacklo_epi32(xmm1_3, xmm2_2)))
        while (i s< arg2 - eax_1)
        
        int32_t xmm4_2[0x4] = _mm_add_epi32(xmm4_1, xmm5_1)
        int32_t xmm4_3[0x4] = _mm_add_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
        ecx = _mm_add_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))
        var_8 = ecx
    
    int32_t edx_1 = 0
    void* ebx = nullptr
    
    if (i s< arg2)
        if (arg2 - i s>= 2)
            void* eax_8 = (i << 4) + arg1 + 0x1c
            int32_t i_2 = ((arg2 - i - 2) u>> 1) + 1
            i += i_2 << 1
            int32_t i_1
            
            do
                edx_1 += *(eax_8 - 0x10)
                eax_8 += 0x20
                ebx += *(eax_8 - 0x20)
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        void* ecx_9 = var_8
        
        if (i s< arg2)
            ecx_9 += *(arg1 + i * 0x10 + 0xc)
        
        result = ebx + edx_1
        ecx = ecx_9 + result
        var_8 = ecx
    
    int32_t var_24
    char const* const ecx_10
    
    if (ecx s> 0)
        int32_t esi_1 = 0
        uint32_t temp1_1 = modu.dp.d(0:(sub_452ac0()), var_8)
        result = nullptr
        
        if (arg2 s> 0)
            void* ecx_12 = arg1 + 0xc
            
            do
                esi_1 += *ecx_12
                
                if (temp1_1 s< esi_1)
                    return result
                
                result += 1
                ecx_12 += 0x10
            while (result s< arg2)
        
        char const* const var_20_1 = "ParticlePickColorFromArray"
        var_24 = 0x477
        ecx_10 = "Halt"
    else
        char const* const var_20 = "ParticlePickColorFromArray"
        var_24 = 0x467
        ecx_10 = "totalWeight > 0"
    
    sub_44e4d0(result, &data_5559b1, ecx_10, "c:\ax2017\engine\particle.cpp", var_24, 
        "ParticlePickColorFromArray")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
