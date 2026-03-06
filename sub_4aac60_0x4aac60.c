// 函数名称: sub_4aac60
// 虚拟地址: 0x4aac60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4aac60()
{
    // 第一条实际指令: int32_t* eax = data_65ae00
    int32_t* eax = data_65ae00
    int32_t ebx
    
    if (eax[7] == 0 || data_ce19bf == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    int32_t esi = data_ce19ec
    
    if (*((esi << 2) + &data_ce19d4) == 0 && ebx.b == 0)
        sub_4aab70(eax, 3, (esi << 2) + &data_ce19d4, &data_ce19f4)
        int32_t eax_1 = data_ce19ec
        sub_4aab70(eax_1, 3, (eax_1 << 2) + &data_ce19d8, &data_ce19fc)
        esi = data_ce19ec
        eax = data_65ae00
    
    if (eax[7] == 0 || *((esi << 2) + &data_ce19cc) != 0)
        goto label_4aae4d
    
    int32_t var_10_1 = 0
    eax = sub_48f6f0(eax, data_ce19f8, data_ce19f4, 1, 5)
    *((esi << 2) + &data_ce19cc) = eax
    int32_t esi_1 = data_ce19ec
    int32_t* ecx_3 = *((esi_1 << 2) + &data_ce19d0)
    char const* const var_18
    int32_t var_14
    char const* const var_10_3
    char* ecx_5
    
    if (ecx_3 != 0)
        if (ecx_3[1] == 3)
            void** eax_2 = sub_4459f0(ecx_3)
            **eax_2 = data_ce19fc
            eax = data_ce1a00
            *(*eax_2 + 4) = eax
            goto label_4aad77
        
        var_10_3 = "TextureGetDef"
        var_14 = 0x84
        var_18 = "c:\ax2017\engine\texture.h"
        ecx_5 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        int32_t* var_10_2 = ecx_3
        eax = sub_48f6f0(eax, data_ce1a00, data_ce19fc, 1, 5)
        *((esi_1 << 2) + &data_ce19d0) = eax
    label_4aad77:
        int32_t esi_2 = data_ce19ec
        int32_t* ecx_8 = *((esi_2 << 2) + &data_ce19e4)
        
        if (ecx_8 != 0)
            if (ecx_8[1] == 3)
                void** eax_3 = sub_4459f0(ecx_8)
                **eax_3 = data_ce19f4
                eax = data_ce19f8
                *(*eax_3 + 4) = eax
                goto label_4aade2
            
            var_10_3 = "TextureGetDef"
            var_14 = 0x84
            var_18 = "c:\ax2017\engine\texture.h"
            ecx_5 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
        else
            int32_t* var_10_4 = ecx_8
            eax = sub_48f6f0(eax, data_ce19f8, data_ce19f4, 0x50, 6)
            *((esi_2 << 2) + &data_ce19e4) = eax
        label_4aade2:
            int32_t esi_3 = data_ce19ec
            int32_t* ecx_12 = *((esi_3 << 2) + &data_ce19e8)
            
            if (ecx_12 != 0)
                if (ecx_12[1] == 3)
                    void** eax_4 = sub_4459f0(ecx_12)
                    **eax_4 = data_ce19fc
                    eax = data_ce1a00
                    *(*eax_4 + 4) = eax
                    goto label_4aae4d
                
                var_10_3 = "TextureGetDef"
                var_14 = 0x84
                var_18 = "c:\ax2017\engine\texture.h"
                ecx_5 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            else
                int32_t* var_10_5 = ecx_12
                eax = sub_48f6f0(eax, data_ce1a00, data_ce19fc, 0x50, 6)
                *((esi_3 << 2) + &data_ce19e8) = eax
            label_4aae4d:
                
                if (data_ce19dc != 0 || ebx.b != 0)
                    return eax
                
                int32_t ecx_16 = data_ce19f4
                int32_t edx_8
                
                if (ecx_16 == data_ce19fc)
                    edx_8 = data_ce19f8
                
                if (ecx_16 != data_ce19fc || edx_8 != data_ce1a00)
                    var_10_3 = "VRBindEyeTextures"
                    var_14 = 0xce
                    var_18 = "c:\ax2017\engine\vr.cpp"
                    ecx_5 = "gVR.hmdInfo.renderBufferSize[0] == gVR.hmdInfo.renderBufferSize[1]"
                else
                    int32_t var_10_6 = 0
                    eax = sub_48f6f0(eax, edx_8, ecx_16, 0x50, 4)
                    int32_t* ecx_17 = data_ce19e0
                    data_ce19dc = eax
                    
                    if (ecx_17 == 0)
                        int32_t* var_10_7 = ecx_17
                        eax = sub_48f6f0(eax, data_ce1a00, data_ce19fc, 0x50, 4)
                        data_ce19e0 = eax
                        return eax
                    
                    if (ecx_17[1] == 3)
                        int32_t* eax_5 = sub_4459f0(ecx_17)
                        **eax_5 = data_ce19fc
                        int32_t eax_6 = data_ce1a00
                        *(*eax_5 + 4) = eax_6
                        return eax_6
                    
                    var_10_3 = "TextureGetDef"
                    var_14 = 0x84
                    var_18 = "c:\ax2017\engine\texture.h"
                    ecx_5 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    
    sub_44e4d0(eax, &data_5559b1, ecx_5, var_18, var_14, var_10_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
