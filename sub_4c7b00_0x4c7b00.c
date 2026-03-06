// 函数名称: sub_4c7b00
// 虚拟地址: 0x4c7b00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_4c7b00()
{
    // 第一条实际指令: if (sub_4c6bc0() == 0)
    if (sub_4c6bc0() == 0)
        return ShowWindow(GetDlgItem(data_ce1c90, 0x93), SW_HIDE)
    
    ShowWindow(GetDlgItem(data_ce1c90, 0x93), SW_SHOW)
    LRESULT eax_4 = sub_4c6bc0()
    int32_t var_c_2
    char* ecx
    
    if (eax_4.b != 0)
        LRESULT eax_5 = sub_4c6af0()
        eax_4 = sub_4c6a60()
        
        if (eax_4 != 0)
            PSTR lpString = sub_4b8a40(eax_4, eax_4, &data_5b39c8, eax_5)
            return SetDlgItemTextA(data_ce1c90, 0x93, lpString)
        
        char const* const var_8_3 = "EditorGetSelectedString"
        var_c_2 = 0x205
        ecx = "pEmitter"
    else
        char const* const var_8 = "EditorGetSelectedString"
        var_c_2 = 0x201
        ecx = "EditorHasSelectedStringParam()"
    
    sub_44e4d0(eax_4, &data_5559b1, ecx, "c:\ax2017\engine\windows\editorwindow.cpp", var_c_2, 
        "EditorGetSelectedString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
