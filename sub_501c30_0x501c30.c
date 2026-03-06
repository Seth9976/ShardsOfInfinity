// 函数名称: sub_501c30
// 虚拟地址: 0x501c30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __stdcallsub_501c30(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HANDLE eax_4 = GetPropA(GetParent(GetParent(arg1)), "lpInsData")
    data_e47264 = eax_4
    
    if (arg2 == 2)
        SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
        RemovePropA(arg1, "Wprc")
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    if (arg2 != 8)
        if (arg2 == 0xf)
            sub_5019c0(eax_4, arg2, arg1, arg3, arg4)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 1
        
        if (arg2 == 0x20a)
            SendMessageA(arg1, 0x102, 0xd, 0)
        else if (arg2 != 0x102)
            if (arg2 == 0x100)
                if (arg3 == 9)
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        SetFocus(*(data_e47264 + 8))
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 1
                    
                    SendMessageA(arg1, 0x102, 0xd, 0)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 1
                
                if (arg3 == 0x1b)
                    ShowWindow(arg1, SW_HIDE)
                    SetFocus(*(data_e47264 + 0x14))
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 0
        else if (arg3 == 0xd)
            if (*(eax_4 + 4) != 0)
                void string
                GetWindowTextA(arg1, &string, 0x104)
                _free(*(*(data_e47264 + 4) + 0x10))
                *(*(data_e47264 + 4) + 0x10) = sub_501620(&string)
            
            ShowWindow(arg1, SW_HIDE)
            SetFocus(*(data_e47264 + 0x14))
            sub_5063d0()
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 1
    else
        sub_5017c0(SendMessageA(arg1, 0x102, 0xd, 0), arg3)
    
    LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
