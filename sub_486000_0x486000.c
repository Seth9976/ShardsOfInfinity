// 函数名称: sub_486000
// 虚拟地址: 0x486000
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_486000(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    
    if (arg3[1] == 0x1e)
        *arg4 = *(sub_4459f0(arg3) + 8)
        return arg4
    
    sub_44e4d0(arg1, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", "c:\ax2017\engine\uidef.cpp", 
        0x10d, "UIDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
