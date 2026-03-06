// 函数名称: sub_5019c0
// 虚拟地址: 0x5019c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_5019c0(int32_t arg1, uint32_t arg2, HWND arg3, WPARAM arg4, LPARAM arg5)
{
    // 第一条实际指令: HDC hdc
    HDC hdc
    int32_t eax_1 = __security_cookie ^ &hdc
    HDC hdc_1 = GetWindowDC(arg3)
    hdc = hdc_1
    CallWindowProcA(GetPropA(arg3, "Wprc"), arg3, arg2, arg4, arg5)
    int32_t x_4
    GetWindowRect(arg3, &x_4)
    MapWindowPoints(nullptr, arg3, &x_4, 2)
    int32_t var_28
    int32_t y = var_28 + 2
    x_4 += 2
    uint32_t eax_3 = GetSysColor(COLOR_WINDOW)
    HGDIOBJ h = SelectObject(hdc_1, GetStockObject(BLACK_PEN))
    LOGPEN var_1c
    GetObjectA(h, 0x10, &var_1c)
    var_1c.lopnColor = eax_3
    HPEN h_1 = CreatePenIndirect(&var_1c)
    SelectObject(hdc, h_1)
    int32_t x_2 = x_4
    MoveToEx(hdc, x_2, y, nullptr)
    int32_t y_2
    LineTo(hdc, x_2, y_2)
    MoveToEx(hdc, x_4, y, nullptr)
    int32_t x
    LineTo(hdc, x, y)
    MoveToEx(hdc, x, y, nullptr)
    LineTo(hdc, x, y_2)
    MoveToEx(hdc, x_4, y_2, nullptr)
    LineTo(hdc, x, y_2)
    HDC hdc_2 = hdc
    DeleteObject(SelectObject(hdc_2, h))
    int32_t y_1 = y + 1
    x_4 += 1
    int32_t y_3 = y_2 + 1
    int32_t x_1 = x + 1
    uint32_t eax_6 = GetSysColor(COLOR_WINDOW)
    HGDIOBJ h_2 = SelectObject(hdc_2, GetStockObject(BLACK_PEN))
    GetObjectA(h_2, 0x10, &var_1c)
    var_1c.lopnColor = eax_6
    HPEN h_3 = CreatePenIndirect(&var_1c)
    SelectObject(hdc, h_3)
    int32_t x_3 = x_4
    MoveToEx(hdc, x_3, y_1, nullptr)
    LineTo(hdc, x_3, y_3)
    MoveToEx(hdc, x_4, y_1, nullptr)
    LineTo(hdc, x_1, y_1)
    MoveToEx(hdc, x_1, y_1, nullptr)
    LineTo(hdc, x_1, y_3)
    MoveToEx(hdc, x_4, y_3, nullptr)
    HDC hdc_3 = hdc
    LineTo(hdc_3, x_1, y_3)
    DeleteObject(SelectObject(hdc_3, h_2))
    ReleaseDC(arg3, hdc_3)
    @__security_check_cookie@4(eax_1 ^ &hdc)
    return 1
}
