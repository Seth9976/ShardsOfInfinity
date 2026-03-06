// 函数名称: sub_4c6ca0
// 虚拟地址: 0x4c6ca0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4c6ca0()
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
    
    int32_t* eax_3 = sub_4c6a60()
    
    if (eax_3 != 0)
        return sub_4b8b40(eax_3, eax_3, &data_5b39c8, esi_2)
    
    sub_44e4d0(eax_3, &data_5559b1, "pEmitter", "c:\ax2017\engine\windows\editorwindow.cpp", 0x226, 
        "EditorGetSelectedAsset")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
