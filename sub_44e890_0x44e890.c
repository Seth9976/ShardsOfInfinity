// 函数名称: sub_44e890
// 虚拟地址: 0x44e890
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_44e890(char arg1)
{
    // 第一条实际指令: void var_4c
    void var_4c
    int32_t eax_1 = __security_cookie ^ &var_4c
    TEB* fsbase
    void* esi = *fsbase->ThreadLocalStoragePointer
    int32_t ebx
    ebx.b = arg1
    
    if (data_e48e00 s> *(esi + 4))
        __Init_thread_header(&data_e48e00)
        
        if (data_e48e00 == 0xffffffff)
            data_e48e04 = 0x80000000
            data_e48e08 = 0x80000000
            __Init_thread_footer(&data_e48e00)
    
    if (data_e48e0c s> *(esi + 4))
        __Init_thread_header(&data_e48e0c)
        
        if (data_e48e0c == 0xffffffff)
            void* eax_5 = data_65ae00
            int32_t eax_6 = *(eax_5 + 0x18)
            data_e48e10 = *(eax_5 + 0x14)
            data_e48e14 = eax_6
            __Init_thread_footer(&data_e48e0c)
    
    int32_t X
    int32_t Y
    int32_t cx
    int32_t cy
    MONITORINFO lpmi
    
    if (ebx.b == 0)
        int32_t X_1 = data_e48e04
        int32_t Y_1
        
        if (X_1 != 0x80000000)
            Y_1 = data_e48e08
        else
            HMONITOR hMonitor_1 = MonitorFromWindow(data_ce1790, MONITOR_DEFAULTTONEAREST)
            lpmi.cbSize = 0x28
            lpmi.dwFlags = 0
            lpmi.rcMonitor.left = 0
            lpmi.rcMonitor.top = 0
            lpmi.rcMonitor.right = 0
            lpmi.rcMonitor.bottom = 0
            lpmi.rcWork.left = 0
            lpmi.rcWork.top = 0
            lpmi.rcWork.right = 0
            lpmi.rcWork.bottom = 0
            GetMonitorInfoA(hMonitor_1, &lpmi)
            X_1 = lpmi.rcMonitor.left + 0x64
            Y_1 = lpmi.rcMonitor.top + 0x64
            data_e48e04 = X_1
            data_e48e08 = Y_1
        
        int32_t cx_2 = data_e48e10
        int32_t cy_2 = data_e48e14
        SetWindowLongA(data_ce1790, 0xfffffff0, 0x10cf0000)
        int32_t var_5c_5 = 0x20
        cy = cy_2
        cx = cx_2
        Y = Y_1
        X = X_1
    else
        RECT rect
        GetWindowRect(data_ce1790, &rect)
        int32_t left_1 = rect.left
        int32_t top = rect.top
        data_e48e10 = rect.right - left_1
        int32_t eax_10 = rect.bottom - top
        data_e48e04 = left_1
        data_e48e14 = eax_10
        void* eax_11 = data_65ae00
        HWND hwnd = data_ce1790
        data_e48e08 = top
        *(eax_11 + 0x23) = 1
        HMONITOR hMonitor = MonitorFromWindow(hwnd, MONITOR_DEFAULTTONEAREST)
        lpmi.cbSize = 0x28
        lpmi.dwFlags = 0
        lpmi.rcMonitor.left = 0
        lpmi.rcMonitor.top = 0
        lpmi.rcMonitor.right = 0
        lpmi.rcMonitor.bottom = 0
        lpmi.rcWork.left = 0
        lpmi.rcWork.top = 0
        lpmi.rcWork.right = 0
        lpmi.rcWork.bottom = 0
        GetMonitorInfoA(hMonitor, &lpmi)
        int32_t left = lpmi.rcMonitor.left
        int32_t cx_1 = lpmi.rcMonitor.right - left
        int32_t top_1 = lpmi.rcMonitor.top
        int32_t cy_1 = lpmi.rcMonitor.bottom - top_1
        SetWindowLongA(data_ce1790, 0xfffffff0, 0x90000000)
        int32_t var_5c_3 = 0x20
        cy = cy_1
        cx = cx_1
        Y = top_1
        X = left
    BOOL result = SetWindowPos(data_ce1790, nullptr, X, Y, cx, cy, SWP_DRAWFRAME)
    @__security_check_cookie@4(eax_1 ^ &var_4c)
    return result
}
