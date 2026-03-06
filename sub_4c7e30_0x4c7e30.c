// 函数名称: sub_4c7e30
// 虚拟地址: 0x4c7e30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_4c7e30()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545228
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_4c6d50()
    BOOL lpString_12
    
    if (eax_3 == 0)
    label_4c8214:
        HWND hDlg_1 = data_ce1c90
        data_ce1ca8 = 1
        ShowWindow(GetDlgItem(hDlg_1, 0x89), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x8a), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x8b), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x95), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x81), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x82), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x83), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x96), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x90), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x91), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x97), SW_HIDE)
        ShowWindow(GetDlgItem(data_ce1c90, 0x98), SW_HIDE)
        SetDlgItemTextA(data_ce1c90, 0x81, &data_5559b1)
        SetDlgItemTextA(data_ce1c90, 0x82, &data_5559b1)
        SetDlgItemTextA(data_ce1c90, 0x83, &data_5559b1)
        lpString_12 = SetDlgItemTextA(data_ce1c90, 0x96, &data_5559b1)
        data_ce1ca8 = 0
    else
        int32_t ebx_1 = data_ce1c94
        
        if (ebx_1 s< 0 || ebx_1 s>= eax_3[1])
            goto label_4c8214
        
        int32_t ebx_2 = ebx_1 << 4
        int32_t* ebx_3 = ebx_2 + *eax_3
        
        if (ebx_2 == neg.d(*eax_3))
            goto label_4c8214
        
        void* eax_4 = sub_4c6d50()
        char* lpString_8
        sub_4c7660(&lpString_8, *ebx_3)
        int32_t var_8_1 = 0
        char* lpString_9
        sub_4c7660(&lpString_9, ebx_3[1] f- *ebx_3)
        var_8_1.b = 1
        char* lpString_10
        sub_4c7660(&lpString_10, ebx_3[2])
        var_8_1.b = 2
        BOOL lpString_11
        sub_4c7660(&lpString_11, *(eax_4 + 0xc))
        HWND hDlg = data_ce1c90
        data_ce1ca8 = 1
        ShowWindow(GetDlgItem(hDlg, 0x89), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x8a), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x8b), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x95), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x81), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x82), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x83), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x96), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x90), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x91), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x97), SW_SHOW)
        ShowWindow(GetDlgItem(data_ce1c90, 0x98), SW_SHOW)
        char* lpString_4 = lpString_8
        char* const lpString_3 = &data_5559b1
        char* const lpString = &data_5559b1
        
        if (lpString_4 != 0)
            lpString = lpString_4
        
        SetDlgItemTextA(data_ce1c90, 0x81, lpString)
        char* lpString_5 = lpString_9
        char* const lpString_1 = &data_5559b1
        
        if (lpString_5 != 0)
            lpString_1 = lpString_5
        
        SetDlgItemTextA(data_ce1c90, 0x82, lpString_1)
        char* lpString_6 = lpString_10
        char* const lpString_2 = &data_5559b1
        
        if (lpString_6 != 0)
            lpString_2 = lpString_6
        
        SetDlgItemTextA(data_ce1c90, 0x83, lpString_2)
        BOOL lpString_7 = lpString_11
        
        if (lpString_7 != 0)
            lpString_3 = lpString_7
        
        SetDlgItemTextA(data_ce1c90, 0x96, lpString_3)
        HWND hDlg_2 = data_ce1c90
        data_ce1ca8 = 0
        HWND hWnd = GetDlgItem(hDlg_2, 0x91)
        void* const ecx_5 = &data_572ce0
        char* const lParam
        
        while (true)
            if (*ecx_5 == ebx_3[3])
                lParam = *(ecx_5 + 4)
                break
            
            ecx_5 += 8
            
            if (*(ecx_5 + 4) == 0)
                lParam = &data_5559b1
                break
        
        SendMessageA(hWnd, 0x14d, 0xffffffff, lParam)
        HWND hWnd_1 = GetDlgItem(data_ce1c90, 0x90)
        void* const ecx_6 = &data_572cb0
        char* const lParam_1
        
        while (true)
            if (*ecx_6 == *(eax_4 + 8))
                lParam_1 = *(ecx_6 + 4)
                break
            
            ecx_6 += 8
            
            if (*(ecx_6 + 4) == 0)
                lParam_1 = &data_5559b1
                break
        
        SendMessageA(hWnd_1, 0x14d, 0xffffffff, lParam_1)
        CheckDlgButton(data_ce1c90, 0x97, zx.d(*(eax_4 + 0x10)))
        lpString_12 = CheckDlgButton(data_ce1c90, 0x98, zx.d(*(eax_4 + 0x11)))
        var_8_1.b = 3
        
        if (data_cdf414 != 0)
            lpString_12 = lpString_11
            
            if (lpString_12 != 0 && *lpString_12 != 0)
                lpString_12 = sub_44f000(&lpString_11)
                int32_t temp2_1 = *(lpString_12 + 4)
                *(lpString_12 + 4) -= 1
                
                if (temp2_1 == 1)
                    lpString_12 = sub_45d050(lpString_12, *(lpString_12 + 0xc) + 0x10)
                    lpString_11 = &data_5559b1
        
        var_8_1.b = 4
        
        if (data_cdf414 != 0)
            lpString_12 = lpString_10
            
            if (lpString_12 != 0 && *lpString_12 != 0)
                lpString_12 = sub_44f000(&lpString_10)
                int32_t temp3_1 = *(lpString_12 + 4)
                *(lpString_12 + 4) -= 1
                
                if (temp3_1 == 1)
                    lpString_12 = sub_45d050(lpString_12, *(lpString_12 + 0xc) + 0x10)
                    lpString_10 = &data_5559b1
        
        var_8_1.b = 5
        
        if (data_cdf414 != 0)
            lpString_12 = lpString_9
            
            if (lpString_12 != 0 && *lpString_12 != 0)
                lpString_12 = sub_44f000(&lpString_9)
                int32_t temp4_1 = *(lpString_12 + 4)
                *(lpString_12 + 4) -= 1
                
                if (temp4_1 == 1)
                    lpString_12 = sub_45d050(lpString_12, *(lpString_12 + 0xc) + 0x10)
                    lpString_9 = &data_5559b1
        
        int32_t var_8_2 = 6
        
        if (data_cdf414 != 0)
            lpString_12 = lpString_8
            
            if (lpString_12 != 0 && *lpString_12 != 0)
                lpString_12 = sub_44f000(&lpString_8)
                int32_t temp5_1 = *(lpString_12 + 4)
                *(lpString_12 + 4) -= 1
                
                if (temp5_1 == 1)
                    int32_t eax_19 = sub_45d050(lpString_12, *(lpString_12 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_19
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return lpString_12
}
