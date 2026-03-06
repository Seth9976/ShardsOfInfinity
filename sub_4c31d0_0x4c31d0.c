// 函数名称: sub_4c31d0
// 虚拟地址: 0x4c31d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4c31d0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void var_10
    void var_10
    int32_t eax_1 = sub_4c1f90(&var_10, arg3[4], arg3[3], arg3[1], &var_10)
    
    if (*(arg3 + 0x8d) != 0)
        int32_t var_8_1 = 0
    
    int32_t* ecx_1 = *arg3
    
    if (ecx_1[1] != 0x18)
        sub_44e4d0(eax_1, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FLANIM", 
            "c:\ax2017\engine\assetutils.cpp", 0x2e6, "FlanimGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_2 = sub_4459f0(ecx_1)
    sub_4c3020(eax_2, arg2, eax_2, &var_10, arg4)
    int32_t result = arg3[0x1d]
    
    if (result s<= 0 && arg3[0x23].b == 0)
        return result
    
    float* edx_4 = arg2 * 0x60 + arg3[0x1a]
    
    if (arg3[0x23].b == 0)
        return sub_4c3190(arg4, edx_4, 
            _mm_cvtepi32_ps(zx.o(result)) / _mm_cvtepi32_ps(zx.o(arg3[0x1c])))
    
    return sub_4c3190(arg4, edx_4, 1f)
}
