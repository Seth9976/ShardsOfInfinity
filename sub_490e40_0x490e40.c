// 函数名称: sub_490e40
// 虚拟地址: 0x490e40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_490e40(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 2)
    if (arg1[1] == 2)
        return sub_4459f0(arg1) __tailcall
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
        "c:\ax2017\engine\assetutils.cpp", 0x30c, "StructureDefGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
