// 函数名称: sub_502e00
// 虚拟地址: 0x502e00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HWND __convention("regparm")sub_502e00(int32_t arg1, HWND arg2, HINSTANCE arg3, HMENU arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1 = neg.d(arg5)
    int32_t eax_1 = neg.d(arg5)
    HWND result = CreateWindowExA(WS_EX_LEFT, "ComboBox", nullptr, 
        (sbb.d(eax_1, eax_1, arg5 != 0) + 3) | 0x40000400, 0x80000000, 0x80000000, 0x80000000, 
        0x80000000, arg2, arg4, arg3, nullptr)
    
    if (result == 0)
        return result
    
    SetWindowTheme(result, &data_59cfa8, &data_59cfa8)
    SendMessageA(result, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
    SetPropA(result, "Wprc", GetWindowLongA(result, 0xfffffffc))
    SetWindowLongA(result, 0xfffffffc, sub_502a40)
    return result
}
