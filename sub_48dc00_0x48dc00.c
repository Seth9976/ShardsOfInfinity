// 函数名称: sub_48dc00
// 虚拟地址: 0x48dc00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_48dc00(int32_t* arg1)
{
    // 第一条实际指令: char** result = sub_48da50(sub_48d180(arg1), 1, arg1, 1)
    char** result = sub_48da50(sub_48d180(arg1), 1, arg1, 1)
    
    if (result.b != 0)
        return result
    
    sub_44e4d0(result, &data_5559b1, "result", "c:\ax2017\engine\assetcatalog.cpp", 0x128, 
        "AssetCatalogReloadAsWritable")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
