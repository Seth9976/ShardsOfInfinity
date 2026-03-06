// 函数名称: sub_4cae30
// 虚拟地址: 0x4cae30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4cae30()
{
    // 第一条实际指令: int32_t* ecx = data_ce26e4
    int32_t* ecx = data_ce26e4
    LRESULT esi_2
    
    if (ecx == 0 || ecx[1] != 0x19)
        esi_2 = 0
    else if (sub_4459f0(ecx) == 0)
        esi_2 = 0
    else
        HWND hWnd = GetDlgItem(data_ce1c90, 0x7b)
        LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam == 0xffffffff)
            esi_2 = 0
        else
            esi_2 = SendMessageA(hWnd, 0x199, wParam, 0)
    
    char* result = sub_4ca670(sub_4c6ca0(), esi_2)
    
    if (result == 0)
        return result
    
    int32_t* eax_4 = sub_4c6a60()
    
    if (eax_4 == 0)
        sub_44e4d0(eax_4, &data_5559b1, "pEmitter", "c:\ax2017\engine\windows\editorwindow.cpp", 0xa72, 
            "EditorPickAsset")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* ecx_2 = sub_4b8610(eax_4, eax_4, &data_5b39c8, esi_2, result)
    void* eax_5 = data_ce26e4
    
    if (eax_5 != 0)
        int32_t eax_6 = *(eax_5 + 4)
        
        if (eax_6 == 0x19)
            return sub_4c68c0(sub_4c8660(0xffffffff, 0xffffffff))
        
        if (eax_6 == 0x1b)
            ecx_2 = sub_4c8c00(0xffffffff)
    
    return sub_4c68c0(ecx_2)
}
