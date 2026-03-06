// 函数名称: sub_5068f0
// 虚拟地址: 0x5068f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __stdcallsub_5068f0(HWND arg1, uint32_t arg2, WPARAM arg3, HWND arg4)
{
    // 第一条实际指令: HWND var_e8
    HWND var_e8
    int32_t eax_1 = __security_cookie ^ &var_e8
    WPARAM wParam_11 = arg3
    HWND edi = arg4
    HWND var_e0 = edi
    var_e8 = wParam_11
    uint32_t Msg_1 = arg2
    HANDLE ecx = GetPropA(arg1, "lpInsData")
    data_e47264 = ecx
    int32_t var_f4_11
    int32_t eax_25
    HWND ecx_7
    
    if (Msg_1 u<= 0x18)
        if (Msg_1 == 0x18)
            if (wParam_11 == 0)
                SendMessageA(*(ecx + 0x1c), 0x102, 0xd, wParam_11)
                SendMessageA(*(data_e47264 + 0x20), 0x102, 0xd, 0)
                wParam_11 = var_e8
            
            DefWindowProcA(arg1, 0x18, wParam_11, edi)
            @__security_check_cookie@4(eax_1 ^ &var_e8)
            return 0
        
        if (Msg_1 - 1 u> 6)
            goto label_507bb1
        
        switch (Msg_1)
            case 1
                HINSTANCE hInstance_2
                _memset(&hInstance_2, 0, 0x5c)
                HINSTANCE hInstance = edi
                hInstance_2 = hInstance
                int32_t var_c8 = edi
                int128_t var_9c = zx.o(0)
                int32_t var_a4 = 0x50
                int32_t var_a0 = 0xffffffff
                HWND eax_6 = CreateWindowExA(0x2200, "ListBox", nullptr, 0x52300511, 0x80000000, 
                    0x80000000, 0x80000000, 0x80000000, arg1, 0x7d0, hInstance, nullptr)
                var_e8 = eax_6
                
                if (eax_6 != 0)
                    HGDIOBJ wParam_1 = GetStockObject(DEFAULT_GUI_FONT)
                    SendMessageA(var_e8, 0x30, wParam_1, 0)
                    int32_t hData = GetWindowLongA(var_e8, 0xfffffffc)
                    SetPropA(var_e8, "Wprc", hData)
                    SetWindowLongA(var_e8, 0xfffffffc, sub_506450)
                    HWND var_bc_1 = var_e8
                    HWND eax_8 = CreateWindowExA(WS_EX_LEFT, "ListBox", nullptr, 0x40000010, 
                        0x80000000, 0x80000000, 0x80000000, 0x80000000, arg1, 0x7d1, edi, nullptr)
                    
                    if (eax_8 != 0)
                        int32_t var_f4_2 = 0x5c
                        HWND var_b8 = eax_8
                        char* hData_1 = _malloc()
                        sub_51dd40(hData_1, &hInstance_2, 0x5c)
                        BOOL eax_9 = SetPropA(arg1, "lpInsData", hData_1)
                        int32_t eax_10 = neg.d(eax_9)
                        @__security_check_cookie@4(eax_1 ^ &var_e8)
                        return neg.d(sbb.d(eax_10, eax_10, eax_9 != 0)) - 1
                
                @__security_check_cookie@4(eax_1 ^ &var_e8)
                return neg.d(sbb.d(0, 0, false)) - 1
            case 2
                if (ecx != 0)
                    SendMessageA(*(ecx + 0x18), 0x184, 0, 0)
                    DestroyWindow(*(data_e47264 + 0x18))
                    DestroyWindow(*(data_e47264 + 0x14))
                    void* eax_19 = data_e47264
                    HWND hWnd_3 = *(eax_19 + 0xc)
                    
                    if (hWnd_3 != 0)
                        DestroyWindow(hWnd_3)
                        eax_19 = data_e47264
                    
                    HWND hWnd_4 = *(eax_19 + 0x10)
                    
                    if (hWnd_4 != 0)
                        DestroyWindow(hWnd_4)
                        eax_19 = data_e47264
                    
                    HWND hWnd_5 = *(eax_19 + 0x1c)
                    
                    if (hWnd_5 != 0)
                        DestroyWindow(hWnd_5)
                        eax_19 = data_e47264
                    
                    HWND hWnd_1 = *(eax_19 + 0x20)
                    
                    if (hWnd_1 != 0)
                        DestroyWindow(hWnd_1)
                    
                    HANDLE eax_20 = GetPropA(arg1, "lpInsData")
                    
                    if (eax_20 != 0)
                        _free(eax_20)
                        RemovePropA(arg1, "lpInsData")
                        @__security_check_cookie@4(eax_1 ^ &var_e8)
                        return 0
                
                @__security_check_cookie@4(eax_1 ^ &var_e8)
                return 0
            case 3, 4, 6
                goto label_507bb1
            case 5
                ecx_7 = arg1
                var_f4_11 = sx.d((edi u>> 0x10).w)
                eax_25 = sx.d(edi.w)
            label_506b8a:
                sub_504e90(eax_25, Msg_1, ecx_7, eax_25, var_f4_11)
                @__security_check_cookie@4(eax_1 ^ &var_e8)
                return 0
            case 7
                SetFocus(*(ecx + 0x14))
                @__security_check_cookie@4(eax_1 ^ &var_e8)
                return 0
    else
        RECT var_40
        
        if (Msg_1 u> 0x111)
            if (Msg_1 u<= 0x401)
                uint32_t Msg
                WPARAM wParam
                HWND lParam
                
                if (Msg_1 == 0x401)
                    if (edi != 0)
                        if (edi->unused.b == 0)
                            goto label_507bb1
                        
                        HWND esi_20 = edi
                        char i
                        
                        do
                            sub_504fb0(esi_20)
                            HWND ecx_80 = esi_20
                            
                            do
                                i = ecx_80->unused.b
                                ecx_80 = &ecx_80->unused + 1
                            while (i != 0)
                            
                            esi_20 = &esi_20->unused + 1 + ecx_80 - (&ecx_80->unused + 1)
                        while (esi_20->unused.b != i)
                        wParam_11 = var_e8
                        goto label_507bae
                    
                    sub_504fb0(nullptr)
                label_507bae:
                    Msg_1 = arg2
                label_507bb1:
                    lParam = edi
                    wParam = wParam_11
                    Msg = Msg_1
                else
                    if (Msg_1 - 0x134 u> 0xce)
                        goto label_507bb1
                    
                    switch (Msg_1)
                        case 0x134
                            uint32_t color = GetSysColor(COLOR_BTNFACE)
                            uint32_t color_1 = GetSysColor(COLOR_MENUTEXT)
                            DeleteObject(data_e49ef4)
                            HBRUSH eax_54 = CreateSolidBrush(color)
                            HWND hdc_2 = var_e8
                            data_e49ef4 = eax_54
                            SetTextColor(hdc_2, color_1)
                            SetBkColor(hdc_2, color)
                            int32_t eax_55 = data_e49ef4
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_55
                        case 0x135, 0x136, 0x137, 0x139, 0x13a, 0x13b, 0x13c, 0x13d, 0x13e, 0x13f, 
                                0x140, 0x141, 0x142, 0x143, 0x144, 0x145, 0x146, 0x147, 0x148, 0x149, 
                                0x14a, 0x14b, 0x14c, 0x14d, 0x14e, 0x14f, 0x150, 0x151, 0x152, 0x153, 
                                0x154, 0x155, 0x156, 0x157, 0x158, 0x159, 0x15a, 0x15b, 0x15c, 0x15d, 
                                0x15e, 0x15f, 0x160, 0x161, 0x162, 0x163, 0x164, 0x165, 0x166, 0x167, 
                                0x168, 0x169, 0x16a, 0x16b, 0x16c, 0x16d, 0x16e, 0x16f, 0x170, 0x171, 
                                0x172, 0x173, 0x174, 0x175, 0x176, 0x177, 0x178, 0x179, 0x17a, 0x17b, 
                                0x17c, 0x17d, 0x17e, 0x17f, 0x181, 0x183, 0x185, 0x189, 0x18a, 0x18c, 
                                0x18d, 0x18e, 0x18f, 0x190, 0x191, 0x192, 0x195, 0x196, 0x197, 0x19b, 
                                0x19c, 0x19d, 0x19e, 0x19f, 0x1a2, 0x1a3, 0x1a4, 0x1a5, 0x1a6, 0x1a7, 
                                0x1a8, 0x1a9, 0x1aa, 0x1ab, 0x1ac, 0x1ad, 0x1ae, 0x1af, 0x1b0, 0x1b1, 
                                0x1b2, 0x1b3, 0x1b4, 0x1b5, 0x1b6, 0x1b7, 0x1b8, 0x1b9, 0x1ba, 0x1bb, 
                                0x1bc, 0x1bd, 0x1be, 0x1bf, 0x1c0, 0x1c1, 0x1c2, 0x1c3, 0x1c4, 0x1c5, 
                                0x1c6, 0x1c7, 0x1c8, 0x1c9, 0x1ca, 0x1cb, 0x1cc, 0x1cd, 0x1ce, 0x1cf, 
                                0x1d0, 0x1d1, 0x1d2, 0x1d3, 0x1d4, 0x1d5, 0x1d6, 0x1d7, 0x1d8, 0x1d9, 
                                0x1da, 0x1db, 0x1dc, 0x1dd, 0x1de, 0x1df, 0x1e0, 0x1e1, 0x1e2, 0x1e3, 
                                0x1e4, 0x1e5, 0x1e6, 0x1e7, 0x1e8, 0x1e9, 0x1ea, 0x1eb, 0x1ec, 0x1ed, 
                                0x1ee, 0x1ef, 0x1f0, 0x1f1, 0x1f2, 0x1f3, 0x1f4, 0x1f5, 0x1f6, 0x1f7, 
                                0x1f8, 0x1f9, 0x1fa, 0x1fb, 0x1fc, 0x1fd, 0x1fe, 0x1ff
                            goto label_507bb1
                        case 0x138
                            if (*(ecx + 0x10) != 0)
                                RECT rect_1
                                GetClientRect(arg1, &rect_1)
                                void* ecx_31 = data_e47264
                                var_40.left = 0
                                var_40.top = *(ecx_31 + 0x28) - 2
                                var_40.right = rect_1.right - rect_1.left
                                var_40.bottom = *(ecx_31 + 0x28)
                                HDC hDC = GetDC(arg1)
                                HBRUSH eax_62 = CreateSolidBrush(GetSysColor(COLOR_BTNFACE))
                                FillRect(hDC, &var_40, eax_62)
                                DeleteObject(eax_62)
                                ReleaseDC(arg1, hDC)
                                edi = var_e0
                                wParam_11 = var_e8
                            
                            lParam = edi
                            wParam = wParam_11
                            Msg = 0x138
                        case 0x180
                            LRESULT eax_94 = sub_5059a0(edi)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_94
                        case 0x182
                            LRESULT lParam_2 = SendMessageA(*(ecx + 0x18), 0x199, wParam_11, 0)
                            
                            if (lParam_2 == 0xffffffff || lParam_2 == 0)
                                @__security_check_cookie@4(eax_1 ^ &var_e8)
                                return 0xffffffff
                            
                            LRESULT wParam_3 = SendMessageA(*(data_e47264 + 0x14), 0x18f, 0, lParam_2)
                            
                            if (wParam_3 != 0xffffffff)
                                SendMessageA(*(data_e47264 + 0x14), 0x182, wParam_3, 0)
                            
                            LRESULT eax_98 = SendMessageA(*(data_e47264 + 0x18), 0x182, wParam_11, 0)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_98
                        case 0x184
                            SendMessageA(*(ecx + 0x18), 0x184, 0, 0)
                            void* eax_110 = data_e47264
                            HWND hWnd_9 = *(eax_110 + 0x1c)
                            
                            if (hWnd_9 != 0)
                                DestroyWindow(hWnd_9)
                                *(data_e47264 + 0x1c) = 0
                                eax_110 = data_e47264
                            
                            HWND hWnd_10 = *(eax_110 + 0x20)
                            
                            if (hWnd_10 != 0)
                                DestroyWindow(hWnd_10)
                                *(data_e47264 + 0x20) = 0
                                eax_110 = data_e47264
                            
                            SendMessageA(*(eax_110 + 0x14), 0x184, 0, 0)
                            SetWindowTextA(*(data_e47264 + 0x10), &data_5559b1)
                            goto label_507bae
                        case 0x186
                            LRESULT lParam_5 = SendMessageA(*(ecx + 0x18), 0x199, wParam_11, 0)
                            
                            if (lParam_5 != 0xffffffff && lParam_5 != 0 && *(lParam_5 + 0x14) != 0x63)
                                LRESULT wParam_6 =
                                    SendMessageA(*(data_e47264 + 0x14), 0x18f, 0, lParam_5)
                                
                                if (wParam_6 != 0xffffffff)
                                    LRESULT eax_116 =
                                        SendMessageA(*(data_e47264 + 0x14), 0x186, wParam_6, 0)
                                    HWND eax_118 = *(data_e47264 + 0x14)
                                    WPARAM wParam_7 = zx.d(GetDlgCtrlID(eax_118)) | 0x10000
                                    SendMessageA(GetParent(*(data_e47264 + 0x14)), 0x111, wParam_7, 
                                        eax_118)
                                    
                                    if (*(lParam_5 + 0x14) == 8)
                                        *(lParam_5 + 8) = &data_59d250
                                    
                                    RedrawWindow(*(data_e47264 + 0x14), nullptr, nullptr, 
                                        RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                                    @__security_check_cookie@4(eax_1 ^ &var_e8)
                                    return eax_116
                            
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return 0xffffffff
                        case 0x187
                            LRESULT lParam_4 = SendMessageA(*(ecx + 0x18), 0x199, wParam_11, 0)
                            
                            if (lParam_4 == 0xffffffff || lParam_4 == 0 || *(lParam_4 + 0x14) == 0x63)
                                @__security_check_cookie@4(eax_1 ^ &var_e8)
                                return 0xffffffff
                            
                            LRESULT wParam_5 = SendMessageA(*(data_e47264 + 0x14), 0x18f, 0, lParam_4)
                            
                            if (wParam_5 == 0xffffffff)
                                @__security_check_cookie@4(eax_1 ^ &var_e8)
                                return 0
                            
                            LRESULT eax_109 = SendMessageA(*(data_e47264 + 0x14), 0x187, wParam_5, 0)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_109
                        case 0x188
                            LRESULT wParam_4 = SendMessageA(*(ecx + 0x14), 0x188, 0, 0)
                            
                            if (wParam_4 != 0xffffffff)
                                LRESULT lParam_3 =
                                    SendMessageA(*(data_e47264 + 0x14), 0x199, wParam_4, 0)
                                
                                if (lParam_3 != 0xffffffff && lParam_3 != 0
                                        && *(lParam_3 + 0x14) != 0x63)
                                    LRESULT eax_102 =
                                        SendMessageA(*(data_e47264 + 0x18), 0x18f, 0, lParam_3)
                                    @__security_check_cookie@4(eax_1 ^ &var_e8)
                                    return eax_102
                            
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return 0xffffffff
                        case 0x18b
                            LRESULT eax_100 = SendMessageA(*(ecx + 0x18), 0x18b, 0, 0)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_100
                        case 0x193
                            LRESULT eax_103 = SendMessageA(*(ecx + 0x14), 0x193, 0, 0)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_103
                        case 0x194
                            SendMessageA(*(ecx + 0x14), 0x194, wParam_11, 0)
                            goto label_507bae
                        case 0x198
                            LRESULT eax_106 = SendMessageA(*(ecx + 0x14), 0x198, wParam_11, edi)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_106
                        case 0x199
                            int32_t eax_104 = sub_505c70(wParam_11)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_104
                        case 0x19a
                            LRESULT eax_125 = sub_506040(wParam_11, edi)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_125
                        case 0x1a0
                            if (0x14 u> edi.w)
                                @__security_check_cookie@4(eax_1 ^ &var_e8)
                                return 0xffffffff
                            
                            LRESULT eax_126 = SendMessageA(*(ecx + 0x14), Msg_1, wParam_11, edi)
                            RedrawWindow(*(data_e47264 + 0x14), nullptr, nullptr, 
                                RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_126
                        case 0x1a1
                            LRESULT eax_105 = SendMessageA(*(ecx + 0x14), 0x1a1, wParam_11, 0)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return eax_105
                        case 0x200
                            int32_t esi_16 = *(ecx + 0x28)
                            int32_t edx_2 = sx.d((edi u>> 0x10).w)
                            PSTR lpCursorName
                            
                            if (edx_2 s< esi_16 - 5 || edx_2 s> esi_16 + 5)
                                if (*(ecx + 0x40) != 0)
                                    HDC hdc_1 = GetDC(arg1)
                                    var_e8 = hdc_1
                                    HGDIOBJ h_2 = SelectObject(hdc_1, CreatePen(PS_COSMETIC, 3, 0))
                                    void* ecx_42 = data_e47264
                                    int32_t y = *(ecx_42 + 0x48)
                                    int32_t x_6 = *(ecx_42 + 0x54)
                                    int32_t x_2 = *(ecx_42 + 0x58)
                                    int32_t rop2_2 = SetROP2(hdc_1, R2_NOT)
                                    HWND hdc_3 = var_e8
                                    MoveToEx(hdc_3, x_6, y, nullptr)
                                    LineTo(hdc_3, x_2, y)
                                    SetROP2(hdc_3, rop2_2)
                                    HWND hdc = var_e8
                                    *(data_e47264 + 0x48) = edx_2
                                    void* eax_89 = data_e47264
                                    int32_t y_1 = *(eax_89 + 0x48)
                                    int32_t x_7 = *(eax_89 + 0x54)
                                    int32_t x_3 = *(eax_89 + 0x58)
                                    int32_t rop2_3 = SetROP2(hdc, R2_NOT)
                                    HDC esi_17 = var_e8
                                    MoveToEx(esi_17, x_7, y_1, nullptr)
                                    LineTo(esi_17, x_3, y_1)
                                    SetROP2(esi_17, rop2_3)
                                    DeleteObject(SelectObject(esi_17, h_2))
                                    ReleaseDC(arg1, esi_17)
                                    @__security_check_cookie@4(eax_1 ^ &var_e8)
                                    return 0
                                
                                lpCursorName = 0x7f00
                            else
                                lpCursorName = 0x7f85
                            
                            SetCursor(LoadCursorA(nullptr, lpCursorName))
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return 0
                        case 0x201
                            int32_t ecx_32 = *(ecx + 0x28)
                            int32_t edi_4 = sx.d((edi u>> 0x10).w)
                            
                            if (edi_4 s< ecx_32 - 5 || edi_4 s> ecx_32 + 5)
                                @__security_check_cookie@4(eax_1 ^ &var_e8)
                                return 0
                            
                            SetCursor(LoadCursorA(nullptr, 0x7f85))
                            GetWindowRect(arg1, &var_40)
                            var_40.top += 0xa
                            var_40.bottom -= 0xa
                            ClipCursor(&var_40)
                            *(data_e47264 + 0x40) = 1
                            *(data_e47264 + 0x54) = 0
                            *(data_e47264 + 0x58) = var_40.right - var_40.left
                            *(data_e47264 + 0x48) = edi_4
                            HDC eax_70 = GetDC(arg1)
                            HGDIOBJ h = SelectObject(eax_70, CreatePen(PS_COSMETIC, 3, 0))
                            void* ecx_35 = data_e47264
                            int32_t x_4 = *(ecx_35 + 0x54)
                            var_e8 = *(ecx_35 + 0x48)
                            int32_t x = *(ecx_35 + 0x58)
                            int32_t rop2 = SetROP2(eax_70, R2_NOT)
                            MoveToEx(eax_70, x_4, var_e8, nullptr)
                            LineTo(eax_70, x, var_e8)
                            SetROP2(eax_70, rop2)
                            DeleteObject(SelectObject(eax_70, h))
                            ReleaseDC(arg1, eax_70)
                            SetCapture(arg1)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return 0
                        case 0x202
                            int32_t edi_8 = sx.d((edi u>> 0x10).w)
                            
                            if (*(ecx + 0x40) == 0)
                                @__security_check_cookie@4(eax_1 ^ &var_e8)
                                return 0
                            
                            *(ecx + 0x40) = 0
                            
                            if (arg1 == GetCapture())
                                ReleaseCapture()
                            
                            ClipCursor(nullptr)
                            *(data_e47264 + 0x48) = edi_8
                            HDC eax_77 = GetDC(arg1)
                            HGDIOBJ h_1 = SelectObject(eax_77, CreatePen(PS_COSMETIC, 3, 0))
                            void* ecx_38 = data_e47264
                            int32_t x_5 = *(ecx_38 + 0x54)
                            var_e8 = *(ecx_38 + 0x48)
                            int32_t x_1 = *(ecx_38 + 0x58)
                            int32_t rop2_1 = SetROP2(eax_77, R2_NOT)
                            MoveToEx(eax_77, x_5, var_e8, nullptr)
                            LineTo(eax_77, x_1, var_e8)
                            SetROP2(eax_77, rop2_1)
                            DeleteObject(SelectObject(eax_77, h_1))
                            ReleaseDC(arg1, eax_77)
                            Msg_1 = GetClientRect(arg1, &var_40)
                            *(data_e47264 + 0x2c) = var_40.bottom - var_40.top - edi_8
                            ecx_7 = arg1
                            var_f4_11 = var_40.bottom - var_40.top
                            eax_25 = var_40.right - var_40.left
                            goto label_506b8a
                
                LRESULT eax_152 = DefWindowProcA(arg1, Msg, wParam, lParam)
                @__security_check_cookie@4(eax_1 ^ &var_e8)
                return eax_152
            
            if (Msg_1 - 0x402 u> 3)
                goto label_507bb1
            
            switch (Msg_1)
                case 0x402
                    if (edi == 0)
                        sub_505060(nullptr)
                        goto label_507bae
                    
                    if (edi->unused.b == 0)
                        goto label_507bb1
                    
                    char i_1
                    
                    do
                        sub_505060(edi)
                        HWND ecx_87 = edi
                        
                        do
                            i_1 = ecx_87->unused.b
                            ecx_87 = &ecx_87->unused + 1
                        while (i_1 != 0)
                        
                        edi = &edi->unused + 1 + ecx_87 - (&ecx_87->unused + 1)
                    while (edi->unused.b != i_1)
                    edi = var_e0
                    goto label_507bae
                case 0x403
                    if (wParam_11 == 0)
                        DestroyWindow(*(ecx + 0xc))
                        *(data_e47264 + 0xc) = 0
                        goto label_507bae
                    
                    if (*(ecx + 0xc) != 0)
                        goto label_507bb1
                    
                    HWND eax_132 = *(ecx + 0x14)
                    HINSTANCE hInstance_1 = *ecx
                    HWND hWnd_2 = CreateWindowExA(WS_EX_TOPMOST, "tooltips_class32", nullptr, 
                        0x80000003, 0x80000000, 0x80000000, 0x80000000, 0x80000000, eax_132, nullptr, 
                        hInstance_1, nullptr)
                    var_e8 = hWnd_2
                    int32_t lParam_1
                    int32_t var_68
                    RECT rect
                    char* const var_48
                    
                    if (hWnd_2 != 0)
                        SetWindowPos(hWnd_2, 0xffffffff, 0, 0, 0, 0, 0x13)
                        HGDIOBJ wParam_8 = GetStockObject(DEFAULT_GUI_FONT)
                        SendMessageA(var_e8, 0x30, wParam_8, 0)
                        GetClientRect(eax_132, &var_40)
                        HWND var_64_1 = eax_132
                        HINSTANCE hInstance_3 = hInstance_1
                        rect.left = var_40.left
                        rect.top = var_40.top
                        rect.right = var_40.right
                        rect.bottom = var_40.bottom
                        HWND hWnd = var_e8
                        lParam_1 = 0x2c
                        var_68 = 0x10
                        int32_t var_60_1 = 0
                        var_48 = &data_5559b1
                        SendMessageA(hWnd, 0x404, 0, &lParam_1)
                    else
                        var_e8 = hWnd_2
                    
                    *(data_e47264 + 0xc) = var_e8
                    void* eax_140 = data_e47264
                    
                    if (*(eax_140 + 0xc) != 0)
                        lParam_1 = 0x2c
                        var_68.o = zx.o(0)
                        rect.top = 0
                        rect.right = 0
                        rect.bottom = 0
                        var_48.q = 0
                        int32_t var_64_2 = *(eax_140 + 0x14)
                        int32_t var_60_2 = 0
                        GetClientRect(arg1, &rect)
                        SendMessageA(*(data_e47264 + 0xc), 0x406, 0, &lParam_1)
                        ShowWindow(*(data_e47264 + 0xc), SW_SHOW)
                    
                    goto label_507bae
                case 0x404
                    if (wParam_11 == 0)
                        DestroyWindow(*(ecx + 0x10))
                        *(data_e47264 + 0x10) = 0
                    else
                        if (*(ecx + 0x10) == 0)
                            HWND eax_145 = CreateWindowExA(WS_EX_CLIENTEDGE, "Static", nullptr, 
                                WS_CHILD, 0x80000000, 0x80000000, 0x80000000, 0x80000000, arg1, 0x7d2, 
                                *ecx, nullptr)
                            var_e8 = eax_145
                            
                            if (eax_145 != 0)
                                HGDIOBJ wParam_9 = GetStockObject(DEFAULT_GUI_FONT)
                                SendMessageA(var_e8, 0x30, wParam_9, 0)
                            else
                                var_e8 = eax_145
                            
                            *(data_e47264 + 0x10) = var_e8
                            ecx = data_e47264
                        
                        ShowWindow(*(ecx + 0x10), SW_SHOW)
                    
                    int32_t edx_6 = GetClientRect(arg1, &var_40)
                    int32_t eax_151 = var_40.right - var_40.left
                    sub_504e90(eax_151, edx_6, arg1, eax_151, var_40.bottom - var_40.top)
                    goto label_507bae
                case 0x405
                    int32_t eax_129 = GetWindowLongA(*(ecx + 0x14), 0xffffffeb)
                    int32_t dwNewLong = eax_129 | 1
                    
                    if (wParam_11 == 0)
                        dwNewLong = eax_129 & 0xfffffffe
                    
                    int32_t eax_131 = SetWindowLongA(*(data_e47264 + 0x14), 0xffffffeb, dwNewLong)
                    @__security_check_cookie@4(eax_1 ^ &var_e8)
                    return eax_131
        else
            if (Msg_1 == 0x111)
                if (*(ecx + 0x14) == edi)
                    uint32_t esi_4 = wParam_11 u>> 0x10
                    
                    if (esi_4 == 1)
                        SetFocus(edi)
                        LRESULT eax_42 = SendMessageA(edi, 0x188, esi_4 - 1, esi_4 - 1)
                        void* ecx_23 = data_e47264
                        var_e8 = eax_42
                        LRESULT eax_43 = SendMessageA(edi, 0x199, *(ecx_23 + 0x30), 0)
                        
                        if (eax_43 != 0xffffffff && eax_43 != 0 && *(eax_43 + 0x14) == 8
                                && var_e8 != *(data_e47264 + 0x30) && __mbsicmp(*(eax_43 + 8), T") == 0)
                            *(eax_43 + 8) = &data_59cf5c
                        
                        HWND wParam_10 = var_e8
                        LRESULT eax_46 = SendMessageA(edi, 0x199, wParam_10, 0)
                        
                        if (eax_46 == 0xffffffff)
                            eax_46 = 0
                        
                        *(data_e47264 + 4) = eax_46
                        void* eax_47 = data_e47264
                        void* edx_1 = *(eax_47 + 4)
                        
                        if (edx_1 != 0)
                            HWND hWnd_6 = *(eax_47 + 0x10)
                            
                            if (hWnd_6 != 0)
                                SetWindowTextA(hWnd_6, *(edx_1 + 0xc))
                                eax_47 = data_e47264
                            
                            HWND hWnd_7 = *(eax_47 + 0x1c)
                            
                            if (hWnd_7 != 0)
                                DestroyWindow(hWnd_7)
                                *(data_e47264 + 0x1c) = 0
                                eax_47 = data_e47264
                            
                            HWND hWnd_8 = *(eax_47 + 0x20)
                            
                            if (hWnd_8 != 0)
                                DestroyWindow(hWnd_8)
                                *(data_e47264 + 0x20) = 0
                                eax_47 = data_e47264
                            
                            WPARAM wParam_2 = *(eax_47 + 0x30)
                            
                            if (wParam_10 != wParam_2)
                                __builtin_memset(&var_40, 0, 0x10)
                                SendMessageA(edi, 0x198, wParam_2, &var_40)
                                RedrawWindow(edi, &var_40, nullptr, 
                                    RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                                SendMessageA(edi, 0x198, var_e8, &var_40)
                                RedrawWindow(edi, &var_40, nullptr, 
                                    RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                                *(data_e47264 + 0x30) = var_e8
                                @__security_check_cookie@4(eax_1 ^ &var_e8)
                                return 0
                
                @__security_check_cookie@4(eax_1 ^ &var_e8)
                return 0
            
            if (Msg_1 - 0x20 u> 0xd)
                goto label_507bb1
            
            switch (Msg_1 + &jump_table_507bd4[4])
                case &lookup_table_507c04
                    void* eax_39 = *(ecx + 4)
                    
                    if (eax_39 == 0 || *(ecx + 0x40) == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_e8)
                        return 0
                    
                    if (*(eax_39 + 0x14) == 8)
                        *(eax_39 + 8) = &data_59d250
                        ecx = data_e47264
                    
                    *(ecx + 0x40) = 0
                    SendMessageA(*(data_e47264 + 0x14), 0x100, 9, 0)
                    @__security_check_cookie@4(eax_1 ^ &var_e8)
                    return 0
                case &lookup_table_507c04[1], &lookup_table_507c04[2], &lookup_table_507c04[3], 
                        &lookup_table_507c04[4], &lookup_table_507c04[5], &lookup_table_507c04[6], 
                        &lookup_table_507c04[7], &lookup_table_507c04[8], &lookup_table_507c04[9], 
                        &lookup_table_507c04[0xa]
                    goto label_507bb1
                case &lookup_table_507c04[0xb]
                    sub_505110(ecx, edi)
                    @__security_check_cookie@4(eax_1 ^ &var_e8)
                    return 0
                case &lookup_table_507c04[0xc]
                    MulDiv(0x14, GetDeviceCaps(GetDC(arg1), 0x5a), 0x60)
                    @__security_check_cookie@4(eax_1 ^ &var_e8)
                    return 0
                case &lookup_table_507c04[0xd]
                    int32_t eax_37 = edi
                    
                    if (*(ecx + 0x18) == eax_37)
                        int32_t* esi_3 = edi
                        _free(*esi_3)
                        _free(esi_3[1])
                        
                        if (esi_3[5] != 8)
                            _free(esi_3[4])
                            _free(esi_3[2])
                        
                        _free(esi_3[3])
                        _free(esi_3)
                        eax_37 = edi
                        ecx = data_e47264
                    
                    if (*(ecx + 0x14) == eax_37)
                        int32_t* ecx_18 = edi
                        
                        if (ecx_18[5] == 0x63)
                            sub_501770(ecx_18)
                            @__security_check_cookie@4(eax_1 ^ &var_e8)
                            return 0
                    
                    @__security_check_cookie@4(eax_1 ^ &var_e8)
                    return 0
}
