// 函数名称: sub_505110
// 虚拟地址: 0x505110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __fastcallsub_505110(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT result = data_e47264
    HWND hWnd = *(arg2 + 0x14)
    WPARAM wParam = *(arg2 + 8)
    
    if (hWnd == *(result + 0x14) && wParam != 0xffffffff && (*(arg2 + 0xc) & 1) != 0)
        result = SendMessageA(hWnd, 0x199, wParam, 0)
        LRESULT result_1 = result
        LRESULT result_2 = result_1
        
        if (result_1 != 0xffffffff && result_1 != 0)
            void* edi_1 = data_e47264
            uint128_t lprc_7 = *(arg2 + 0x1c)
            RECT lprc_4
            lprc_4.left = lprc_7.d
            lprc_4.top = lprc_7:4.d
            lprc_4.right = lprc_7:8.d
            lprc_4.bottom = lprc_7:0xc.d
            int32_t left = lprc_4.left
            
            if (*(edi_1 + 0x24) == 0)
                int32_t eax_4
                int32_t edx
                edx:eax_4 = sx.q(_mm_bsrli_si128(lprc_7, 8) - left)
                *(edi_1 + 0x24) = (eax_4 - edx) s>> 1
                edi_1 = data_e47264
            
            RECT lprc_5
            lprc_5.left = lprc_7.d
            lprc_5.top = lprc_7:4.d
            lprc_5.right = lprc_7:8.d
            lprc_5.bottom = lprc_7:0xc.d
            lprc_5.left = left + 0x10
            RECT xmm0_3
            xmm0_3.left = lprc_5.left
            xmm0_3.top = lprc_5.top
            xmm0_3.right = lprc_5.right
            xmm0_3.bottom = lprc_5.bottom
            RECT lprc
            lprc.left = lprc_7.d
            lprc.top = lprc_7:4.d
            lprc.right = lprc_7:8.d
            lprc.bottom = lprc_7:0xc.d
            lprc.right = left + 0x10
            RECT lprc_3
            lprc_3.left = xmm0_3.left
            lprc_3.top = xmm0_3.top
            lprc_3.right = xmm0_3.right
            lprc_3.bottom = xmm0_3.bottom
            lprc_3.right = *(edi_1 + 0x24)
            uint128_t lprc_2 = lprc_7
            int32_t ecx
            ecx.b = *(result_1 + 0x14) != 0x63
            int32_t eax_10 = *(edi_1 + 0x24) + ecx
            lprc_2.d = eax_10
            int32_t ecx_1 = *(result_1 + 0x14)
            
            if (ecx_1 == 4 || ecx_1 == 8)
                eax_10 += 0x14
            
            uint128_t lprc_1 = lprc_7
            lprc_2:8.d = eax_10
            lprc_1.d = eax_10
            HGDIOBJ hbr = GetStockObject(HOLLOW_BRUSH)
            FillRect(*(arg2 + 0x18), &lprc, hbr)
            HGDIOBJ ho
            void lptm
            void var_1c0
            RECT var_124
            
            if (*(result_1 + 0x14) != 0x63)
            label_5054db:
                SetBkMode(*(arg2 + 0x18), 1)
                void* nIndex
                
                if (wParam != SendMessageA(*(arg2 + 0x14), 0x188, 0, 0))
                    nIndex = 5
                else
                    int32_t ecx_5
                    ecx_5.b = *(data_e47264 + 0x38) == 0
                    nIndex = (ecx_5 << 1) + 0xd
                
                HBRUSH hbr_5 = GetSysColorBrush(nIndex)
                FillRect(*(arg2 + 0x18), &lprc_3, hbr_5)
                lprc_4.left = lprc_3.left + 3
                lprc_4.top = lprc_3.top + 3
                lprc_4.right = lprc_3.right - 3
                lprc_4.bottom = lprc_3.bottom + 3
                GetObjectA(SendMessageA(*(arg2 + 0x14), 0x31, 0, 0), 0x3c, &var_1c0)
                var_1c0:0x10.d = 0x190
                HGDIOBJ h_1 = CreateFontIndirectA(&var_1c0)
                ho = SelectObject(*(arg2 + 0x18), h_1)
                void* nIndex_1
                
                if (wParam != SendMessageA(*(arg2 + 0x14), 0x188, 0, 0))
                    nIndex_1 = 8
                else
                    int32_t ecx_6
                    ecx_6.b = *(data_e47264 + 0x38) == 0
                    nIndex_1 = (ecx_6 << 2) + 0xe
                
                uint32_t color_1 = GetSysColor(nIndex_1)
                SetTextColor(*(arg2 + 0x18), color_1)
                uint8_t* lpchText_2 = *(result_1 + 4)
                char* lpchText_5 = lpchText_2
                void* eax_43
                
                do
                    eax_43.b = *lpchText_5
                    lpchText_5 = &lpchText_5[1]
                while (eax_43.b != 0)
                DrawTextA(*(arg2 + 0x18), lpchText_2, lpchText_5 - &lpchText_5[1], &lprc_4, 
                    DT_NOCLIP | DT_SINGLELINE)
                uint32_t eax_44 = GetSysColor(COLOR_BTNFACE)
                sub_501810(eax_44, &lprc_3, *(arg2 + 0x18), 6, eax_44)
            else
                var_124.left = lprc.left + 4
                var_124.top = lprc.top + 4
                var_124.right = lprc.left + 0xd
                var_124.bottom = lprc.top + 0xd
                HBRUSH hbr_1 = GetSysColorBrush(COLOR_WINDOW)
                FillRect(*(arg2 + 0x18), &var_124, hbr_1)
                HGDIOBJ hbr_2 = GetStockObject(BLACK_BRUSH)
                FrameRect(*(arg2 + 0x18), &var_124, hbr_2)
                int32_t left_1 = var_124.left
                int32_t top = var_124.top
                double xmm1_4 =
                    _mm_cvtepi32_pd(zx.q(var_124.right - left_1)) * 0.5 + _mm_cvtepi32_pd(zx.q(left_1))
                double xmm0_7 = _mm_cvtepi32_pd(zx.q(top))
                int32_t x = int.d(xmm1_4)
                int32_t y = int.d(_mm_cvtepi32_pd(zx.q(var_124.bottom - top)) * 0.5 + xmm0_7)
                InflateRect(&var_124, 0xfffffffe, 0xfffffffe)
                int32_t right = var_124.right
                HDC hdc = *(arg2 + 0x18)
                MoveToEx(hdc, var_124.left, y, nullptr)
                LineTo(hdc, right, y)
                result_1 = result_2
                
                if (*(result_1 + 0x18) != 0)
                    HDC hdc_1 = *(arg2 + 0x18)
                    int32_t bottom = var_124.bottom
                    MoveToEx(hdc_1, x, var_124.top, nullptr)
                    LineTo(hdc_1, x, bottom)
                    result_1 = result_2
                
                if (*(result_1 + 0x14) != 0x63)
                    goto label_5054db
                
                HGDIOBJ hbr_3 = GetStockObject(HOLLOW_BRUSH)
                FillRect(*(arg2 + 0x18), &lprc_5, hbr_3)
                
                if (wParam == SendMessageA(*(arg2 + 0x14), 0x188, 0, 0) && *(data_e47264 + 0x38) != 0)
                    InflateRect(&lprc_5, 0xfffffffe, 0xfffffffe)
                    HBRUSH hbr_4 = GetSysColorBrush(COLOR_BTNSHADOW)
                    FrameRect(*(arg2 + 0x18), &lprc_5, hbr_4)
                    InflateRect(&lprc_5, 2, 2)
                
                var_124.left = lprc_5.left + 6
                var_124.top = lprc_5.top + 3
                var_124.right = lprc_5.right - 6
                var_124.bottom = lprc_5.bottom + 3
                LOGFONTA var_200
                GetObjectA(SendMessageA(*(arg2 + 0x14), 0x31, 0, 0), 0x3c, &var_200)
                lptm:0xc.d = 0x2bc
                HFONT h = CreateFontIndirectA(&var_200)
                ho = SelectObject(*(arg2 + 0x18), h)
                uint32_t color = GetSysColor(COLOR_BTNTEXT)
                SetTextColor(*(arg2 + 0x18), color)
                uint8_t* lpchText_1 = *result_1
                char* lpchText_4 = lpchText_1
                char i
                
                do
                    i = *lpchText_4
                    lpchText_4 = &lpchText_4[1]
                while (i != 0)
                DrawTextA(*(arg2 + 0x18), lpchText_1, lpchText_4 - &lpchText_4[1], &var_124, 
                    DT_NOCLIP | DT_SINGLELINE)
            
            DeleteObject(ho)
            
            if (*(result_1 + 0x14) != 0x63)
                HBRUSH hbr_6 = GetSysColorBrush(COLOR_WINDOW)
                FillRect(*(arg2 + 0x18), &lprc_2, hbr_6)
                uint128_t lprc_6 = lprc_2
                var_124.left = lprc_6.d
                var_124.top = lprc_6:4.d
                var_124.right = lprc_6:8.d
                var_124.bottom = lprc_6:0xc.d
                var_124.top += 3
                var_124.bottom = var_124.top + 0x12
                var_124.left = lprc_6 + 2
                var_124.right = lprc_6 + 0x11
                int32_t eax_49 = *(result_1 + 0x14)
                
                if (eax_49 == 4)
                    uint32_t color_2 = sub_501920(*(result_1 + 0x10))
                    HDC hDC = *(arg2 + 0x18)
                    HBRUSH eax_50 = CreateSolidBrush(color_2)
                    FillRect(hDC, &var_124, eax_50)
                    DeleteObject(eax_50)
                    HGDIOBJ hbr_7 = GetStockObject(BLACK_BRUSH)
                    FrameRect(*(arg2 + 0x18), &var_124, hbr_7)
                    result_1 = result_2
                else if (eax_49 == 8)
                    if (__mbsicmp(*(result_1 + 8), U"T") == 0)
                        HBRUSH hbr_8 = GetSysColorBrush(COLOR_HIGHLIGHT)
                        FillRect(*(arg2 + 0x18), &lprc_2, hbr_8)
                    
                    enum DFCS_STATE param3 = DFCS_CAPTIONCLOSE
                    
                    if (__mbsicmp(*(result_1 + 0x10), U"T") == 0)
                        param3 = DFCS_CHECKED
                    
                    DrawFrameControl(*(arg2 + 0x18), &var_124, DFC_BUTTON, param3)
                    
                    if ((GetWindowLongA(*(arg2 + 0x14), 0xffffffeb) & 1) != 0)
                        HBRUSH hbr_9 = GetSysColorBrush(COLOR_BTNFACE)
                        FrameRect(*(arg2 + 0x18), &var_124, hbr_9)
                        InflateRect(&var_124, 0xffffffff, 0xffffffff)
                        HBRUSH hbr_10 = GetSysColorBrush(COLOR_WINDOW)
                        FrameRect(*(arg2 + 0x18), &var_124, hbr_10)
            
            uint32_t eax_54 = GetSysColor(COLOR_BTNFACE)
            sub_501810(eax_54, &lprc_2, *(arg2 + 0x18), 2, eax_54)
            int32_t eax_55 = *(result_1 + 0x14)
            
            if (eax_55 != 0x63)
                HBRUSH hbr_11 = GetSysColorBrush(COLOR_WINDOW)
                FillRect(*(arg2 + 0x18), &lprc_1, hbr_11)
                eax_55 = *(result_1 + 0x14)
            
            if (eax_55 != 8)
                SetBkMode(*(arg2 + 0x18), 1)
                
                if (*(result_1 + 0x14) != 5)
                    uint32_t color_3 = GetSysColor(COLOR_WINDOWTEXT)
                    SetTextColor(*(arg2 + 0x18), color_3)
                    uint8_t* lpchText_3 = *(result_1 + 0x10)
                    char* lpchText_6 = lpchText_3
                    int32_t xmm1_12[0x4] = _mm_add_epi32(data_59e000, lprc_1)
                    lprc_4.left = xmm1_12[0]
                    lprc_4.top = xmm1_12[1]
                    lprc_4.right = xmm1_12[2]
                    lprc_4.bottom = xmm1_12[3]
                    char i_1
                    
                    do
                        i_1 = *lpchText_6
                        lpchText_6 = &lpchText_6[1]
                    while (i_1 != 0)
                    DrawTextA(*(arg2 + 0x18), lpchText_3, lpchText_6 - &lpchText_6[1], &lprc_4, 
                        DT_NOCLIP | DT_SINGLELINE)
                else
                    void lpchText
                    _memset(&lpchText, 0, 0x104)
                    *(result_1 + 0x10)
                    LOGFONTA lplf
                    sub_502ea0(&lplf)
                    int32_t nDenominator = GetDeviceCaps(*(arg2 + 0x18), 0x5a)
                    int32_t esi_3 = neg.d(MulDiv(lplf.lfHeight, 0x48, nDenominator))
                    
                    if (esi_3 s> 0)
                        if (GetTextMetricsA(*(arg2 + 0x18), &lptm) != 0)
                            lplf.lfHeight = lptm.d + 2
                        
                        HFONT h_2 = CreateFontIndirectA(&lplf)
                        HGDIOBJ h_3 = SelectObject(*(arg2 + 0x18), h_2)
                        SetTextColor(*(arg2 + 0x18), var_1c0:0x38.d)
                        int32_t var_220_37 = esi_3
                        var_1a8
                        void* var_224_34 = &var_1a8
                        sub_5015e0(&lpchText, 0x104, "%s %d")
                        void* ecx_14 = &lpchText
                        int32_t xmm1_10[0x4] = _mm_add_epi32(data_59e000, lprc_1)
                        lprc_4.left = xmm1_10[0]
                        lprc_4.top = xmm1_10[1]
                        lprc_4.right = xmm1_10[2]
                        lprc_4.bottom = xmm1_10[3]
                        char i_2
                        
                        do
                            i_2 = *ecx_14
                            ecx_14 += 1
                        while (i_2 != 0)
                        void var_113
                        DrawTextA(*(arg2 + 0x18), &lpchText, ecx_14 - &var_113, &lprc_4, 
                            DT_NOCLIP | DT_SINGLELINE)
                        DeleteObject(SelectObject(*(arg2 + 0x18), h_3))
            
            uint32_t eax_61 = GetSysColor(COLOR_BTNFACE)
            result = sub_501810(eax_61, &lprc_1, *(arg2 + 0x18), 2, eax_61)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
