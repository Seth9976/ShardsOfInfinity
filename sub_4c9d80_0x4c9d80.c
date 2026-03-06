// 函数名称: sub_4c9d80
// 虚拟地址: 0x4c9d80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4c9d80()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* result = __security_cookie ^ &__saved_ebp
    int32_t* result_1 = result
    
    if (data_ce1ca8 == 0)
        result = sub_4c6d50()
        
        if (result != 0)
            int32_t edi_1 = data_ce1c94
            
            if (edi_1 s>= 0 && edi_1 s< result[1])
                int32_t edi_2 = edi_1 << 4
                int32_t* edi_3 = edi_2 + *result
                
                if (edi_2 != neg.d(*result))
                    void* eax_1 = sub_4c6d50()
                    void string_3
                    GetDlgItemTextA(data_ce1c90, 0x81, &string_3, 0x50)
                    void string
                    GetDlgItemTextA(data_ce1c90, 0x82, &string, 0x50)
                    void string_2
                    GetDlgItemTextA(data_ce1c90, 0x83, &string_2, 0x50)
                    void string_1
                    int32_t ecx_1
                    int32_t edx_1
                    ecx_1, edx_1 = GetDlgItemTextA(data_ce1c90, 0x96, &string_1, 0x50)
                    int32_t* var_168_1 = edi_3
                    int32_t ecx_2
                    int32_t edx_2
                    ecx_2, edx_2 = sub_4529c0(&string_3, edx_1, ecx_1, &string_3, &data_58af08)
                    void* var_168_2 = &edi_3[2]
                    int32_t ecx_3
                    int32_t edx_3
                    ecx_3, edx_3 = sub_4529c0(&string_2, edx_2, ecx_2, &string_2, &data_58af08)
                    void* var_168_3 = eax_1 + 0xc
                    int32_t ecx_4
                    int32_t edx_4
                    ecx_4, edx_4 = sub_4529c0(&string_1, edx_3, ecx_3, &string_1, &data_58af08)
                    float var_150 = 0f
                    int32_t* var_168_4 = &var_150
                    
                    if (sub_4529c0(&string, edx_4, ecx_4, &string, &data_58af08) == 1)
                        edi_3[1] = *edi_3 + var_150
                    
                    sub_4c99a0()
                    sub_4c6e90(&data_ce1ca4, &data_ce1ca0)
                    HWND hWnd = GetDlgItem(data_ce1c90, 0x91)
                    LRESULT wParam = SendMessageA(hWnd, 0x147, 0, 0)
                    int32_t var_16c_6
                    char* ecx_5
                    
                    if (wParam == 0xffffffff)
                        char const* const var_168_5 = "EditorNodeDataChanged"
                        var_16c_6 = 0x7ec
                        ecx_5 = "curveIndex != CB_ERR"
                    label_4c9fc5:
                        sub_44e4d0(wParam, &data_5559b1, ecx_5, 
                            "c:\ax2017\engine\windows\editorwindow.cpp", var_16c_6, 
                            "EditorNodeDataChanged")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    edi_3[3] = SendMessageA(hWnd, 0x150, wParam, 0)
                    HWND hWnd_1 = GetDlgItem(data_ce1c90, 0x90)
                    wParam = SendMessageA(hWnd_1, 0x147, 0, 0)
                    
                    if (wParam == 0xffffffff)
                        char const* const var_168_6 = "EditorNodeDataChanged"
                        var_16c_6 = 0x7f1
                        ecx_5 = "distributionIndex != CB_ERR"
                        goto label_4c9fc5
                    
                    *(eax_1 + 8) = SendMessageA(hWnd_1, 0x150, wParam, 0)
                    uint32_t eax_11
                    eax_11.b = IsDlgButtonChecked(data_ce1c90, 0x97) != 0
                    *(eax_1 + 0x10) = eax_11.b
                    uint32_t eax_12
                    eax_12.b = IsDlgButtonChecked(data_ce1c90, 0x98) != 0
                    *(eax_1 + 0x11) = eax_12.b
                    result = sub_4c68c0(InvalidateRect(data_ce1c90, nullptr, 0))
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
