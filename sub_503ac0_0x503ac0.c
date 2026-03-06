// 函数名称: sub_503ac0
// 虚拟地址: 0x503ac0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __convention("regparm")sub_503ac0(int32_t arg1, int32_t arg2, HWND arg3, int16_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = data_e47264
    HWND hWnd_2 = arg3
    HWND hWnd = hWnd_2
    LRESULT result
    
    if (*(esi + 0x40) == 0)
        int32_t ecx_1 = *(esi + 0x24)
        result = ecx_1 - 5
        
        if (arg2 s>= result)
            result = ecx_1 + 5
            
            if (arg2 s<= result)
                result = SetCursor(LoadCursorA(nullptr, 0x7f84))
                esi = data_e47264
    else
        HDC eax_2 = GetDC(hWnd_2)
        void* ecx = data_e47264
        int32_t x = *(ecx + 0x44)
        int32_t y = *(ecx + 0x50)
        int32_t y_2 = *(ecx + 0x4c)
        int32_t rop2 = SetROP2(eax_2, R2_NOT)
        MoveToEx(eax_2, x, y_2, nullptr)
        LineTo(eax_2, x, y)
        SetROP2(eax_2, rop2)
        void* eax_3 = data_e47264
        int32_t y_1 = *(eax_3 + 0x50)
        int32_t y_3 = *(eax_3 + 0x4c)
        int32_t rop2_1 = SetROP2(eax_2, R2_NOT)
        MoveToEx(eax_2, arg2, y_3, nullptr)
        LineTo(eax_2, arg2, y_1)
        SetROP2(eax_2, rop2_1)
        hWnd_2 = hWnd
        ReleaseDC(hWnd_2, eax_2)
        result = data_e47264
        *(result + 0x44) = arg2
        esi = data_e47264
    
    HWND hWnd_1 = *(esi + 0xc)
    
    if (hWnd_1 != 0)
        void var_5c
        _memset(&var_5c, 0, 0x50)
        int32_t lParam = 0x2c
        void var_ac
        void* var_f4_1 = &var_ac
        SendMessageA(hWnd_1, 0x40e, 0, &lParam)
        void* ecx_2 = data_e47264
        LRESULT eax_6
        
        if (arg2 s>= *(ecx_2 + 0x24) + 5 && *(ecx_2 + 0x40) == 0)
            eax_6 = SendMessageA(hWnd_2, 0x199, 
                zx.d(SendMessageA(hWnd_2, 0x1a9, 0, zx.d(arg4) << 0x10 | zx.d(arg2.w))), 0)
            
            if (eax_6 != 0xffffffff && eax_6 != 0)
                int32_t ecx_6 = *(eax_6 + 0x14)
                
                if (ecx_6 == 5)
                    *(eax_6 + 0x10)
                    int32_t nNumber
                    sub_502ea0(&nNumber)
                    HDC eax_10 = GetDC(hWnd_2)
                    int32_t nDenominator = GetDeviceCaps(eax_10, 0x5a)
                    int32_t esi_4 = neg.d(MulDiv(nNumber, 0x48, nDenominator))
                    ReleaseDC(hWnd, eax_10)
                    int32_t var_138_13 = esi_4
                    void var_d0
                    void* var_13c_14 = &var_d0
                    sub_5015e0(&var_5c, 0x50, "%s %d")
                else if (ecx_6 != 8)
                    __mbsnbcpy(&var_5c, *(eax_6 + 0x10), 0x4f)
        
        char* ecx_8 = &var_5c
        
        do
            eax_6.b = *ecx_8
            ecx_8 = &ecx_8[1]
        while (eax_6.b != 0)
        
        void var_5b
        result = __mbsnbcmp(&var_ac, &var_5c, ecx_8 - &var_5b)
        
        if (result != 0)
            _memset(&var_ac, 0, 0x4f)
            __mbsnbcpy(&var_ac, &var_5c, 0x4f)
            result = SendMessageA(*(data_e47264 + 0xc), 0x40c, 0, &lParam)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
