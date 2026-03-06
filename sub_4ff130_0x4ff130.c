// 函数名称: sub_4ff130
// 虚拟地址: 0x4ff130
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_4ff130()
{
    // 第一条实际指令: if (data_d77c6c == 0)
    if (data_d77c6c == 0)
        return 
    
    int32_t* ecx_1 = data_d76c60
    int32_t eax
    
    if (ecx_1[1] != 0x1e)
        sub_44e4d0(eax, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", "c:\ax2017\engine\uidef.cpp", 
            0x10d, "UIDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi_1 = *(sub_4459f0(ecx_1) + 4)
    eax = sub_4fee60()
    int32_t ecx_3
    
    if (eax != esi_1 - 1)
        ecx_3 = eax + 1
    label_4ff166:
        sub_5014a0(ecx_3)
        char* ecx_4
        ecx_4.b = 1
        sub_4fb880(ecx_4)
        sub_4cf4c0(data_d76c60)
        return sub_5012b0() __tailcall
    
    if (data_d77c6c != 0)
        ecx_3 = 0xffffffff
        goto label_4ff166
}
