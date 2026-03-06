// 函数名称: sub_47bc00
// 虚拟地址: 0x47bc00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_47bc00(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm4 = *arg3
    float xmm1 = arg3[2]
    
    if (not(xmm1 < xmm4))
        float xmm5_1 = arg3[1]
        float xmm0_1 = arg3[3]
        
        if (not(xmm0_1 < xmm5_1))
            float xmm3_1
            
            if (0f <= xmm4)
                xmm3_1 = xmm4 + 0.5f
            else
                xmm3_1 = xmm4 - 0.5f
            
            float xmm7_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_1)))
            float xmm3_3
            
            if (0f <= xmm5_1)
                xmm3_3 = xmm5_1 + 0.5f
            else
                xmm3_3 = xmm5_1 - 0.5f
            
            float xmm1_1 = xmm1 - xmm4
            float xmm0_2 = xmm0_1 - xmm5_1
            float xmm3_5 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_3)))
            float xmm1_2
            
            if (0f <= xmm1_1)
                xmm1_2 = xmm1_1 + 0.5f
            else
                xmm1_2 = xmm1_1 - 0.5f
            
            float xmm1_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_2)))
            float xmm0_3
            
            if (0f <= xmm0_2)
                xmm0_3 = xmm0_2 + 0.5f
            else
                xmm0_3 = xmm0_2 - 0.5f
            
            float var_18 = xmm3_5
            float var_14 = xmm1_4 + xmm7_1
            float var_10 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_3))) + xmm3_5
            *arg4 = xmm7_1.o
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg4
    
    sub_44e4d0(eax_1, &data_5559b1, "RectIsNormalized(r)", "c:\ax2017\engine\rect.cpp", 0x127, 
        "RectTopLeft")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
