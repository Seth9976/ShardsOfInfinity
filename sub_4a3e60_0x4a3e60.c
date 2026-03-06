// 函数名称: sub_4a3e60
// 虚拟地址: 0x4a3e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4a3e60(int32_t arg1, int32_t arg2, HWND arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(arg3, &rect)
    RECT rect_1
    GetWindowRect(arg3, &rect_1)
    int32_t eax_4 = rect_1.bottom - rect.bottom - rect_1.top
    int32_t edx_2 = rect_1.right - rect.right - rect_1.left
    int32_t esi_1 = arg4[2]
    void* eax_5 = data_65ae00
    int32_t ecx = *(eax_5 + 0x14)
    int32_t eax_6 = *(eax_5 + 0x18)
    int32_t ecx_1 = arg4[3]
    int32_t eax_9 = esi_1 - *arg4 - edx_2
    int32_t edx_5 = ecx_1 - arg4[1] - eax_4
    int32_t var_3c = eax_9
    int32_t var_34 = edx_5
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(ecx)) / _mm_cvtepi32_ps(zx.o(eax_6))
    
    if (arg2 == 1 || arg2 == 2)
    label_4a3f1a:
        float xmm1_5 = _mm_cvtepi32_ps(zx.o(eax_9)) / xmm2_2
        float xmm1_6
        
        if (0 f<= xmm1_5)
            xmm1_6 = xmm1_5 + 0.5f
        else
            xmm1_6 = xmm1_5 - 0.5f
        
        var_34 = int.d(xmm1_6)
    else
        float xmm1_2
        
        if (arg2 == 3 || arg2 == 6)
            xmm1_2 = _mm_cvtepi32_ps(zx.o(edx_5))
        else
            xmm1_2 = _mm_cvtepi32_ps(zx.o(edx_5))
            
            if (not(_mm_cvtepi32_ps(zx.o(eax_9)) / xmm1_2 > xmm2_2))
                goto label_4a3f1a
        
        float xmm1_8 = xmm1_2 * xmm2_2
        
        if (0 f<= xmm1_8)
            eax_9 = int.d(xmm1_8 + 0.5f)
            var_3c = eax_9
        else
            eax_9 = int.d(xmm1_8 - 0.5f)
            var_3c = eax_9
    
    int32_t eax_11
    int32_t edx_7
    edx_7:eax_11 = sx.q(eax_9 - ecx)
    int32_t eax_13 = (eax_11 ^ edx_7) - edx_7
    int32_t edx_8 = eax_6
    int32_t eax_14 = ecx
    
    if (eax_13 s>= 0xa)
        edx_8 = var_34
    
    if (eax_13 s>= 0xa)
        eax_14 = var_3c
    
    if (arg2 == 1 || arg2 == 7 || arg2 == 4)
        *arg4 = esi_1 - eax_14 - edx_2
    else
        arg4[2] = eax_14 + *arg4 + edx_2
    
    if (arg2 == 4 || arg2 == 3 || arg2 == 5)
        arg4[1] = ecx_1 - edx_8 - eax_4
    else
        arg4[3] = arg4[1] + edx_8 + eax_4
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
