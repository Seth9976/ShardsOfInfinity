// 函数名称: sub_4cabf0
// 虚拟地址: 0x4cabf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4cabf0()
{
    // 第一条实际指令: int32_t* ecx = data_ce26e4
    int32_t* ecx = data_ce26e4
    int32_t esi
    
    if (ecx == 0 || ecx[1] != 0x19)
        esi = 0
    else
        int32_t eax_1 = sub_4459f0(ecx)
        ecx = data_ce26e4
        esi = eax_1
    
    int32_t* ebx
    
    if (ecx == 0 || ecx[1] != 0x1b)
        ebx = nullptr
    else
        ebx = sub_4459f0(ecx)
    
    LRESULT eax_4
    int32_t ecx_1
    eax_4, ecx_1 = SendMessageA(GetDlgItem(data_ce1c90, 0x76), 0x188, 0, 0)
    
    if (esi != 0)
        int32_t* result
        int32_t ecx_2
        result, ecx_2 = sub_4ca670(nullptr, 5)
        
        if (result == 0)
            return result
        
        LRESULT edi_1
        
        if (eax_4 != 0xffffffff)
            edi_1 = eax_4 + 1
        else
            edi_1 = 0
        
        int32_t var_14_1 = ecx_2
        int32_t* eax_5 = sub_48c3c0(data_e46fcc, 0)
        sub_4d2b10(eax_5, eax_5, esi, edi_1)
        char* ecx_6 = sub_4b8610(sub_4caa40(edi_1), edi_1 * 0x134 + *esi, &data_5b39c8, 5, result)
        void* eax_7 = data_ce26e4
        
        if (eax_7 != 0)
            int32_t eax_8 = *(eax_7 + 4)
            
            if (eax_8 == 0x19)
                ecx_6 = sub_4c8660(edi_1, 0xffffffff)
            else if (eax_8 == 0x1b)
                ecx_6 = sub_4c8c00(edi_1)
        
        data_ce1c94 = 0
        sub_4c68c0(ecx_6)
        sub_4f42d0()
        return sub_4f4180() __tailcall
    
    if (ebx == 0)
        sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\engine\windows\editorwindow.cpp", 0x9b7, 
            "EditorAddEmitter")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    LRESULT edi_2
    
    if (eax_4 != 0xffffffff)
        edi_2 = eax_4 + 1
    else
        edi_2 = 0
    
    int32_t var_14_2 = ecx_1
    int32_t* eax_10 = sub_48c3c0(data_e47190, 0)
    sub_4d2b10(eax_10, eax_10, ebx, edi_2)
    int32_t ecx_12 = edi_2 * 5
    int32_t* esi_1 = *ebx + (ecx_12 << 2)
    int32_t var_14_3 = ecx_12
    int32_t* eax_12 = sub_48c3c0(data_e471a0, 0)
    int32_t var_14_4 = sub_4d2b10(eax_12, eax_12, esi_1, 0)
    int32_t* eax_13 = sub_48c3c0(data_e471a0, 0)
    char* ecx_18 = sub_4d2b10(eax_13, eax_13, esi_1, 0)
    int32_t* eax_14 = *esi_1
    *eax_14 = 0
    eax_14[1] = 0
    eax_14[2] = 0
    eax_14[3] = 1
    void* eax_15 = *esi_1
    *(eax_15 + 0x10) = 0x3f800000
    *(eax_15 + 0x14) = 0x3f800000
    *(eax_15 + 0x18) = 0x3f800000
    *(eax_15 + 0x1c) = 1
    void* eax_16 = data_ce26e4
    
    if (eax_16 != 0)
        int32_t eax_17 = *(eax_16 + 4)
        
        if (eax_17 == 0x19)
            char* ecx_20 = sub_4c8660(edi_2, 0xffffffff)
            data_ce1c94 = 0
            return sub_4c68c0(ecx_20) __tailcall
        
        if (eax_17 == 0x1b)
            ecx_18 = sub_4c8c00(edi_2)
    
    data_ce1c94 = 0
    return sub_4c68c0(ecx_18) __tailcall
}
