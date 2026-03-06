// 函数名称: sub_4c3330
// 虚拟地址: 0x4c3330
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4c3330(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: void* eax_3 = arg4 * 0x30 + *arg2
    void* eax_3 = arg4 * 0x30 + *arg2
    
    if (arg5 == 4)
        return *(eax_3 + 0x20)
    
    if (arg5 == 5)
        return *(eax_3 + 0x24)
    
    int32_t var_14
    char const* const var_10
    char* ecx_1
    
    if (arg5 != 6)
        if (arg5 == 7)
            return *(eax_3 + 0x2c)
        
        var_10 = "FlanimCompressGetInt"
        var_14 = 0x583
        ecx_1 = "Halt"
    else
        int32_t esi_1 = *(eax_3 + 0x28)
        eax_3 = nullptr
        void* edx_1 = *(arg3 + 0x24)
        
        if (edx_1 s> 0)
            int32_t* ecx = *(arg3 + 0x20)
            
            do
                if (*ecx == esi_1)
                    return eax_3
                
                eax_3 += 1
                ecx = &ecx[1]
            while (eax_3 s< edx_1)
        
        if (edx_1 s< 0xc8)
            *(*(arg3 + 0x20) + (edx_1 << 2)) = esi_1
            *(arg3 + 0x24) += 1
            return edx_1
        
        var_10 = "FlanimGetOrAddImage"
        var_14 = 0x564
        ecx_1 = "pFlanimDef->mImageCount < MAX_IMAGES_IN_FLANIM"
    
    sub_44e4d0(eax_3, &data_5559b1, ecx_1, "c:\ax2017\engine\flanim.cpp", var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
