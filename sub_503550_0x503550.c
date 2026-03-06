// 函数名称: sub_503550
// 虚拟地址: 0x503550
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HWND __convention("regparm")sub_503550(int32_t arg1, int32_t arg2, HWND arg3, int32_t arg4, int16_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = *(data_e47264 + 0x24)
    
    if (arg4 s< ecx - 5 || arg4 s> ecx + 5)
        if (arg2 != 0)
            LRESULT eax_29 = SendMessageA(arg3, 0x199, 
                zx.d(SendMessageA(arg3, 0x1a9, 0, zx.d(arg5) << 0x10 | zx.d(arg4.w))), 0)
            
            if (eax_29 != 0xffffffff && eax_29 != 0 && *(eax_29 + 0x14) == 0x63)
                sub_5031a0(eax_29)
        
        void* eax_30 = data_e47264
        *(eax_30 + 0x40) = 0
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_30
    
    SetCursor(LoadCursorA(nullptr, 0x7f84))
    RECT rect_1
    GetWindowRect(arg3, &rect_1)
    rect_1.left += 0x10
    rect_1.right -= 0xa
    ClipCursor(&rect_1)
    RECT rect
    GetClientRect(arg3, &rect)
    *(data_e47264 + 0x40) = 1
    *(data_e47264 + 0x4c) = rect.top
    *(data_e47264 + 0x50) = rect.bottom
    *(data_e47264 + 0x44) = arg4
    HDC eax_10 = GetDC(arg3)
    int32_t bottom = rect.bottom
    int32_t top = rect.top
    int32_t rop2 = SetROP2(eax_10, R2_NOT)
    MoveToEx(eax_10, arg4, top, nullptr)
    LineTo(eax_10, arg4, bottom)
    SetROP2(eax_10, rop2)
    ReleaseDC(arg3, eax_10)
    void* edi_2 = *(data_e47264 + 4)
    
    if (edi_2 != 0)
        void string
        _memset(&string, 0, 0x104)
        int32_t eax_12 = *(edi_2 + 0x14) - 3
        
        if (eax_12 u> 0x60)
            goto label_50373b
        
        switch (eax_12)
            case 1, 2, 3, 4, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
                    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
                    0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 
                    0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 
                    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 
                    0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
                    0x5c, 0x5d, 0x5e, 0x5f
                goto label_50373b
            case 5
                *(edi_2 + 8) = &data_59cf5c
                HWND eax_14 = SetCapture(arg3)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_14
            case 9
                GetWindowTextA(*(data_e47264 + 0x20), &string, 0x104)
                _free(*(*(data_e47264 + 4) + 0x10))
                *(*(data_e47264 + 4) + 0x10) = sub_501620(&string)
                ShowWindow(*(data_e47264 + 0x20), SW_HIDE)
            label_50373b:
                GetWindowTextA(*(data_e47264 + 0x1c), &string, 0x104)
                _free(*(*(data_e47264 + 4) + 0x10))
                *(*(data_e47264 + 4) + 0x10) = sub_501620(&string)
                ShowWindow(*(data_e47264 + 0x1c), SW_HIDE)
    
    HWND eax_25 = SetCapture(arg3)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_25
}
