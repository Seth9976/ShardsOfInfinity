// 函数名称: sub_5029a0
// 虚拟地址: 0x5029a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HWND __convention("regparm")sub_5029a0(int32_t arg1, HWND arg2, HINSTANCE arg3, HMENU arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = 9
    int32_t eax = 9
    
    if (arg5 != 0)
        eax = 0
    
    HWND result = CreateWindowExA(WS_EX_LEFT, "SysDateTimePick32", &data_5559b1, eax | 0x40000000, 
        0x80000000, 0x80000000, 0x80000000, 0x80000000, arg2, arg4, arg3, nullptr)
    
    if (result == 0)
        return result
    
    SetWindowTheme(result, &data_59cfa8, &data_59cfa8)
    SendMessageA(result, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
    SetPropA(result, "Wprc", GetWindowLongA(result, 0xfffffffc))
    SetWindowLongA(result, 0xfffffffc, sub_5023c0)
    return result
}
