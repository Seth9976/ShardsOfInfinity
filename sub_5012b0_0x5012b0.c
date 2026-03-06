// 函数名称: sub_5012b0
// 虚拟地址: 0x5012b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULTsub_5012b0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    HWND hWnd = GetDlgItem(data_ce1c90, 0xab)
    int32_t* ecx_1 = data_d76c60
    
    if (ecx_1[1] != 0x1e)
        sub_44e4d0(hWnd, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", "c:\ax2017\engine\uidef.cpp", 
            0x10d, "UIDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax = sub_4459f0(ecx_1)
    SendMessageA(hWnd, 0x19b, 0, zx.d(eax[1].w) << 0x10)
    int32_t i = 0
    
    if (eax[1] s> 0)
        int32_t edx_1 = data_d77c6c
        int32_t* edi_1 = nullptr
        
        do
            int32_t eax_1 = 0
            
            if (edx_1 s> 0)
                do
                    if ((&data_d76c6c)[eax_1] == *(edi_1 + *eax))
                        uint32_t eax_2 = zx.d(i.w)
                        SendMessageA(hWnd, 0x19b, 1, eax_2 << 0x10 | eax_2)
                        edx_1 = data_d77c6c
                        break
                    
                    eax_1 += 1
                while (eax_1 s< edx_1)
            
            i += 1
            edi_1 = &edi_1[0x46]
        while (i s< eax[1])
    
    return sub_4d0360()
}
