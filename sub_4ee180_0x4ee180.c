// 函数名称: sub_4ee180
// 虚拟地址: 0x4ee180
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4ee180(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: if (arg3[1] != 0x12)
    if (arg3[1] != 0x12)
        sub_44e4d0(arg1, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FONT", 
            "c:\ax2017\engine\assetutils.cpp", 0x2e0, "FontGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_4c = arg2
    int32_t eax_1 = *(sub_4459f0(arg3) + 0x18)
    int64_t var_2c
    __builtin_memset(&var_2c, 0, 0x1c)
    void* edx = eax_1 + arg2 * 0x1c
    void* var_50 = edx
    int32_t ecx_2 = arg5 * 9
    int32_t eax_3 = *(edx + 0x14)
    float xmm0 = *(eax_3 + (ecx_2 << 2) + 0x10)
    void* ecx_3 = eax_3 + (ecx_2 << 2)
    float xmm0_1
    
    if (0f <= xmm0)
        xmm0_1 = xmm0 + 0.5f
    else
        xmm0_1 = xmm0 - 0.5f
    
    float xmm0_2 = *(ecx_3 + 0xc)
    float xmm0_3
    
    if (0f <= xmm0_2)
        xmm0_3 = xmm0_2 + 0.5f
    else
        xmm0_3 = xmm0_2 - 0.5f
    
    float xmm0_4 = *(ecx_3 + 8)
    float xmm0_5
    
    if (0f <= xmm0_4)
        xmm0_5 = xmm0_4 + 0.5f
    else
        xmm0_5 = xmm0_4 - 0.5f
    
    float xmm0_6 = *(ecx_3 + 4)
    float xmm0_7
    
    if (0 f<= xmm0_6)
        xmm0_7 = xmm0_6 + 0.5f
    else
        xmm0_7 = xmm0_6 - 0.5f
    
    int32_t var_6c = int.d(xmm0_5)
    int32_t var_70 = int.d(xmm0_7)
    int32_t var_68 = int.d(xmm0_3)
    int32_t var_64 = int.d(xmm0_1)
    int128_t xmm0_8 = var_70.o
    float xmm0_9 = *(ecx_3 + 0x14)
    float xmm0_10
    
    if (0 f<= xmm0_9)
        xmm0_10 = xmm0_9 + 0.5f
    else
        xmm0_10 = xmm0_9 - 0.5f
    
    float xmm0_11 = *(ecx_3 + 0x18)
    float xmm0_12
    
    if (0f <= xmm0_11)
        xmm0_12 = xmm0_11 + 0.5f
    else
        xmm0_12 = xmm0_11 - 0.5f
    
    sub_4eed70(&var_70, arg3, arg6, arg2, &var_70, 1)
    sub_4ed6f0(&var_50)
    var_70 = _mm_cvtepi32_ps(zx.o(xmm0_8.d))
    int32_t var_6c_1 = _mm_cvtepi32_ps(zx.o(xmm0_8:4.d))
    int32_t var_68_1 = _mm_cvtepi32_ps(zx.o(xmm0_8:8.d))
    int32_t var_64_1 = _mm_cvtepi32_ps(zx.o(xmm0_8:0xc.d))
    *(ecx_3 + 4) = var_70.o
    *(ecx_3 + 0x14) = _mm_cvtepi32_ps(zx.o(int.d(xmm0_10)))
    *(ecx_3 + 0x18) = _mm_cvtepi32_ps(zx.o(int.d(xmm0_12)))
    *arg4 = xmm0_8
    return arg4
}
