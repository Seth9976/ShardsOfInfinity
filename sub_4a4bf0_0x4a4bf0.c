// 函数名称: sub_4a4bf0
// 虚拟地址: 0x4a4bf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __stdcallsub_4a4bf0(HINSTANCE arg1, enum SHOW_WINDOW_CMD arg2)
{
    // 第一条实际指令: SetProcessDPIAware()
    SetProcessDPIAware()
    WNDCLASSEXW param0
    param0.cbSize = 0x30
    param0.style = 3
    param0.lpfnWndProc = sub_4a3ff0
    param0.cbClsExtra = 0
    param0.cbWndExtra = 0
    param0.hInstance = arg1
    param0.hIcon = LoadIconA(arg1, 0x80)
    param0.hCursor = 0
    param0.hbrBackground = 6
    param0.lpszMenuName = 0x6d
    param0.lpszClassName = u"GameWindowClass"
    int32_t cx = GetSystemMetrics(SM_CXSMICON)
    int32_t cy = GetSystemMetrics(SM_CYSMICON)
    param0.hIconSm = LoadImageA(GetModuleHandleA(nullptr), 0x80, IMAGE_ICON, cx, cy, LR_DEFAULTCOLOR)
    RegisterClassExW(&param0)
    int32_t result = sub_4a39b0(arg1, arg2)
    
    if (result == 0)
        return result
    
    MSG msg
    PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE)
    
    while (msg.message != 0x12)
        if (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE) != 0)
            HWND hDlg = data_ce1c90
            
            if (hDlg == 0)
                TranslateMessage(&msg)
                DispatchMessageA(&msg)
            else
                if (msg.message != 0x100 || msg.wParam != 0x53)
                    goto label_4a4d42
                
                int16_t eax_4 = GetKeyState(0x11)
                int16_t eax_5
                
                if ((0x8000 & eax_4) != 0)
                    eax_5 = GetKeyState(0x10)
                
                if ((0x8000 & eax_4) != 0 && (0x8000 & eax_5) != 0)
                    sub_4d1c00(0x8000)
                else if (msg.wParam != 0x53)
                label_4a4d38:
                    hDlg = data_ce1c90
                label_4a4d42:
                    
                    if (IsDialogMessageA(hDlg, &msg) == 0)
                        TranslateMessage(&msg)
                        DispatchMessageA(&msg)
                else
                    if ((0x8000 & GetKeyState(0x11)) == 0)
                        goto label_4a4d38
                    
                    sub_4d18b0(0x8000)
        else if (data_e46fb2 == 0)
            data_e46fb2 = 1
            sub_453c60()
            
            if (*(data_65ae04 + 0x2c) != 0)
                sub_453cb0()
            
            data_e46fb2 = 0
    
    sub_4537f0()
    return msg.wParam
}
