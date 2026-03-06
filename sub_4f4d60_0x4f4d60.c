// 函数名称: sub_4f4d60
// 虚拟地址: 0x4f4d60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4f4d60()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_d63bac s> 0)
        int32_t* ebx_1 = &data_ce47ac
        
        do
            int32_t* esi_1 = *ebx_1
            int32_t eax
            
            if (esi_1[1] != 0)
                sub_44e4d0(eax, &data_5559b1, "gFab.undoStack[i].def->pParseTree == NULL", 
                    "c:\ax2017\engine\editor\fabeditor.cpp", 0x9d, "FabEditorDispose")
                
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
            ebx_1 = &ebx_1[0x402]
        while (i s< data_d63bac)
    
    HWND hWnd = data_ce1790
    data_d63ba8 = 0
    data_d63bac = 0
    data_ce37a4 = 0
    DragAcceptFiles(hWnd, 0)
    int32_t eax_1 = data_d63bec
    
    if (eax_1 != 0)
        void* eax_2 = sub_4b3c10(eax_1)
        int32_t edx_2 = data_655ac4
        data_655ac4 = zx.d(*(eax_2 + 0x4cc))
        *(eax_2 + 0x4cc) = edx_2
        data_655ac8 -= 1
        data_d63bec = 0
    
    void* result = data_d63bf4
    
    if (result != 0)
        result = sub_4b3c10(result)
        int32_t edx_3 = data_655ac4
        data_655ac4 = zx.d(*(result + 0x4cc))
        *(result + 0x4cc) = edx_3
        data_655ac8 -= 1
        data_d63bf4 = 0
    
    return result
}
