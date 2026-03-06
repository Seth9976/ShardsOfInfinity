// 函数名称: sub_4b9cc0
// 虚拟地址: 0x4b9cc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float __convention("regparm")sub_4b9cc0(int32_t arg1, int32_t arg2, void* arg3, float arg4 @ xmm1, float arg5 @ xmm2, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: void var_b8
    void var_b8
    int32_t eax_1 = __security_cookie ^ &var_b8
    int32_t* eax_3 = *(arg3 + 8)
    int32_t esi = 0
    float xmm2 = arg4
    float result = eax_3[1]
    int32_t var_78 = arg2
    float var_7c = xmm2
    float result_2 = result
    
    if (result s> 0)
        int32_t ecx = 0
        int32_t var_a4_1 = 0
        
        do
            result = eax_3[2] + ecx
            float result_1 = result
            
            if (*(result i+ 8) != 0xffffffff)
                if (arg7 != 0)
                    if (arg6 s<= 0)
                        sub_44e4d0(result, &data_5559b1, "maskCount > 0", 
                            "c:\ax2017\engine\animation.cpp", 0x20a, "BoneGetMaskWeight")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t eax_6 = 0
                    bool cond:0_1
                    
                    while (true)
                        if (*(arg2 + (eax_6 << 2)) == esi)
                            cond:0_1 = arg7 == 1
                            break
                        
                        eax_6 += 1
                        
                        if (eax_6 s>= arg6)
                            cond:0_1 = arg7 == 2
                            break
                    
                    result.b = cond:0_1
                else
                    result = 1
                
                float xmm0_2 = _mm_cvtepi32_ps(zx.o(result))
                xmm0_2 f- 0
                result:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
                    | (xmm0_2 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    float var_40
                    sub_4b95d0(&var_40, esi, eax_3, xmm2, &var_40)
                    float xmm0_4 = xmm0_2 * arg5
                    void* ecx_3 = *(result_1 i+ 8) * 0x2c + arg8
                    float xmm6_1 = *(ecx_3 + 0xc)
                    float xmm2_2 = var_40 * xmm0_4
                    float var_3c
                    float xmm3_2 = var_3c * xmm0_4
                    float var_38
                    float xmm4_2 = var_38 * xmm0_4
                    float var_34
                    float xmm5_2 = var_34 * xmm0_4
                    float xmm1_11 = *ecx_3
                    
                    if (not(0 f<= xmm1_11 * xmm2_2 + xmm6_1 * xmm5_2 + *(ecx_3 + 4) * xmm3_2
                            + *(ecx_3 + 8) * xmm4_2))
                        xmm2_2 = xmm2_2 * -1f
                        xmm3_2 = xmm3_2 * -1f
                        xmm4_2 = xmm4_2 * -1f
                        xmm5_2 = xmm5_2 * -1f
                    
                    arg2 = var_78
                    float var_64_1 = xmm6_1 + xmm5_2
                    float var_6c_1 = *(ecx_3 + 4) + xmm3_2
                    float var_68_1 = *(ecx_3 + 8) + xmm4_2
                    *ecx_3 = (xmm1_11 + xmm2_2).o
                    float var_28
                    float xmm0_21 = *(ecx_3 + 0x18) + var_28 * xmm0_4
                    float var_30
                    float var_2c
                    *(ecx_3 + 0x10) = _mm_unpacklo_ps(*(ecx_3 + 0x10) + var_30 * xmm0_4, 
                        *(ecx_3 + 0x14) + var_2c * xmm0_4)
                    xmm2 = var_7c
                    *(ecx_3 + 0x18) = xmm0_21
                    float var_1c
                    float xmm0_23 = *(ecx_3 + 0x24) + var_1c * xmm0_4
                    float var_24
                    float var_20
                    *(ecx_3 + 0x1c) = _mm_unpacklo_ps(var_24 * xmm0_4 f+ *(ecx_3 + 0x1c), 
                        *(ecx_3 + 0x20) + var_20 * xmm0_4)
                    *(ecx_3 + 0x24) = xmm0_23
                    char var_18
                    result.b = var_18
                    *(ecx_3 + 0x28) = result.b
                    ecx = var_a4_1
            
            esi += 1
            ecx += 0xc
            var_a4_1 = ecx
        while (esi s< result_2)
    
    @__security_check_cookie@4(eax_1 ^ &var_b8)
    return result
}
