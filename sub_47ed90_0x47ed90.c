// 函数名称: sub_47ed90
// 虚拟地址: 0x47ed90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_47ed90(int32_t arg1, int32_t* arg2, int128_t* arg3, int32_t* arg4, float arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t xmm1 = (zx.o(0)).d
    int32_t xmm1 = (zx.o(0)).d
    int128_t xmm0 = *arg3
    int32_t xmm7 = (zx.o(0)).d
    int32_t var_c = 0
    *arg6 = *arg2
    arg6[1] = arg2[1]
    arg6[2] = arg2[2]
    arg6[3] = arg2[3]
    arg6[4] = arg2[4]
    arg6[5] = arg2[5]
    arg6[6] = arg2[6]
    arg6[7] = arg2[7]
    int128_t* result = arg5
    char ebx = (arg4[4]).b
    *result = xmm0
    arg5 = 1f
    float var_8 = 1f
    
    if ((ebx & 1) == 0)
    label_47ee30:
        
        if ((ebx & 2) == 0)
        label_47ee63:
            
            if ((ebx & 4) == 0)
            label_47ee9e:
                
                if ((ebx & 8) == 0)
                label_47eed9:
                    float xmm5_1 = *arg2
                    float xmm4_3 = arg2[1]
                    float xmm1_8 = (arg2[3] f- xmm4_3) f* xmm7 + xmm4_3 + (arg2[5] f- xmm4_3) f* xmm1
                        + xmm4_3 - xmm4_3
                    *arg6 = (arg2[2] f- xmm5_1) f* xmm7 + xmm5_1 + (arg2[4] f- xmm5_1) f* xmm1 + xmm5_1
                        - xmm5_1
                    arg6[1] = xmm1_8
                    float xmm6_1 = arg2[2]
                    float xmm5_2 = arg2[3]
                    float xmm3_15 = (xmm6_1 f- *arg2) * arg5 f+ *arg2 + (arg2[6] f- xmm6_1) f* var_c
                        + xmm6_1 - xmm6_1
                    arg6[3] = (xmm5_2 f- arg2[1]) * arg5 f+ arg2[1] + (arg2[7] f- xmm5_2) f* var_c
                        + xmm5_2 - xmm5_2
                    arg6[2] = xmm3_15
                    float xmm5_3 = arg2[4]
                    float xmm4_8 = arg2[5]
                    float xmm0_18 = (arg2[7] f- xmm4_8) f* xmm7 + xmm4_8
                        + (xmm4_8 f- arg2[1]) * var_8 f+ arg2[1] - xmm4_8
                    arg6[4] = (arg2[6] f- xmm5_3) f* xmm7 + xmm5_3 + (xmm5_3 f- *arg2) * var_8 f+ *arg2
                        - xmm5_3
                    arg6[5] = xmm0_18
                    float xmm6_2 = arg2[6]
                    float xmm5_4 = arg2[7]
                    bool cond:0_1 = *result f> *(result + 8)
                    float xmm1_24 = (xmm5_4 f- arg2[5]) * arg5 f+ arg2[5]
                        + (xmm5_4 f- arg2[3]) * var_8 f+ arg2[3] - xmm5_4
                    arg6[6] = (xmm6_2 f- arg2[4]) * arg5 f+ arg2[4]
                        + (xmm6_2 f- arg2[2]) * var_8 f+ arg2[2] - xmm6_2
                    arg6[7] = xmm1_24
                    
                    if (not(cond:0_1) && not(*(result + 4) f> *(result + 0xc)))
                        result.b = 1
                        return result
                else
                    float xmm4_2 = *(arg3 + 4)
                    float xmm3_5 = arg4[3]
                    
                    if (not(xmm4_2 > xmm3_5))
                        float xmm2_6 = *(arg3 + 0xc)
                        
                        if (not(xmm2_6 <= xmm3_5))
                            *(result + 0xc) = xmm3_5
                            var_8 = (xmm3_5 - xmm4_2) / (xmm2_6 - xmm4_2)
                        
                        goto label_47eed9
            else
                float xmm2_4 = *(arg3 + 0xc)
                float xmm0_5 = arg4[1]
                
                if (not(xmm0_5 > xmm2_4))
                    float xmm3_4 = *(arg3 + 4)
                    
                    if (not(xmm0_5 <= xmm3_4))
                        *(result + 4) = xmm0_5
                        xmm1 = (xmm0_5 - xmm3_4) / (xmm2_4 - xmm3_4)
                        var_c = xmm1
                    
                    goto label_47ee9e
        else
            float xmm2_2 = *(arg3 + 8)
            float xmm0_4 = *arg4
            
            if (not(xmm0_4 > xmm2_2))
                float xmm3_3 = *arg3
                
                if (not(xmm0_4 <= xmm3_3))
                    *result = xmm0_4
                    xmm7 = (xmm0_4 - xmm3_3) / (xmm2_2 - xmm3_3)
                
                goto label_47ee63
    else
        float xmm4_1 = *arg3
        float xmm2_1 = arg4[2]
        
        if (not(xmm4_1 > xmm2_1))
            float xmm3_1 = *(arg3 + 8)
            
            if (not(xmm3_1 <= xmm2_1))
                *(result + 8) = xmm2_1
                arg5 = (xmm2_1 - xmm4_1) / (xmm3_1 - xmm4_1)
            
            goto label_47ee30
    
    result.b = 0
    return result
}
