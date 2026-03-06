// 函数名称: sub_485870
// 虚拟地址: 0x485870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

floatsub_485870(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8 = eax_1
    float xmm4_1 = arg3 - arg1
    float xmm3_1 = arg4 - arg2
    
    if (not(arg7 >= 0f) && arg8 f< 0)
        sub_44e4d0(eax_1, &data_5559b1, "minSpacing.x >= 0 || minSpacing.y >= 0", 
            "c:\ax2017\engine\uidef.cpp", 0x20e, "CalcSpacing")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    float xmm6 = arg9
    
    if (not(xmm6 f< 0))
        xmm6 = _mm_max_ss(arg7, xmm6)
    
    float xmm7 = arg10
    
    if (not(xmm7 f< 0))
        xmm7 = _mm_max_ss(arg8, xmm7)
    
    float xmm2_1 = arg11 - 1f
    float xmm2_3 = arg12 - 1f
    float xmm2_9 = xmm2_1 * arg7 + arg5 * arg11
    float xmm1_5 = xmm2_3 * arg8 + arg6 * arg12
    xmm2_9 f- 0
    eax_1:1.b =
        (xmm2_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_9, 0f) ? 1 : 0) << 2 | (xmm2_9 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    float xmm1_6
    
    if (p_1)
        xmm1_6 = xmm4_1 / xmm2_9
    else
        xmm1_6 = (zx.o(0)).d
    
    xmm1_5 f- 0
    eax_1:1.b =
        (xmm1_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_5, 0f) ? 1 : 0) << 2 | (xmm1_5 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    float xmm0_9
    
    if (p_3)
        xmm0_9 = xmm3_1 / xmm1_5
    else
        xmm0_9 = (zx.o(0)).d
    
    if (not(0 f> arg7))
        if (not(0 f> arg8))
            xmm1_6 = _mm_min_ss(xmm1_6, xmm0_9)
        
        xmm0_9 = xmm1_6
    
    xmm0_9 f- 0
    eax_1:1.b =
        (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2 | (xmm0_9 < 0f ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (not(p_5))
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 0
    
    float xmm2_12 = arg6 * xmm0_9 * arg12
    float var_c_2 = xmm2_12
    float xmm4_3
    
    if (arg11 <= 1f)
        xmm4_3 = (zx.o(0)).d
    else
        xmm4_3 = (xmm4_1 - arg5 * xmm0_9 * arg11) / xmm2_1
    
    float xmm3_3
    
    if (arg12 <= 1f)
        xmm3_3 = (zx.o(0)).d
    else
        xmm3_3 = (xmm3_1 - xmm2_12) / xmm2_3
    
    float xmm2_15 = xmm0_9 * xmm6
    float xmm1_14 = xmm0_9 * xmm7
    
    if (not(xmm2_15 > xmm4_3))
        xmm4_3 = xmm2_15
    
    if (not(xmm1_14 > xmm3_3))
        xmm3_3 = xmm1_14
    
    float xmm5_1 = 1f / xmm0_9
    float var_18_1 = xmm3_3 * xmm5_1
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return xmm4_3 * xmm5_1
}
