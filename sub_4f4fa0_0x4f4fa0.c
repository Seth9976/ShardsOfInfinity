// 函数名称: sub_4f4fa0
// 虚拟地址: 0x4f4fa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4f4fa0()
{
    // 第一条实际指令: HWND hWnd = GetDlgItem(data_ce1c90, 0xab)
    HWND hWnd = GetDlgItem(data_ce1c90, 0xab)
    int32_t* ecx = data_ce27a0
    
    if (ecx[1] != 0x20)
        sub_44e4d0(hWnd, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
            "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax = sub_4459f0(ecx)
    SendMessageA(hWnd, 0x19b, 0, zx.d(*(eax + 4)) << 0x10)
    int32_t i = 0
    
    if (*(eax + 4) s> 0)
        int32_t ecx_3 = data_ce37a4
        
        do
            int32_t eax_1 = 0
            
            if (ecx_3 s> 0)
                do
                    if ((&data_ce27a4)[eax_1] == i)
                        uint32_t eax_2 = zx.d(i.w)
                        SendMessageA(hWnd, 0x19b, 1, eax_2 << 0x10 | eax_2)
                        ecx_3 = data_ce37a4
                        break
                    
                    eax_1 += 1
                while (eax_1 s< ecx_3)
            
            i += 1
        while (i s< *(eax + 4))
    
    return sub_4cf940() __tailcall
}
