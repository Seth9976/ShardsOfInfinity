// 函数名称: sub_486dc0
// 虚拟地址: 0x486dc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_486dc0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    
    if (data_65ae04[6].b != 0)
        void var_28
        int128_t* eax_2 = sub_485510(&var_28, arg3 + 0xc, arg2, &var_28, arg3 + 0x1c)
        float xmm4_1 = *(arg3 + 0x7c)
        float xmm3_1 = *(arg3 + 0x78)
        float xmm2_1 = *(arg3 + 0x80)
        float xmm1_1[0x4] = *eax_2
        float xmm5_1 = *(arg3 + 0x108)
        float xmm7_1 = *(arg3 + 0x10c)
        float xmm0_3 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa) f- xmm1_1
        float xmm6_2 = xmm0_3 f* *(arg3 + 0x74)
        float xmm0_5 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff)
        float xmm4_3 = xmm4_1 * xmm0_3 f+ xmm1_1
        float xmm6_3 = xmm6_2 f+ xmm1_1
        float xmm1_2 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
        float xmm0_6 = xmm0_5 - xmm1_2
        float xmm3_3 = xmm3_1 * xmm0_6 + xmm1_2
        float xmm2_3 = xmm2_1 * xmm0_6 + xmm1_2
        float xmm1_3 = arg2[3]
        int32_t var_38_2
        char const* const var_34_2
        
        if (xmm4_3 < xmm6_3 || xmm2_3 < xmm3_3)
            var_34_2 = "RectInflate"
            var_38_2 = 0xb3
        label_486f40:
            sub_44e4d0(eax_2, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 
                var_38_2, var_34_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        float xmm4_4 = xmm4_3 + (*(arg3 + 0x110) - 0f) * xmm1_3 + 0f
        float xmm2_4 = xmm2_3 + (*(arg3 + 0x114) - 0f) * xmm1_3 + 0f
        float xmm5_5 = (xmm5_1 - 0f) * xmm1_3 + 0f + xmm6_3
        float xmm3_13 = xmm3_3 + (xmm7_1 - 0f) * xmm1_3 + 0f
        
        if (xmm4_4 < xmm5_5 || xmm2_4 < xmm3_13)
            var_34_2 = "RectContains"
            var_38_2 = 0xa4
            goto label_486f40
        
        int32_t xmm1_4 = *arg4
        
        if (not(xmm1_4 f< xmm5_5))
            int32_t xmm0_7 = arg4[1]
            
            if (not(xmm0_7 f< xmm3_13) && not(xmm4_4 f< xmm1_4) && not(xmm2_4 f< xmm0_7))
                result.b = 1
                return result
    
    result.b = 0
    return result
}
