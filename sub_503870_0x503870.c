// 函数名称: sub_503870
// 虚拟地址: 0x503870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __convention("regparm")sub_503870(int32_t arg1, int32_t arg2, HWND arg3, int16_t arg4)
{
    // 第一条实际指令: void* eax = data_e47264
    void* eax = data_e47264
    
    if (*(eax + 0x40) == 0)
        uint32_t wParam_1 = zx.d(SendMessageA(arg3, 0x1a9, 0, zx.d(arg4) << 0x10 | zx.d(arg2.w)))
        
        if (SendMessageA(arg3, 0x188, 0, 0) != wParam_1)
            SendMessageA(arg3, 0x186, wParam_1, 0)
    else
        *(eax + 0x40) = 0
        
        if (arg3 == GetCapture())
            ReleaseCapture()
        
        ClipCursor(nullptr)
        HDC eax_2 = GetDC(arg3)
        void* ecx = data_e47264
        int32_t y = *(ecx + 0x50)
        int32_t y_1 = *(ecx + 0x4c)
        int32_t rop2 = SetROP2(eax_2, R2_NOT)
        MoveToEx(eax_2, arg2, y_1, nullptr)
        LineTo(eax_2, arg2, y)
        SetROP2(eax_2, rop2)
        ReleaseDC(arg3, eax_2)
        *(data_e47264 + 0x24) = arg2
        RedrawWindow(arg3, nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
        void* eax_5 = *(data_e47264 + 4)
        
        if (eax_5 != 0)
            int32_t eax_7 = *(eax_5 + 0x14) - 3
            
            if (eax_7 u> 0x60)
                ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
            else
                switch (eax_7)
                    case 1, 2, 3, 4, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                            0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                            0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 
                            0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                            0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 
                            0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
                            0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
                            0x5c, 0x5d, 0x5e, 0x5f
                        ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
                    case 9
                        ShowWindow(*(data_e47264 + 0x20), SW_SHOW)
                        ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
    
    SendMessageA(*(data_e47264 + 0x1c), 0x102, 0xd, 0)
    SendMessageA(*(data_e47264 + 0x20), 0x102, 0xd, 0)
    WPARAM wParam = zx.d(GetDlgCtrlID(arg3)) | 0x10000
    SendMessageA(GetParent(arg3), 0x111, wParam, arg3)
    LRESULT result = data_e47264
    void* ecx_3 = *(result + 4)
    
    if (ecx_3 != 0)
        result = *(ecx_3 + 0x14)
        
        if (result != 3)
            if (result == 8)
                LPARAM lParam = __mbsicmp(*(ecx_3 + 8), U"T")
                
                if (lParam == 0)
                    return SendMessageA(arg3, 0x100, 0x20, lParam)
                
                return SendMessageA(arg3, 0x100, 9, 0)
            
            if (result != 0x63)
                return SendMessageA(arg3, 0x100, 9, 0)
    
    return result
}
