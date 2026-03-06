// 函数名称: sub_4d66e0
// 虚拟地址: 0x4d66e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4d66e0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = nullptr
    void* var_8 = nullptr
    void* result = arg1
    int32_t i = 0
    void* eax
    
    if (arg2 s> 0 && arg2 u>= 8)
        int32_t eax_2 = arg2 & 0x80000007
        
        if (eax_2 s< 0)
            eax_2 = ((eax_2 - 1) | 0xfffffff8) + 1
        
        int32_t xmm5_1[0x4] = zx.o(0)
        int32_t xmm4_1[0x4] = zx.o(0)
        eax = result + 0x14
        
        do
            uint64_t xmm2_1 = zx.q(*(eax + 8))
            eax += 0x40
            i += 8
            uint128_t xmm1_1 = zx.o(*(eax - 0x48))
            int32_t xmm3_2[0x4] = _mm_unpacklo_epi32(zx.o(*(eax - 0x50)), zx.q(*(eax - 0x40)))
            uint64_t xmm0_2 = zx.q(*(eax - 0x20))
            int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
            uint64_t xmm2_2 = zx.q(*(eax - 0x18))
            int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_2)
            int32_t xmm1_3[0x4] = zx.o(*(eax - 0x28))
            xmm5_1 = _mm_add_epi32(xmm5_1, xmm3_3)
            xmm4_1 = _mm_add_epi32(xmm4_1, 
                _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(eax - 0x30)), xmm0_2), 
                    _mm_unpacklo_epi32(xmm1_3, xmm2_2)))
        while (i s< arg2 - eax_2)
        
        int32_t xmm4_2[0x4] = _mm_add_epi32(xmm4_1, xmm5_1)
        int32_t xmm4_3[0x4] = _mm_add_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
        var_8 = _mm_add_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))
    
    int32_t ebx = 0
    void* ecx_2 = nullptr
    void* ebx_2
    
    if (i s>= arg2)
        ebx_2 = var_8
    else
        if (arg2 - i s>= 2)
            void* ecx_4 = result + 0xc + (i << 3)
            int32_t i_2 = ((arg2 - i - 2) u>> 1) + 1
            void* esi = nullptr
            i += i_2 << 1
            int32_t i_1
            
            do
                ebx += *(ecx_4 - 8)
                ecx_4 += 0x10
                esi += *(ecx_4 - 0x10)
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            ecx_2 = esi
        
        if (i s< arg2)
            var_8 += *(result + (i << 3) + 4)
        
        eax = ecx_2 + ebx
        ebx_2 = var_8 + eax
    
    int32_t var_24
    char* ecx_5
    
    if (ebx_2 s> 0)
        int32_t ecx_6 = 0
        uint32_t temp1_1 = modu.dp.d(0:(sub_452ac0()), ebx_2)
        eax = nullptr
        
        if (arg2 s> 0)
            do
                eax += *(result + 4)
                
                if (temp1_1 s< eax)
                    return result
                
                ecx_6 += 1
                result += 8
            while (ecx_6 s< arg2)
        
        char const* const var_20_1 = "XWeightedArrayPick"
        var_24 = 0x31
        ecx_5 = "Halt"
    else
        char const* const var_20 = "XWeightedArrayPick"
        var_24 = 0x21
        ecx_5 = "totalWeight > 0"
    
    sub_44e4d0(eax, &data_5559b1, ecx_5, "c:\ax2017\engine\mathfunctions.cpp", var_24, 
        "XWeightedArrayPick")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
