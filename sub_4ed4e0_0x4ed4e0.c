// 函数名称: sub_4ed4e0
// 虚拟地址: 0x4ed4e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4ed4e0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t eax = sub_4dd620(arg4[4])
    int32_t eax = sub_4dd620(arg4[4])
    int32_t eax_1 = arg4[4]
    int32_t edi_2 = arg3[1] * arg4[3] + *arg3 * eax
    
    if (eax_1 != *(arg5 + 0x30))
        sub_44e4d0(eax_1, &data_5559b1, "fontImageSpec->format == atlasMakingData->mTexureFormat", 
            "c:\ax2017\engine\editor\atlasmaker.cpp", 0x2d1, "AtlasMakerPlaceImage_New")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edx = *arg2
    int32_t ecx_4 = arg2[1]
    int32_t var_1c = arg2[2] - edx
    int32_t eax_5 = arg2[3] - ecx_4
    int32_t var_c = edx
    int32_t var_18 = eax_5
    int32_t var_8_1 = ecx_4
    int32_t var_20 = *arg4 + edi_2
    int32_t var_14 = arg4[3]
    int32_t eax_9 = arg4[4]
    int32_t var_10 = eax_9
    return sub_4eccc0(eax_9, &var_c, &var_20, arg5)
}
