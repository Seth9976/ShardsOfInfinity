// 函数名称: sub_4c9fe0
// 虚拟地址: 0x4c9fe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4c9fe0(HWND arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HWND hWnd = GetDlgItem(arg1, 0x85)
    LRESULT eax_4 = SendMessageA(GetDlgItem(data_ce1c90, 0x7b), 0x188, 0, 0)
    int32_t edi_1
    
    if (eax_4 != 0xffffffff)
        edi_1 = eax_4 + 1
    else
        edi_1 = 0
    
    int32_t* esi = sub_4c6a60()
    int32_t* var_410 = esi
    int32_t lParam[0x100]
    SendMessageA(hWnd, 0x191, 0x100, &lParam)
    LRESULT eax_6
    char* ecx
    eax_6, ecx = SendMessageA(hWnd, 0x190, 0, 0)
    int32_t ebx = 0
    
    if (eax_6 s> 0)
        do
            int32_t eax_7 = lParam[ebx]
            
            if (eax_7 u> 0x79)
                sub_44e4d0(eax_7, &data_5559b1, 
                    "paramToolIndex >= 0 && paramToolIndex < gParticleParamToolDataCount", 
                    "c:\ax2017\engine\windows\editorwindow.cpp", 0x828, "EditorPickDialogOk")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t i = *((eax_7 << 3) + &data_5b35f8)
            
            if (i != 0x70)
                int32_t esi_1 = *esi
                ecx = nullptr
                
                if (esi_1 s<= 0)
                label_4ca0dd:
                    esi = var_410
                    char* const ecx_1 = &data_5559b1
                    
                    if (*(sub_4b8c10(&data_5b39c8, i) + 0x10) != 8)
                        ecx_1 = nullptr
                    
                    ecx = sub_4b8610(eax_7, esi, &data_5b39c8, *((eax_7 << 3) + &data_5b35f8), ecx_1)
                    int32_t eax_13 = *esi - 1
                    
                    if (edi_1 != eax_13)
                        int32_t* eax_14 = sub_48c3c0(data_e470d8, 4)
                        ecx = sub_4d2e30(eax_14, eax_14, esi, eax_13, edi_1)
                    
                    edi_1 += 1
                else
                    int32_t* eax_9 = var_410[1]
                    
                    while (*eax_9 != i)
                        ecx = &ecx[1]
                        eax_9 = &eax_9[2]
                        
                        if (ecx s>= esi_1)
                            goto label_4ca0dd
                    
                    esi = var_410
            
            ebx += 1
        while (ebx s< eax_6)
    
    void* eax_15 = data_ce26e4
    
    if (eax_15 != 0)
        int32_t eax_16 = *(eax_15 + 4)
        
        if (eax_16 == 0x19)
            ecx = sub_4c8660(0xffffffff, edi_1 - 1)
        else if (eax_16 == 0x1b)
            ecx = sub_4c8c00(0xffffffff)
    
    data_ce1c94 = 0
    sub_4c68c0(ecx)
    BOOL result = EndDialog(arg1, 1)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
