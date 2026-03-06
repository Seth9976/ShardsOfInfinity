// 函数名称: sub_4eed70
// 虚拟地址: 0x4eed70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4eed70(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int128_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t eax = arg3[3]
    int32_t eax = arg3[3]
    int32_t esi = arg3[1]
    int32_t var_8 = eax
    int32_t var_20
    char const* const var_1c
    int32_t ecx
    char* ecx_1
    int32_t edx
    
    if (eax s< esi)
        ecx = eax
        eax = ecx * 0x1c
        
        while (true)
            if (ecx s< 0 || ecx s>= esi)
            label_4eee40:
                var_1c = "XArray<struct AtlasFontLayerItem>::operator []"
                var_20 = 0xb5
                ecx_1 = "index >= 0 && index < mSize"
                goto label_4eeec7
            
            edx = *arg3
            
            if (*(eax + edx) == arg2)
                esi = arg3[1]
                
                if (*(eax + edx + 4) == arg4)
                label_4eee25:
                    int32_t eax_4 = ecx * 7
                    int32_t eax_5 = *(edx + (eax_4 << 2) + 0x18)
                    *arg5 = *(edx + (eax_4 << 2) + 8)
                    arg5[1].d = eax_5
                    return eax_5
            
            ecx += 1
            eax += 0x1c
            arg3[3] = ecx
            
            if (ecx s< esi)
                continue
            
            eax = var_8
            break
    
    arg3[3] = 0
    
    if (eax s> 0)
        ecx = 0
        eax = 0
        
        do
            if (ecx s< 0)
                goto label_4eee40
            
            if (ecx s>= esi)
                goto label_4eee40
            
            edx = *arg3
            
            if (*(eax + edx) == arg2)
                esi = arg3[1]
                
                if (*(eax + edx + 4) == arg4)
                    goto label_4eee25
            
            ecx += 1
            eax += 0x1c
            arg3[3] = ecx
        while (ecx s< var_8)
    
    char const* const var_24
    
    if (arg2[1] == 0x12)
        int32_t* ecx_6 = *(*(sub_4459f0(arg2) + 0x18) + arg4 * 0x1c)
        eax = arg3[1]
        
        if (eax s< arg3[2])
            arg3[1] = eax + 1
            int32_t edx_2 = (eax + 1) * 7
            int32_t eax_9 = *arg3
            *(eax_9 + (edx_2 << 2) - 0x18) = arg4
            void* esi_4 = eax_9 + (edx_2 << 2)
            *(eax_9 + (edx_2 << 2) - 0x1c) = arg2
            sub_4ed3c0(eax_9, esi_4 - 0x14, ecx_6, arg6)
            arg3[3] = arg3[1] - 1
            int32_t eax_12 = *(esi_4 - 4)
            *arg5 = *(esi_4 - 0x14)
            arg5[1].d = eax_12
            return eax_12
        
        var_1c = "XArray<struct AtlasFontLayerItem>::Alloc"
        var_20 = 0xa1
        ecx_1 = "mSize < mSizeReserved"
    label_4eeec7:
        var_24 = "c:\ax2017\engine\xarray.h"
    else
        var_1c = "FontGetDef"
        var_20 = 0x2e0
        var_24 = "c:\ax2017\engine\assetutils.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_FONT"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_24, var_20, var_1c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
