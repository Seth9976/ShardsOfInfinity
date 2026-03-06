// 函数名称: sub_4c6310
// 虚拟地址: 0x4c6310
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4c6310(int32_t arg1, int32_t* arg2, int32_t* arg3, float arg4 @ xmm2, float arg5 @ xmm3, float arg6, float arg7, int32_t* arg8, char arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float eax_3
    float edx
    eax_3, edx = sub_432570(arg3)
    float var_4c = sub_453f10(eax_3 * 0.5f)
    float xmm2 = sub_453f10(edx * 0.5f)
    float xmm6_1 = xmm2 - 1f
    float var_50_1 = var_4c - 1f
    
    if (not(var_4c + var_4c <= arg6))
        float xmm0_9 = sub_453f10(arg6 * 0.5f)
        var_4c = xmm0_9
        var_50_1 = xmm0_9
    
    float xmm1_3 = arg7
    
    if (not(xmm2 + xmm2 <= xmm1_3))
        float xmm0_14 = sub_453f10(xmm1_3 * 0.5f)
        xmm1_3 = arg7
        xmm2 = xmm0_14
        xmm6_1 = xmm2
    
    int32_t i = 0
    float var_18 = arg4
    int32_t var_38 = 0
    float xmm4_3 = arg4 + arg6
    float var_34 = var_4c
    int32_t var_48 = 0
    float var_44 = xmm2
    float var_14 = var_4c + arg4
    float var_c = xmm4_3
    float var_28 = arg5
    float var_10 = xmm4_3 - var_50_1
    float xmm4_5 = arg5 + xmm1_3
    float var_2c = eax_3
    float var_24 = xmm2 + arg5
    float var_1c = xmm4_5
    float var_20 = xmm4_5 - xmm6_1
    float var_3c = edx
    float var_30 = eax_3 - var_50_1
    float var_40 = edx - xmm6_1
    char result
    
    do
        result = arg9
        
        for (int32_t j = 0; j s< 3; j += 1)
            if (result != 0 || i != 1 || j != i)
                float xmm6_2 = (&var_18)[i]
                float xmm1_6 = (&var_14)[i]
                
                if (not(xmm6_2 >= xmm1_6))
                    float xmm7_1 = (&var_28)[j]
                    float xmm3_3 = (&var_24)[j]
                    
                    if (not(xmm7_1 >= xmm3_3))
                        float xmm5_1 = (&var_38)[i]
                        float xmm4_6 = (&var_48)[j]
                        float xmm2_1 = (&var_34)[i]
                        float xmm0_27 = (&var_44)[j]
                        float var_94 = xmm6_2
                        float var_90_1 = xmm7_1
                        float var_8c_1 = xmm1_6
                        float var_88_1 = xmm3_3
                        float var_50_2 = xmm2_1
                        float var_4c_1 = xmm0_27
                        
                        if (i == 1)
                            float xmm1_7 = xmm1_6 - xmm6_2
                            xmm0_27 = var_4c_1
                            
                            if (not(xmm2_1 - xmm5_1 <= xmm1_7))
                                var_50_2 = xmm1_7 + xmm5_1
                        
                        if (j == 1)
                            float xmm3_4 = xmm3_3 - xmm7_1
                            
                            if (not(xmm0_27 - xmm4_6 <= xmm3_4))
                                var_4c_1 = xmm3_4 + xmm4_6
                        
                        float eax_4
                        int32_t ecx_3
                        float edx_1
                        eax_4, ecx_3, edx_1 = sub_432570(arg3)
                        int32_t var_a8_1 = ecx_3
                        float var_80_1 = xmm4_6 / edx_1
                        float var_84 = xmm5_1 / eax_4
                        float var_7c_1 = var_50_2 / eax_4
                        float var_78_1 = var_4c_1 / edx_1
                        sub_47db90(&var_94, arg2, arg3, &var_94, &var_84, arg8)
                        result = arg9
        
        i += 1
    while (i s< 3)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
