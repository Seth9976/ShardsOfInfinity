// 函数名称: sub_4965b0
// 虚拟地址: 0x4965b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4965b0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, float arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_5c
    void* ecx
    int128_t* eax_3 = sub_49a2d0(&var_5c, arg2, ecx, &var_5c)
    int32_t edx = 0x10
    int32_t ecx_1 = *(arg2 + 0x284)
    int128_t xmm0 = *eax_3
    
    if (arg3 s< 0x10)
        edx = arg3
    
    int128_t xmm0_1 = eax_3[1]
    
    if (edx s< 2)
        edx = 2
    
    int32_t ebx
    ebx.b = 0
    float xmm7_1 = arg5 / _mm_cvtepi32_ps(zx.o(edx - 1))
    
    if (ecx_1 == 0)
    label_4966c1:
        
        if (ecx_1 - edx + 1 s> 0)
            sub_51dd40(arg2 + 0x44, arg2 + (((ecx_1 - edx + 1) * 9 + 0x11) << 2), 
                (ecx_1 - (ecx_1 - edx + 1)) * 0x24)
            ecx_1 = *(arg2 + 0x284) - (ecx_1 - edx + 1)
        
        ecx_1 += 1
        *(arg2 + 0x284) = ecx_1
    else
        if (edx s< 2)
            sub_44e4d0(edx - 1, &data_5559b1, "trailNumSegments >= 2", "c:\ax2017\engine\particle.cpp", 
                0x386, "RibbonUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_5 = ecx_1 * 9
        float xmm5_2 = *(arg2 + (eax_5 << 2) + 0x20) f- *(arg2 + (eax_5 << 2) - 4)
        float xmm4_2 = *(arg2 + (eax_5 << 2) + 0x24) f- *(arg2 + (eax_5 << 2))
        float xmm3_2 = *(arg2 + (eax_5 << 2) + 0x28) f- *(arg2 + (eax_5 << 2) + 4)
        float xmm6_2 = xmm0_1:4.d f- *(arg2 + (eax_5 << 2) + 0x20)
        float xmm2_2 = xmm0_1:8.d f- *(arg2 + (eax_5 << 2) + 0x24)
        float xmm1_2 = xmm0_1:0xc.d f- *(arg2 + (eax_5 << 2) + 0x28)
        
        if (not(xmm5_2 * xmm5_2 + xmm4_2 * xmm4_2 + xmm3_2 * xmm3_2 <= xmm7_1 * xmm7_1))
            ebx = 0
            
            if (xmm6_2 * xmm6_2 + xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 f> 0)
                ebx = 1
        
        if (ebx.b != 0)
            goto label_4966c1
    
    int32_t ecx_4 = ecx_1 * 9
    float xmm4_4 = xmm0:4.d
    float xmm3_4 = xmm0_1.d
    float xmm5_6 = xmm0:0xc.d
    float xmm1_4 = xmm0:8.d
    *(arg2 + (ecx_4 << 2) + 0x20) = xmm0_1:4.q
    *(arg2 + (ecx_4 << 2) + 0x28) = xmm0_1:0xc.d
    *(arg2 + (ecx_4 << 2) + 0x3c) = 0
    float xmm6_8 = xmm4_4 * xmm5_6 + xmm3_4 * xmm1_4
    float xmm2_6 = xmm5_6 * xmm1_4 - xmm4_4 * xmm3_4
    *(arg2 + (ecx_4 << 2) + 0x38) = arg4
    *(arg2 + (ecx_4 << 2) + 0x2c) = _mm_unpacklo_ps(xmm6_8 + xmm6_8, xmm2_6 + xmm2_6)
    *(arg2 + (ecx_4 << 2) + 0x34) =
        xmm5_6 * xmm5_6 - xmm1_4 * xmm1_4 - xmm4_4 * xmm4_4 + xmm3_4 * xmm3_4
    uint32_t result = *(arg2 + 0x284)
    
    if (result == edx - 1 && result s>= 2)
        uint32_t eax_14 = result * 9
        float xmm0_13 = *(arg2 + (ecx_4 << 2) + 0x20) f- *(arg2 + (eax_14 << 2) - 4)
        float xmm1_7 = *(arg2 + (ecx_4 << 2) + 0x24) f- *(arg2 + (eax_14 << 2))
        float xmm2_9 = *(arg2 + (ecx_4 << 2) + 0x28) f- *(arg2 + (eax_14 << 2) + 4)
        float xmm0_17
        result, xmm0_17 = sub_412d90(xmm0_13 * xmm0_13 + xmm1_7 * xmm1_7 + xmm2_9 * xmm2_9)
        *(arg2 + 0x60) = xmm0_17 / xmm7_1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
