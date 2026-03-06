// 函数名称: sub_478d90
// 虚拟地址: 0x478d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_478d90(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = *(arg3 + 0x63c) * 0x208
    uint128_t xmm1 = zx.o(*(eax_2 + arg3 + 0x180))
    float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax_2 + arg3 + 0x17c)))
    float xmm1_1 = _mm_cvtepi32_ps(xmm1)
    
    if (arg2 != 0)
        uint128_t xmm1_2 = zx.o(arg2[1])
        xmm0_1 = _mm_cvtepi32_ps(zx.o(*arg2))
        xmm1_1 = _mm_cvtepi32_ps(xmm1_2)
    
    float xmm0_4 = xmm1_1 * xmm0_1
    xmm0_4 - 0f
    eax_2:1.b =
        (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        eax_2.b = 0
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_2
    
    float xmm1_4[0x4] = *(arg3 + 0x6cc)
    float xmm0_7 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xaa) f- xmm1_4
    float xmm2_2 = _mm_shuffle_ps(xmm1_4, xmm1_4, 0xff) - _mm_shuffle_ps(xmm1_4, xmm1_4, 0x55)
    void* eax_3 = sub_4627e0(arg3, 0)
    float xmm0_11 = *(eax_3 + 0x6d4) f- *(eax_3 + 0x6cc)
    float xmm1_6 = *(eax_3 + 0x6d8) f- *(eax_3 + 0x6d0)
    int32_t eax_4 = *(arg3 + 0x63c) * 0x208
    float eax_5
    float edx
    eax_5, edx = sub_463610(xmm1_4, xmm0_11, xmm1_6, *(eax_4 + arg3 + 0x188), *(eax_4 + arg3 + 0x18c), 
        *(eax_4 + arg3 + 0x190), *(eax_4 + arg3 + 0x194), xmm0_1, xmm1_1)
    int32_t eax_6 = *(arg3 + 0x63c) * 0x208
    float xmm2_7 = *(arg3 + 0x6e8)
    int32_t ecx_3 = *(eax_6 + arg3 + 0xac) - 1
    int32_t xmm2_9 = (zx.o(0)).d
    int32_t xmm4 = _mm_max_ss(0, xmm1_1 * xmm1_6 + xmm2_7 * edx * (xmm1_1 - 1f) - xmm2_2)
    float xmm1_11 = _mm_max_ss(0, xmm0_1 * xmm0_11 + xmm2_7 * eax_5 * (xmm0_1 - 1f) - xmm0_7)
    
    if (ecx_3 u> 8)
        sub_44e4d0(eax_6, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x33a8, 
            "UI2GetScrollExtents")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t xmm3_2
    
    switch (ecx_3)
        case 0, 3, 6
            xmm3_2 = xmm1_11 ^ 0x80000000
            xmm1_11 = (zx.o(0)).d
        case 1, 4, 7
            float xmm3_3 = xmm1_11
            xmm1_11 = xmm1_11 * 0.5f
            xmm3_2 = xmm3_3 * -0.5f
        case 2, 5, 8
            xmm3_2 = (zx.o(0)).d
    
    int32_t xmm0_27
    
    switch (ecx_3)
        case 0, 1, 2
            xmm0_27 = 0x80000000 ^ xmm4
        case 3, 4, 5
            xmm0_27 = xmm4 f* -0.5f
            xmm2_9 = xmm4 f* 0.5f
        case 6, 7, 8
            xmm0_27 = (zx.o(0)).d
            xmm2_9 = xmm4
    
    *arg4 = xmm3_2
    arg4[2] = xmm1_11
    arg4[1] = xmm0_27
    arg4[3] = xmm2_9
    int32_t* eax_9
    eax_9.b = 1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_9
}
