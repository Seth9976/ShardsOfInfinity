// 函数名称: sub_500350
// 虚拟地址: 0x500350
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_500350(int128_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = data_d76c60
    int32_t* ecx = data_d76c60
    
    if (ecx[1] == 0x1e)
        *arg1 = *(sub_4459f0(ecx) + 8)
        return arg1
    
    int32_t eax
    sub_44e4d0(eax, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", "c:\ax2017\engine\uidef.cpp", 
        0x10d, "UIDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
