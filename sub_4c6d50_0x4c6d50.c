// 函数名称: sub_4c6d50
// 虚拟地址: 0x4c6d50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4c6d50()
{
    // 第一条实际指令: void* eax = data_ce26e4
    void* eax = data_ce26e4
    
    if (eax != 0)
        int32_t* eax_1 = *(eax + 4)
        int32_t var_14_3
        char const* const ecx
        
        if (eax_1 == 0x19)
            HWND hWnd = GetDlgItem(data_ce1c90, 0x7b)
            LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
            
            if (wParam != 0xffffffff)
                LRESULT eax_2 = SendMessageA(hWnd, 0x199, wParam, 0)
                eax_1 = sub_4c6a60()
                
                if (eax_1 == 0)
                    char const* const var_10 = "EditorGetSelectedTrack"
                    var_14_3 = 0x23d
                    ecx = "pEmitter"
                label_4c6e72:
                    sub_44e4d0(eax_1, &data_5559b1, ecx, "c:\ax2017\engine\windows\editorwindow.cpp", 
                        var_14_3, "EditorGetSelectedTrack")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* eax_3 = sub_4b8540(&data_5b39c8, eax_2)
                int32_t edx_2 = data_e471a0
                
                if (*(eax_3 + 0xc) == edx_2)
                    return sub_4b8ac0(eax_3, eax_1, &data_5b39c8, edx_2, eax_2)
        else if (eax_1 != 0x1e && eax_1 != 0x20 && eax_1 != 0x12)
            if (eax_1 != 0x1b)
                char const* const var_10_3 = "EditorGetSelectedTrack"
                var_14_3 = 0x25f
                ecx = "Halt"
                goto label_4c6e72
            
            LRESULT eax_6 = SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
            
            if (eax_6 != 0xffffffff)
                eax_1 = sub_4c6a40()
                
                if (eax_6 s>= 0 && eax_6 s< eax_1[1])
                    return *eax_1 + eax_6 * 0x14
                
                char const* const var_10_2 = "EditorGetSelectedTrack"
                var_14_3 = 0x25a
                ecx = "currentSelection >= 0 && currentSelection < graphDef->mTrackCount"
                goto label_4c6e72
    
    return 0
}
