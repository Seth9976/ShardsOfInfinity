// 函数名称: sub_4674f0
// 虚拟地址: 0x4674f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4674f0(void* arg1)
{
    // 第一条实际指令: float xmm1 = *(arg1 + 0x750)
    float xmm1 = *(arg1 + 0x750)
    xmm1 f- 0
    int32_t* result
    result:1.b =
        (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        int32_t var_44_1
        char const* const ecx
        
        if (not(xmm1 f>= 0))
            char const* const var_40 = "UI2DrawText"
            var_44_1 = 0x1541
            ecx = "el.worldAlpha >= 0.0f"
        label_4676a8:
            sub_44e4d0(result, &data_5559b1, ecx, "c:\ax2017\engine\ui2.cpp", var_44_1, "UI2DrawText")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (1f < xmm1)
            char const* const var_40_1 = "UI2DrawText"
            var_44_1 = 0x1542
            ecx = "el.worldAlpha <= 1.0f"
            goto label_4676a8
        
        int32_t edx_1 = *(arg1 + 0x63c) * 0x208
        float xmm4_1 = *(arg1 + 0x6e8)
        float xmm3_2 = *(edx_1 + arg1 + 0x1c8) * xmm4_1
        xmm3_2 f- 0
        result:1.b = (xmm3_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_2, 0f) ? 1 : 0) << 2
            | (xmm3_2 < 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            char* edi_1 = *(edx_1 + arg1 + 0x214)
            
            if (edi_1 != 0 && *edi_1 != 0)
                int32_t var_10 = sub_485680(arg1 + 0x1b8 + edx_1, xmm1)
                int32_t* ecx_4 = arg1 + 0x1bc + edx_1
                int32_t eax_1 = sub_485680(ecx_4, xmm1)
                bool cond:0_1 = *(edx_1 + arg1 + 0x1cc) != 1
                float xmm1_1 = *(edx_1 + arg1 + 0x1b4)
                float xmm2_1 = *(arg1 + 0x6cc)
                float xmm5_1 = *(arg1 + 0x6d0)
                float xmm7_1 = *(arg1 + 0x6d4)
                float xmm6_1 = *(arg1 + 0x6d8)
                float xmm0_2 = *(edx_1 + arg1 + 0x1b0) * xmm4_1
                int32_t var_8 = eax_1
                float xmm1_2 = xmm1_1 * xmm4_1
                float xmm2_2 = xmm2_1 + xmm0_2
                float xmm7_2 = xmm7_1 + xmm0_2
                float xmm5_2 = xmm5_1 + xmm1_2
                float xmm6_2 = xmm6_1 + xmm1_2
                float var_30 = xmm2_2
                float var_28_1 = xmm7_2
                float var_2c_1 = xmm5_2
                float var_24_1 = xmm6_2
                
                if (not(cond:0_1))
                    float xmm1_4 = *(edx_1 + arg1 + 0x1d0) * xmm4_1
                    float xmm0_4 = *(edx_1 + arg1 + 0x1d4) * xmm4_1
                    int32_t* var_44_2 = ecx_4
                    float var_20 = xmm2_2 + xmm1_4
                    float var_1c_1 = xmm5_2 + xmm0_4
                    float var_18_1 = xmm1_4 + xmm7_2
                    float var_14_1 = xmm6_2 + xmm0_4
                    ecx_4 = sub_467180(&var_8, &var_20, edi_1, arg1, &var_8, &var_8, xmm3_2, 1)
                
                int32_t* var_44_4 = ecx_4
                return sub_467180(&var_10, &var_30, edi_1, arg1, &var_10, &var_8, xmm3_2, 0)
    
    return result
}
