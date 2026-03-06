// 函数名称: sub_4c7bd0
// 虚拟地址: 0x4c7bd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4c7bd0(BOOL arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542e10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    BOOL lpString_2 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (sub_4c6c30() == 0)
        BOOL eax_5 = ShowWindow(GetDlgItem(data_ce1c90, 0x94), SW_HIDE)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    ShowWindow(GetDlgItem(data_ce1c90, 0x94), SW_SHOW)
    LRESULT eax_7 = sub_4c6c30()
    
    if (eax_7.b == 0)
        sub_44e4d0(eax_7, &data_5559b1, "EditorHasSelectedIntParam()", 
            "c:\ax2017\engine\windows\editorwindow.cpp", 0x218, "EditorGetSelectedInt")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    LRESULT eax_8 = sub_4c6af0()
    int32_t* eax_9 = sub_4c6a60()
    
    if (eax_9 == 0)
        sub_44e4d0(eax_9, &data_5559b1, "pEmitter", "c:\ax2017\engine\windows\editorwindow.cpp", 0x21c, 
            "EditorGetSelectedInt")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_20_1 = sub_4b88a0(eax_9, eax_9, &data_5b39c8, eax_8)
    sub_44f980(&lpString_2, &data_5828f8)
    BOOL lpString_1 = lpString_2
    char* const lpString = &data_5559b1
    
    if (lpString_1 != 0)
        lpString = lpString_1
    
    BOOL lpString_3 = SetDlgItemTextA(data_ce1c90, 0x94, lpString)
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0)
        lpString_3 = lpString_2
        
        if (lpString_3 != 0 && *lpString_3 != 0)
            lpString_3 = sub_44f000(&lpString_2)
            int32_t temp0_1 = *(lpString_3 + 4)
            *(lpString_3 + 4) -= 1
            
            if (temp0_1 == 1)
                lpString_3 = sub_45d050(lpString_3, *(lpString_3 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return lpString_3
}
