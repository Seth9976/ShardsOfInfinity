// 函数名称: sub_48ddb0
// 虚拟地址: 0x48ddb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_48ddb0(int32_t arg1)
{
    // 第一条实际指令: char* ecx
    char* ecx
    int32_t edx
    int32_t* result_1 = sub_48d5b0(ecx, edx)
    int32_t* result = result_1
    
    if (result[2] == 4)
        result_1 = sub_48d180(result)
    
    if (*result == 0)
        *result = arg1
        result[2] = 3
        sub_44f590(&result[3], &data_5559b1)
        return result
    
    sub_44e4d0(result_1, &data_5559b1, "pAsset->pAssetData == NULL", 
        "c:\ax2017\engine\assetcatalog.cpp", 0x14f, "AssetCatalogNewAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
