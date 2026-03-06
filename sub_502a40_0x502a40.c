// 函数名称: sub_502a40
// 虚拟地址: 0x502a40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __stdcallsub_502a40(HWND arg1, uint32_t arg2, HWND arg3, LPARAM arg4)
{
    // 第一条实际指令: void var_2c
    void var_2c
    int32_t eax_1 = __security_cookie ^ &var_2c
    HWND hWnd_4 = arg1
    HWND hWnd_3 = GetParent(GetParent(hWnd_4))
    GetClassNameA(hWnd_4, &data_e4a868, 0x104)
    uint32_t eax_5 = __mbsicmp(&data_e4a868, "Edit")
    int32_t ecx
    ecx.b = eax_5 == 0
    HWND hWnd
    
    if (eax_5 != 0)
        char const* const var_3c_4 = "lpInsData"
        hWnd = hWnd_3
    else
        char const* const var_3c_3 = "lpInsData"
        hWnd = GetParent(hWnd_3)
    
    HANDLE eax_7 = GetPropA(hWnd, "lpInsData")
    data_e47264 = eax_7
    
    if (arg2 == 2)
        SetWindowLongA(hWnd_4, 0xfffffffc, GetPropA(hWnd_4, "Wprc"))
        RemovePropA(hWnd_4, "Wprc")
        @__security_check_cookie@4(eax_1 ^ &var_2c)
        return 0
    
    HWND wParam
    LPARAM edi
    
    if (arg2 == 8)
        if (hWnd_4 != GetParent(arg3))
            sub_5017c0(SendMessageA(hWnd_4, 0x102, 0xd, 0), arg3)
        
        edi = arg4
        wParam = arg3
    else if (arg2 != 0xf)
        if (arg2 == 0x87)
            @__security_check_cookie@4(eax_1 ^ &var_2c)
            return 4
        
        if (arg2 != 0x111)
            wParam = arg3
            
            if (arg2 == 0x102)
                if (wParam == 0xd)
                    if (*(eax_7 + 4) != 0)
                        GetWindowTextA(hWnd_4, &data_e4a868, 0x104)
                        _free(*(*(data_e47264 + 4) + 0x10))
                        *(*(data_e47264 + 4) + 0x10) = sub_501620(&data_e4a868)
                    
                    HWND hWnd_1 = hWnd_4
                    
                    if (ecx != 0)
                        hWnd_1 = GetParent(hWnd_1)
                    
                    ShowWindow(hWnd_1, SW_HIDE)
                    SetFocus(*(data_e47264 + 0x14))
                    sub_5063d0()
                    @__security_check_cookie@4(eax_1 ^ &var_2c)
                    return 1
                
                if (wParam == 9)
                    if ((0x8000 & GetKeyState(0x10)) != 0)
                        SendMessageA(hWnd_4, 0x102, 0xd, 0)
                        @__security_check_cookie@4(eax_1 ^ &var_2c)
                        return 1
                    
                    if (ecx != 0)
                        hWnd_4 = GetParent(hWnd_4)
                    
                    ShowWindow(hWnd_4, SW_HIDE)
                    sub_5017c0(SetFocus(*(data_e47264 + 8)), 0)
                    @__security_check_cookie@4(eax_1 ^ &var_2c)
                    return 1
            else if (arg2 == 0x100 && wParam == 0x1b)
                HWND hWnd_2 = hWnd_4
                
                if (ecx != 0)
                    hWnd_2 = GetParent(hWnd_2)
                
                ShowWindow(hWnd_2, SW_HIDE)
                SetFocus(*(data_e47264 + 0x14))
                @__security_check_cookie@4(eax_1 ^ &var_2c)
                return 0
            
            edi = arg4
        else
            edi = arg4
            
            if (GetPropA(edi, "Wprc") == 0)
                GetClassNameA(edi, &data_e4a868, 0x104)
                
                if (__mbsicmp(&data_e4a868, "Edit") == 0)
                    SetPropA(edi, "Wprc", GetWindowLongA(edi, 0xfffffffc))
                    SetWindowLongA(edi, 0xfffffffc, sub_502a40)
            
            wParam = arg3
    else
        edi = arg4
        
        if (ecx == 0)
            CallWindowProcA(GetPropA(hWnd_4, "Wprc"), hWnd_4, arg2, arg3, edi)
            HDC hDC = GetWindowDC(hWnd_4)
            int32_t rect
            GetClientRect(hWnd_4, &rect)
            uint32_t eax_13 = GetSysColor(COLOR_WINDOW)
            sub_501810(eax_13, &rect, hDC, 3, eax_13)
            int32_t var_18
            int32_t var_18_1 = var_18 + 1
            rect += 1
            uint32_t eax_14 = GetSysColor(COLOR_WINDOW)
            sub_501810(eax_14, &rect, hDC, 3, eax_14)
            ReleaseDC(hWnd_4, hDC)
            @__security_check_cookie@4(eax_1 ^ &var_2c)
            return 1
        
        wParam = arg3
    
    LRESULT result = CallWindowProcA(GetPropA(hWnd_4, "Wprc"), hWnd_4, arg2, wParam, edi)
    @__security_check_cookie@4(eax_1 ^ &var_2c)
    return result
}
