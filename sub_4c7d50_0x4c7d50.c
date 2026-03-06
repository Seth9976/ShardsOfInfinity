// 函数名称: sub_4c7d50
// 虚拟地址: 0x4c7d50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_4c7d50()
{
    // 第一条实际指令: HWND hWnd = GetDlgItem(data_ce1c90, 0x8c)
    HWND hWnd = GetDlgItem(data_ce1c90, 0x8c)
    
    if (sub_4c6b50() == 0)
        return ShowWindow(hWnd, SW_HIDE)
    
    ShowWindow(hWnd, SW_SHOW)
    LRESULT eax_2 = sub_4c6b50()
    int32_t var_14_3
    char* ecx
    
    if (eax_2.b != 0)
        LRESULT eax_3 = sub_4c6af0()
        eax_2 = sub_4c6a60()
        
        if (eax_2 != 0)
            if (sub_4b8920(eax_2, eax_2, &data_5b39c8, eax_3) == 0)
                return SendMessageA(hWnd, 0x186, 1, 0)
            
            return SendMessageA(hWnd, 0x186, 0, 0)
        
        char const* const var_10_2 = "EditorGetSelectedBool"
        var_14_3 = 0x1ee
        ecx = "pEmitter"
    else
        char const* const var_10 = "EditorGetSelectedBool"
        var_14_3 = 0x1ea
        ecx = "EditorHasSelectedBoolParam()"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx, "c:\ax2017\engine\windows\editorwindow.cpp", var_14_3, 
        "EditorGetSelectedBool")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
