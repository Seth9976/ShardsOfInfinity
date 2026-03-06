// 函数名称: sub_501e60
// 虚拟地址: 0x501e60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __stdcallsub_501e60(HWND arg1, uint32_t arg2, HWND arg3, LPARAM arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HWND hWnd_1 = GetParent(GetParent(arg1))
    GetClassNameA(arg1, &data_e4a988, 0x104)
    uint32_t eax_5 = __mbsicmp(&data_e4a988, "Edit")
    int32_t lParam_2
    lParam_2.b = eax_5 == 0
    int32_t lParam = lParam_2
    HWND hWnd
    
    if (eax_5 != 0)
        char const* const var_130_4 = "lpInsData"
        hWnd = hWnd_1
    else
        char const* const var_130_3 = "lpInsData"
        hWnd = GetParent(hWnd_1)
    
    HANDLE ecx = GetPropA(hWnd, "lpInsData")
    int32_t lParam_1 = lParam
    data_e47264 = ecx
    HWND hWnd_2
    
    if (lParam_1 == 0)
        hWnd_2 = arg1
    else
        HWND hWnd_4 = GetParent(arg1)
        ecx = data_e47264
        hWnd_2 = hWnd_4
        lParam_1 = lParam
    
    if (arg2 == 2)
        SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
        RemovePropA(arg1, "Wprc")
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    LPARAM ebx
    
    if (arg2 != 8)
        WPARAM eax_11
        
        if (arg2 != 0x102)
        label_501f83:
            eax_11 = arg3
        else
            eax_11 = arg3
            
            if (eax_11 == 0xd)
                if (*(ecx + 4) != 0 && SendMessageA(hWnd_2, 0x466, 0, &lParam) == 4)
                    int32_t lParam_3 = lParam
                    uint32_t var_130_9 = zx.d(lParam_3.b)
                    uint32_t var_134_2 = zx.d((lParam_3 u>> 8).b)
                    uint32_t var_138_2 = zx.d((lParam_3 u>> 0x10).b)
                    uint32_t var_13c_3 = lParam_3 u>> 0x18
                    char var_114[0x10c]
                    sub_5015e0(&var_114, 0x104, "%d.%d.%d.%d")
                    _free(*(*(data_e47264 + 4) + 0x10))
                    *(*(data_e47264 + 4) + 0x10) = sub_501620(&var_114)
                
                ShowWindow(hWnd_2, SW_HIDE)
                SetFocus(*(data_e47264 + 0x14))
                sub_5063d0()
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 1
        
        if (lParam == 0)
            if (arg2 == 0xf)
                sub_5019c0(eax_11, arg2, arg1, eax_11, arg4)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 1
            
            if (arg2 != 0x111)
                ebx = arg4
            else
                ebx = arg4
                
                if (GetPropA(ebx, "Wprc") == 0)
                    SetPropA(ebx, "Wprc", GetWindowLongA(ebx, 0xfffffffc))
                    SetWindowLongA(ebx, 0xfffffffc, sub_501e60)
        else
            if (arg2 == 0x87)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 4
            
            if (arg2 == 0x20a)
                SendMessageA(arg1, 0x102, 0xd, 0)
            else if (arg2 == 0x102)
                if (eax_11 == 9)
                    HWND hWnd_3
                    
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        hWnd_3 = GetWindow(arg1, GW_HWNDPREV)
                        
                        if (hWnd_3 != 0)
                            goto label_502176
                        
                        sub_5017c0(SetFocus(*(data_e47264 + 8)), 0)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return &hWnd_3->unused + 1
                    
                    hWnd_3 = GetWindow(arg1, GW_HWNDNEXT)
                    
                    if (hWnd_3 == 0)
                        goto label_50210f
                    
                label_502176:
                    SendMessageA(hWnd_3, 0xb1, 0, 0xffffffff)
                    SetFocus(hWnd_3)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 1
                
                if (eax_11 == 0x1b)
                    ShowWindow(hWnd_2, SW_HIDE)
                label_50210f:
                    SetFocus(*(data_e47264 + 0x14))
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 1
            else if (arg2 == 0x302)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 1
            
            ebx = arg4
    else
        if (lParam_1 != 0)
            if (hWnd_2 != GetParent(arg3))
                sub_5017c0(SendMessageA(hWnd_2, 0x102, 0xd, 0), arg3)
            
            goto label_501f83
        
        ebx = arg4
    
    LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, ebx)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
