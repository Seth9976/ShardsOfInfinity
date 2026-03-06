// 函数名称: sub_4d47f0
// 虚拟地址: 0x4d47f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __stdcallsub_4d47f0(int32_t* arg1)
{
    // 第一条实际指令: void* ecx = data_ce24d4
    void* ecx = data_ce24d4
    int32_t* esi = arg1
    int32_t eax = *esi
    
    if (eax == 4 && *(ecx + 0x20) != 0)
        if (GetCapture() == data_ce1790)
            ReleaseCapture()
        
        ecx = data_ce24d4
        
        if (*(ecx + 0x20) == 3)
            sub_429100(ecx + 0x34)
            ecx = data_ce24d4
        
        *(ecx + 0x20) = 0
        eax = *esi
    
    if (eax != 1)
    label_4d4891:
        
        if (eax == 0 && esi[1] == 0x67)
            eax.b = *(ecx + 0x84) == eax.b
            *(ecx + 0x84) = eax.b
    else if (esi[1] == 0x2e && *(ecx + 0x14) != 0)
        do
            int32_t* eax_2 = *(ecx + 0xc)
            void* edx_1 = eax_2[1]
            *(ecx + 0xc) = edx_1
            
            if (edx_1 == 0)
                *(ecx + 0x10) = 0
            else
                *(edx_1 + 8) = 0
            
            *(ecx + 0x14) -= 1
            
            if (eax_2 != 0)
                sub_45d050(eax_2, 0xc)
                ecx = data_ce24d4
        while (*(ecx + 0x14) != 0)
        
        eax = *esi
        goto label_4d4891
    
    int32_t ebx
    ebx.b = 0
    BOOL eax_4
    
    if (*(data_ce2758 + 4) == 0x19 && *esi == 0)
        eax_4 = esi[1]
        
        if (eax_4 == 0x20 && esi[2] == 0)
            sub_4f42d0()
            void* eax_5
            eax_5.b = 0
            return eax_5
    
    char const* const var_18
    int32_t var_14
    char const* const var_10_1
    char* ecx_3
    
    if (*(data_ce2758 + 4) != 0x19 || *esi != 0 || eax_4 != 0x66 || esi[2] != 0)
        eax_4 = data_ce26f8
        
        if (eax_4 u<= 3)
            switch (eax_4)
                case 0, 3
                    goto label_4d499d
                case 1
                    sub_4f3b10(esi, &data_ce2700)
                label_4d499d:
                    
                    if (*esi != 0)
                        eax_4.b = ebx.b
                        return eax_4
                case 2
                    ebx.b = sub_4f44d0(esi, &data_ce2700).b
                    
                    if (ebx.b != 0 || *esi != 0)
                        eax_4.b = ebx.b
                        return eax_4
            
            eax_4 = esi[1]
            
            if (eax_4 == 0x5d && esi[2] == 0)
                eax_4.b = 0
                data_ce2794 = data_ce2794 * 0.5f
                return eax_4
            
            if (eax_4 != 0x5b || esi[2] != 0)
                eax_4.b = ebx.b
                return eax_4
            
            data_ce2794 = data_ce2794 * 2f
        label_4d49f5:
            ebx.b = 0
            eax_4.b = ebx.b
            return eax_4
        
        var_10_1 = "EditorControlsInputHandle"
        var_14 = 0x553
        var_18 = "c:\ax2017\engine\editor\editorcontrols.cpp"
        ecx_3 = "Halt"
    else
        void* esi_1 = data_cdf428
        
        if (esi_1 != 0)
            int32_t* esi_2 = *(esi_1 + 0x10)
            arg1 = nullptr
            
            if (sub_49fb90(esi_2, &arg1).b == 0)
                goto label_4d49f5
            
            do
                int32_t* ecx_5 = arg1
                float xmm0_1 = ecx_5[0x13]
                xmm0_1 f- 0
                eax_4:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                    | (xmm0_1 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    ecx_5[0x13] = 0x3f000000
                    ecx_5[0x14] = 0x3f000000
                
                eax_4 = sub_49fb90(esi_2, &arg1)
            while (eax_4.b != 0)
            
            eax_4.b = 0
            return eax_4
        
        var_10_1 = "GetGameData"
        var_14 = 0x45
        var_18 = "c:\ax2017\engine\game.h"
        ecx_3 = "gpGameData"
    
    sub_44e4d0(eax_4, &data_5559b1, ecx_3, var_18, var_14, var_10_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
