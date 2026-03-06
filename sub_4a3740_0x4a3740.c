// 函数名称: sub_4a3740
// 虚拟地址: 0x4a3740
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HWND __fastcallsub_4a3740(HINSTANCE arg1)
{
    // 第一条实际指令: void var_13c
    void var_13c
    int32_t eax_1 = __security_cookie ^ &var_13c
    HDC eax_2 = GetDC(nullptr)
    int32_t eax_3 = GetDeviceCaps(eax_2, 0x58)
    int32_t eax_4 = GetDeviceCaps(eax_2, 0x5a)
    ReleaseDC(nullptr, eax_2)
    void* esi = data_65ae00
    RECT rect
    rect.left = 0
    rect.top = 0
    enum WINDOW_STYLE dwStyle
    
    if (*(esi + 0x23) == 0)
        dwStyle = WS_TILEDWINDOW
        int32_t eax_17
        int32_t edx_3
        edx_3:eax_17 = muls.dp.d(0x2aaaaaab, *(esi + 0x14) * eax_3)
        int32_t edx_4 = edx_3 s>> 4
        rect.right = (edx_4 u>> 0x1f) + edx_4
        int32_t eax_18
        int32_t edx_5
        edx_5:eax_18 = muls.dp.d(0x2aaaaaab, *(esi + 0x18) * eax_4)
        int32_t edx_6 = edx_5 s>> 4
        rect.bottom = (edx_6 u>> 0x1f) + edx_6
        
        if (*(esi + 0x38) != 0)
            dwStyle = 0xcb0000
    else
        dwStyle = WS_POPUP
        rect.right = GetSystemMetrics(SM_CXSCREEN)
        rect.bottom = GetSystemMetrics(SM_CYSCREEN)
        void* ecx = data_65ae00
        *(ecx + 0x14) = divs.dp.d(sx.q(rect.right * 0x60), eax_3)
        *(ecx + 0x18) = divs.dp.d(sx.q(rect.bottom * 0x60), eax_4)
    
    AdjustWindowRect(&rect, dwStyle, 0)
    wchar16 var_110[0x82]
    int32_t eax_23 = MultiByteToWideChar(0xfde9, 0, *(data_65ae00 + 0xc), 0xffffffff, &var_110, 0x80)
    int32_t var_150_4
    char* ecx_8
    
    if (eax_23 != 0)
        int32_t eax_24 = data_ce19b8
        var_114
        
        if (eax_24 == 0)
            void* edi_1 = &var_114:2
            int32_t eax_25
            
            do
                eax_25.w = *(edi_1 + 2)
                edi_1 += 2
            while (eax_25.w != 0)
            int16_t* esi_1
            int16_t* edi_2
            edi_2, esi_1 = __builtin_memcpy(edi_1, u" (no graphics)", 0x1c)
            *edi_2 = *esi_1
            goto label_4a392e
        
        if (eax_24 == 1)
            void* ecx_9 = &var_114:2
            int32_t eax_26
            
            do
                eax_26.w = *(ecx_9 + 2)
                ecx_9 += 2
            while (eax_26.w != 0)
            __builtin_memcpy(ecx_9, u" (opengl)", 0x14)
            goto label_4a392e
        
        eax_23 = eax_24 - 2
        
        if (eax_24 == 2)
        label_4a392e:
            HWND hwnd = CreateWindowExW(WS_EX_LEFT, GameWindowClass", &var_110, dwStyle, 0x80000000, 
                data_ce148c, rect.right - rect.left, rect.bottom - rect.top, nullptr, nullptr, arg1, 
                nullptr)
            GESTURECONFIG gestureConfig
            gestureConfig.dwID = 0
            gestureConfig.dwWant = 0
            gestureConfig.dwBlock = 1
            SetGestureConfig(hwnd, 0, 1, &gestureConfig, 0xc)
            @__security_check_cookie@4(eax_1 ^ &var_13c)
            return hwnd
        
        char const* const var_14c_2 = "CreateMainWindow"
        var_150_4 = 0x96
        ecx_8 = "Halt"
    else
        char const* const var_14c_1 = "CreateMainWindow"
        var_150_4 = 0x85
        ecx_8 = "result"
    
    sub_44e4d0(eax_23, &data_5559b1, ecx_8, "c:\ax2017\engine\windows\windowsapp.cpp", var_150_4, 
        "CreateMainWindow")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
