// 函数名称: sub_4d13f0
// 虚拟地址: 0x4d13f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_4d13f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543338
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    BOOL hWnd = data_ce1c90
    
    if (hWnd != 0)
        hWnd = DestroyWindow(hWnd)
        data_ce1c90 = 0
    
    if (data_ce1c8c != 0)
        hWnd = data_ce26e4
        BOOL hWnd_7 = hWnd
        
        if (hWnd != 0)
            hWnd = *(hWnd + 4)
            
            if (hWnd == 0x1e)
                HWND eax_4 =
                    CreateDialogParamA(GetModuleHandleA(nullptr), 0xaa, data_ce1c8c, sub_4cec20, 0)
                data_ce1c90 = eax_4
                HWND hWnd_1 = sub_506330(eax_4)
                HDC eax_5 = GetDC(nullptr)
                int32_t eax_6 = GetDeviceCaps(eax_5, 0x58)
                int32_t eax_7 = GetDeviceCaps(eax_5, 0x5a)
                ReleaseDC(nullptr, eax_5)
                MoveWindow(hWnd_1, eax_6 s/ 0x60, eax_7 * 0x15e s/ 0x60, eax_6 * 0x12c s/ 0x60, 
                    eax_7 * 0x12c s/ 0x60, 1)
                ShowWindow(hWnd_1, SW_SHOW)
                sub_4d0360()
                sub_4cf4c0(data_ce26e4)
                ShowWindow(data_ce1c90, SW_SHOW)
                hWnd = sub_4c6950()
            else if (hWnd == 0x20)
                HWND eax_22 =
                    CreateDialogParamA(GetModuleHandleA(nullptr), 0xaa, data_ce1c8c, sub_4cf000, 0)
                data_ce1c90 = eax_22
                HWND hWnd_2 = sub_506330(eax_22)
                HDC eax_23 = GetDC(nullptr)
                int32_t eax_24 = GetDeviceCaps(eax_23, 0x58)
                int32_t eax_25 = GetDeviceCaps(eax_23, 0x5a)
                ReleaseDC(nullptr, eax_23)
                MoveWindow(hWnd_2, eax_24 s/ 0x60, eax_25 * 0x15e s/ 0x60, eax_24 * 0x12c s/ 0x60, 
                    eax_25 * 0x12c s/ 0x60, 1)
                ShowWindow(hWnd_2, SW_SHOW)
                sub_4cf940()
                sub_4cf180(data_ce26e4)
                ShowWindow(data_ce1c90, SW_SHOW)
                hWnd = sub_4c6950()
            else if (hWnd != 0x1d && hWnd != 0x22 && (hWnd == 0x19 || hWnd == 0x1b))
                HWND hWnd_3 =
                    CreateDialogParamA(GetModuleHandleA(nullptr), 0x75, data_ce1c8c, sub_4cb910, 0)
                data_ce1c90 = hWnd_3
                ShowWindow(hWnd_3, SW_SHOW)
                HWND hWnd_4 = GetDlgItem(data_ce1c90, 0x8c)
                SendMessageA(hWnd_4, 0x180, 0, "True")
                SendMessageA(hWnd_4, 0x180, 0, "False")
                HWND hWnd_5 = GetDlgItem(data_ce1c90, 0x91)
                char const* const lParam = "Constant"
                void* const esi_6 = &data_572ce0
                
                do
                    SendMessageA(hWnd_5, 0x151, SendMessageA(hWnd_5, 0x143, 0, lParam), *esi_6)
                    lParam = *(esi_6 + 0xc)
                    esi_6 += 8
                while (lParam != 0)
                
                HWND hWnd_6 = GetDlgItem(data_ce1c90, 0x90)
                char const* const lParam_1 = "Uniform"
                void* const esi_7 = &data_572cb0
                
                do
                    SendMessageA(hWnd_6, 0x151, SendMessageA(hWnd_6, 0x143, 0, lParam_1), *esi_7)
                    lParam_1 = *(esi_7 + 0xc)
                    esi_7 += 8
                while (lParam_1 != 0)
                
                *(hWnd_7 + 0x1c) -= 1
                sub_48dc00(hWnd_7)
                int32_t* eax_45 = sub_42d300(hWnd_7)
                
                if (*(hWnd_7 + 4) == 0x19)
                    int32_t* ecx_16 = data_ce26e4
                    int32_t* var_18_3
                    
                    if (ecx_16 != 0 && ecx_16[1] == 0x19)
                        eax_45 = sub_4459f0(ecx_16)
                        var_18_3 = eax_45
                    
                    if (ecx_16 == 0 || ecx_16[1] != 0x19 || eax_45 == 0)
                        sub_44e4d0(eax_45, &data_5559b1, "pParticleDef", 
                            "c:\ax2017\engine\windows\editorwindow.cpp", 0xd9d, 
                            "MakeSureAllEmittersHaveNames")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t i = 0
                    
                    if (eax_45[1] s> 0)
                        int32_t ebx_6 = 0
                        
                        do
                            int32_t ecx_17 = 0
                            int32_t* esi_9 = *eax_45 + ebx_6
                            int32_t edx_17 = *esi_9
                            
                            if (edx_17 s<= 0)
                            label_4d17b9:
                                char* var_14
                                sub_4cb130(&var_14)
                                int32_t var_8_1 = 0
                                char* const ecx_19 = &data_5559b1
                                char* eax_47 = var_14
                                
                                if (eax_47 != 0)
                                    ecx_19 = eax_47
                                
                                sub_4b8610(eax_47, esi_9, &data_5b39c8, 1, ecx_19)
                                int32_t var_8_2 = 1
                                
                                if (data_cdf414 != 0)
                                    char* eax_48 = var_14
                                    
                                    if (eax_48 != 0 && *eax_48 != 0)
                                        char* eax_49 = sub_44f000(&var_14)
                                        int32_t temp0_1 = *(eax_49 + 4)
                                        *(eax_49 + 4) -= 1
                                        
                                        if (temp0_1 == 1)
                                            sub_45d050(eax_49, *(eax_49 + 0xc) + 0x10)
                                            var_14 = &data_5559b1
                                
                                int32_t var_8_3 = 0xffffffff
                            else
                                int32_t* eax_46 = esi_9[1]
                                
                                while (*eax_46 != 1)
                                    ecx_17 += 1
                                    eax_46 = &eax_46[2]
                                    
                                    if (ecx_17 s>= edx_17)
                                        goto label_4d17b9
                            
                            eax_45 = var_18_3
                            i += 1
                            ebx_6 += 0x134
                        while (i s< eax_45[1])
                
                for (int32_t i_1 = 0; i_1 s< 0x100; i_1 += 1)
                    *((i_1 << 3) + &data_ce1cd4) = i_1
                    *((i_1 << 3) + &data_ce1cd8) = 0
                
                sub_4c9ab0()
                hWnd = sub_4c6950()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return hWnd
}
