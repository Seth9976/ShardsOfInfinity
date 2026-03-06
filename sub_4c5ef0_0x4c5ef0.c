// 函数名称: sub_4c5ef0
// 虚拟地址: 0x4c5ef0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4c5ef0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    float xmm6 = *arg3
    int32_t eax = 0
    
    if (not(xmm6 f<= arg2[3]))
        eax = 1
    else if (*arg2 f> xmm6)
        eax = 2
    
    float xmm5 = arg3[1]
    float xmm7 = arg2[4]
    
    if (not(xmm5 <= xmm7))
        eax |= 4
    else if (not(arg2[1] f<= xmm5))
        eax |= 8
    
    float xmm4 = arg3[2]
    float xmm1 = arg2[5]
    
    if (not(xmm4 <= xmm1))
        eax |= 0x20
    else if (not(arg2[2] f<= xmm4))
        eax |= 0x10
    
    if (eax == 0)
        *arg4 = 0
        int32_t* eax_1
        eax_1.b = 1
        return eax_1
    
    int32_t ebx
    ebx.b = 0
    
    if ((eax.b & 3) != 0)
        float xmm3_1 = arg3[3]
        
        if (not(sub_41b760(xmm3_1) f<= 9.99999975e-06f))
            float xmm2_1
            
            if ((eax.b & 1) == 0)
                xmm2_1 = *arg2
            else
                xmm2_1 = arg2[3]
            
            float xmm2_2 = xmm2_1 - xmm6
            float xmm0_9 = arg3[4] f* xmm2_2 / xmm3_1 + xmm5
            
            if (not(xmm7 < xmm0_9) && not(xmm0_9 f< arg2[1]))
                float xmm0_13 = arg3[5] f* xmm2_2 / xmm3_1 + xmm4
                
                if (not(xmm1 < xmm0_13) && not(xmm0_13 f< arg2[2]))
                    float xmm2_3 = xmm2_2 / xmm3_1
                    
                    if (not(xmm2_3 f< 0))
                        *arg4 = xmm2_3
                        ebx.b = 1
    
    if ((eax.b & 0xc) != 0)
        float xmm3_2 = arg3[4]
        
        if (not(sub_41b760(xmm3_2) f<= 9.99999975e-06f))
            float xmm2_4
            
            if ((eax.b & 4) == 0)
                xmm2_4 = arg2[1]
            else
                xmm2_4 = xmm7
            
            float xmm2_5 = xmm2_4 - xmm5
            float xmm0_19 = arg3[3] f* xmm2_5 / xmm3_2 + xmm6
            xmm7 = arg2[4]
            
            if (not(arg2[3] f< xmm0_19) && not(xmm0_19 f< *arg2))
                float xmm0_23 = arg3[5] f* xmm2_5 / xmm3_2 + xmm4
                
                if (not(xmm1 < xmm0_23) && not(xmm0_23 f< arg2[2]))
                    float xmm2_6 = xmm2_5 / xmm3_2
                    
                    if (not(xmm2_6 f< 0) && (ebx.b == 0 || not(*arg4 f<= xmm2_6)))
                        *arg4 = xmm2_6
                        ebx.b = 1
    
    if ((eax.b & 0x30) != 0)
        float xmm2_7 = arg3[5]
        
        if (not(sub_41b760(xmm2_7) f<= 9.99999975e-06f))
            if ((eax.b & 0x20) == 0)
                xmm1 = arg2[2]
            
            float xmm1_1 = xmm1 - xmm4
            float xmm0_30 = arg3[3] f* xmm1_1 / xmm2_7 + xmm6
            
            if (not(arg2[3] f< xmm0_30) && not(xmm0_30 f< *arg2))
                float xmm0_34 = arg3[4] f* xmm1_1 / xmm2_7 + xmm5
                
                if (not(xmm7 < xmm0_34) && not(xmm0_34 f< arg2[1]))
                    float xmm1_2 = xmm1_1 / xmm2_7
                    
                    if (not(xmm1_2 f< 0) && (ebx.b == 0 || not(*arg4 f<= xmm1_2)))
                        *arg4 = xmm1_2
                        ebx.b = 1
    
    eax.b = ebx.b
    return eax
}
