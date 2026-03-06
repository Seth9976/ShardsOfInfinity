// 函数名称: sub_4fbb50
// 虚拟地址: 0x4fbb50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4fbb50()
{
    // 第一条实际指令: int32_t* ecx = data_d76c60
    int32_t* ecx = data_d76c60
    
    if (ecx != 0)
        if (ecx[1] != 0x1e)
            int32_t eax
            sub_44e4d0(eax, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
                "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (*(sub_4459f0(ecx) + 4) != 0)
            if (data_d77c6c != 0)
                return sub_4fba30(data_d76c6c)
            
            return 0
    
    return 0xffffffff
}
