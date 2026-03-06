// 函数名称: sub_4c8f50
// 虚拟地址: 0x4c8f50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4c8f50(HDC arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = __ehhandler$___std_fs_get_stats@16
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_dc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* i_1 = sub_4c6d50()
    int32_t* i_2 = i_1
    
    if (i_1 != 0)
        int32_t var_a0
        GetWindowRect(GetDlgItem(data_ce1c90, 0x80), &var_a0)
        ScreenToClient(data_ce1c90, &var_a0)
        POINT point
        ScreenToClient(data_ce1c90, &point)
        SelectObject(arg1, GetStockObject(BLACK_PEN))
        SelectObject(arg1, GetStockObject(DC_BRUSH))
        SetDCBrushColor(arg1, 0xdcdcdc)
        int32_t top
        Rectangle(arg1, var_a0, top, point.x, point.y)
        uint128_t var_b0
        uint128_t xmm1_1 = *sub_4c7040(&var_b0)
        int32_t bottom = _mm_bsrli_si128(xmm1_1, 0xc)
        int32_t top_1 = _mm_bsrli_si128(xmm1_1, 4)
        float xmm0_4 = data_ce1ca0 f- data_ce1ca4
        var_b0 = xmm1_1
        int32_t edi_3 = bottom - top_1
        SelectObject(arg1, GetStockObject(DC_PEN))
        SelectObject(arg1, GetStockObject(DC_BRUSH))
        SetDCBrushColor(arg1, 0xf0f0f0)
        SetDCPenColor(arg1, 0xc0c0c0)
        uint128_t xmm1_2 = var_b0
        int32_t xmm0_6 = _mm_bsrli_si128(xmm1_2, 8)
        int32_t eax_11 = xmm1_2
        Rectangle(arg1, eax_11, top_1, xmm0_6, bottom)
        SetBkMode(arg1, 1)
        SelectObject(arg1, GetStockObject(ANSI_VAR_FONT))
        int32_t i = 0
        int32_t x = var_a0 + 4
        int32_t i_3 = 0
        int32_t esi_3 = (edi_3 - 1) * 5
        HDC hdc = arg1
        int32_t var_5c_1 = esi_3
        char* i_4
        
        do
            sub_4c7660(&i_4, _mm_cvtepi32_ps(zx.o(i)) * xmm0_4 / 5f f+ data_ce1ca4)
            int32_t var_14_1 = 0
            char* lpString_1 = i_4
            int32_t y = esi_3 s/ 5 + top_1
            int32_t c
            
            if (lpString_1 == 0 || *lpString_1 == 0)
                c = 0
            else
                c = *(sub_44f000(&i_4) + 8)
                lpString_1 = i_4
            
            char* lpString = &data_5559b1
            
            if (lpString_1 != 0)
                lpString = lpString_1
            
            TextOutA(hdc, x, y - 6, lpString, c)
            MoveToEx(hdc, eax_11, y, nullptr)
            LineTo(hdc, xmm0_6, y)
            int32_t var_14_2 = 1
            
            if (data_cdf414 != 0)
                char* i_5 = i_4
                
                if (i_5 != 0 && *i_5 != 0)
                    char* eax_18 = sub_44f000(&i_4)
                    int32_t temp0_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                        i_4 = &data_5559b1
            
            i = i_3 + 1
            esi_3 = var_5c_1 + 1 - edi_3
            int32_t var_14_3 = 0xffffffff
            i_3 = i
            var_5c_1 = esi_3
        while (i s< 6)
        
        SetDCPenColor(hdc, 0)
        SetDCBrushColor(hdc, 0x808080)
        int32_t* i_9 = i_2
        char* i_8 = nullptr
        i_4 = nullptr
        int32_t edx_5 = i_9[1]
        
        if (edx_5 s>= 0)
            do
                int32_t edi_5 = 0xa
                int32_t var_7c_2 = 0xa
                
                if (i_8 == 0 || i_8 == edx_5)
                    edi_5 = 2
                    var_7c_2 = 2
                else
                    int32_t eax_20 = *(*i_9 + i_8 * 0x10 + 0xc)
                    
                    if (eax_20 == 1 || eax_20 == 0)
                        edi_5 = 2
                        var_7c_2 = 2
                    
                    i_8 = i_4
                
                int32_t edx_6 = 1
                float xmm2_2 = _mm_cvtepi32_ps(zx.o(edi_5 - 1))
                int32_t var_6c_2 = 1
                float var_90_1 = xmm2_2
                
                do
                    int32_t* eax_22 = *i_9
                    float var_5c_2
                    float var_58_2
                    void* esi_8
                    float xmm0_7
                    float xmm3_1
                    float xmm4_1
                    int32_t xmm5_1
                    float xmm6_1
                    
                    if (i_8 == 0)
                        xmm3_1 = *eax_22
                        esi_8 = &i_8[1]
                        xmm0_7 = eax_22[1]
                        xmm6_1 = xmm3_1
                        xmm4_1 = eax_22[2]
                        xmm5_1 = (zx.o(0)).d
                        var_58_2 = xmm0_7
                        var_5c_2 = xmm6_1
                    else if (i_8 != i_9[1])
                        int32_t ecx_7 = i_8 * 2
                        xmm3_1 = eax_22[ecx_7 * 2 - 4]
                        xmm6_1 = eax_22[ecx_7 * 2]
                        xmm5_1 = eax_22[ecx_7 * 2 - 2]
                        xmm4_1 = eax_22[ecx_7 * 2 + 2]
                        esi_8 = eax_22[ecx_7 * 2 + 3]
                        var_58_2 = eax_22[ecx_7 * 2 - 3]
                        xmm0_7 = eax_22[ecx_7 * 2 + 1]
                        var_5c_2 = xmm6_1
                    else
                        xmm4_1 = 1f
                        int32_t ecx_6 = i_8 * 2
                        esi_8 = 1
                        xmm3_1 = eax_22[ecx_6 * 2 - 4]
                        xmm0_7 = eax_22[ecx_6 * 2 - 3]
                        xmm6_1 = xmm3_1
                        xmm5_1 = eax_22[ecx_6 * 2 - 2]
                        var_58_2 = xmm0_7
                        var_5c_2 = xmm3_1
                    
                    float xmm4_2 = xmm4_1 f- xmm5_1
                    float xmm0_11 = _mm_cvtepi32_ps(zx.o(edx_6 - 1)) / xmm2_2
                    float xmm1_10 = _mm_cvtepi32_ps(zx.o(edx_6)) / xmm2_2
                    float xmm2_5 = xmm4_2 * xmm0_11 f+ xmm5_1
                    float xmm4_4 = xmm4_2 * xmm1_10 f+ xmm5_1
                    float xmm0_12 = sub_4145f0(esi_8, xmm0_11, xmm3_1, xmm6_1)
                    float xmm0_14 = sub_4145f0(esi_8, xmm0_11, var_58_2, xmm0_7)
                    float xmm0_16 = sub_4145f0(esi_8, xmm1_10, xmm3_1, var_5c_2)
                    float xmm0_18 = sub_4145f0(esi_8, xmm1_10, var_58_2, xmm0_7)
                    float xmm1_15 = data_ce1ca4
                    float xmm0_20 = data_ce1ca0 - xmm1_15
                    uint128_t xmm2_10 = *sub_4c7040(&var_b0)
                    int32_t ecx_12 = xmm2_10
                    int32_t x_1 =
                        int.d(_mm_cvtepi32_ps(zx.o(_mm_bsrli_si128(xmm2_10, 8) - ecx_12)) * xmm2_5)
                        + ecx_12
                    int32_t xmm0_30 = _mm_bsrli_si128(xmm2_10, 0xc)
                    int32_t xmm2_11 = _mm_bsrli_si128(xmm2_10, 4)
                    int32_t ecx_15 = int.d((1f - (xmm0_12 - xmm1_15) / xmm0_20)
                        * _mm_cvtepi32_ps(zx.o(xmm0_30 - xmm2_11)))
                    float xmm1_18 = data_ce1ca4
                    float xmm0_34 = data_ce1ca0 - xmm1_18
                    uint128_t xmm2_12 = *sub_4c7040(&var_a0)
                    int32_t ecx_17 = xmm2_12
                    int32_t x_2 =
                        int.d(_mm_cvtepi32_ps(zx.o(_mm_bsrli_si128(xmm2_12, 8) - ecx_17)) * xmm2_5)
                        + ecx_17
                    int32_t xmm0_44 = _mm_bsrli_si128(xmm2_12, 0xc)
                    int32_t xmm2_13 = _mm_bsrli_si128(xmm2_12, 4)
                    float xmm1_20 =
                        (1f - (xmm0_14 - xmm1_18) / xmm0_34) * _mm_cvtepi32_ps(zx.o(xmm0_44 - xmm2_13))
                    float xmm1_21 = data_ce1ca4
                    float xmm0_48 = data_ce1ca0 - xmm1_21
                    void var_c0
                    uint128_t xmm2_14 = *sub_4c7040(&var_c0)
                    int32_t ecx_22 = xmm2_14
                    int32_t x_3 =
                        int.d(_mm_cvtepi32_ps(zx.o(_mm_bsrli_si128(xmm2_14, 8) - ecx_22)) * xmm4_4)
                        + ecx_22
                    int32_t xmm0_58 = _mm_bsrli_si128(xmm2_14, 0xc)
                    int32_t xmm2_15 = _mm_bsrli_si128(xmm2_14, 4)
                    float xmm1_23 =
                        (1f - (xmm0_16 - xmm1_21) / xmm0_48) * _mm_cvtepi32_ps(zx.o(xmm0_58 - xmm2_15))
                    float xmm1_24 = data_ce1ca4
                    float xmm0_62 = data_ce1ca0 - xmm1_24
                    void var_d0
                    uint128_t xmm2_16 = *sub_4c7040(&var_d0)
                    int32_t ecx_27 = xmm2_16
                    int32_t x_4 =
                        int.d(_mm_cvtepi32_ps(zx.o(_mm_bsrli_si128(xmm2_16, 8) - ecx_27)) * xmm4_4)
                        + ecx_27
                    int32_t xmm0_72 = _mm_bsrli_si128(xmm2_16, 0xc)
                    int32_t xmm2_17 = _mm_bsrli_si128(xmm2_16, 4)
                    int32_t y_1 = int.d((1f - (xmm0_18 - xmm1_24) / xmm0_62)
                        * _mm_cvtepi32_ps(zx.o(xmm0_72 - xmm2_17))) + xmm2_17
                    MoveToEx(arg1, x_1, ecx_15 + xmm2_11, nullptr)
                    LineTo(arg1, x_3, int.d(xmm1_23) + xmm2_15)
                    MoveToEx(arg1, x_2, int.d(xmm1_20) + xmm2_13, nullptr)
                    hdc = arg1
                    LineTo(hdc, x_4, y_1)
                    xmm2_2 = var_90_1
                    edx_6 = var_6c_2 + 1
                    i_8 = i_4
                    i_9 = i_2
                    var_6c_2 = edx_6
                while (edx_6 s< var_7c_2)
                
                edx_5 = i_9[1]
                i_8 = &i_8[1]
                i_4 = i_8
            while (i_8 s<= edx_5)
        
        i_1 = nullptr
        i_4 = nullptr
        
        if (edx_5 s> 0)
            do
                edx_5.b = 1
                int32_t eax_43
                int32_t edx_8
                eax_43, edx_8 = sub_4c70b0(i_1, edx_5.b)
                char* i_6 = i_4
                COLORREF color
                
                if (data_ce1c98 == i_6 && data_ce1c9c != 0)
                    color = 0x6464ff
                else if (data_ce1c94 != i_6)
                    color = 0x808080
                else
                    color = 0xc8
                
                SetDCBrushColor(hdc, color)
                int32_t var_44_1 = eax_43
                POINT apt
                apt.y = edx_8 - 4
                apt.x = eax_43 - 4
                int32_t var_40_1 = edx_8 - 8
                int32_t var_38_1 = edx_8 - 4
                int32_t var_3c_1 = eax_43 + 4
                int32_t var_34_1 = eax_43 + 4
                int32_t var_2c_1 = eax_43 - 4
                int32_t var_30_1 = edx_8 + 4
                int32_t var_28_1 = edx_8 + 4
                Polygon(hdc, &apt, 5)
                int32_t eax_51
                int32_t edx_11
                eax_51, edx_11 = sub_4c70b0(i_4, 0)
                char* i_7 = i_4
                COLORREF color_1
                
                if (data_ce1c98 == i_7 && data_ce1c9c == 0)
                    color_1 = 0x6464ff
                else if (data_ce1c94 != i_7)
                    color_1 = 0x808080
                else
                    color_1 = 0xc8
                
                SetDCBrushColor(hdc, color_1)
                Rectangle(hdc, eax_51 - 4, edx_11 - 4, eax_51 + 5, edx_11 + 5)
                i_1 = &i_4[1]
                i_4 = i_1
            while (i_1 s< i_9[1])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return i_1
}
