// 函数名称: sub_47d1f0
// 虚拟地址: 0x47d1f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_47d1f0(int32_t arg1, int128_t* arg2, int32_t* arg3, float* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t result = data_cdf424
    int32_t result = data_cdf424
    
    if (*(result + 0x38) == 0)
        return sub_47cf90(result, arg2, arg3, arg4, arg5, arg6)
    
    int128_t* esi_1 = arg4
    char ecx = (*(result + 0x38)).b
    int128_t var_30 = *esi_1
    int128_t var_20 = *arg2
    float xmm3_5
    
    if ((ecx & 1) == 0)
    label_47d271:
        xmm3_5 = var_30:8.d
    label_47d277:
        float xmm4_6
        
        if ((ecx & 2) == 0)
        label_47d2c6:
            xmm4_6 = var_30.d
        label_47d2cc:
            float xmm5_6
            
            if ((ecx & 4) == 0)
            label_47d31e:
                xmm5_6 = var_30:4.d
            label_47d324:
                float xmm2_8
                
                if ((ecx & 8) == 0)
                label_47d372:
                    xmm2_8 = var_30:0xc.d
                label_47d378:
                    
                    if (not(xmm4_6 > xmm3_5) && not(xmm5_6 > xmm2_8))
                        return sub_47cf90(&var_30, &var_20, arg3, &var_30, arg5, arg6)
                else
                    float xmm7_1 = *(arg2 + 4)
                    float xmm6_2 = *(result + 0x34)
                    
                    if (not(xmm7_1 > xmm6_2))
                        float xmm0_15 = *(arg2 + 0xc)
                        
                        if (xmm0_15 <= xmm6_2)
                            goto label_47d372
                        
                        var_20:0xc.d = xmm6_2
                        xmm2_8 = (xmm6_2 - xmm7_1) / (xmm0_15 - xmm7_1)
                            * (*(esi_1 + 0xc) f- *(esi_1 + 4)) f+ *(esi_1 + 4)
                        var_30:0xc.d = xmm2_8
                        goto label_47d378
            else
                float xmm0_11 = *(arg2 + 0xc)
                float xmm2_3 = *(result + 0x2c)
                
                if (not(xmm2_3 > xmm0_11))
                    float xmm6_1 = *(arg2 + 4)
                    
                    if (xmm2_3 <= xmm6_1)
                        goto label_47d31e
                    
                    var_20:4.d = xmm2_3
                    xmm5_6 = (xmm2_3 - xmm6_1) / (xmm0_11 - xmm6_1)
                        * (*(esi_1 + 0xc) f- *(esi_1 + 4)) f+ *(esi_1 + 4)
                    var_30:4.d = xmm5_6
                    goto label_47d324
        else
            float xmm0_7 = *(arg2 + 8)
            float xmm2_2 = *(result + 0x28)
            
            if (not(xmm2_2 > xmm0_7))
                float xmm5_1 = *arg2
                
                if (xmm2_2 <= xmm5_1)
                    goto label_47d2c6
                
                var_20.d = xmm2_2
                xmm4_6 = (xmm2_2 - xmm5_1) / (xmm0_7 - xmm5_1) * (*(esi_1 + 8) f- *esi_1) f+ *esi_1
                var_30.d = xmm4_6
                goto label_47d2cc
    else
        float xmm4_1 = *arg2
        float xmm2_1 = *(result + 0x30)
        
        if (not(xmm4_1 > xmm2_1))
            float xmm0_3 = *(arg2 + 8)
            
            if (xmm0_3 <= xmm2_1)
                goto label_47d271
            
            var_20:8.d = xmm2_1
            xmm3_5 = (xmm2_1 - xmm4_1) / (xmm0_3 - xmm4_1) * (*(esi_1 + 8) f- *esi_1) f+ *esi_1
            var_30:8.d = xmm3_5
            goto label_47d277
    return result
}
