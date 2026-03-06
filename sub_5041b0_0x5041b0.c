// 函数名称: sub_5041b0
// 虚拟地址: 0x5041b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_5041b0(int32_t arg1, WPARAM arg2, HWND arg3, int16_t arg4, int16_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_54 = 0
    int32_t* eax_3
    HWND var_78
    
    if (*(data_e47264 + 4) == 0)
    label_504362:
        uint32_t Msg_1 = 0x100
        var_78 = arg3
        eax_3 = CallWindowProcA(GetPropA(arg3, "Wprc"), var_78, Msg_1, arg2, 
            zx.d(arg5) << 0x10 | zx.d(arg4))
    else
        RECT var_3c
        RECT* lParam_1 = &var_3c
        LPARAM lParam = 0
        WPARAM wParam = 0
        var_78 = 0x188
        __builtin_memset(&var_3c, 0, 0x10)
        WPARAM wParam_11 = SendMessageA(arg3, var_78, wParam, lParam)
        uint32_t Msg = 0x198
        var_78 = arg3
        SendMessageA(var_78, Msg, wParam_11, lParam_1)
        HINSTANCE* ecx = data_e47264
        eax_3 = ecx[1]
        
        if (eax_3[5] == 0x63)
            if (arg2 != 0x27)
                if (arg2 == 0x25 && eax_3[6] == 0)
                    goto label_504232
            else if (eax_3[6] != 0)
            label_504232:
                int128_t xmm0_2
                eax_3, xmm0_2 = sub_5031a0(eax_3)
                ecx = data_e47264
                var_54 = 1
        
        struct HINSTANCE__* edx = ecx[1]
        
        if (edx != 8)
            goto label_5042a0
        
        if (arg2 == 0x20 || arg2 == 0xd)
            eax_3 = __mbsicmp(edx, "T")
            
            if (eax_3 == 0)
                void* const ecx_2 = &data_59cf5c
                
                if (__mbsicmp(*(*(data_e47264 + 4) + 0x10), U"T") != 0)
                    ecx_2 = &data_59d250
                
                enum REDRAW_WINDOW_FLAGS flags_1 = RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW
                HRGN hrgnUpdate_1 = nullptr
                *(*(data_e47264 + 4) + 0x10) = ecx_2
                RECT* lprcUpdate_1 = &var_3c
                var_78 = arg3
                RedrawWindow(var_78, lprcUpdate_1, hrgnUpdate_1, flags_1)
                eax_3 = sub_5063d0()
            
            goto label_504346
        
        if (arg2 != 0x1b)
            eax_3 = arg2 - 0x25
            
            if (eax_3 u> 3)
                goto label_5042a0
            
            int128_t xmm0_3
            eax_3, xmm0_3 = __mbsicmp(edx, "T")
            
            if (eax_3 != 0)
                ecx = data_e47264
            label_5042a0:
                
                if (arg2 != 9)
                    if (arg2 == 0x21)
                        WPARAM wParam_9 = 0x24
                        uint32_t Msg_13 = 0x100
                        var_78 = arg3
                        LRESULT eax_72 =
                            SendMessageA(var_78, Msg_13, wParam_9, zx.d(arg5) << 0x10 | zx.d(arg4))
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_72
                    
                    if (arg2 != 0x22)
                        goto label_504346
                    
                    WPARAM wParam_10 = 0x23
                    uint32_t Msg_14 = 0x100
                    var_78 = arg3
                    LRESULT eax_74 =
                        SendMessageA(var_78, Msg_14, wParam_10, zx.d(arg5) << 0x10 | zx.d(arg4))
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_74
                
                struct HINSTANCE__* edx_1 = ecx[9]
                void* __offset(HINSTANCE__, 0x15) edx_2
                
                if (ecx[1] != 4)
                    edx_2 = &edx_1->unused + 1
                else
                    edx_2 = edx_1 + 0x15
                
                var_3c.left = edx_2
                struct HINSTANCE__* lpString = ecx[1]
                HWND hWnd
                struct INITCOMMONCONTROLSEX picce
                
                switch (lpString)
                    case 0, 4
                        int128_t xmm0_4
                        xmm0_4.d = var_3c.left
                        xmm0_4:4.d = var_3c.top
                        xmm0_4:8.d = var_3c.right
                        xmm0_4:0xc.d = var_3c.bottom
                        var_78.o = xmm0_4
                        eax_3 = sub_503d80(&var_78, lpString, arg3, var_78)
                        goto label_504346
                    case 1, 2
                        uint128_t xmm0_5
                        xmm0_5.d = var_3c.left
                        xmm0_5:4.d = var_3c.top
                        xmm0_5:8.d = var_3c.right
                        xmm0_5:0xc.d = var_3c.bottom
                        picce.dwICC = _mm_bsrli_si128(xmm0_5, 4) + 1
                        
                        if (lpString != 1)
                            if (ecx[7] == 0)
                                *(data_e47264 + 0x1c) =
                                    sub_502e00(xmm0_5:0xc.d + 0x64, arg3, *ecx, 0x7d9, 1)
                                ecx = data_e47264
                        else if (ecx[7] == 0)
                            *(data_e47264 + 0x1c) =
                                sub_502e00(xmm0_5:0xc.d + 0x64, arg3, *ecx, 0x7d8, 0)
                            ecx = data_e47264
                        
                        HWND hWnd_1 = ecx[7]
                        LPARAM lParam_2 = 0
                        WPARAM wParam_1 = 0
                        uint32_t Msg_2 = 0x14b
                        var_78 = hWnd_1
                        SendMessageA(var_78, Msg_2, wParam_1, lParam_2)
                        enum INITCOMMONCONTROLSEX_ICC dwICC_1 = picce.dwICC
                        int32_t X_2 = xmm0_5.d
                        BOOL bRepaint = 1
                        var_78 = dwICC_1
                        MoveWindow(hWnd_1, X_2, var_78, xmm0_5:8.d - X_2, 
                            xmm0_5:0xc.d + 0x64 - dwICC_1, bRepaint)
                        struct HINSTANCE__ lParam_9 = lpString
                        
                        if (*lParam_9 != 0)
                            LRESULT eax_26
                            
                            do
                                WPARAM wParam_2 = 0
                                uint32_t Msg_3 = 0x158
                                var_78 = hWnd_1
                                
                                if (SendMessageA(var_78, Msg_3, wParam_2, lParam_9) == 0xffffffff)
                                    WPARAM wParam_3 = 0
                                    uint32_t Msg_4 = 0x143
                                    var_78 = hWnd_1
                                    SendMessageA(var_78, Msg_4, wParam_3, lParam_9)
                                
                                char* lParam_10 = lParam_9
                                
                                do
                                    eax_26.b = *lParam_10
                                    lParam_10 = &lParam_10[1]
                                while (eax_26.b != 0)
                                
                                lParam_9 = lParam_9 + 1 + lParam_10 - &lParam_10[1]
                            while (*lParam_9 != eax_26.b)
                        
                        ShowWindow(hWnd_1, SW_SHOW)
                        SetFocus(hWnd_1)
                        LPARAM lParam_3 = lpString
                        WPARAM wParam_4 = 0
                        uint32_t Msg_5 = 0x158
                        var_78 = hWnd_1
                        WPARAM wParam_12 = SendMessageA(var_78, Msg_5, wParam_4, lParam_3)
                        LPARAM lParam_4 = 0
                        
                        if (wParam_12 == 0xffffffff)
                            WPARAM wParam_5 = 0
                            uint32_t Msg_7 = 0x14e
                            var_78 = hWnd_1
                            SendMessageA(var_78, Msg_7, wParam_5, lParam_4)
                            SetWindowTextA(hWnd_1, lpString)
                            LPARAM lParam_5 = 0xffff0000
                            WPARAM wParam_6 = 0
                            uint32_t Msg_8 = 0x142
                            var_78 = hWnd_1
                            eax_3 = SendMessageA(var_78, Msg_8, wParam_6, lParam_5)
                        else
                            uint32_t Msg_6 = 0x14e
                            var_78 = hWnd_1
                            eax_3 = SendMessageA(var_78, Msg_6, wParam_12, lParam_4)
                        
                        goto label_504346
                    case 3, 0x63
                        hWnd = ecx[2]
                    label_504340:
                        eax_3 = SetFocus(hWnd)
                        goto label_504346
                    case 8
                        if ((0x8000 & GetKeyState(0x10)) == 0)
                            bool cond:5_1 = __mbsicmp(*(*(data_e47264 + 4) + 8), U"T") != 0
                            void* eax_55 = *(data_e47264 + 4)
                            
                            if (cond:5_1)
                                *(eax_55 + 8) = &data_59d250
                            else
                                *(eax_55 + 8) = &data_59cf5c
                                SetFocus(*(data_e47264 + 8))
                        else
                            WPARAM wParam_8 = 0x1b
                            uint32_t Msg_11 = 0x100
                            var_78 = arg3
                            SendMessageA(var_78, Msg_11, wParam_8, zx.d(arg5) << 0x10 | zx.d(arg4))
                        
                        goto label_504263
                    case 9
                        uint128_t xmm0_7
                        xmm0_7.d = var_3c.left
                        xmm0_7:4.d = var_3c.top
                        xmm0_7:8.d = var_3c.right
                        xmm0_7:0xc.d = var_3c.bottom
                        int32_t edx_6 = xmm0_7:8.d
                        HWND eax_28 = _mm_bsrli_si128(xmm0_7, 4) + 1
                        int32_t eax_29 = xmm0_7:0xc.d
                        
                        if (ecx[7] == 0)
                            struct HINSTANCE__* hInstance_1 = *ecx
                            picce.dwSize = 8
                            picce.dwICC = 0x800
                            HWND hWnd_2
                            
                            if (InitCommonControlsEx(&picce) != 0)
                                int32_t lpParam = 0
                                HMENU hMenu = 0x7d5
                                var_78 = arg3
                                hWnd_2 = CreateWindowExA(WS_EX_LEFT, "SysIPAddress32", nullptr, 
                                    WS_CHILD, 0x80000000, 0x80000000, xmm0_7:8.d - xmm0_7.d, 
                                    xmm0_7:0xc.d - eax_28, var_78, hMenu, hInstance_1, lpParam)
                                
                                if (hWnd_2 != 0)
                                    LPARAM lParam_6 = 0
                                    HGDIOBJ wParam_13 = GetStockObject(DEFAULT_GUI_FONT)
                                    uint32_t Msg_9 = 0x30
                                    var_78 = hWnd_2
                                    SendMessageA(var_78, Msg_9, wParam_13, lParam_6)
                                    SetPropA(hWnd_2, "Wprc", GetWindowLongA(hWnd_2, 0xfffffffc))
                                    SetWindowLongA(hWnd_2, 0xfffffffc, sub_501e60)
                            else
                                hWnd_2 = nullptr
                            
                            edx_6 = xmm0_7:8.d
                            *(data_e47264 + 0x1c) = hWnd_2
                            ecx = data_e47264
                            eax_29 = xmm0_7:0xc.d
                        
                        BOOL bRepaint_1 = 1
                        int32_t X_1 = xmm0_7.d
                        var_78 = eax_28
                        int32_t ecx_12
                        int32_t edx_8
                        ecx_12, edx_8 =
                            MoveWindow(ecx[7], X_1, var_78, edx_6 - X_1, eax_29 - eax_28, bRepaint_1)
                        int32_t var_1c = 0
                        int32_t var_10
                        int32_t* var_6c_15 = &var_10
                        int32_t var_18 = 0
                        int32_t var_14
                        int32_t* var_70_18 = &var_14
                        var_14 = 0
                        int32_t* var_74_5 = &var_18
                        var_10 = 0
                        var_78 = &var_1c
                        sub_4529c0(&var_1c, edx_8, ecx_12, lpString, "%hhu.%hhu.%hhu.%hhu")
                        LPARAM lParam_8 = (((((var_1c << 8) + var_18) << 8) + var_14) << 8) + var_10
                        WPARAM wParam_7 = 0
                        uint32_t Msg_10 = 0x465
                        var_78 = *(data_e47264 + 0x1c)
                        SendMessageA(var_78, Msg_10, wParam_7, lParam_8)
                        goto label_5047ba
                    case 0xa, 0xb, 0xc
                        int128_t xmm0_9
                        xmm0_9.d = var_3c.left
                        xmm0_9:4.d = var_3c.top
                        xmm0_9:8.d = var_3c.right
                        xmm0_9:0xc.d = var_3c.bottom
                        var_78.o = xmm0_9
                        eax_3 = sub_503ea0(&var_78, lpString, arg3, var_78)
                        goto label_504346
                    default
                        uint128_t xmm0_10
                        xmm0_10.d = var_3c.left
                        xmm0_10:4.d = var_3c.top
                        xmm0_10:8.d = var_3c.right
                        xmm0_10:0xc.d = var_3c.bottom
                        int32_t xmm0_11 = _mm_bsrli_si128(xmm0_10, 8)
                        int32_t var_44_2
                        int32_t X
                        
                        if (xmm0_11 - edx_2 s<= 0x13)
                            var_44_2 = xmm0_10:8.d
                            X = xmm0_10.d
                        else
                            X = xmm0_11 - 0x13
                            var_44_2 = xmm0_10:8.d - 2
                        
                        HWND esi_6 = xmm0_10:4.d + 2
                        enum INITCOMMONCONTROLSEX_ICC dwICC = xmm0_10:0xc.d - 2
                        picce.dwICC = dwICC
                        
                        if (ecx[7] == 0)
                            int32_t lpParam_1 = 0
                            struct HINSTANCE__* hInstance = *ecx
                            HMENU hMenu_1 = 0x7d4
                            var_78 = arg3
                            HWND eax_63 = CreateWindowExA(WS_EX_LEFT, "Button", &data_59cfc8, 
                                0x50000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, var_78, 
                                hMenu_1, hInstance, lpParam_1)
                            
                            if (eax_63 != 0)
                                SetWindowTheme(eax_63, &data_59cfa8, &data_59cfa8)
                                LPARAM lParam_7 = 0
                                HGDIOBJ wParam_14 = GetStockObject(DEFAULT_GUI_FONT)
                                uint32_t Msg_12 = 0x30
                                var_78 = eax_63
                                SendMessageA(var_78, Msg_12, wParam_14, lParam_7)
                                SetPropA(eax_63, "Wprc", GetWindowLongA(eax_63, 0xfffffffc))
                                SetWindowLongA(eax_63, 0xfffffffc, sub_502240)
                            
                            *(data_e47264 + 0x1c) = eax_63
                            ecx = data_e47264
                            dwICC = picce.dwICC
                        
                        BOOL bRepaint_2 = 1
                        var_78 = esi_6
                        MoveWindow(ecx[7], X, var_78, var_44_2 - X, dwICC - esi_6, bRepaint_2)
                    label_5047ba:
                        ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
                        hWnd = *(data_e47264 + 0x1c)
                        goto label_504340
        else
        label_504263:
            enum REDRAW_WINDOW_FLAGS flags = RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW
            HRGN hrgnUpdate = nullptr
            RECT* lprcUpdate = &var_3c
            var_78 = arg3
            eax_3 = RedrawWindow(var_78, lprcUpdate, hrgnUpdate, flags)
        label_504346:
            
            if (var_54 == 0)
                goto label_504362
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_3
}
