// 函数名称: sub_4ed180
// 虚拟地址: 0x4ed180
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4ed180(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t* var_58 = eax
    char const* const var_6c
    int32_t var_68
    char const* const var_64
    char* ecx
    
    if (eax[1] == 3)
        int32_t* edi_1 = *sub_4459f0(arg1)
        int32_t eax_2 = arg2[0x10]
        
        if (*edi_1 s> eax_2 || edi_1[1] s> eax_2)
            char* const ecx_10 = &data_5559b1
            char* eax_29 = var_58[8]
            
            if (eax_29 != 0)
                ecx_10 = eax_29
            
            char* const var_64_7 = ecx_10
            sub_44e260("AtlasMaker: Texture too large for atlas %s")
            return 3
        
        float var_50
        
        if (sub_4f18d0(eax_2, edi_1, &var_50, arg2) == 0)
            char* const ecx_2 = &data_5559b1
            char* eax_5 = var_58[8]
            
            if (eax_5 != 0)
                ecx_2 = eax_5
            
            char* const var_64_2 = ecx_2
            sub_44e260("AtlasMaker: Image load failed %s")
            return 3
        
        eax = sub_4ed020(&var_50, arg2)
        int32_t var_48
        
        if (eax == 1)
            if (var_48 != 0)
                _aligned_free_base(var_48)
            
            return 1
        
        if (eax == 2)
            float ecx_4 = var_50
            int32_t edx_2 = arg2[0xc]
            float var_20_1 = ecx_4
            int32_t var_4c
            int32_t var_1c_1 = var_4c
            int32_t var_14_1 = edx_2
            int32_t var_18_1 = sub_4dd730(ecx_4, edx_2)
            int32_t var_24 = var_48
            int32_t var_44
            sub_4eccc0(var_48, &var_44, &var_24, arg2)
            int32_t* eax_12 = sub_45cfa0(0x1c)
            eax_12[3] += 1
            int32_t* ecx_6 = *eax_12
            int32_t* edx_4
            
            if (ecx_6 != 0)
                edx_4 = eax_12
            else
                sub_45ce30(eax_12)
                edx_4 = eax_12
                ecx_6 = *edx_4
            
            *edx_4 = *ecx_6
            ecx_6[6] = 0
            *ecx_6 = var_50.o
            int32_t var_40
            ecx_6[4] = var_40
            ecx_6[5] = 0
            ecx_6[6] = arg2[7]
            void* eax_16 = arg2[7]
            
            if (eax_16 == 0)
                arg2[8] += 1
                arg2[6] = ecx_6
                arg2[7] = ecx_6
            else
                *(eax_16 + 0x14) = ecx_6
                arg2[8] += 1
                arg2[7] = ecx_6
            
        label_4ed323:
            edi_1[9] = arg2[0x11]
            edi_1[0xa] = arg2[0x12]
            edi_1[0xb] = var_44
            edi_1[0xc] = var_40
            *edi_1 = var_50
            edi_1[1] = var_4c
            edi_1[2] = arg2[0x13]
            sub_4ed100(var_58)
            return 2
        
        if (eax == 0)
            char* const ecx_8 = &data_5559b1
            char* eax_18 = var_58[8]
            
            if (eax_18 != 0)
                ecx_8 = eax_18
            
            char* const var_64_5 = ecx_8
            sub_44e260("Atlas Maker: Duplicate image only included once: %s")
            
            if (var_48 != 0)
                _aligned_free_base(var_48)
            
            goto label_4ed323
        
        var_64 = "AtlasMakerPlaceAssetTexture"
        var_68 = 0x279
        var_6c = "c:\ax2017\engine\editor\atlasmaker.cpp"
        ecx = "Halt"
    else
        var_64 = "TextureGetDef"
        var_68 = 0x84
        var_6c = "c:\ax2017\engine\texture.h"
        ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_6c, var_68, var_64)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
