// 函数名称: sub_503d80
// 虚拟地址: 0x503d80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __convention("regparm")sub_503d80(int32_t arg1, void* arg2, HWND arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: HWND var_8 = arg3
    HWND var_8 = arg3
    int32_t* esi = data_e47264
    
    if (esi[7] == 0)
        HWND eax = CreateWindowExA(WS_EX_CLIENTEDGE, "Edit", &data_5559b1, 0x40001084, 0x80000000, 
            0x80000000, 0x80000000, 0x80000000, arg3, 0x7d3, *esi, nullptr)
        
        if (eax != 0)
            SetWindowTheme(eax, &data_59cfa8, &data_59cfa8)
            SendMessageA(eax, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
            SetPropA(eax, "Wprc", GetWindowLongA(eax, 0xfffffffc))
            SetWindowLongA(eax, 0xfffffffc, sub_501c30)
        
        *(data_e47264 + 0x1c) = eax
        esi = data_e47264
    
    MoveWindow(esi[7], arg4, arg5 + 1, arg6 - arg4, arg7 - (arg5 + 1), 1)
    SetWindowTextA(*(data_e47264 + 0x1c), *(arg2 + 0x10))
    ShowWindow(*(data_e47264 + 0x1c), SW_SHOW)
    SetFocus(*(data_e47264 + 0x1c))
    return SendMessageA(*(data_e47264 + 0x1c), 0xb1, 0, 0xffffffff)
}
