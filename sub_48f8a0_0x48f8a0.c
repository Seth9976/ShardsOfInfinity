// 函数名称: sub_48f8a0
// 虚拟地址: 0x48f8a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_48f8a0(int32_t arg1, float* arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    
    if (arg3[1] != 3)
        sub_44e4d0(arg1, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
            "c:\ax2017\engine\texture.h", 0x84, "TextureGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* edi = *sub_4459f0(arg3)
    
    if (edi != 0)
        int32_t* ecx = edi[9]
        
        if (ecx != 0)
            char const* const var_1c_1
            
            if (edi[0xa] != 1)
                int32_t* ecx_5 = *sub_454030(ecx)
                
                if (edi[0xa] == ecx_5[0xa])
                    int32_t eax_6 = *ecx_5
                    float xmm2 = float.s(edi[0xc])
                    float xmm4 = float.s(edi[0xb])
                    int32_t eax_8 = ecx_5[1]
                    float xmm3 = _mm_cvtpd_ps(float.d(eax_6) f+ *((eax_6 u>> 0x1f << 3) + &data_59e4f0))
                    float xmm7_1 = xmm4 / xmm3
                    int32_t eax_10 = edi[1]
                    float xmm1 = _mm_cvtpd_ps(float.d(eax_8) f+ *((eax_8 u>> 0x1f << 3) + &data_59e4f0))
                    float xmm6_1 = xmm2 / xmm1
                    int32_t eax_12 = *edi
                    float xmm5_3 = (
                        _mm_cvtpd_ps(float.d(eax_10) f+ *((eax_10 u>> 0x1f << 3) + &data_59e4f0))
                        + xmm2) / xmm1 - xmm6_1
                    float xmm1_4 = (
                        _mm_cvtpd_ps(float.d(eax_12) f+ *((eax_12 u>> 0x1f << 3) + &data_59e4f0))
                        + xmm4) / xmm3 - xmm7_1
                    *arg4 = xmm1_4 * *arg2 + xmm7_1
                    arg4[1] = arg2[1] * xmm5_3 + xmm6_1
                    arg4[2] = arg2[2] * xmm1_4 + xmm7_1
                    arg4[3] = arg2[3] * xmm5_3 + xmm6_1
                    arg4[4] = arg2[4] * xmm1_4 + xmm7_1
                    arg4[5] = arg2[5] * xmm5_3 + xmm6_1
                    arg4[6] = arg2[6] * xmm1_4 + xmm7_1
                    arg4[7] = arg2[7] * xmm5_3 + xmm6_1
                    float* eax_14
                    eax_14.b = 1
                    return eax_14
                
                char* eax_5 = arg3[8]
                char* const ecx_6 = &data_5559b1
                
                if (eax_5 != 0)
                    ecx_6 = eax_5
                
                char* const var_18_2 = ecx_6
                var_1c_1 = "didn't find asset in atlas forcing a reimport %s"
            else
                char* eax_1 = arg3[8]
                char* const ecx_1 = &data_5559b1
                
                if (eax_1 != 0)
                    ecx_1 = eax_1
                
                char* const var_18_1 = ecx_1
                var_1c_1 = "reimporting atlased font texture %s"
            
            sub_44e260(var_1c_1)
            sub_48da50(sub_48d180(arg3), 1, arg3, 0)
    
    int32_t* eax
    eax.b = 0
    return eax
}
