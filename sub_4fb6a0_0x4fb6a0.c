// 函数名称: sub_4fb6a0
// 虚拟地址: 0x4fb6a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4fb6a0()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_df8478 s> 0)
        int32_t* ebx_1 = &data_d78c80
        
        do
            int32_t* esi_1 = *ebx_1
            int32_t eax
            
            if (esi_1[1] != 0)
                sub_44e4d0(eax, &data_5559b1, "gUI.undoStack[i].def->pParseTree == NULL", 
                    "c:\ax2017\engine\editor\uieditor.cpp", 0x5d, "UIEditorDispose")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if ((esi_1[2].b & 1) == 0)
                esi_1[3]
                sub_48b5b0(*esi_1)
                char** ecx_2 = esi_1[1]
                *esi_1 = 0
                
                if (ecx_2 != 0)
                    sub_491590(ecx_2)
                    esi_1[1] = 0
            
            eax = _aligned_free_base(esi_1)
            i += 1
            ebx_1 = &ebx_1[0x404]
        while (i s< data_df8478)
    
    int32_t ecx_3 = data_d76c64
    data_df8474 = 0
    data_df8478 = 0
    data_d77c6c = 0
    sub_486c10(ecx_3)
    HWND hWnd = data_ce1790
    data_d76c64 = 0
    return DragAcceptFiles(hWnd, 0)
}
