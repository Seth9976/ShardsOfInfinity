// 函数名称: sub_4c8660
// 虚拟地址: 0x4c8660
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4c8660(LRESULT arg1, WPARAM arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5452b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    WPARAM wParam = arg2
    LRESULT wParam_1 = arg1
    int32_t* ecx = data_ce26e4
    int32_t* var_34
    int32_t* esi
    
    if (ecx == 0 || ecx[1] != 0x19)
        esi = nullptr
        var_34 = nullptr
    else
        int32_t* eax_3 = sub_4459f0(ecx)
        esi = eax_3
        var_34 = eax_3
    
    HWND hWnd = GetDlgItem(data_ce1c90, 0x76)
    HWND hWnd_1 = GetDlgItem(data_ce1c90, 0x7b)
    
    if (arg1 == 0xffffffff || wParam_1 s>= esi[1])
        LRESULT wParam_4 = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam_4 == 0xffffffff)
            wParam_4 = 0
        
        wParam_1 = wParam_4
    
    WPARAM wParam_2 = SendMessageA(hWnd, 0x18e, 0, 0)
    SendMessageA(hWnd, 0x184, 0, 0)
    int32_t i = 0
    char* lParam_4
    
    if (esi[1] s> 0)
        int32_t eax_5 = 0
        int32_t var_30_1 = 0
        
        do
            int32_t* esi_2 = *esi + eax_5
            void* eax_6 = sub_4b8b40(eax_5, esi_2, &data_5b39c8, 5)
            void* eax_7 = sub_4b8b40(eax_6, esi_2, &data_5b39c8, 8)
            char* eax_8 = sub_4b8a40(eax_7, esi_2, &data_5b39c8, 1)
            int32_t j_1 = sub_4c7440(i)
            char* const lParam_5 = &data_5559b1
            int32_t var_8_1 = 0
            
            if (j_1 s> 0)
                int32_t j
                
                do
                    sub_44f620(&lParam_5, "   ")
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            if (eax_8 == 0 || *eax_8 == 0)
                int32_t var_58_2 = i + 1
                var_8_1.b = 1
                char* ecx_4 = &data_5559b1
                char* var_24
                char* eax_12 = *sub_44f980(&var_24, "Particle %d")
                
                if (eax_12 != 0)
                    ecx_4 = eax_12
                
                sub_44f620(&lParam_5, ecx_4)
                var_8_1.b = 2
                
                if (data_cdf414 != 0)
                    char* eax_13 = var_24
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        char* eax_14 = sub_44f000(&var_24)
                        int32_t temp1_1 = *(eax_14 + 4)
                        *(eax_14 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
                            var_24 = &data_5559b1
                
                var_8_1.b = 0
            else
                sub_44f620(&lParam_5, eax_8)
            
            if (eax_6 != 0)
                char* const var_1c
                sub_4c7820(&var_1c, eax_6)
                var_8_1.b = 3
                sub_44f620(&lParam_5, " - ")
                char* const eax_16 = var_1c
                char* const ecx_10 = &data_5559b1
                
                if (eax_16 != 0)
                    ecx_10 = eax_16
                
                sub_44f620(&lParam_5, ecx_10)
                var_8_1.b = 4
                
                if (data_cdf414 != 0)
                    char* eax_17 = var_1c
                    
                    if (eax_17 != 0 && *eax_17 != 0)
                        char* eax_18 = sub_44f000(&var_1c)
                        int32_t temp3_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                            var_1c = &data_5559b1
                
                var_8_1.b = 0
            
            if (eax_7 != 0)
                sub_4c7820(&lParam_4, eax_7)
                var_8_1.b = 5
                sub_44f620(&lParam_5, " - ")
                char* lParam_6 = lParam_4
                char* lParam_9 = &data_5559b1
                
                if (lParam_6 != 0)
                    lParam_9 = lParam_6
                
                sub_44f620(&lParam_5, lParam_9)
                var_8_1.b = 6
                
                if (data_cdf414 != 0)
                    char* lParam_7 = lParam_4
                    
                    if (lParam_7 != 0 && *lParam_7 != 0)
                        char* eax_20 = sub_44f000(&lParam_4)
                        int32_t temp4_1 = *(eax_20 + 4)
                        *(eax_20 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                            lParam_4 = &data_5559b1
                
                var_8_1.b = 0
            
            if (*((i << 3) + &data_ce1cd8) != 0)
                sub_44f620(&lParam_5, " (hidden)")
            
            char* const lParam_3 = lParam_5
            char* const lParam = &data_5559b1
            
            if (lParam_3 != 0)
                lParam = lParam_3
            
            SendMessageA(hWnd, 0x180, 0, lParam)
            int32_t var_8_2 = 7
            
            if (data_cdf414 != 0 && lParam_3 != 0 && *lParam_3 != 0)
                char* eax_21 = sub_44f000(&lParam_5)
                int32_t temp5_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
            
            esi = var_34
            i += 1
            eax_5 = var_30_1 + 0x134
            int32_t var_8_3 = 0xffffffff
            var_30_1 = eax_5
        while (i s< esi[1])
    
    ShowWindow(GetDlgItem(data_ce1c90, 0x77), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x78), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x79), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7a), SW_HIDE)
    ShowWindow(GetDlgItem(data_ce1c90, 0x8d), SW_HIDE)
    SendMessageA(hWnd, 0x186, wParam_1, 0)
    SendMessageA(hWnd, 0x197, wParam_2, 0)
    ShowWindow(hWnd_1, SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7c), SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7d), SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7e), SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x7f), SW_SHOW)
    ShowWindow(GetDlgItem(data_ce1c90, 0x9e), SW_SHOW)
    int32_t* eax_33 = sub_4c6a60()
    HWND hWnd_2
    
    if (wParam == 0xffffffff || eax_33 == 0 || wParam s>= *eax_33)
        hWnd_2 = hWnd_1
        WPARAM wParam_5 = SendMessageA(hWnd_2, 0x188, 0, 0)
        
        if (wParam_5 == 0xffffffff)
            wParam_5 = 0
        
        wParam = wParam_5
    else
        hWnd_2 = hWnd_1
    
    LRESULT wParam_3 = SendMessageA(hWnd_2, 0x18e, 0, 0)
    SendMessageA(hWnd_2, 0x184, 0, 0)
    
    if (eax_33 != 0)
        int32_t i_1 = 0
        
        if (*eax_33 s> 0)
            do
                int32_t* esi_3 = eax_33[1] + (i_1 << 3)
                sub_4c8360(&lParam_4, esi_3)
                char* lParam_2 = lParam_4
                char* lParam_1 = &data_5559b1
                
                if (lParam_2 != 0)
                    lParam_1 = lParam_2
                
                hWnd_2 = hWnd_1
                SendMessageA(hWnd_2, 0x19a, SendMessageA(hWnd_1, 0x180, 0, lParam_1), *esi_3)
                int32_t var_8_4 = 8
                
                if (data_cdf414 != 0)
                    char* lParam_8 = lParam_4
                    
                    if (lParam_8 != 0 && *lParam_8 != 0)
                        char* eax_37 = sub_44f000(&lParam_4)
                        int32_t temp2_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_37, *(eax_37 + 0xc) + 0x10)
                            lParam_4 = &data_5559b1
                
                i_1 += 1
                int32_t var_8_5 = 0xffffffff
            while (i_1 s< *eax_33)
    
    SendMessageA(hWnd_2, 0x186, wParam, 0)
    SendMessageA(hWnd_2, 0x197, wParam_3, 0)
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
