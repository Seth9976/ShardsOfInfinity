// 函数名称: sub_4cb910
// 虚拟地址: 0x4cb910
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_4cb910(HWND arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void var_108
    void var_108
    int32_t eax_1 = __security_cookie ^ &var_108
    int32_t* ecx = data_ce26e4
    
    if (ecx != 0)
        if (ecx[1] != 0x19)
            goto label_4cb95d
        
        if (sub_4459f0(ecx) != 0)
        label_4cb97c:
            int32_t ecx_1 = data_ce1cc0
            HWND (__stdcall* const hWnd_5)(HWND hDlg, int32_t nIDDlgItem) = GetDlgItem
            int32_t var_118_1
            char const* const var_114_1
            HWND (__stdcall* const hWnd_4)(HWND hDlg, int32_t nIDDlgItem)
            char* ecx_2
            int32_t* ecx_4
            
            if (ecx_1 == 0 || arg2 != ecx_1)
                ecx_4 = arg4
            label_4cbdbf:
                int32_t var_ec
                
                if (arg2 u<= 0x200)
                    if (arg2 == 0x200)
                        bool cond:1 = data_ce1c9d == 0
                        int32_t edi_19 = sx.d((ecx_4 u>> 0x10).w)
                        int32_t hWnd_9 = sx.d(ecx_4.w)
                        hWnd_4 = hWnd_9
                        
                        if (cond:1)
                            sub_4c8e60(hWnd_9, hWnd_9, &hWnd_4, edi_19)
                            HWND (__stdcall* const hWnd_11)(HWND hDlg, int32_t nIDDlgItem) = hWnd_4
                            
                            if (hWnd_11 == 1)
                                data_ce1c98 = var_ec
                                data_ce1c9c = 0
                            else if (hWnd_11 != 2)
                                data_ce1c98 = 0xffffffff
                            else
                                data_ce1c98 = var_ec
                                data_ce1c9c = 1
                        else
                            sub_4c97d0(hWnd_9, edi_19)
                            int32_t* eax_156 = sub_4c6d50()
                            
                            if (eax_156 == 0)
                            label_4cd223:
                                sub_44e4d0(eax_156, &data_5559b1, "pNode", 
                                    "c:\ax2017\engine\windows\editorwindow.cpp", 0x747, 
                                    "EditorMoveNode")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t esi_32 = data_ce1c94
                            
                            if (esi_32 s< 0 || esi_32 s>= eax_156[1])
                                goto label_4cd223
                            
                            int32_t esi_33 = esi_32 << 4
                            int32_t* esi_34 = esi_33 + *eax_156
                            
                            if (esi_33 == neg.d(*eax_156))
                                goto label_4cd223
                            
                            float hWnd_10
                            float edx_30
                            hWnd_10, edx_30 = sub_4c72d0(hWnd_4, edi_19)
                            bool cond:3_1 = data_ce1c9c != 0
                            float xmm0_1 = edx_30
                            hWnd_4 = hWnd_10
                            
                            if (not(cond:3_1))
                                float xmm1_2 = esi_34[1] f- *esi_34
                                *esi_34 = xmm0_1
                                xmm0_1 = xmm0_1 + xmm1_2
                            
                            esi_34[1] = xmm0_1
                            esi_34[2] = hWnd_4
                            sub_4c99a0()
                            sub_4c68c0(sub_4c7e30())
                        
                        GetWindowRect(GetDlgItem(data_ce1c90, 0x80), &hWnd_4)
                        ScreenToClient(data_ce1c90, &hWnd_4)
                        POINT point
                        ScreenToClient(data_ce1c90, &point)
                        int128_t xmm0_3 = hWnd_4.o
                        RECT rect
                        rect.left = xmm0_3.d
                        rect.top = xmm0_3:4.d
                        rect.right = xmm0_3:8.d
                        rect.bottom = xmm0_3:0xc.d
                        InvalidateRect(data_ce1c90, &rect, 0)
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 0
                    
                    if (arg2 == 0x110)
                        hWnd_5 = MakeDragList(GetDlgItem(arg1, 0x76))
                        
                        if (hWnd_5 != 0)
                            data_ce1cc0 = RegisterWindowMessageA("commctrl_DragListMsg")
                            @__security_check_cookie@4(eax_1 ^ &var_108)
                            return 0
                        
                        var_114_1 = "ParamsDialogWndProc"
                        var_118_1 = 0xc8b
                        ecx_2 = "result"
                        goto label_4cd255
                    
                    void var_b8
                    
                    if (arg2 == 0xf)
                        sub_4c9c90(BeginPaint(arg1, &var_b8))
                        EndPaint(arg1, &var_b8)
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 0
                    
                    if (arg2 == 0x7b)
                        HWND eax_28 = GetDlgItem(data_ce1c90, 0x76)
                        
                        if (arg3 == eax_28)
                            int32_t edi_3 = sx.d(arg4.w)
                            int32_t y = sx.d((arg4 u>> 0x10).w)
                            HMENU hMenu = CreatePopupMenu()
                            int32_t y_1 = y
                            int32_t hWnd_6 = LBItemFromPt(eax_28, edi_3, 0)
                            hWnd_4 = hWnd_6
                            HMENU hMenu_1
                            
                            if (hWnd_6 == 0xffffffff)
                                SendMessageA(eax_28, 0x186, 0xffffffff, 0)
                                SendMessageA(GetDlgItem(data_ce1c90, 0x7b), 0x184, 0, 0)
                                sub_4c7e30()
                                sub_4c7940()
                                sub_4c7bd0(sub_4c7b00())
                                sub_4c7d50()
                                hMenu_1 = hMenu
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa0, "Add Root")
                            else
                                sub_4c9ab0()
                                int32_t eax_31 = sub_4c7440(hWnd_6)
                                int32_t edi_5 = hWnd_6 - 1
                                
                                if (hWnd_6 - 1 s< 0)
                                label_4cbe72:
                                    edi_5 = 0xffffffff
                                else
                                    while (true)
                                        int32_t eax_32 = sub_4c7440(edi_5)
                                        
                                        if (eax_32 s< eax_31)
                                            goto label_4cbe72
                                        
                                        if (eax_32 == eax_31)
                                            break
                                        
                                        int32_t temp7_1 = edi_5
                                        edi_5 -= 1
                                        
                                        if (temp7_1 - 1 s< 0)
                                            goto label_4cbe72
                                
                                HWND (__stdcall* hWnd_12)(HWND hDlg, int32_t nIDDlgItem)
                                hWnd_12.b = sub_4c75d0(hWnd_4) == 0xffffffff
                                hWnd_4 = hWnd_12
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa0, "Add Child")
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa1, "Add Sibling")
                                hMenu_1 = hMenu
                                int32_t eax_34
                                eax_34.b = edi_5 == 0xffffffff
                                InsertMenuA(hMenu_1, 0xffffffff, eax_34 + 0x400, 0xa3, 
                                    "Sibling Order Up")
                                InsertMenuA(hMenu_1, 0xffffffff, hWnd_4 | 0x400, 0xa4, 
                                    "Sibling Order Down")
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa5, "Delete")
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa6, "Duplicate")
                                InsertMenuA(hMenu_1, 0xffffffff, 0xc00, 0, &data_5559b1)
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa7, "Hide")
                                InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0xa8, "Show")
                            
                            TrackPopupMenu(hMenu_1, TPM_LEFTBUTTON, edi_3, y, 0, arg1, nullptr)
                            @__security_check_cookie@4(eax_1 ^ &var_108)
                            return 0
                    
                    if (arg2 == 0x111)
                        uint32_t esi_13 = zx.d(arg3.w)
                        uint32_t edi_6 = arg3 u>> 0x10
                        
                        if (edi_6 == 1 && (esi_13 == 0x76 || esi_13 == 0x7b))
                            sub_4c9ab0()
                            data_ce1c94 = 0
                            @__security_check_cookie@4(eax_1 ^ &var_108)
                            return 0
                        
                        if (esi_13 == 0x81 || esi_13 == 0x82 || esi_13 == 0x83 || esi_13 == 0x96)
                            if (edi_6 == 0x300)
                                ecx_4 = sub_4c9d80()
                            else if (edi_6 == 0x200)
                                ecx_4 = 0xffffffff
                                sub_4c9ab0()
                        
                        if ((esi_13 == 0x90 || esi_13 == 0x91) && edi_6 == 1)
                            ecx_4 = sub_4c9d80()
                        
                        if (esi_13 != 0x97 && esi_13 != 0x98)
                            if (edi_6 == 0)
                                goto label_4cc19b
                            
                            goto label_4cc137
                        
                        LRESULT eax_46
                        void* ecx_93
                        void* edi_14
                        bool cond:12_1
                        
                        if (edi_6 != 0)
                        label_4cc137:
                            
                            if (edi_6 != 2)
                                if (edi_6 == 0)
                                label_4cc812:
                                    
                                    if (esi_13 == 0x8e)
                                        sub_4d18b0(ecx_4)
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    if (esi_13 != 0x8f)
                                        goto label_4ccadc
                                    
                                    sub_4d1c00(ecx_4)
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                LRESULT var_118_29
                                char* var_114_13
                                char* eax_110
                                int32_t* hWnd_15
                                
                                if (edi_6 == 1)
                                    if (esi_13 != 0x8c)
                                        goto label_4ccadc
                                    
                                    int32_t* ecx_109 = data_ce26e4
                                    LRESULT var_f8_4
                                    
                                    if (ecx_109 == 0 || ecx_109[1] != 0x19)
                                        var_f8_4 = 0
                                    else if (sub_4459f0(ecx_109) == 0)
                                        var_f8_4 = 0
                                    else
                                        HWND hWnd_1 = GetDlgItem(data_ce1c90, 0x7b)
                                        hWnd_4 = hWnd_1
                                        LRESULT wParam_1 = SendMessageA(hWnd_1, 0x188, 0, 0)
                                        
                                        if (wParam_1 == 0xffffffff)
                                            var_f8_4 = 0
                                        else
                                            var_f8_4 = SendMessageA(hWnd_4, 0x199, wParam_1, 0)
                                    
                                    hWnd_5 = sub_4c6a60()
                                    hWnd_4 = hWnd_5
                                    
                                    if (hWnd_5 == 0)
                                        var_114_1 = "EditorSetBool"
                                        var_118_1 = 0xa80
                                        ecx_2 = "pEmitter"
                                        goto label_4cd255
                                    
                                    char* esi_21 = nullptr
                                    eax_110 = SendMessageA(GetDlgItem(data_ce1c90, 0x8c), 0x188, 0, 0)
                                    hWnd_15 = hWnd_4
                                    
                                    if (eax_110 == 0)
                                        esi_21 = 1
                                    
                                    var_114_13 = esi_21
                                    var_118_29 = var_f8_4
                                    goto label_4cc939
                                
                                if (edi_6 != 0x300)
                                    goto label_4ccadc
                                
                                if (esi_13 != 0x93)
                                    if (esi_13 != 0x94)
                                        goto label_4ccadc
                                    
                                    int32_t* ecx_115 = data_ce26e4
                                    LRESULT esi_25
                                    
                                    if (ecx_115 == 0 || ecx_115[1] != 0x19)
                                        esi_25 = 0
                                    else if (sub_4459f0(ecx_115) == 0)
                                        esi_25 = 0
                                    else
                                        HWND hWnd_3 = GetDlgItem(data_ce1c90, 0x7b)
                                        WPARAM wParam_3 = SendMessageA(hWnd_3, 0x188, 0, 0)
                                        
                                        if (wParam_3 == 0xffffffff)
                                            esi_25 = 0
                                        else
                                            esi_25 = SendMessageA(hWnd_3, 0x199, wParam_3, 0)
                                    
                                    int32_t* hWnd_18 = sub_4c6a60()
                                    
                                    if (hWnd_18 != 0)
                                        void string
                                        GetDlgItemTextA(data_ce1c90, 0x94, &string, 0x50)
                                        eax_110 = __atoi64(&string)
                                        hWnd_15 = hWnd_18
                                        var_114_13 = eax_110
                                        var_118_29 = esi_25
                                        goto label_4cc939
                                    
                                    sub_44e4d0(hWnd_18, &data_5559b1, "pEmitter", 
                                        "c:\ax2017\engine\windows\editorwindow.cpp", 0xaa7, 
                                        "EditorSetInt")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                int32_t* ecx_113 = data_ce26e4
                                LRESULT esi_23
                                
                                if (ecx_113 == 0 || ecx_113[1] != 0x19)
                                    esi_23 = 0
                                else if (sub_4459f0(ecx_113) == 0)
                                    esi_23 = 0
                                else
                                    HWND hWnd_2 = GetDlgItem(data_ce1c90, 0x7b)
                                    WPARAM wParam_2 = SendMessageA(hWnd_2, 0x188, 0, 0)
                                    
                                    if (wParam_2 == 0xffffffff)
                                        esi_23 = 0
                                    else
                                        esi_23 = SendMessageA(hWnd_2, 0x199, wParam_2, 0)
                                
                                int32_t* hWnd_17 = sub_4c6a60()
                                
                                if (hWnd_17 == 0)
                                    sub_44e4d0(hWnd_17, &data_5559b1, "pEmitter", 
                                        "c:\ax2017\engine\windows\editorwindow.cpp", 0xa94, 
                                        "EditorSetString")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                char* eax_115 = sub_4b8a40(
                                    GetDlgItemTextA(data_ce1c90, 0x93, &var_b8, 0x50), hWnd_17, 
                                    &data_5b39c8, esi_23)
                                void* ecx_114 = &var_b8
                                int32_t eax_117
                                
                                while (true)
                                    char edx_22 = *eax_115
                                    char temp9_1 = *ecx_114
                                    bool c_1 = edx_22 u< temp9_1
                                    
                                    if (edx_22 == temp9_1)
                                        if (edx_22 == 0)
                                            eax_117 = 0
                                            break
                                        
                                        edx_22 = eax_115[1]
                                        char temp11_1 = *(ecx_114 + 1)
                                        c_1 = edx_22 u< temp11_1
                                        
                                        if (edx_22 == temp11_1)
                                            eax_115 = &eax_115[2]
                                            ecx_114 += 2
                                            
                                            if (edx_22 != 0)
                                                continue
                                            
                                            eax_117 = 0
                                            break
                                    
                                    eax_117 = sbb.d(eax_115, eax_115, c_1) | 1
                                    break
                                
                                if (eax_117 != 0)
                                    eax_110 = &var_b8
                                    hWnd_15 = hWnd_17
                                    var_114_13 = &var_b8
                                    var_118_29 = esi_23
                                label_4cc939:
                                    sub_4c68c0(sub_4b8610(eax_110, hWnd_15, &data_5b39c8, var_118_29, 
                                        var_114_13))
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                            else if (esi_13 != 0x7b)
                            label_4ccadc:
                                
                                if (esi_13 == 0xa0)
                                    ecx_4.b = 1
                                    sub_4cb350(ecx_4.b)
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                if (esi_13 == 0xa1)
                                    ecx_4.b = 0
                                    sub_4cb350(ecx_4.b)
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                if (esi_13 == 0xa3)
                                    int32_t* ecx_120 = data_ce26e4
                                    
                                    if (ecx_120 != 0 && ecx_120[1] == 0x19)
                                        int32_t* eax_122 = sub_4459f0(ecx_120)
                                        
                                        if (eax_122 != 0)
                                            LRESULT eax_124 =
                                                SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
                                            
                                            if (eax_124 != 0xffffffff)
                                                edi_14 = eax_124 - 1
                                                hWnd_4 = sub_4c7440(eax_124)
                                                void* var_dc_1 = edi_14
                                                
                                                if (edi_14 s>= 0)
                                                    while (true)
                                                        int32_t eax_126 = sub_4c7440(edi_14)
                                                        HWND (__stdcall* const hWnd_16)(HWND hDlg, 
                                                            int32_t nIDDlgItem) = hWnd_4
                                                        
                                                        if (eax_126 s< hWnd_16)
                                                            goto label_4cd19b
                                                        
                                                        if (eax_126 == hWnd_16)
                                                            break
                                                        
                                                        void* temp12_1 = edi_14
                                                        edi_14 -= 1
                                                        var_dc_1 = edi_14
                                                        
                                                        if (temp12_1 - 1 s< 0)
                                                            @__security_check_cookie@4(eax_1 ^ &var_108)
                                                            return 0
                                                    
                                                    if (edi_14 != 0xffffffff)
                                                        int32_t eax_128
                                                        eax_128, ecx_93 = sub_4c7540(eax_124)
                                                        int32_t i_5 = eax_128 + 1
                                                        
                                                        if (eax_128 + 1 s> 0)
                                                            LRESULT edi_17 = eax_124
                                                            HWND (__stdcall* const hWnd_7)(HWND hDlg, 
                                                                int32_t nIDDlgItem) = edi_14 - edi_17
                                                            hWnd_4 = hWnd_7
                                                            int32_t i
                                                            
                                                            do
                                                                void* esi_27 = hWnd_7 + edi_17
                                                                int32_t* eax_131 =
                                                                    sub_48c3c0(data_e46fcc, 0)
                                                                sub_4d2e30(eax_131, eax_131, eax_122, 
                                                                    edi_17, esi_27)
                                                                ecx_93 = sub_4cab30(edi_17, esi_27)
                                                                hWnd_7 = hWnd_4
                                                                edi_17 += 1
                                                                i = i_5
                                                                i_5 -= 1
                                                            while (i != 1)
                                                            edi_14 = var_dc_1
                                                        
                                                        goto label_4cc6c1
                                else if (esi_13 == 0xa4)
                                    int32_t* ecx_129 = data_ce26e4
                                    
                                    if (ecx_129 != 0 && ecx_129[1] == 0x19)
                                        int32_t* eax_132 = sub_4459f0(ecx_129)
                                        
                                        if (eax_132 != 0)
                                            LRESULT eax_134 =
                                                SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
                                            
                                            if (eax_134 != 0xffffffff)
                                                HWND (__stdcall* hWnd_8)(HWND hDlg, 
                                                    int32_t nIDDlgItem) = sub_4c75d0(eax_134)
                                                hWnd_4 = hWnd_8
                                                
                                                if (hWnd_8 != 0xffffffff)
                                                    void* esi_29 = sub_4c7540(hWnd_8) + hWnd_4
                                                    void* eax_136
                                                    eax_136, ecx_93 = sub_4c7540(eax_134)
                                                    HWND (__stdcall* const eax_137)(HWND hDlg, 
                                                        int32_t nIDDlgItem) = eax_136 + 1
                                                    hWnd_4 = eax_137
                                                    
                                                    if (eax_137 s> 0)
                                                        HWND (__stdcall* const i_6)(HWND hDlg, 
                                                            int32_t nIDDlgItem) = eax_137
                                                        HWND (__stdcall* const i_1)(HWND hDlg, 
                                                            int32_t nIDDlgItem)
                                                        
                                                        do
                                                            int32_t* eax_138 =
                                                                sub_48c3c0(data_e46fcc, 0)
                                                            sub_4d2e30(eax_138, eax_138, eax_132, 
                                                                eax_134, esi_29)
                                                            ecx_93 = sub_4cab30(eax_134, esi_29)
                                                            i_1 = i_6
                                                            i_6 -= 1
                                                        while (i_1 != 1)
                                                        eax_137 = hWnd_4
                                                    
                                                    void* esi_30 = esi_29 - eax_137
                                                    void* eax_139 = data_ce26e4
                                                    
                                                    if (eax_139 == 0)
                                                        goto label_4cce0e
                                                    
                                                    int32_t eax_140 = *(eax_139 + 4)
                                                    
                                                    if (eax_140 == 0x19)
                                                        ecx_93 = esi_30 + 1
                                                    label_4cc6e0:
                                                        sub_4c68c0(sub_4c8660(ecx_93, 0xffffffff))
                                                        sub_4f42d0()
                                                        sub_4f4180()
                                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                                        return 0
                                                    
                                                    if (eax_140 != 0x1b)
                                                        goto label_4cce0e
                                                    
                                                    ecx_93 = esi_30 + 1
                                                label_4cce09:
                                                    ecx_93 = sub_4c8c00(ecx_93)
                                                label_4cce0e:
                                                    sub_4c68c0(ecx_93)
                                                    sub_4f42d0()
                                                    sub_4f4180()
                                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                                    return 0
                                else if (esi_13 != 0xa5)
                                    if (esi_13 == 0xa6)
                                        sub_4cb570()
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    if (esi_13 == 0xa7)
                                        ecx_4.b = 1
                                        sub_4cb880(ecx_4)
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    if (esi_13 == 0xa8)
                                        ecx_4.b = 0
                                        sub_4cb880(ecx_4)
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                else
                                    int32_t* ecx_136 = data_ce26e4
                                    
                                    if (ecx_136 != 0 && ecx_136[1] == 0x19)
                                        void* eax_141 = sub_4459f0(ecx_136)
                                        
                                        if (eax_141 != 0)
                                            LRESULT eax_143 =
                                                SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
                                            
                                            if (eax_143 != 0xffffffff)
                                                int32_t i_8 = sub_4c7540(eax_143) + 1
                                                
                                                if (i_8 s> 0)
                                                    int32_t i_2
                                                    
                                                    do
                                                        int32_t* eax_145 = sub_48c3c0(data_e46fcc, 0)
                                                        sub_4d2d50(eax_145, eax_145, eax_141, eax_143, 
                                                            0)
                                                        sub_4caac0(eax_143)
                                                        i_2 = i_8
                                                        i_8 -= 1
                                                    while (i_2 != 1)
                                                
                                                ecx_93 = 0xffffffff
                                                int32_t eax_147 = *(eax_141 + 4)
                                                
                                                if (eax_143 == eax_147 && eax_147 s> 0)
                                                    ecx_93 = eax_143 - 1
                                                
                                                void* eax_148 = data_ce26e4
                                                
                                                if (eax_148 == 0)
                                                    goto label_4cce0e
                                                
                                                int32_t eax_149 = *(eax_148 + 4)
                                                
                                                if (eax_149 == 0x19)
                                                    goto label_4cc6e0
                                                
                                                if (eax_149 != 0x1b)
                                                    goto label_4cce0e
                                                
                                                goto label_4cce09
                            else
                                eax_46 = sub_4c6af0()
                                
                                if (eax_46 == 5 || eax_46 == 0x4a)
                                label_4cc175:
                                    sub_4cae30()
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                cond:12_1 = eax_46 == 8
                            label_4cc15b:
                                
                                if (cond:12_1 || eax_46 == 9 || eax_46 == 0xa || eax_46 == 0xb
                                        || eax_46 == 0x4c)
                                    goto label_4cc175
                        else
                            ecx_4 = sub_4c9d80()
                        label_4cc19b:
                            
                            if (esi_13 == 0x7c)
                                DialogBoxParamA(GetModuleHandleA(nullptr), 0x84, data_ce1c8c, 
                                    sub_4ca1e0, 0)
                                @__security_check_cookie@4(eax_1 ^ &var_108)
                                return 0
                            
                            if (esi_13 == 0x7d)
                                HWND hWnd = GetDlgItem(data_ce1c90, 0x7b)
                                hWnd_4 = hWnd
                                WPARAM wParam = SendMessageA(hWnd, 0x188, 0, 0)
                                
                                if (wParam != 0xffffffff)
                                    int32_t* eax_50 = sub_4c6a60()
                                    LRESULT eax_51 = SendMessageA(hWnd_4, 0x199, wParam, 0)
                                    char* ecx_51 = sub_4b8790(eax_51, eax_50, &data_5b39c8, eax_51)
                                    int32_t eax_52 = *eax_50
                                    WPARAM edx_9 = 0xffffffff
                                    
                                    if (wParam == eax_52 && eax_52 s> 0)
                                        edx_9 = wParam - 1
                                    
                                    void* eax_53 = data_ce26e4
                                    
                                    if (eax_53 != 0)
                                        int32_t eax_54 = *(eax_53 + 4)
                                        
                                        if (eax_54 == 0x19)
                                            char* ecx_52 = sub_4c8660(0xffffffff, edx_9)
                                            data_ce1c94 = 0
                                            sub_4c68c0(ecx_52)
                                            @__security_check_cookie@4(eax_1 ^ &var_108)
                                            return 0
                                        
                                        if (eax_54 == 0x1b)
                                            ecx_51 = sub_4c8c00(0xffffffff)
                                    
                                    data_ce1c94 = 0
                                    sub_4c68c0(ecx_51)
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                            else
                                int32_t eax_63
                                char* ecx_59
                                
                                if (esi_13 == 0x7e)
                                    LRESULT eax_58 =
                                        SendMessageA(GetDlgItem(data_ce1c90, 0x7b), 0x188, 0, 0)
                                    
                                    if (eax_58 != 0xffffffff && eax_58 != 0)
                                        int32_t* eax_59 = sub_4c6a60()
                                        int32_t* eax_61 = sub_48c3c0(data_e470d8, 4)
                                        ecx_59 = sub_4d2e30(eax_61, eax_61, eax_59, eax_58, eax_58 - 1)
                                        void* eax_62 = data_ce26e4
                                        
                                        if (eax_62 == 0)
                                            goto label_4cc410
                                        
                                        eax_63 = *(eax_62 + 4)
                                        
                                        if (eax_63 == 0x19)
                                            sub_4c68c0(sub_4c8660(0xffffffff, eax_58 - 1))
                                            @__security_check_cookie@4(eax_1 ^ &var_108)
                                            return 0
                                        
                                    label_4cc403:
                                        
                                        if (eax_63 != 0x1b)
                                            goto label_4cc410
                                        
                                        ecx_59 = sub_4c8c00(0xffffffff)
                                    label_4cc410:
                                        sub_4c68c0(ecx_59)
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                else if (esi_13 != 0x7f)
                                    if (esi_13 == 0x77)
                                        sub_4cabf0()
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    HWND (__stdcall* const hWnd_13)(HWND hDlg, int32_t nIDDlgItem)
                                    
                                    if (esi_13 == 0x8d)
                                        LRESULT eax_75 =
                                            SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
                                        
                                        if (eax_75 != 0xffffffff)
                                            int32_t* ecx_74 = data_ce26e4
                                            int32_t* var_f8_3
                                            
                                            if (ecx_74 == 0 || ecx_74[1] != 0x19)
                                                var_f8_3 = nullptr
                                            else
                                                int32_t* eax_76
                                                eax_76, ecx_74 = sub_4459f0(ecx_74)
                                                var_f8_3 = eax_76
                                            
                                            int32_t* var_118_18 = ecx_74
                                            int32_t* eax_77 = sub_48c3c0(data_e46fcc, 0)
                                            sub_4d2b10(eax_77, eax_77, var_f8_3, eax_75 + 1)
                                            sub_4caa40(eax_75 + 1)
                                            int32_t eax_78 = *var_f8_3
                                            int32_t i_3 = 0
                                            int32_t* edi_12 = eax_75 * 0x134 + eax_78
                                            hWnd_13 = (eax_75 + 1) * 0x134 + eax_78
                                            hWnd_4 = hWnd_13
                                            
                                            if (*edi_12 s> 0)
                                                do
                                                    int32_t eax_79 = edi_12[1]
                                                    sub_4b8610(eax_79, hWnd_13, &data_5b39c8, 
                                                        *(eax_79 + (i_3 << 3)), 
                                                        *(eax_79 + (i_3 << 3) + 4))
                                                    hWnd_13 = hWnd_4
                                                    i_3 += 1
                                                while (i_3 s< *edi_12)
                                            
                                            void* eax_80 = data_ce26e4
                                            
                                            if (eax_80 == 0)
                                                goto label_4cc608
                                            
                                            int32_t eax_81 = *(eax_80 + 4)
                                            
                                            if (eax_81 != 0x19)
                                                if (eax_81 != 0x1b)
                                                    goto label_4cc608
                                                
                                                hWnd_13 = sub_4c8c00(eax_75 + 1)
                                                goto label_4cc608
                                            
                                            hWnd_13 = sub_4c8660(eax_75 + 1, 0xffffffff)
                                        label_4cc608:
                                            data_ce1c94 = 0
                                            sub_4c68c0(hWnd_13)
                                            sub_4f42d0()
                                            sub_4f4180()
                                            @__security_check_cookie@4(eax_1 ^ &var_108)
                                            return 0
                                    else if (esi_13 == 0x78)
                                        LRESULT eax_83 =
                                            SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
                                        
                                        if (eax_83 != 0xffffffff)
                                            int32_t* ecx_83 = data_ce26e4
                                            void* const edi_13
                                            
                                            if (ecx_83 == 0 || ecx_83[1] != 0x19)
                                                edi_13 = nullptr
                                            else
                                                edi_13 = sub_4459f0(ecx_83)
                                            
                                            int32_t* eax_85 = sub_48c3c0(data_e46fcc, 0)
                                            sub_4d2d50(eax_85, eax_85, edi_13, eax_83, 0)
                                            sub_4caac0(eax_83)
                                            int32_t eax_86 = *(edi_13 + 4)
                                            hWnd_13 = 0xffffffff
                                            
                                            if (eax_83 == eax_86 && eax_86 s> 0)
                                                hWnd_13 = eax_83 - 1
                                            
                                            void* eax_87 = data_ce26e4
                                            
                                            if (eax_87 == 0)
                                                goto label_4cc608
                                            
                                            int32_t eax_88 = *(eax_87 + 4)
                                            
                                            if (eax_88 == 0x19)
                                                hWnd_13 = sub_4c8660(hWnd_13, 0xffffffff)
                                                goto label_4cc608
                                            
                                            if (eax_88 != 0x1b)
                                                goto label_4cc608
                                            
                                            hWnd_13 = sub_4c8c00(hWnd_13)
                                            goto label_4cc608
                                    else
                                        int32_t eax_95
                                        
                                        if (esi_13 != 0x79)
                                            if (esi_13 != 0x7a)
                                                if (esi_13 != 0x88)
                                                    goto label_4cc812
                                                
                                                eax_46 = sub_4c6af0()
                                                
                                                if (eax_46 == 5 || eax_46 == 8)
                                                    goto label_4cc175
                                                
                                                cond:12_1 = eax_46 == 0x4a
                                                goto label_4cc15b
                                            
                                            LRESULT eax_98 =
                                                SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
                                            int32_t* ecx_97 = data_ce26e4
                                            int32_t* eax_99
                                            
                                            if (ecx_97 == 0 || ecx_97[1] != 0x19)
                                                eax_99 = nullptr
                                            else
                                                eax_99 = sub_4459f0(ecx_97)
                                            
                                            if (eax_98 != 0xffffffff && eax_98 != eax_99[1] - 1)
                                                edi_14 = eax_98 + 1
                                                int32_t* eax_102 = sub_48c3c0(data_e46fcc, 0)
                                                sub_4d2e30(eax_102, eax_102, eax_99, eax_98, edi_14)
                                                ecx_93 = sub_4cab30(eax_98, edi_14)
                                                void* eax_103 = data_ce26e4
                                                
                                                if (eax_103 == 0)
                                                    goto label_4cce0e
                                                
                                                eax_95 = *(eax_103 + 4)
                                                
                                                if (eax_95 != 0x19)
                                                    goto label_4cc707
                                                
                                                sub_4c68c0(sub_4c8660(edi_14, 0xffffffff))
                                                sub_4f42d0()
                                                sub_4f4180()
                                                @__security_check_cookie@4(eax_1 ^ &var_108)
                                                return 0
                                        else
                                            LRESULT eax_91 =
                                                SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
                                            int32_t* ecx_89 = data_ce26e4
                                            int32_t* var_fc_4
                                            
                                            if (ecx_89 == 0 || ecx_89[1] != 0x19)
                                                var_fc_4 = nullptr
                                            else
                                                var_fc_4 = sub_4459f0(ecx_89)
                                            
                                            if (eax_91 != 0xffffffff && eax_91 != 0)
                                                edi_14 = eax_91 - 1
                                                int32_t* eax_93 = sub_48c3c0(data_e46fcc, 0)
                                                sub_4d2e30(eax_93, eax_93, var_fc_4, eax_91, edi_14)
                                                ecx_93 = sub_4cab30(eax_91, edi_14)
                                            label_4cc6c1:
                                                void* eax_94 = data_ce26e4
                                                
                                                if (eax_94 == 0)
                                                    goto label_4cce0e
                                                
                                                eax_95 = *(eax_94 + 4)
                                                
                                                if (eax_95 == 0x19)
                                                    ecx_93 = edi_14
                                                    goto label_4cc6e0
                                                
                                            label_4cc707:
                                                
                                                if (eax_95 != 0x1b)
                                                    goto label_4cce0e
                                                
                                                ecx_93 = edi_14
                                                goto label_4cce09
                                else
                                    LRESULT eax_66 =
                                        SendMessageA(GetDlgItem(data_ce1c90, 0x7b), 0x188, 0, 0)
                                    int32_t* eax_67 = sub_4c6a60()
                                    
                                    if (eax_66 != 0xffffffff && eax_66 != *eax_67 - 1)
                                        int32_t* eax_69 = sub_48c3c0(data_e470d8, 4)
                                        ecx_59 = sub_4d2e30(eax_69, eax_69, eax_67, eax_66, eax_66 + 1)
                                        void* eax_70 = data_ce26e4
                                        
                                        if (eax_70 == 0)
                                            goto label_4cc410
                                        
                                        eax_63 = *(eax_70 + 4)
                                        
                                        if (eax_63 != 0x19)
                                            goto label_4cc403
                                        
                                        sub_4c68c0(sub_4c8660(0xffffffff, eax_66 + 1))
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                else if (arg2 == 0x201)
                    sub_4c9ae0(sx.d(ecx_4.w), sx.d((ecx_4 u>> 0x10).w))
                else
                    if (arg2 == 0x202)
                        if (data_ce1c9d != 0)
                            data_ce1c9d = 0
                            sub_4c6e90(&data_ce1ca4, &data_ce1ca0)
                            void* eax_171 = data_ce26e4
                            
                            if (eax_171 != 0)
                                int32_t eax_172 = *(eax_171 + 4)
                                
                                if (eax_172 == 0x19)
                                    sub_4c8660(0xffffffff, 0xffffffff)
                                    ReleaseCapture()
                                    @__security_check_cookie@4(eax_1 ^ &var_108)
                                    return 0
                                
                                if (eax_172 == 0x1b)
                                    sub_4c8c00(0xffffffff)
                        
                        ReleaseCapture()
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 0
                    
                    if (arg2 == 0x204)
                        int32_t eax_163 = sx.d((ecx_4 u>> 0x10).w)
                        sub_4c8e60(eax_163, sx.d(ecx_4.w), &hWnd_4, eax_163)
                        
                        if (hWnd_4 == 1)
                            hWnd_5 = sub_4c6d50()
                            
                            if (hWnd_5 == 0)
                                var_114_1 = "EditorRightButtonDown"
                                var_118_1 = 0x72e
                                ecx_2 = "pTrack"
                                goto label_4cd255
                            
                            if (*(hWnd_5 + 4) != 1)
                                int32_t* eax_164 = sub_48c3c0(data_e471a0, 0)
                                char* ecx_158 =
                                    sub_4d2d50(eax_164, eax_164, hWnd_5, var_ec, arg2 - 0x204)
                                int32_t eax_165 = data_ce1c94
                                
                                if (eax_165 s> var_ec)
                                    data_ce1c94 = eax_165 - 1
                                
                                void* eax_167 = data_ce26e4
                                
                                if (eax_167 != 0)
                                    int32_t eax_168 = *(eax_167 + 4)
                                    
                                    if (eax_168 == 0x19)
                                        sub_4c68c0(sub_4c8660(0xffffffff, 0xffffffff))
                                        @__security_check_cookie@4(eax_1 ^ &var_108)
                                        return 0
                                    
                                    if (eax_168 == 0x1b)
                                        ecx_158 = sub_4c8c00(0xffffffff)
                                
                                sub_4c68c0(ecx_158)
                                @__security_check_cookie@4(eax_1 ^ &var_108)
                                return 0
            else
                if (arg3 != 0x76)
                    var_114_1 = "ParamsDialogWndProc"
                    var_118_1 = 0xc52
                    ecx_2 = "wParam == IDC_EMITTER_LIST"
                label_4cd255:
                    sub_44e4d0(hWnd_5, &data_5559b1, ecx_2, 
                        "c:\ax2017\engine\windows\editorwindow.cpp", var_118_1, var_114_1)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                HWND hLB = GetDlgItem(data_ce1c90, 0x76)
                int32_t var_118_3 = arg4[3]
                int32_t eax_6 = LBItemFromPt(hLB, arg4[2], 1)
                ecx_4 = arg4
                int32_t edx_1 = *ecx_4
                
                if (edx_1 != 0x485)
                    if (edx_1 == 0x486)
                        if (sub_4cb530(eax_6) != 0)
                            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135
                                    && arg2 != 0x136 && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39
                                    && arg2 != 0x2e && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                                SetWindowLongA(arg1, 0, 2)
                            
                            @__security_check_cookie@4(eax_1 ^ &var_108)
                            return 2
                        
                        goto label_4cbaac
                    
                    if (edx_1 != 0x487)
                        if (edx_1 != 0x488)
                            goto label_4cbdbf
                        
                        data_ce1cc4 = 0
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 1
                    
                    if (sub_4cb530(eax_6) != 0)
                        int32_t* ecx_13 = data_ce26e4
                        void* esi_5 = data_ce1cc8
                        
                        if (ecx_13 != 0 && ecx_13[1] == 0x19)
                            int32_t* eax_12 = sub_4459f0(ecx_13)
                            
                            if (eax_12 != 0)
                                int32_t eax_13 = sub_4c7440(esi_5)
                                void* esi_7 = esi_5
                                int32_t eax_15 = sub_4c7440(eax_6) + 1 - eax_13
                                char* i_9 = sub_4c7540(esi_7) + 1
                                
                                if (i_9 s> 0)
                                    int32_t eax_17 = eax_6 + 1
                                    HWND (__stdcall* hWnd_14)(HWND hDlg, int32_t nIDDlgItem) =
                                        esi_7 - (eax_6 + 1)
                                    int32_t var_d4_1 = eax_17
                                    hWnd_4 = hWnd_14
                                    char* i_7 = i_9
                                    char* i_4
                                    
                                    do
                                        int32_t var_f8_1
                                        
                                        if (esi_7 s<= eax_6)
                                            var_f8_1 = eax_6
                                        else
                                            esi_7 = hWnd_14 + eax_17
                                            var_f8_1 = eax_17
                                        
                                        sub_4c74c0(esi_7, sub_4c7440(esi_7) + eax_15)
                                        
                                        if (esi_7 != var_f8_1)
                                            int32_t* eax_20 = sub_48c3c0(data_e46fcc, 0)
                                            sub_4d2e30(eax_20, eax_20, eax_12, esi_7, var_f8_1)
                                            sub_4cab30(esi_7, var_f8_1)
                                        
                                        esi_7 = esi_5
                                        eax_17 = var_d4_1 + 1
                                        i_4 = i_7
                                        i_7 -= 1
                                        hWnd_14 = hWnd_4
                                        var_d4_1 = eax_17
                                    while (i_4 != 1)
                                
                                if (esi_7 s<= eax_6)
                                    void* eax_25 = eax_6 + 1 - i_9
                                    i_9 = data_ce26e4
                                    
                                    if (i_9 != 0)
                                        i_9 = *(i_9 + 4)
                                        
                                        if (i_9 == 0x19)
                                            i_9 = sub_4c8660(eax_25, 0xffffffff)
                                        else if (i_9 == 0x1b)
                                            i_9 = sub_4c8c00(eax_25)
                                else
                                    void* eax_22 = data_ce26e4
                                    
                                    if (eax_22 != 0)
                                        int32_t eax_23 = *(eax_22 + 4)
                                        
                                        if (eax_23 == 0x19)
                                            i_9 = sub_4c8660(eax_6 + 1, 0xffffffff)
                                        else if (eax_23 == 0x1b)
                                            i_9 = sub_4c8c00(eax_6 + 1)
                                
                                sub_4c68c0(i_9)
                                sub_4f42d0()
                                sub_4f4180()
                    
                    @__security_check_cookie@4(eax_1 ^ &var_108)
                    return 1
                
                if (eax_6 != 0xffffffff)
                    data_ce1cc4 = 1
                    data_ce1cc8 = eax_6
                label_4cbaac:
                    
                    if (arg2 == 0x132)
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 1
                    
                    if (arg2 == 0x133 || arg2 == 0x134 || arg2 == 0x135 || arg2 == 0x136
                            || arg2 == 0x137 || arg2 == 0x138 || arg2 == 0x39 || arg2 == 0x2e
                            || arg2 == 0x2f || arg2 == 0x37 || arg2 == 0x110)
                        @__security_check_cookie@4(eax_1 ^ &var_108)
                        return 1
                    
                    SetWindowLongA(arg1, 0, 1)
                    @__security_check_cookie@4(eax_1 ^ &var_108)
                    return 1
                
                data_ce1cc4 = 0
                
                if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                        && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e
                        && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                    SetWindowLongA(arg1, 0, 0)
                    @__security_check_cookie@4(eax_1 ^ &var_108)
                    return 0
        else
            ecx = data_ce26e4
        label_4cb95d:
            
            if (ecx != 0 && ecx[1] == 0x1b && sub_4459f0(ecx) != 0)
                goto label_4cb97c
    
    label_4cd19b:
    @__security_check_cookie@4(eax_1 ^ &var_108)
    return 0
}
