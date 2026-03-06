// 函数名称: sub_48dac0
// 虚拟地址: 0x48dac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_48dac0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    char const* const var_20
    int32_t var_1c_1
    char const* const var_18
    int32_t* eax
    char* ecx
    char* const edx
    
    if (*arg1 == 0)
        char* eax_1 = arg1[8]
        char* const ecx_1 = &data_5559b1
        
        if (eax_1 != 0)
            ecx_1 = eax_1
        
        char* const var_18_1 = ecx_1
        sub_44e260("Can't load asset: '%s'")
        int32_t* eax_2 = sub_48d8f0(arg1)
        int32_t* esi_1 = eax_2
        
        if (*esi_1 != 0)
            eax_2 = sub_48d180(esi_1)
        
        sub_48da50(eax_2, 0, esi_1, 0)
        eax = *esi_1
        int32_t* var_8_1 = eax
        
        if (eax != 0)
        label_48db63:
            int32_t ecx_6 = arg1[1]
            
            if (ecx_6 u<= 0x22)
                void* edi = *((ecx_6 << 5) + data_cdf880 + 0x1c)
                int32_t* eax_4 = sub_45cd70(0x10)
                *eax_4 = zx.o(0)
                *eax_4 = sub_48bb00(*var_8_1, edi)
                eax_4[3] = edi
                int32_t ecx_10 = arg1[1]
                *arg1 = eax_4
                arg1[2] = 4
                void* result = sub_495000(ecx_10)
                int32_t edx_3 = *(result + 4)
                
                if (edx_3 == 0)
                    return result
                
                char* eax_6 = arg1[8]
                char* const ecx_11 = &data_5559b1
                
                if (eax_6 != 0)
                    ecx_11 = eax_6
                
                return edx_3(ecx_11, **arg1)
            
            var_18 = "AssetTypeGetInfo"
            var_1c_1 = 0xb6
            var_20 = "c:\ax2017\engine\assettyperegistry.cpp"
            edx = &data_5559b1
            ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
        else
            sub_490a90(esi_1)
            eax = *esi_1
            var_8_1 = eax
            
            if (eax != 0)
                goto label_48db63
            
            var_18 = "AssetCatalogLoadFailureAsset"
            var_1c_1 = 0x113
            var_20 = "c:\ax2017\engine\assetcatalog.cpp"
            edx = "Failed to load failure asset\n"
            ecx = "pFailureAsset->pAssetData"
    else
        var_18 = "AssetCatalogLoadFailureAsset"
        var_1c_1 = 0x100
        var_20 = "c:\ax2017\engine\assetcatalog.cpp"
        edx = &data_5559b1
        ecx = "pAsset->pAssetData == NULL"
    
    sub_44e4d0(eax, edx, ecx, var_20, var_1c_1, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
