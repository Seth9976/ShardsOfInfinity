// 函数名称: sub_48a510
// 虚拟地址: 0x48a510
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_48a510(int32_t arg1, int128_t* arg2, float* arg3, float arg4, int128_t* arg5, float arg6)
{
    // 第一条实际指令: float* result = arg4
    float* result = arg4
    _memset(result, 0, 0x54)
    float xmm0_1 = arg3[2] - *arg3
    float xmm1_1 = arg3[3] - arg3[1]
    xmm0_1 f- 0
    uint32_t (* eax)[0x4]
    eax:1.b =
        (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2 | (xmm0_1 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    bool p_3
    
    if (not(p_1))
        xmm1_1 f- 0
        eax:1.b = (xmm1_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
            | (xmm1_1 < 0f ? 1 : 0)
        p_3 = unimplemented  {test ah, 0x44}
    
    if (p_1 || p_3)
        float xmm1_4 = (*(arg5 + 8) f- *arg5) * arg6
        float xmm0_4 = (*(arg5 + 0xc) f- *(arg5 + 4)) * arg6
        float eax_1
        float edx
        eax_1, edx = sub_4afaf0(5)
        float xmm1_6 = arg3[2] - *arg3
        result[2] = 0x3f800000
        float xmm1_8 = arg3[3] - arg3[1]
        float xmm7_4 = xmm1_6 * eax_1 + *arg3 - ((xmm1_4 - 0f) * eax_1 + 0f)
        float xmm5_2 = xmm7_4 + xmm1_4
        float xmm6_4 = xmm1_8 * edx + arg3[1] - ((xmm0_4 - 0f) * edx + 0f)
        float xmm1_11 = xmm6_4 + xmm0_4
        
        if (xmm5_2 < xmm7_4 || xmm1_11 < xmm6_4)
            sub_44e4d0(eax_1, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x127, 
                "RectTopLeft")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        arg6 f- 0
        *result = xmm7_4
        eax_1:1.b =
            (arg6 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg6, 0f) ? 1 : 0) << 2 | (arg6 < 0f ? 1 : 0)
        result[1] = xmm6_4
        result[6] = (xmm5_2 + xmm7_4) * 0.5f
        result[3] = arg6
        result[7] = (xmm1_11 + xmm6_4) * 0.5f
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (not(p_5))
            __builtin_memset(&result[8], 0, 0x20)
            *(result + 0x40) = *arg5
            return result
        
        float xmm2_1 = 1f / arg6
        float xmm0_16 = xmm1_6 * xmm2_1
        float xmm0_18 = xmm1_8 * xmm2_1
        float eax_3
        float edx_1
        eax_3, edx_1 = sub_4afaf0(5)
        float xmm3_6 = (*(arg5 + 8) f- *arg5) * eax_3 f+ *arg5 - ((xmm0_16 - 0f) * eax_3 + 0f)
        float var_1c_3 = xmm3_6 + xmm0_16
        float xmm2_6 =
            (*(arg5 + 0xc) f- *(arg5 + 4)) * edx_1 f+ *(arg5 + 4) - ((xmm0_18 - 0f) * edx_1 + 0f)
        float var_20_1 = xmm2_6
        float var_18_3 = xmm2_6 + xmm0_18
        *(result + 0x20) = xmm3_6.o
        *(result + 0x30) = *arg2
        *(result + 0x40) = *arg5
    
    return result
}
