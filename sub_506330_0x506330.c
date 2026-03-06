// 函数名称: sub_506330
// 虚拟地址: 0x506330
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HWND __fastcallsub_506330(HWND arg1)
{
    // 第一条实际指令: int32_t hInstance = GetWindowLongA(arg1, 0xfffffffa)
    int32_t hInstance = GetWindowLongA(arg1, 0xfffffffa)
    
    if (data_e477c4 == 0)
        WNDCLASSEXA var_34
        var_34.cbSize = 0x30
        BOOL eax = GetClassInfoExA(nullptr, "ListBox", &var_34)
        
        if (eax != 0)
            var_34.lpfnWndProc = sub_5068f0
            var_34.hInstance = hInstance
            var_34.lpszClassName = "PropGridCtl"
            eax = zx.d(RegisterClassExA(&var_34))
        
        data_e477c4 = eax.w
    
    HWND result = CreateWindowExA(WS_EX_LEFT, "PropGridCtl", &data_5559b1, 0x40010000, 0, 0, 0, 0, 
        arg1, 0xac, hInstance, nullptr)
    data_e4aa8c = result
    return result
}
