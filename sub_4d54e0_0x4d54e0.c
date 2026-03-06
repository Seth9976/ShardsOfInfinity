// 函数名称: sub_4d54e0
// 虚拟地址: 0x4d54e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4d54e0(int32_t arg1, float* arg2, float* arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm2 = arg7
    float xmm4 = arg9
    float xmm1 = arg5
    float xmm0 = arg6
    float var_10 = xmm1
    int32_t ecx = 0
    float var_c = xmm0
    float var_14 = xmm2
    
    if (not(xmm4 <= xmm2))
        ecx = 1
    else if (xmm1 > xmm4)
        ecx = 2
    
    float xmm3 = arg8
    
    if (not(xmm3 <= xmm0))
        ecx |= 4
    else if (not(arg4 <= xmm3))
        ecx |= 8
    
    float xmm6 = arg11
    int32_t edx = 0
    
    if (not(xmm6 <= xmm2))
        edx = 1
    else if (xmm1 > xmm6)
        edx = 2
    
    float xmm5 = arg10
    
    if (not(xmm5 <= xmm0))
        edx |= 4
    else if (not(arg4 <= xmm5))
        edx |= 8
    
    int32_t result
    
    while (true)
        result = edx | ecx
        
        if (result == 0)
            result.b = 1
            *arg3 = xmm3
            arg3[1] = xmm4
            *arg2 = xmm5
            arg2[1] = xmm6
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        if ((ecx & edx) != 0)
            break
        
        int32_t eax_3 = edx
        
        if (ecx != 0)
            eax_3 = ecx
        
        float xmm1_5
        
        if ((eax_3.b & 1) != 0)
            xmm1_5 = (xmm2 - xmm4) * (xmm5 - xmm3) / (xmm6 - xmm4) + xmm3
            xmm0 = var_c
        else if ((eax_3.b & 2) != 0)
            xmm2 = var_10
            xmm1_5 = (xmm1 - xmm4) * (xmm5 - xmm3) / (xmm6 - xmm4) + xmm3
            xmm0 = var_c
        else if ((eax_3.b & 4) == 0)
            xmm1_5 = arg4
            xmm2 = (arg4 - xmm3) * (xmm6 - xmm4) / (xmm5 - xmm3) + xmm4
            xmm0 = var_c
        else
            float xmm2_4 = (xmm0 - xmm3) * (xmm6 - xmm4) / (xmm5 - xmm3)
            xmm0 = var_c
            xmm2 = xmm2_4 + xmm4
            xmm1_5 = xmm0
        
        if (eax_3 != ecx)
            edx = 0
            xmm5 = xmm1_5
            xmm6 = xmm2
            
            if (xmm2 <= var_14)
                xmm0 = var_c
                
                if (var_10 > xmm2)
                    edx = 2
            else
                edx = 1
            
            if (xmm1_5 <= xmm0)
                if (not(arg4 <= xmm1_5))
                    edx |= 8
                
                xmm2 = var_14
                xmm1 = var_10
            else
                xmm2 = var_14
                edx |= 4
                xmm1 = var_10
        else
            ecx = 0
            xmm3 = xmm1_5
            xmm4 = xmm2
            
            if (xmm2 <= var_14)
                xmm0 = var_c
                
                if (var_10 > xmm2)
                    ecx = 2
            else
                ecx = 1
            
            if (xmm1_5 <= xmm0)
                if (not(arg4 <= xmm1_5))
                    ecx |= 8
                
                xmm2 = var_14
                xmm1 = var_10
            else
                xmm2 = var_14
                ecx |= 4
                xmm1 = var_10
    
    if (not(xmm0 < arg4) && not(xmm2 < xmm1))
        *arg3 = xmm0
        result.b = 1
        arg3[1] = xmm2
        *arg2 = arg4
        arg2[1] = xmm2
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return result
    
    sub_44e4d0(result, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x12d, 
        "RectBottomRight")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
