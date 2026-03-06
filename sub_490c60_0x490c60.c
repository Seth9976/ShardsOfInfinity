// 函数名称: sub_490c60
// 虚拟地址: 0x490c60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_490c60(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 0x12)
    if (arg1[1] == 0x12)
        return sub_4459f0(arg1) __tailcall
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_FONT", 
        "c:\ax2017\engine\assetutils.cpp", 0x2e0, "FontGetDef")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
