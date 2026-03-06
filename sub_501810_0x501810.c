// 函数名称: sub_501810
// 虚拟地址: 0x501810
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __convention("regparm")sub_501810(int32_t arg1, int32_t* arg2, HDC arg3, char arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HDC hdc_1 = arg3
    HDC hdc = hdc_1
    HGDIOBJ h = SelectObject(hdc_1, GetStockObject(BLACK_PEN))
    LOGPEN var_18
    GetObjectA(h, 0x10, &var_18)
    var_18.lopnColor = arg5
    SelectObject(hdc_1, CreatePenIndirect(&var_18))
    
    if ((arg4 & 1) != 0)
        int32_t x = *arg2
        int32_t y = arg2[3]
        MoveToEx(hdc, x, arg2[1], nullptr)
        hdc_1 = hdc
        LineTo(hdc_1, x, y)
    
    if ((arg4 & 2) != 0)
        int32_t y_1 = arg2[1]
        int32_t x_1 = arg2[2]
        MoveToEx(hdc, *arg2, y_1, nullptr)
        hdc_1 = hdc
        LineTo(hdc_1, x_1, y_1)
    
    char eax_4 = arg4
    
    if ((eax_4 & 4) != 0)
        int32_t x_2 = arg2[2]
        int32_t y_2 = arg2[3]
        MoveToEx(hdc, x_2, arg2[1], nullptr)
        hdc_1 = hdc
        LineTo(hdc_1, x_2, y_2)
        eax_4 = arg4
    
    if ((eax_4 & 8) != 0)
        int32_t y_3 = arg2[3]
        int32_t x_3 = arg2[2]
        MoveToEx(hdc, *arg2, y_3, nullptr)
        hdc_1 = hdc
        LineTo(hdc_1, x_3, y_3)
    
    BOOL result = DeleteObject(SelectObject(hdc_1, h))
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
