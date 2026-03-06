// 函数名称: sub_4cec20
// 虚拟地址: 0x4cec20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULT __stdcallsub_4cec20(HWND arg1, uint32_t arg2, WPARAM arg3, int32_t* arg4)
{
    // 第一条实际指令: __alloca_probe(0x104c)
    __alloca_probe(0x104c)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    int32_t eax_2 = data_ce1cc0
    WPARAM ecx = arg3
    
    if (eax_2 == 0 || arg2 != eax_2)
    label_4ceea7:
        
        if (arg2 == 0xf)
            int32_t __saved_ebp
            sub_4c9c90(BeginPaint(arg1, &__saved_ebp))
            EndPaint(arg1, &__saved_ebp)
        else if (arg2 != 0x4e)
            if (arg2 != 0x111)
                LRESULT result = DefWindowProcA(arg1, arg2, ecx, arg4)
                @__security_check_cookie@4(eax_1 ^ &var_8)
                return result
            
            if (ecx u>> 0x10 == 1 && ecx.w == 0xab)
                HWND hWnd = GetDlgItem(arg1, 0xab)
                LRESULT esi_1 = SendMessageA(hWnd, 0x190, 0, 0)
                
                if (esi_1 s> 0)
                    void lParam
                    SendMessageA(hWnd, 0x191, 0x400, &lParam)
                    
                    if (esi_1 s> 0x400)
                        esi_1 = 0x400
                    
                    sub_501240(&lParam, esi_1)
                else if (data_d77c70.b == 0 && data_d77c72 == 0)
                    data_d77c6c = 0
                    sub_5012b0()
                
                sub_4d0360()
                SetFocus(data_ce1790)
        else if (ecx == 0xac && arg4[2] == 0x42a)
            sub_4ce1d0(*arg4, arg4)
    else
        if (ecx != 0xab)
            sub_44e4d0(eax_2, &data_5559b1, "wParam == IDC_UIELEMENT_LIST", 
                "c:\ax2017\engine\windows\editorwindow.cpp", 0x117c, "UiEditorDialogWndProc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        HWND hLB = GetDlgItem(data_ce1c90, ecx)
        int32_t var_1c_2 = arg4[3]
        int32_t eax_3 = LBItemFromPt(hLB, arg4[2], 1)
        int32_t ecx_1 = *arg4
        
        if (ecx_1 != 0x485)
            if (ecx_1 == 0x486)
                if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                        && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e
                        && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                    SetWindowLongA(arg1, 0, 2)
                
                @__security_check_cookie@4(eax_1 ^ &var_8)
                return 2
            
            if (ecx_1 == 0x487)
                sub_5015c0()
                @__security_check_cookie@4(eax_1 ^ &var_8)
                return 1
            
            if (ecx_1 != 0x488)
                ecx = arg3
                goto label_4ceea7
            
            data_ce1cc4 = 0
            @__security_check_cookie@4(eax_1 ^ &var_8)
            return 1
        
        if (eax_3 != 0xffffffff)
            data_ce1cc4 = 1
            data_ce1cc8 = eax_3
            
            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                    && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f
                    && arg2 != 0x37 && arg2 != 0x110)
                SetWindowLongA(arg1, 0, 1)
            
            @__security_check_cookie@4(eax_1 ^ &var_8)
            return 1
        
        data_ce1cc4 = 0
        
        if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f
                && arg2 != 0x37 && arg2 != 0x110)
            SetWindowLongA(arg1, 0, 0)
    
    @__security_check_cookie@4(eax_1 ^ &var_8)
    return 0
}
