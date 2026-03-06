// 函数名称: sub_45d2e0
// 虚拟地址: 0x45d2e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_45d2e0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] == 0x22)
    if (arg1[1] == 0x22)
        return sub_4459f0(arg1) __tailcall
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI2", "c:\ax2017\engine\ui2.cpp", 
        0x623, "UI2DefGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
