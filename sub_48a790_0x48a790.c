// 函数名称: sub_48a790
// 虚拟地址: 0x48a790
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_48a790(int32_t arg1, int128_t* arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: void var_48
    void var_48
    int32_t eax_1 = __security_cookie ^ &var_48
    _memset(arg4, 0, 0x54)
    float xmm2_1 = arg3[2] - *arg3
    float xmm3_1 = arg3[3] - arg3[1]
    xmm2_1 f- 0
    uint32_t (* eax_2)[0x4]
    eax_2:1.b =
        (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2 | (xmm2_1 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    bool p_3
    
    if (not(p_1))
        xmm3_1 f- 0
        eax_2:1.b = (xmm3_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2
            | (xmm3_1 < 0f ? 1 : 0)
        p_3 = unimplemented  {test ah, 0x44}
    
    if (p_1 || p_3)
        float* eax_3 = arg2
        float xmm1_2 = eax_3[2] - *eax_3
        float xmm0_2 = eax_3[3] - eax_3[1]
        float xmm2_3 = _mm_max_ss(xmm2_1 / xmm1_2, xmm3_1 / xmm0_2)
        float xmm1_3 = xmm1_2 * xmm2_3
        float xmm0_3 = xmm0_2 * xmm2_3
        float eax_4
        float edx
        eax_4, edx = sub_4afaf0(5)
        float xmm1_5 = arg3[2] - *arg3
        arg4[2] = 0x3f800000
        float xmm1_7 = arg3[3] - arg3[1]
        float xmm7_4 = xmm1_5 * eax_4 + *arg3 - ((xmm1_3 - 0f) * eax_4 + 0f)
        float xmm5_2 = xmm7_4 + xmm1_3
        float xmm6_4 = xmm1_7 * edx + arg3[1] - ((xmm0_3 - 0f) * edx + 0f)
        float xmm1_10 = xmm6_4 + xmm0_3
        
        if (xmm5_2 < xmm7_4 || xmm1_10 < xmm6_4)
            sub_44e4d0(eax_4, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x127, 
                "RectTopLeft")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        xmm2_3 f- 0
        *arg4 = xmm7_4
        eax_4:1.b = (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2
            | (xmm2_3 < 0f ? 1 : 0)
        arg4[1] = xmm6_4
        arg4[6] = (xmm5_2 + xmm7_4) * 0.5f
        arg4[3] = xmm2_3
        arg4[7] = (xmm1_10 + xmm6_4) * 0.5f
        bool p_5 = unimplemented  {test ah, 0x44}
        int128_t* eax_5
        
        if (p_5)
            float xmm2_4 = 1f / xmm2_3
            float xmm0_14 = xmm1_5 * xmm2_4
            float xmm0_16 = xmm1_7 * xmm2_4
            float eax_6
            float edx_1
            eax_6, edx_1 = sub_4afaf0(5)
            eax_5 = arg2
            float xmm3_8 = (*(eax_5 + 8) f- *eax_5) * eax_6 f+ *eax_5 - ((xmm0_14 - 0f) * eax_6 + 0f)
            float var_28_1 = xmm3_8 + xmm0_14
            float xmm2_9 =
                (*(eax_5 + 0xc) f- *(eax_5 + 4)) * edx_1 f+ *(eax_5 + 4) - ((xmm0_16 - 0f) * edx_1 + 0f)
            float var_2c_3 = xmm2_9
            float var_24_1 = xmm2_9 + xmm0_16
            *(arg4 + 0x20) = xmm3_8.o
        else
            eax_5 = arg2
            __builtin_memset(&arg4[8], 0, 0x20)
        
        *(arg4 + 0x40) = *eax_5
    
    @__security_check_cookie@4(eax_1 ^ &var_48)
    return arg4
}
