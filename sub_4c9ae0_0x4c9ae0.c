// 函数名称: sub_4c9ae0
// 虚拟地址: 0x4c9ae0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4c9ae0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: BOOL i
    BOOL i
    int32_t eax
    sub_4c8e60(eax, arg1, &i, arg2)
    BOOL result = i
    int32_t var_8
    
    if (result == 1)
        data_ce1c94 = var_8
        data_ce1c9c.w = 0x100
    else if (result != 2)
        if (result != 3)
            return result
        
        void** eax_3 = sub_4c6d50()
        
        if (eax_3 == 0)
            sub_44e4d0(eax_3, &data_5559b1, "pTrack", "c:\ax2017\engine\windows\editorwindow.cpp", 
                0x6f6, "EditorAddNode")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        float i_1
        float edx_2
        i_1, edx_2 = sub_4c72d0(arg1, arg2)
        int32_t ecx_2 = eax_3[1]
        int32_t esi_1 = 0
        i = i_1
        
        if (ecx_2 s> 0)
            void* eax_5 = *eax_3 + 8
            
            while (not(*eax_5 f> i))
                esi_1 += 1
                eax_5 += 0x10
                
                if (esi_1 s>= ecx_2)
                    break
        
        int32_t var_24_1 = ecx_2
        int32_t* eax_6 = sub_48c3c0(data_e471a0, 0)
        sub_4d2b10(eax_6, eax_6, eax_3, esi_1)
        BOOL i_2 = i
        int32_t eax_8 = esi_1 << 4
        char* ecx_6 = *eax_3 + eax_8
        *ecx_6 = edx_2
        *(ecx_6 + 8) = i_2
        
        if (eax_3[1] s<= 1)
            *(ecx_6 + 0xc) = 1
            *(ecx_6 + 4) = edx_2
        else
            void* edx_4 = *eax_3
            void* edx_6
            
            if (esi_1 s<= 0)
                edx_6 = edx_4 + 0x10
            else
                edx_6 = edx_4 - 0x10 + eax_8
            
            *(ecx_6 + 0xc) = *(edx_6 + 0xc)
            *(ecx_6 + 4) = *(edx_6 + 4) + edx_2 f- *edx_6
        
        void* eax_10 = data_ce26e4
        
        if (eax_10 != 0)
            int32_t eax_11 = *(eax_10 + 4)
            
            if (eax_11 == 0x19)
                ecx_6 = sub_4c8660(0xffffffff, 0xffffffff)
            else if (eax_11 == 0x1b)
                ecx_6 = sub_4c8c00(0xffffffff)
        
        sub_4c68c0(ecx_6)
        data_ce1c94 = esi_1
        data_ce1c9c.w = 0x100
    else
        data_ce1c94 = var_8
        data_ce1c9c.w = 0x101
    SetFocus(data_ce1c90)
    SetCapture(data_ce1c90)
    return sub_4c7e30()
}
