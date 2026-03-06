// 函数名称: sub_48da50
// 虚拟地址: 0x48da50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_48da50(int32_t arg1, char arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t* var_c = arg3
    int32_t* var_c = arg3
    int32_t* esi = arg3
    
    if (*esi != 0)
        sub_44e4d0(arg1, &data_5559b1, "pAsset->pAssetData == NULL", 
            "c:\ax2017\engine\assetcatalog.cpp", 0xe8, "AssetCatalogLoadAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_4aa5d0(arg3, arg2)
    char** result
    
    if (*esi == 0)
        if (arg4 == 0)
            result.b = 0
            return result
        
        sub_48dac0(esi)
    
    result.b = 1
    return result
}
