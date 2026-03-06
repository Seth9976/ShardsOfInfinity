// 函数名称: sub_4c8c00
// 虚拟地址: 0x4c8c00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4c8c00(LRESULT arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542a10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    LRESULT wParam = arg1
    LRESULT wParam_1 = arg1
    int32_t* ecx = data_ce26e4
    void* const edi
    
    if (ecx == 0 || ecx[1] != 0x1b)
        edi = nullptr
    else
        edi = sub_4459f0(ecx)
    
    HWND hWnd = GetDlgItem(data_ce1c90, 0x76)
    
    if (wParam == 0xffffffff || wParam s>= *(edi + 4))
        wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam == 0xffffffff)
            wParam = 0
        
        wParam_1 = wParam
    
    SendMessageA(hWnd, 0x184, 0, 0)
    int32_t i = 0
    
    if (*(edi + 4) s> 0)
        do
            int32_t i_1 = i
            char* lParam_2
            sub_44f980(&lParam_2, "Graph %d")
            char* lParam_1 = lParam_2
            char* const lParam = &data_5559b1
            
            if (lParam_1 != 0)
                lParam = lParam_1
            
            SendMessageA(hWnd, 0x180, 0, lParam)
            int32_t var_8_1 = 0
            
            if (data_cdf414 != 0)
                char* lParam_3 = lParam_2
                
                if (lParam_3 != 0 && *lParam_3 != 0)
                    char* eax_5 = sub_44f000(&lParam_2)
                    int32_t temp0_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
                        lParam_2 = &data_5559b1
            
            i += 1
            int32_t var_8_2 = 0xffffffff
        while (i s< *(edi + 4))
        
        wParam = wParam_1
    
    ShowWindow(GetDlgItem(data_ce1c90, 0x77), SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x78), SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x79), SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7a), SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x8d), SW_SHOW)
    SendMessageA(hWnd, 0x186, wParam, 0)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7b), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7c), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7d), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7e), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7f), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x9e), SW_HIDE)
    InvalidateRect(data_ce1c90, nullptr, 0)
    sub_4c7e30()
    
    if (sub_4c6d50() != 0)
        sub_4c6e90(&data_ce1ca4, &data_ce1ca0)
    
    sub_4c7940()
    sub_4c7bd0(sub_4c7b00())
    sub_4c7d50()
    BOOL result = EnableWindow(GetDlgItem(data_ce1c90, 0x8e), zx.d(data_ce1cbc))
    data_ce1c98 = 0xffffffff
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
