// 函数名称: sub_4f7520
// 虚拟地址: 0x4f7520
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4f7520(int32_t arg1)
{
    // 第一条实际指令: int32_t* ecx = data_ce27a0
    int32_t* ecx = data_ce27a0
    
    if (ecx[1] == 0x20)
        return arg1 * 0xb8 + *sub_4459f0(ecx)
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", "c:\ax2017\engine\fabdef.cpp", 
        0xe7, "FabDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
