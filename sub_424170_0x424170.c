// 函数名称: sub_424170
// 虚拟地址: 0x424170
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_424170(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44f240(&result_1, "btnBack")
    char* const result_2 = &data_5559b1
    char* result_3 = result_1
    char* const result_10 = &data_5559b1
    char* edx = arg4[1]
    
    if (result_3 != 0)
        result_10 = result_3
    
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_10
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_10[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_10 = &result_10[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_10, result_10, c_1) | 1
        break
    
    if (ecx_2 == 0 || arg4[6] == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_44f000(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_4
        
        if (data_5bb1e4.d != 0x1e)
            if (data_5bb1f0.d == 0x1e)
                eax_4 = data_5bb1f0:4
                goto label_424251
            
            data_5bb240 = 3
        else
            eax_4 = data_5bb1e4:4
        label_424251:
            
            if (eax_4 == 0)
                data_5bb240 = 3
            else
                sub_428f80(3)
    
    sub_44f240(&result_1, "btnGraphics")
    char* const result_4 = result_1
    char* const result_11 = &data_5559b1
    char* edx_3 = arg4[1]
    
    if (result_4 != 0)
        result_11 = result_4
    
    int32_t edi_1
    
    while (true)
        ebx.b = *result_11
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = result_11[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_11 = &result_11[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && result_4 != 0 && *result_4 != 0)
        result_4 = sub_44f000(&result_1)
        int32_t temp5_1 = *(result_4 + 4)
        *(result_4 + 4) -= 1
        
        if (temp5_1 == 1)
            result_4 = sub_45d050(result_4, *(result_4 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    
    if (edi_1 == 0)
        void* ecx_8 = data_65ac30
        
        if (ecx_8 == 0)
            sub_44e4d0(result_4, &data_5559b1, "gGameSettings.localSettings", 
                "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_5
        eax_5.b = *(ecx_8 + 0xc) != 1
        *(ecx_8 + 0xc) = eax_5
        sub_429a80()
    
    sub_44f240(&result_1, "btnGameSpeed")
    char* const result_12 = &data_5559b1
    char* edx_6 = arg4[1]
    char* const result_5 = result_1
    
    if (result_5 != 0)
        result_12 = result_5
    
    int32_t edi_3
    
    while (true)
        ebx.b = *result_12
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                edi_3 = 0
                break
            
            ebx.b = result_12[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_12 = &result_12[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_3 = 0
                break
        
        edi_3 = sbb.d(edi_1, edi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_7 = sub_44f000(&result_1)
        int32_t temp8_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    
    if (edi_3 == 0)
        void* eax_8 = data_65ac30
        
        if (eax_8 == 0)
            sub_44e4d0(eax_8, &data_5559b1, "gGameSettings.localSettings", 
                "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(eax_8 + 8) += 1
        
        if (*(eax_8 + 8) s>= 3)
            *(eax_8 + 8) = edi_3
        
        sub_429a80()
    
    sub_44f240(&result_1, "btnJumbo")
    char* const result_13 = &data_5559b1
    char* edx_9 = arg4[1]
    char* const result_6 = result_1
    
    if (result_6 != 0)
        result_13 = result_6
    
    int32_t edi_5
    
    while (true)
        ebx.b = *result_13
        char temp9_1 = *edx_9
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                edi_5 = 0
                break
            
            ebx.b = result_13[1]
            char temp10_1 = edx_9[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                result_13 = &result_13[2]
                edx_9 = &edx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_5 = 0
                break
        
        edi_5 = sbb.d(edi_3, edi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cdf414 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_10 = sub_44f000(&result_1)
        int32_t temp11_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_8 = 0xffffffff
    
    if (edi_5 == 0)
        void* eax_11 = data_65ac30
        
        if (eax_11 == 0)
            sub_44e4d0(eax_11, &data_5559b1, "gGameSettings.localSettings", 
                "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(eax_11 + 0x24) += 1
        
        if (*(eax_11 + 0x24) s>= 2)
            *(eax_11 + 0x24) = edi_5
        
        sub_429a80()
    
    sub_44f240(&result_1, "btnControls")
    char* result_14 = &data_5559b1
    char* edx_12 = arg4[1]
    char* result_7 = result_1
    
    if (result_7 != 0)
        result_14 = result_7
    
    void* edi_7
    
    while (true)
        ebx.b = *result_14
        char temp12_1 = *edx_12
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                edi_7 = nullptr
                break
            
            ebx.b = result_14[1]
            char temp13_1 = edx_12[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                result_14 = &result_14[2]
                edx_12 = &edx_12[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_7 = nullptr
                break
        
        edi_7 = sbb.d(edi_5, edi_5, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_cdf414 != 0 && result_7 != 0 && *result_7 != 0)
        result_7 = sub_44f000(&result_1)
        int32_t temp14_1 = *(result_7 + 4)
        *(result_7 + 4) -= 1
        
        if (temp14_1 == 1)
            result_7 = sub_45d050(result_7, *(result_7 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_10 = 0xffffffff
    
    if (edi_7 == 0)
        edi_7 = data_65ac30
        
        if (edi_7 == 0)
            sub_44e4d0(result_7, &data_5559b1, "gGameSettings.localSettings", 
                "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t ecx_18
        ecx_18.b = sub_42bf40() != 2
        *(edi_7 + 0x20) = ecx_18 + 1
        sub_429a80()
    
    sub_44f240(&result_1, "btnWidescreen")
    char* const result_15 = &data_5559b1
    char* edx_15 = arg4[1]
    char* const result_8 = result_1
    
    if (result_8 != 0)
        result_15 = result_8
    
    int32_t edi_9
    
    while (true)
        ebx.b = *result_15
        char temp15_1 = *edx_15
        bool c_6 = ebx.b u< temp15_1
        
        if (ebx.b == temp15_1)
            if (ebx.b == 0)
                edi_9 = 0
                break
            
            ebx.b = result_15[1]
            char temp16_1 = edx_15[1]
            c_6 = ebx.b u< temp16_1
            
            if (ebx.b == temp16_1)
                result_15 = &result_15[2]
                edx_15 = &edx_15[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_9 = 0
                break
        
        edi_9 = sbb.d(edi_7, edi_7, c_6) | 1
        break
    
    int32_t var_8_11 = 5
    
    if (data_cdf414 != 0 && result_8 != 0 && *result_8 != 0)
        char* eax_15 = sub_44f000(&result_1)
        int32_t temp17_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
    
    int32_t var_8_12 = 0xffffffff
    
    if (edi_9 == 0)
        sub_415580()
    
    sub_44f240(&result_1, "btnFullscreen")
    char* const result_16 = &data_5559b1
    char* edx_18 = arg4[1]
    char* const result_9 = result_1
    
    if (result_9 != 0)
        result_16 = result_9
    
    int32_t edi_11
    
    while (true)
        ebx.b = *result_16
        char temp18_1 = *edx_18
        bool c_7 = ebx.b u< temp18_1
        
        if (ebx.b == temp18_1)
            if (ebx.b == 0)
                edi_11 = 0
                break
            
            ebx.b = result_16[1]
            char temp19_1 = edx_18[1]
            c_7 = ebx.b u< temp19_1
            
            if (ebx.b == temp19_1)
                result_16 = &result_16[2]
                edx_18 = &edx_18[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_11 = 0
                break
        
        edi_11 = sbb.d(edi_9, edi_9, c_7) | 1
        break
    
    int32_t var_8_13 = 6
    
    if (data_cdf414 != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_17 = sub_44f000(&result_1)
        int32_t temp20_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
    
    int32_t var_8_14 = 0xffffffff
    
    if (edi_11 == 0)
        sub_4154d0()
    
    sub_44f240(&result_1, "btnSlider")
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    char* ecx_27 = arg4[1]
    int32_t esi_1
    
    while (true)
        char edx_21 = *result_2
        char temp21_1 = *ecx_27
        bool c_8 = edx_21 u< temp21_1
        
        if (edx_21 == temp21_1)
            if (edx_21 == 0)
                esi_1 = 0
                break
            
            edx_21 = result_2[1]
            char temp22_1 = ecx_27[1]
            c_8 = edx_21 u< temp22_1
            
            if (edx_21 == temp22_1)
                result_2 = &result_2[2]
                ecx_27 = &ecx_27[2]
                
                if (edx_21 != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(result_2, result_2, c_8) | 1
        break
    
    int32_t var_8_15 = 7
    
    if (data_cdf414 != 0 && result != 0 && *result != 0)
        result = sub_44f000(&result_1)
        int32_t temp23_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp23_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_16 = 0xffffffff
    
    if (esi_1 == 0)
        float* eax_19
        int32_t* ecx_31
        float xmm2_1
        
        if (sub_423fa0(arg4) == 0)
            int32_t var_28_2 = 1
            eax_19 = sub_42b100()
            ecx_31 = &data_65aaf0
            xmm2_1 = eax_19[1]
        else
            eax_19 = sub_42b100()
            int32_t var_28_1 = 1
            ecx_31 = &data_65aae8
            xmm2_1 = *eax_19
        
        result = sub_425b30(eax_19, arg4[2], ecx_31, xmm2_1, 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
