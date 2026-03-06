// 函数名称: sub_503300
// 虚拟地址: 0x503300
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_503300(HWND arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = data_e47264
    
    if (*(eax_2 + 4) != 0)
        RECT var_18
        __builtin_memset(&var_18, 0, 0x10)
        SendMessageA(arg1, 0x198, SendMessageA(arg1, 0x188, 0, 0), &var_18)
        void* edx_1 = data_e47264
        int32_t Y_2 = var_18.top + 1
        var_18.top = Y_2
        int32_t X_1 = *(edx_1 + 0x24) + 1
        var_18.left = X_1
        void* ecx = *(edx_1 + 4)
        int32_t eax_4 = *(ecx + 0x14)
        HWND hWnd
        int32_t X
        int32_t Y
        int32_t nWidth
        int32_t nHeight
        
        if (eax_4 u> 0x63)
        label_50345c:
            
            if (*(edx_1 + 0x1c) != 0)
                int32_t right = var_18.right
                
                if (right - X_1 s> 0x13)
                    X_1 = right - 0x13
                    right -= 2
                    var_18.left = X_1
                    var_18.right = right
                
                var_18.top = Y_2 + 2
                int32_t var_40_4 = 1
                var_18.bottom -= 2
                nHeight = var_18.bottom - 2 - (Y_2 + 2)
                nWidth = right - X_1
                Y = Y_2 + 2
                X = X_1
                hWnd = *(edx_1 + 0x1c)
                goto label_50349a
            
            eax_2 = SetFocus(*(edx_1 + 0x14))
        else
            eax_2 = zx.d(lookup_table_5034e4[eax_4])
            
            switch (eax_2)
                case 0
                    HWND hWnd_2 = *(edx_1 + 0x1c)
                    
                    if (hWnd_2 != 0)
                        int32_t var_40_3 = 1
                        nHeight = var_18.bottom - Y_2
                        nWidth = var_18.right - X_1
                        Y = Y_2
                        X = X_1
                        hWnd = hWnd_2
                    label_50349a:
                        MoveWindow(hWnd, X, Y, nWidth, nHeight, 1)
                        ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
                        eax_2 = SetFocus(*(data_e47264 + 0x1c))
                    else
                        eax_2 = SetFocus(*(edx_1 + 0x14))
                case 2
                    *(ecx + 8) = &data_59d250
                    BOOL eax_5 =
                        RedrawWindow(arg1, &var_18, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_5
                case 3
                    HWND hWnd_1 = *(edx_1 + 0x1c)
                    
                    if (hWnd_1 == 0 || *(edx_1 + 0x20) == 0)
                        eax_2 = SetFocus(*(edx_1 + 0x14))
                    else
                        uint128_t xmm1
                        xmm1.d = var_18.left
                        xmm1:4.d = var_18.top
                        xmm1:8.d = var_18.right
                        xmm1:0xc.d = var_18.bottom
                        int32_t xmm0_2 = _mm_bsrli_si128(xmm1, 8)
                        var_18.right = xmm0_2
                        int32_t eax_12
                        int32_t edx_2
                        edx_2:eax_12 = sx.q(xmm0_2 - X_1)
                        int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
                        int32_t X_2 = ((eax_12 - edx_2) s>> 1) + X_1
                        var_18.bottom = xmm1_1
                        MoveWindow(hWnd_1, X_1, Y_2, X_2 - X_1, xmm1_1 - Y_2, 1)
                        int32_t Y_1 = xmm1:4.d
                        MoveWindow(*(data_e47264 + 0x20), X_2, Y_1, xmm1:8.d - X_2, xmm1:0xc.d - Y_1, 1)
                        ShowWindow(*(data_e47264 + 0x20), SW_SHOW)
                        ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
                        eax_2 = SetFocus(*(data_e47264 + 0x1c))
                case 4
                    goto label_50345c
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
