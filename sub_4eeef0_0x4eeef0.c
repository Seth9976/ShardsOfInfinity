// 函数名称: sub_4eeef0
// 虚拟地址: 0x4eeef0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4eeef0(int32_t arg1, void* arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: void* edi = arg3
    void* edi = arg3
    int32_t* ecx = arg4
    int32_t esi = *(arg2 + 4)
    void* var_84 = edi
    void* eax_1 = ecx[1]
    char const* const var_9c_1
    int32_t var_98_1
    char const* const var_94_1
    char const* const ecx_1
    
    if (esi != eax_1)
        var_94_1 = "AtlasMakerPlaceRects"
        var_98_1 = 0x4f6
        var_9c_1 = "c:\ax2017\engine\editor\atlasmaker.cpp"
        ecx_1 = "packAssets.mSize == locs.mSize"
    else if (eax_1 s> 0)
        int32_t edx = 0
        int32_t var_74_1 = 0
        int128_t var_60_1 = *(*ecx + 4)
        
        if (esi s<= 0)
        label_4ef291:
            int32_t* esi_4 = arg6
            int32_t ecx_22 = 0
            int32_t var_74_2 = 0
            int32_t edx_16 = esi_4[1]
            
            if (edx_16 s<= 0)
            label_4ef327:
                esi_4[1] = 0
                esi_4[3] = 0
                return var_60_1:8.d
            
            eax_1 = nullptr
            void* var_78_3 = nullptr
            
            while (true)
                if (eax_1 s< 0 || ecx_22 s>= edx_16)
                    var_94_1 = "XArray<struct AtlasFontLayerItem>::operator []"
                    var_98_1 = 0xb5
                    goto label_4ef345
                
                void* esi_6 = *esi_4 + eax_1
                int32_t* ecx_23 = *esi_6
                
                if (ecx_23[1] != 0x12)
                    break
                
                void* ecx_25 = *(sub_4459f0(ecx_23) + 0x18) + *(esi_6 + 4) * 0x1c
                
                if (ecx_25 != 0)
                    *(ecx_25 + 4) = *(edi + 0x44)
                    *(ecx_25 + 8) = *(edi + 0x48)
                
                int32_t eax_31 = *(esi_6 + 8)
                
                if (eax_31 != 0)
                    _aligned_free_base(eax_31)
                
                sub_484240(*esi_6)
                esi_4 = arg6
                ecx_22 = var_74_2 + 1
                eax_1 = var_78_3 + 0x1c
                var_74_2 = ecx_22
                edx_16 = esi_4[1]
                var_78_3 = eax_1
                
                if (ecx_22 s>= edx_16)
                    goto label_4ef327
                
                continue
        else
            eax_1 = arg2
            int32_t edi_1 = 0
            int32_t var_7c_1 = 0
            
            while (true)
                if (edi_1 s< 0 || edx s>= ecx[1])
                    var_94_1 = "XArray<struct PackLoc>::operator []"
                    var_98_1 = 0xc3
                else
                    int32_t* edx_2 = *ecx + edi_1
                    
                    if (edx_2[5] != arg5)
                    label_4ef1d9:
                        edi = var_84
                    label_4ef1e1:
                        var_7c_1 += 0x18
                        edx = var_74_1 + 1
                        esi = *(eax_1 + 4)
                        var_74_1 = edx
                        
                        if (edx s>= esi)
                            goto label_4ef291
                        
                        edi_1 = var_7c_1
                        continue
                    else
                        int32_t ecx_2 = edx_2[1]
                        
                        if (var_60_1.d s< ecx_2)
                            ecx_2 = var_60_1.d
                        
                        int32_t ecx_3 = edx_2[3]
                        
                        if (var_60_1:8.d s> ecx_3)
                            ecx_3 = var_60_1:8.d
                        
                        int32_t var_48_1 = ecx_3
                        int32_t ecx_4 = edx_2[2]
                        
                        if (var_60_1:4.d s< ecx_4)
                            ecx_4 = var_60_1:4.d
                        
                        int32_t var_4c_1 = ecx_4
                        int32_t ecx_5 = edx_2[4]
                        
                        if (var_60_1:0xc.d s> ecx_5)
                            ecx_5 = var_60_1:0xc.d
                        
                        int32_t var_44_1 = ecx_5
                        int32_t ecx_6 = *edx_2
                        var_60_1 = ecx_2.o
                        
                        if (ecx_6 s>= 0 && ecx_6 s< esi)
                            int32_t eax_4 = ecx_6 * 7
                            int32_t ecx_8 = *arg2
                            int32_t* esi_1 = *(ecx_8 + (eax_4 << 2))
                            int32_t edx_3 = esi_1[1]
                            void var_24
                            
                            if (edx_3 == 3)
                                int32_t* eax_5 = sub_4459f0(esi_1)
                                int32_t* esi_2 = *eax_5
                                
                                if (sub_4f1c60(eax_5, esi_2, &var_24, var_84) == 0)
                                    char* const ecx_21 = &data_5559b1
                                    char* eax_25 = esi_1[8]
                                    
                                    if (eax_25 != 0)
                                        ecx_21 = eax_25
                                    
                                    char* const var_94_6 = ecx_21
                                    sub_44e4d0(sub_44e260("AtlasMaker: Image load failed %s"), 
                                        &data_5559b1, "Halt", "c:\ax2017\engine\editor\atlasmaker.cpp", 
                                        0x4b0, "AtlasMakerPlaceAssetTexture_New")
                                    goto label_4ef35c
                                
                                int32_t edx_5 = esi_2[5]
                                int32_t var_14_1 = edx_5
                                int32_t var_20
                                int32_t var_18_1 = sub_4dd730(var_20, edx_5)
                                sub_4ed4e0(&var_24, &edx_2[1], &data_572b70, &var_24, var_84)
                                esi_2[9] = *(var_84 + 0x44)
                                esi_2[0xa] = *(var_84 + 0x48)
                                int32_t edx_7 = edx_2[2]
                                esi_2[0xb] = edx_2[1]
                                esi_2[0xc] = edx_7
                                *esi_2 = edx_2[3] - edx_2[1]
                                edi = var_84
                                esi_2[1] = edx_2[4] - edx_2[2]
                                esi_2[2] = *(edi + 0x4c)
                                sub_4ed100(esi_1)
                                ecx = arg4
                                eax_1 = arg2
                                goto label_4ef1e1
                            
                            if (edx_3 == 0x12)
                                int32_t edx_8 = *(ecx_8 + (eax_4 << 2) + 8)
                                int32_t ecx_14 = *(ecx_8 + (eax_4 << 2) + 4)
                                eax_1 =
                                    sub_4eed70(&var_24, esi_1, arg6, ecx_14, &var_24, *(var_84 + 0x30))
                                
                                if (esi_1[1] != 0x12)
                                    break
                                
                                eax_1 = *(*(sub_4459f0(esi_1) + 0x18) + ecx_14 * 0x1c + 0x14)
                                int32_t edx_12 = edx_8 * 9
                                float xmm2_1 = *(eax_1 + (edx_12 << 2) + 4)
                                float xmm0_4
                                
                                if (not(*(eax_1 + (edx_12 << 2) + 0xc) f< xmm2_1))
                                    xmm0_4 = *(eax_1 + (edx_12 << 2) + 8)
                                
                                if (*(eax_1 + (edx_12 << 2) + 0xc) f< xmm2_1
                                        || *(eax_1 + (edx_12 << 2) + 0x10) < xmm0_4)
                                    var_94_1 = "RectTopLeft"
                                    var_98_1 = 0x127
                                    var_9c_1 = "c:\ax2017\engine\rect.cpp"
                                    ecx_1 = "RectIsNormalized(r)"
                                    goto label_4ef354
                                
                                int32_t esi_3 = int.d(sub_453f10(xmm2_1 + 0.5f))
                                int32_t eax_21 = int.d(sub_453f10(xmm0_4 + 0.5f))
                                int32_t var_68 = esi_3
                                int32_t var_64_1 = eax_21
                                sub_4ed4e0(&var_24, &edx_2[1], &var_68, &var_24, var_84)
                                int32_t xmm0_11 = _mm_cvtepi32_ps(zx.o(edx_2[1]))
                                int32_t var_3c_1 = _mm_cvtepi32_ps(zx.o(edx_2[2]))
                                int32_t var_38_1 = _mm_cvtepi32_ps(zx.o(edx_2[3]))
                                int32_t var_34_1 = _mm_cvtepi32_ps(zx.o(edx_2[4]))
                                *(eax_1 + edx_8 * 0x24 + 4) = xmm0_11.o
                            
                            eax_1 = arg2
                            ecx = arg4
                            goto label_4ef1d9
                        
                        var_94_1 = "XArray<struct PackAsset>::operator []"
                        var_98_1 = 0xc3
                
            label_4ef345:
                var_9c_1 = "c:\ax2017\engine\xarray.h"
                ecx_1 = "index >= 0 && index < mSize"
                goto label_4ef354
        
        var_94_1 = "FontGetDef"
        var_98_1 = 0x2e0
        var_9c_1 = "c:\ax2017\engine\assetutils.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_FONT"
    else
        var_94_1 = "AtlasMakerPlaceRects"
        var_98_1 = 0x4f7
        var_9c_1 = "c:\ax2017\engine\editor\atlasmaker.cpp"
        ecx_1 = "locs.mSize > 0"
    
    label_4ef354:
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_9c_1, var_98_1, var_94_1)
    label_4ef35c:
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
