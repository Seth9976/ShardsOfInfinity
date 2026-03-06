// 函数名称: sub_48a200
// 虚拟地址: 0x48a200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_48a200(int32_t arg1, int32_t* arg2, float* arg3, float* arg4, int128_t* arg5, float* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    _memset(arg4, 0, 0x54)
    float xmm5_1 = arg3[2] - *arg3
    float xmm6_1 = arg3[3] - arg3[1]
    xmm5_1 f- 0
    uint32_t (* eax_2)[0x4]
    eax_2:1.b =
        (xmm5_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_1, 0f) ? 1 : 0) << 2 | (xmm5_1 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    bool p_3
    
    if (not(p_1))
        xmm6_1 f- 0
        eax_2:1.b = (xmm6_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_1, 0f) ? 1 : 0) << 2
            | (xmm6_1 < 0f ? 1 : 0)
        p_3 = unimplemented  {test ah, 0x44}
    
    if (p_1 || p_3)
        float xmm4_2 = *(arg5 + 8) f- *arg5
        float xmm3_2 = *(arg5 + 0xc) f- *(arg5 + 4)
        float xmm7_4 = _mm_min_ss(_mm_max_ss(xmm5_1 / xmm4_2, xmm6_1 / xmm3_2), 
            _mm_min_ss(xmm5_1 / (arg6[2] - *arg6), xmm6_1 / (arg6[3] - arg6[1])))
        float xmm4_3 = xmm4_2 * xmm7_4
        float xmm3_3 = xmm3_2 * xmm7_4
        float eax_4
        float edx
        eax_4, edx = sub_4afaf0(5)
        float xmm7_6 = arg3[2] - *arg3
        float xmm1_4 = arg3[3] - arg3[1]
        arg4[2] = 0x3f800000
        float xmm5_7 = xmm7_6 * eax_4 + *arg3 - ((xmm4_3 - 0f) * eax_4 + 0f)
        float xmm5_8 = xmm5_7 + xmm4_3
        float xmm6_6 = xmm1_4 * edx + arg3[1] - ((xmm3_3 - 0f) * edx + 0f)
        float xmm1_7 = xmm6_6 + xmm3_3
        
        if (xmm5_8 < xmm5_7 || xmm1_7 < xmm6_6)
            sub_44e4d0(eax_4, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x127, 
                "RectTopLeft")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *arg4 = xmm5_7
        xmm7_4 f- 0
        eax_4:1.b = (xmm7_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 0f) ? 1 : 0) << 2
            | (xmm7_4 < 0f ? 1 : 0)
        arg4[1] = xmm6_6
        arg4[6] = (xmm5_8 + xmm5_7) * 0.5f
        arg4[7] = (xmm1_7 + xmm6_6) * 0.5f
        arg4[3] = xmm7_4
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            float xmm2_3 = 1f / xmm7_4
            float xmm7_7 = xmm7_6 * xmm2_3
            float xmm0_14 = xmm1_4 * xmm2_3
            float eax_5
            float edx_1
            eax_5, edx_1 = sub_4afaf0(5)
            float xmm3_9 = (*(arg5 + 8) f- *arg5) * eax_5 f+ *arg5 - ((xmm7_7 - 0f) * eax_5 + 0f)
            float var_1c_3 = xmm7_7 + xmm3_9
            float xmm2_8 =
                (*(arg5 + 0xc) f- *(arg5 + 4)) * edx_1 f+ *(arg5 + 4) - ((xmm0_14 - 0f) * edx_1 + 0f)
            float var_20_1 = xmm2_8
            float var_18_3 = xmm0_14 + xmm2_8
            *(arg4 + 0x20) = xmm3_9.o
            arg4[0xc] = (*arg2 - *arg3) / xmm7_4
            arg4[0xe] = (arg2[2] f- arg3[2]) / xmm7_4
            arg4[0xd] = (arg2[1] f- arg3[1]) / xmm7_4
            arg4[0xf] = (arg2[3] f- arg3[3]) / xmm7_4
        else
            __builtin_memset(&arg4[8], 0, 0x20)
        
        *(arg4 + 0x40) = *arg5
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
