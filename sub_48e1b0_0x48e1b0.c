// 函数名称: sub_48e1b0
// 虚拟地址: 0x48e1b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_48e1b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    char* result
    
    if (data_5b2e40 != 0)
        int32_t* edi_1 = *arg1
        char const* const var_18
        int32_t var_14
        char const* const var_10
        char* ecx
        
        if (edi_1 == 0)
            var_10 = "AssetCatalogSave"
            var_14 = 0x18d
            var_18 = "c:\ax2017\engine\assetcatalog.cpp"
            ecx = "pAsset->pAssetData"
        label_48e235:
            sub_44e4d0(result, &data_5559b1, ecx, var_18, var_14, var_10)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (edi_1[1] == 0)
            int32_t edx_1 = arg1[1]
            
            if (edx_1 u> 0x22)
                var_10 = "AssetTypeGetInfo"
                var_14 = 0xb6
                var_18 = "c:\ax2017\engine\assettyperegistry.cpp"
                ecx = "assetType >= 0 && assetType < ASSET_TYPE_COUNT"
                goto label_48e235
            
            edi_1[1] = sub_494290(*edi_1, *((edx_1 << 5) + data_cdf880 + 0x1c))
        
        if (sub_4aa940(arg1).b != 0)
            arg1[2] = 1
            result.b = 1
            return result
    
    result.b = 0
    return result
}
