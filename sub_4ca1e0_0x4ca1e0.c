// 函数名称: sub_4ca1e0
// 虚拟地址: 0x4ca1e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4ca1e0(HWND arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void var_78
    void var_78
    int32_t eax_1 = __security_cookie ^ &var_78
    
    if (arg2 u<= 0x2c)
        if (arg2 == 0x2c)
            int32_t eax_40
            int32_t edx_4
            edx_4:eax_40 = muls.dp.d(0x2aaaaaab, data_ce1cd0 * 0xd)
            int32_t edx_5 = edx_4 s>> 4
            *(arg4 + 0x10) = (edx_5 u>> 0x1f) + edx_5
            @__security_check_cookie@4(eax_1 ^ &var_78)
            return 1
        
        if (arg2 == 5)
            RECT rect
            GetClientRect(arg1, &rect)
            int32_t eax_17 = data_ce1cac - data_ce1cb4 - rect.left + rect.right
            int32_t eax_21 = data_ce1cb0 - rect.top - data_ce1cb8 + rect.bottom
            HWND hWnd = GetDlgItem(arg1, 1)
            HWND hWnd_1 = GetDlgItem(arg1, 2)
            HWND hWnd_2 = GetDlgItem(arg1, 0x85)
            int32_t X_3
            GetWindowRect(hWnd, &X_3)
            int32_t X_4
            GetWindowRect(hWnd_1, &X_4)
            int32_t X_5
            GetWindowRect(hWnd_2, &X_5)
            ScreenToClient(arg1, &X_3)
            POINT point
            ScreenToClient(arg1, &point)
            ScreenToClient(arg1, &X_4)
            POINT point_1
            ScreenToClient(arg1, &point_1)
            ScreenToClient(arg1, &X_5)
            POINT point_2
            ScreenToClient(arg1, &point_2)
            int32_t X = X_3
            int32_t var_5c
            MoveWindow(hWnd, X, eax_21 + var_5c, point.x - X, point.y - var_5c, 1)
            int32_t X_1 = X_4
            int32_t var_4c
            MoveWindow(hWnd_1, X_1, var_4c + eax_21, point_1.x - X_1, point_1.y - var_4c, 1)
            int32_t X_2 = X_5
            int32_t Y
            MoveWindow(hWnd_2, X_2, Y, point_2.x - X_2 + eax_17, point_2.y - Y + eax_21, 1)
            int128_t xmm0
            xmm0.d = rect.left
            xmm0:4.d = rect.top
            xmm0:8.d = rect.right
            xmm0:0xc.d = rect.bottom
            data_ce1cac.o = xmm0
            @__security_check_cookie@4(eax_1 ^ &var_78)
            return 0
        
        if (arg2 == 0x24)
            *(arg4 + 0x1c) = 0x12c
            @__security_check_cookie@4(eax_1 ^ &var_78)
            return 1
        
        if (arg2 == 0x2b && *(arg4 + 8) != 0xffffffff)
            int32_t* eax_3 = sub_4c6a60()
            int32_t ecx_1 = *(arg4 + 0xc)
            
            if (ecx_1 != 0)
                if (ecx_1 u<= 2)
                    LRESULT eax_6 = SendMessageA(*(arg4 + 0x14), 0x199, *(arg4 + 8), 0)
                    
                    if (eax_6 u> 0x79)
                        sub_44e4d0(eax_6, &data_5559b1, 
                            "paramToolIndex >= 0 && paramToolIndex < gParticleParamToolDataCount", 
                            "c:\ax2017\engine\windows\editorwindow.cpp", 0x894, "PickDialogWndProc")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t edx_1 = *((eax_6 << 3) + &data_5b35f8)
                    int32_t x
                    
                    if (edx_1 != 0x70)
                        COLORREF color
                        enum SYS_COLOR_INDEX nIndex
                        
                        if (sub_4b8820(eax_3, edx_1) == 0)
                            if ((*(arg4 + 0x10) & 1) == 0)
                                nIndex = COLOR_WINDOWTEXT
                                goto label_4ca323
                            
                            uint32_t color_2 = GetSysColor(COLOR_HIGHLIGHTTEXT)
                            SetTextColor(*(arg4 + 0x18), color_2)
                            color = GetSysColor(COLOR_HIGHLIGHT)
                        else
                            nIndex = COLOR_GRAYTEXT
                        label_4ca323:
                            uint32_t color_3 = GetSysColor(nIndex)
                            SetTextColor(*(arg4 + 0x18), color_3)
                            color = 0xffffff
                        SetBkColor(*(arg4 + 0x18), color)
                        x = 0xc
                    else
                        HBRUSH eax_7 = CreateSolidBrush(0xe6e6e6)
                        FillRect(*(arg4 + 0x18), arg4 + 0x1c, eax_7)
                        DeleteObject(eax_7)
                        SetBkColor(*(arg4 + 0x18), 0xe6e6e6)
                        uint32_t color_1 = GetSysColor(COLOR_WINDOWTEXT)
                        SetTextColor(*(arg4 + 0x18), color_1)
                        x = 6
                    
                    uint8_t* lpString = (&data_5b35fc)[eax_6 * 2]
                    char* lpString_1 = lpString
                    void* eax_11
                    
                    do
                        eax_11.b = *lpString_1
                        lpString_1 = &lpString_1[1]
                    while (eax_11.b != 0)
                    TextOutA(*(arg4 + 0x18), x, *(arg4 + 0x20), lpString, lpString_1 - &lpString_1[1])
                    @__security_check_cookie@4(eax_1 ^ &var_78)
                    return 1
                
                if (ecx_1 == 4)
                    DrawFocusRect(*(arg4 + 0x18), arg4 + 0x1c)
                    @__security_check_cookie@4(eax_1 ^ &var_78)
                    return 1
            
            @__security_check_cookie@4(eax_1 ^ &var_78)
            return 1
    else if (arg2 == 0x110)
        SetDlgItemTextA(arg1, 0x86, "Pick parameters:")
        SetWindowTextA(arg1, "Add parameters")
        HWND hWnd_3 = GetDlgItem(arg1, 0x85)
        
        for (LPARAM lParam = 0; lParam s< 0x7a; lParam += 1)
            SendMessageA(hWnd_3, 0x19a, SendMessageA(hWnd_3, 0x180, 0, (&data_5b35fc)[lParam * 2]), 
                lParam)
        
        GetClientRect(arg1, &data_ce1cac)
    else if (arg2 == 0x111)
        uint32_t eax_48 = arg3 u>> 0x10
        uint32_t edx_6 = zx.d(arg3.w)
        
        if (eax_48 == 0)
            if (edx_6 == 1)
                goto label_4ca59e
            
            if (edx_6 == 2)
                EndDialog(arg1, arg3)
                @__security_check_cookie@4(eax_1 ^ &var_78)
                return 0
        else if (eax_48 == 2)
        label_4ca59e:
            sub_4c9fe0(arg1)
            @__security_check_cookie@4(eax_1 ^ &var_78)
            return 0
    
    @__security_check_cookie@4(eax_1 ^ &var_78)
    return 0
}
