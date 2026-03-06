// 函数名称: sub_415580
// 虚拟地址: 0x415580
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_415580()
{
    // 第一条实际指令: RECT rect
    RECT rect
    char* result = __security_cookie ^ &rect
    char* result_1 = result
    void* edi = data_65ac30
    char const* const var_44_1
    int32_t var_40_1
    char const* const var_3c_1
    char* ecx_1
    
    if (edi != 0)
        if (*(edi + 0x18) != 0)
            @__security_check_cookie@4(result_1 ^ &rect)
            return result
        
        int32_t eax_1
        eax_1.b = *(edi + 0x14) == 0
        *(edi + 0x14) = eax_1
        GetClientRect(data_ce1790, &rect)
        int32_t ecx_3 = rect.bottom - rect.top
        *(data_65ae00 + 0x18) = ecx_3
        int32_t eax_3 = sub_415460(ecx_3, *(edi + 0x14))
        void* ecx_4 = data_65ae00
        HWND hWnd = data_ce1790
        int32_t edi_1 = *(ecx_4 + 0x18)
        *(ecx_4 + 0x14) = eax_3
        GetWindowRect(hWnd, &rect)
        RECT rect_1
        GetClientRect(data_ce1790, &rect_1)
        int32_t top = rect.top
        int32_t left = rect.left
        SetWindowPos(data_ce1790, nullptr, left, top, 
            rect.right - left + eax_3 - (rect_1.right - rect_1.left), 
            rect.bottom - top + edi_1 - (rect_1.bottom - rect_1.top), SWP_DRAWFRAME)
        result = data_65aabc
        
        if (result != 0)
            result[0x65c] = 1
            result = sub_429a80()
            @__security_check_cookie@4(result_1 ^ &rect)
            return result
        
        var_3c_1 = "GetClient"
        var_40_1 = 0x74
        var_44_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    else
        var_3c_1 = "GetLocalSettings"
        var_40_1 = 0x23d
        var_44_1 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx_1 = "gGameSettings.localSettings"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_44_1, var_40_1, var_3c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
