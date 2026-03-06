// 函数名称: sub_41bfa0
// 虚拟地址: 0x41bfa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_41bfa0(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541249
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_2c = arg1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_20 = nullptr
    void* eax_3 = sub_41b9a0()
    char* arg_4
    char* edi = arg_4
    
    if (*(edi + 0x18) == 2)
        if (data_65ac1c == 0)
            if (data_65ac14 != 1)
                data_5bb240 = 3
            else
                sub_422490()
            
            sub_42a740(data_65ac38)
        else
            data_65ac1c = 0
    
    char* var_18
    sub_44f240(&var_18, "btnBack")
    char* eax_4 = var_18
    char* const ebx = &data_5559b1
    char* edx = *(edi + 4)
    char* const ecx_3 = &data_5559b1
    
    if (eax_4 != 0)
        ecx_3 = eax_4
    
    int32_t ecx_5
    
    while (true)
        eax_4.b = *ecx_3
        char temp0_1 = *edx
        bool c_1 = eax_4.b u< temp0_1
        bool z_1 = eax_4.b == temp0_1
        char var_11_1 = eax_4.b
        eax_4 = var_18
        
        if (z_1)
            if (var_11_1 == 0)
                ecx_5 = 0
                break
            
            eax_4.b = ecx_3[1]
            char temp1_1 = edx[1]
            c_1 = eax_4.b u< temp1_1
            bool z_2 = eax_4.b == temp1_1
            char var_11_2 = eax_4.b
            eax_4 = var_18
            
            if (z_2)
                ecx_3 = &ecx_3[2]
                edx = &edx[2]
                
                if (var_11_2 != 0)
                    continue
                
                ecx_5 = 0
                break
        
        ecx_5 = sbb.d(ecx_3, ecx_3, c_1) | 1
        break
    
    char var_11_3
    
    if (ecx_5 != 0)
        var_11_3 = 0
    
    if (ecx_5 == 0 || *(edi + 0x18) == 2)
        var_11_3 = 1
    
    var_20 = nullptr
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_44f000(&var_18)
        int32_t temp2_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_11_3 != 0)
        int32_t eax_6 = data_65ac14
        
        if (eax_6 == 1 || eax_6 == 2)
            sub_422490()
        else
            data_5bb240 = 3
        
        sub_42a740(data_65ac38)
    
    sub_44f240(&var_18, "btnTutorial")
    char* eax_7 = var_18
    char* const ecx_10 = &data_5559b1
    char* edx_3 = *(edi + 4)
    
    if (eax_7 != 0)
        ecx_10 = eax_7
    
    int32_t esi
    
    while (true)
        eax_7.b = *ecx_10
        char temp3_1 = *edx_3
        bool c_2 = eax_7.b u< temp3_1
        bool z_3 = eax_7.b == temp3_1
        char var_11_4 = eax_7.b
        eax_7 = var_18
        
        if (z_3)
            if (var_11_4 == 0)
                esi = 0
                break
            
            eax_7.b = ecx_10[1]
            char temp4_1 = edx_3[1]
            c_2 = eax_7.b u< temp4_1
            bool z_4 = eax_7.b == temp4_1
            char var_11_5 = eax_7.b
            eax_7 = var_18
            
            if (z_4)
                ecx_10 = &ecx_10[2]
                edx_3 = &edx_3[2]
                
                if (var_11_5 != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_44f000(&var_18)
        int32_t temp5_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi == 0)
        sub_42a740(data_65ac38)
        data_5bb240 = 0x20
        data_65ac0c = 1
    
    sub_44f240(&var_18, "btnDecline")
    char* eax_9 = var_18
    char* const ecx_15 = &data_5559b1
    char* edx_6 = *(edi + 4)
    
    if (eax_9 != 0)
        ecx_15 = eax_9
    
    int32_t esi_2
    
    while (true)
        eax_9.b = *ecx_15
        char temp6_1 = *edx_6
        bool c_3 = eax_9.b u< temp6_1
        bool z_5 = eax_9.b == temp6_1
        char var_11_6 = eax_9.b
        eax_9 = var_18
        
        if (z_5)
            if (var_11_6 == 0)
                esi_2 = 0
                break
            
            eax_9.b = ecx_15[1]
            char temp7_1 = edx_6[1]
            c_3 = eax_9.b u< temp7_1
            bool z_6 = eax_9.b == temp7_1
            char var_11_7 = eax_9.b
            eax_9 = var_18
            
            if (z_6)
                ecx_15 = &ecx_15[2]
                edx_6 = &edx_6[2]
                
                if (var_11_7 != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_44f000(&var_18)
        int32_t temp8_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_2 == 0)
        sub_41bc40(eax_3)
        sub_41a9f0(data_65ac18)
        sub_41beb0(data_65ac18)
        sub_422490()
    
    sub_44f240(&var_18, "btnStart")
    char* eax_12 = var_18
    char* const ecx_22 = &data_5559b1
    char* edx_11 = *(edi + 4)
    
    if (eax_12 != 0)
        ecx_22 = eax_12
    
    int32_t esi_4
    
    while (true)
        eax_12.b = *ecx_22
        char temp9_1 = *edx_11
        bool c_4 = eax_12.b u< temp9_1
        bool z_7 = eax_12.b == temp9_1
        char var_11_8 = eax_12.b
        eax_12 = var_18
        
        if (z_7)
            if (var_11_8 == 0)
                esi_4 = 0
                break
            
            eax_12.b = ecx_22[1]
            char temp10_1 = edx_11[1]
            c_4 = eax_12.b u< temp10_1
            bool z_8 = eax_12.b == temp10_1
            char var_11_9 = eax_12.b
            eax_12 = var_18
            
            if (z_8)
                ecx_22 = &ecx_22[2]
                edx_11 = &edx_11[2]
                
                if (var_11_9 != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cdf414 != 0 && eax_12 != 0 && *eax_12 != 0)
        char* eax_13 = sub_44f000(&var_18)
        int32_t temp11_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_8 = 0xffffffff
    char* const var_24
    
    if (esi_4 == 0)
        int32_t eax_14 = sub_41bc40(eax_3)
        
        if (eax_14 u> 7)
            sub_44e4d0(eax_14, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x339, "GameCreateGameClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        switch (eax_14)
            case 0
                void* ecx_26 = data_65ac38
                
                if (data_65ac14 != 1)
                    sub_42a740(ecx_26)
                    void* eax_16 = data_65aabc
                    
                    if (eax_16 == 0)
                        sub_44e4d0(eax_16, &data_5559b1, "gClient", 
                            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    *(eax_16 + 0x42c) = 1
                else
                    sub_42a740(ecx_26)
                    sub_417f80(eax_3)
                    sub_422490()
            case 1
                sub_422490()
            case 2, 3
                sub_41aab0(data_65ac18)
                sub_422490()
            case 5
                void* ecx_31 = data_65aabc
                
                if (ecx_31 == 0)
                    sub_44e4d0(eax_14, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                var_24 = *sub_41b1b0(ecx_31 + 0x444, data_65ac18)
                void* eax_19 = data_65aabc
                
                if (eax_19 == 0)
                    sub_44e4d0(eax_19, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (*(eax_19 + 0x18) == 3)
                    int32_t eax_20 = *(eax_19 + 0x14)
                    void* ecx_33 = data_65acf4
                    
                    if (eax_20 != 0)
                        uint32_t edx_15 = zx.d(eax_20.w)
                        
                        if (edx_15 u< *(ecx_33 + 4))
                            void* esi_9 = edx_15 * 0x4c + *ecx_33
                            
                            if (*(esi_9 + 0x48) == eax_20)
                                int32_t var_38_2 = 0xf42ae
                                sub_450c90(eax_20, 4, esi_9 + 0x3c)
                                sub_450a70(&var_24, 4, esi_9 + 0x3c, &var_24)
            case 7
                sub_41a9f0(data_65ac18)
                sub_41beb0(data_65ac18)
                sub_422490()
    
    sub_44f240(&var_24, "btnPlayerEmpty")
    int32_t var_8_9 = 4
    char* const eax_15 = &data_5559b1
    char* esi_7 = var_24
    char* ecx_29 = *(edi + 4)
    var_20 = 2
    
    if (esi_7 != 0)
        eax_15 = esi_7
    
    int32_t eax_23
    
    while (true)
        char edx_14 = *eax_15
        char temp12_1 = *ecx_29
        bool c_5 = edx_14 u< temp12_1
        
        if (edx_14 == temp12_1)
            if (edx_14 == 0)
                eax_23 = 0
                break
            
            edx_14 = eax_15[1]
            char temp13_1 = ecx_29[1]
            c_5 = edx_14 u< temp13_1
            
            if (edx_14 == temp13_1)
                eax_15 = &eax_15[2]
                ecx_29 = &ecx_29[2]
                
                if (edx_14 != 0)
                    continue
                
                eax_23 = 0
                break
        
        eax_23 = sbb.d(eax_15, eax_15, c_5) | 1
        break
    
    char edx_21 = 2
    char* ecx_38 = 2
    char var_11_12
    char* eax_24
    
    if (eax_23 == 0)
        eax_24 = var_18
        var_11_12 = 1
    else
        sub_44f240(&var_18, "btnPlayerFull")
        eax_24 = var_18
        char* const ecx_40 = &data_5559b1
        char* edx_18 = *(edi + 4)
        
        if (eax_24 != 0)
            ecx_40 = eax_24
        
        int32_t edx_20
        
        while (true)
            eax_24.b = *ecx_40
            char temp14_1 = *edx_18
            bool c_6 = eax_24.b u< temp14_1
            bool z_11 = eax_24.b == temp14_1
            char var_11_10 = eax_24.b
            eax_24 = var_18
            
            if (z_11)
                if (var_11_10 == 0)
                    edx_20 = 0
                    break
                
                eax_24.b = ecx_40[1]
                char temp15_1 = edx_18[1]
                c_6 = eax_24.b u< temp15_1
                bool z_12 = eax_24.b == temp15_1
                char var_11_11 = eax_24.b
                eax_24 = var_18
                
                if (z_12)
                    ecx_40 = &ecx_40[2]
                    edx_18 = &edx_18[2]
                    
                    if (var_11_11 != 0)
                        continue
                    
                    edx_20 = 0
                    break
            
            edx_20 = sbb.d(edx_18, edx_18, c_6) | 1
            break
        
        ecx_38 = 6
        edx_21 = 6
        
        var_11_12 = edx_20 == 0 ? 1 : 0
    
    if ((edx_21 & 4) != 0)
        ecx_38 &= 0xfffffffb
        char* edi_1 = ecx_38
        var_20 = edi_1
        int32_t var_8_10 = 5
        
        if (data_cdf414 != 0 && eax_24 != 0 && *eax_24 != 0)
            char* eax_25 = sub_44f000(&var_18)
            ecx_38 = edi_1
            int32_t temp17_1 = *(eax_25 + 4)
            *(eax_25 + 4) -= 1
            
            if (temp17_1 == 1)
                sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
                var_18 = &data_5559b1
                ecx_38 = edi_1
        
        edi = arg_4
    
    var_20 = ecx_38 & 0xfffffffd
    int32_t var_8_11 = 6
    
    if (data_cdf414 != 0 && esi_7 != 0 && *esi_7 != 0)
        char* eax_26 = sub_44f000(&var_24)
        int32_t temp16_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp16_1 == 1)
            sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
            var_24 = &data_5559b1
    
    int32_t var_8_12 = 0xffffffff
    char* edi_3
    int32_t edx_26
    
    if (var_11_12 == 0)
        if (data_65ac1c != 0)
            edx_26 = data_65ac20
            goto label_41c5c2
        
        edi_3 = arg_4
    else
        edx_26 = *(edi + 8)
        data_65ac1c = 1
        data_65ac20 = edx_26
    label_41c5c2:
        char* eax_27 = sub_41bf30(eax_3, edx_26)
        sub_44f240(&var_18, "btnEasy")
        char* ecx_48 = var_18
        char* edx_27 = *(arg_4 + 4)
        char* const eax_29 = &data_5559b1
        
        if (ecx_48 != 0)
            eax_29 = ecx_48
        
        int32_t esi_10
        
        while (true)
            ecx_48.b = *eax_29
            char temp18_1 = *edx_27
            bool c_7 = ecx_48.b u< temp18_1
            bool z_13 = ecx_48.b == temp18_1
            char var_11_13 = ecx_48.b
            ecx_48 = var_18
            
            if (z_13)
                if (var_11_13 == 0)
                    esi_10 = 0
                    break
                
                ecx_48.b = eax_29[1]
                char temp20_1 = edx_27[1]
                c_7 = ecx_48.b u< temp20_1
                bool z_14 = ecx_48.b == temp20_1
                char var_11_14 = ecx_48.b
                ecx_48 = var_18
                
                if (z_14)
                    eax_29 = &eax_29[2]
                    edx_27 = &edx_27[2]
                    
                    if (var_11_14 != 0)
                        continue
                    
                    esi_10 = 0
                    break
            
            esi_10 = sbb.d(esi_7, esi_7, c_7) | 1
            break
        
        int32_t var_8_13 = 7
        
        if (data_cdf414 != 0 && ecx_48 != 0 && *ecx_48 != 0)
            char* eax_30 = sub_44f000(&var_18)
            int32_t temp22_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp22_1 == 1)
                sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_14 = 0xffffffff
        
        if (esi_10 == 0)
            *(eax_27 + 0x14) = 3
            *(eax_27 + 0x18) = esi_10
            _strncpy(eax_27, "<Easy AI>", 0x10)
            eax_27[0xf] = 0
            *(eax_27 + 0x10) = sub_41bf20(*(eax_27 + 0x18))
            data_65ac1c = 0
        
        sub_44f240(&var_18, "btnMedium")
        char* const ecx_53 = &data_5559b1
        char* edx_30 = *(arg_4 + 4)
        char* eax_33 = var_18
        
        if (eax_33 != 0)
            ecx_53 = eax_33
        
        int32_t esi_12
        
        while (true)
            eax_33.b = *ecx_53
            char temp24_1 = *edx_30
            bool c_8 = eax_33.b u< temp24_1
            bool z_15 = eax_33.b == temp24_1
            char var_11_15 = eax_33.b
            eax_33 = var_18
            
            if (z_15)
                if (var_11_15 == 0)
                    esi_12 = 0
                    break
                
                eax_33.b = ecx_53[1]
                char temp26_1 = edx_30[1]
                c_8 = eax_33.b u< temp26_1
                bool z_16 = eax_33.b == temp26_1
                char var_11_16 = eax_33.b
                eax_33 = var_18
                
                if (z_16)
                    ecx_53 = &ecx_53[2]
                    edx_30 = &edx_30[2]
                    
                    if (var_11_16 != 0)
                        continue
                    
                    esi_12 = 0
                    break
            
            esi_12 = sbb.d(esi_10, esi_10, c_8) | 1
            break
        
        int32_t var_8_15 = 8
        
        if (data_cdf414 != 0 && eax_33 != 0 && *eax_33 != 0)
            char* eax_34 = sub_44f000(&var_18)
            int32_t temp28_1 = *(eax_34 + 4)
            *(eax_34 + 4) -= 1
            
            if (temp28_1 == 1)
                sub_45d050(eax_34, *(eax_34 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_16 = 0xffffffff
        
        if (esi_12 == 0)
            *(eax_27 + 0x14) = 3
            *(eax_27 + 0x18) = 1
            _strncpy(eax_27, "<AI>", 0x10)
            eax_27[0xf] = 0
            *(eax_27 + 0x10) = sub_41bf20(*(eax_27 + 0x18))
            data_65ac1c = 0
        
        sub_44f240(&var_18, "btnHard")
        char* const ecx_58 = &data_5559b1
        char* edx_33 = *(arg_4 + 4)
        char* eax_37 = var_18
        
        if (eax_37 != 0)
            ecx_58 = eax_37
        
        int32_t esi_14
        
        while (true)
            eax_37.b = *ecx_58
            char temp30_1 = *edx_33
            bool c_9 = eax_37.b u< temp30_1
            bool z_17 = eax_37.b == temp30_1
            char var_11_17 = eax_37.b
            eax_37 = var_18
            
            if (z_17)
                if (var_11_17 == 0)
                    esi_14 = 0
                    break
                
                eax_37.b = ecx_58[1]
                char temp31_1 = edx_33[1]
                c_9 = eax_37.b u< temp31_1
                bool z_18 = eax_37.b == temp31_1
                char var_11_18 = eax_37.b
                eax_37 = var_18
                
                if (z_18)
                    ecx_58 = &ecx_58[2]
                    edx_33 = &edx_33[2]
                    
                    if (var_11_18 != 0)
                        continue
                    
                    esi_14 = 0
                    break
            
            esi_14 = sbb.d(esi_12, esi_12, c_9) | 1
            break
        
        int32_t var_8_17 = 9
        
        if (data_cdf414 != 0 && eax_37 != 0 && *eax_37 != 0)
            char* eax_38 = sub_44f000(&var_18)
            int32_t temp32_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp32_1 == 1)
                sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_18 = 0xffffffff
        
        if (esi_14 == 0)
            *(eax_27 + 0x14) = 3
            *(eax_27 + 0x18) = 2
            _strncpy(eax_27, "<Hard AI>", 0x10)
            eax_27[0xf] = 0
            *(eax_27 + 0x10) = sub_41bf20(*(eax_27 + 0x18))
            data_65ac1c = 0
        
        sub_44f240(&var_18, "btnOptional")
        char* const ecx_63 = &data_5559b1
        char* edx_36 = *(arg_4 + 4)
        char* eax_41 = var_18
        
        if (eax_41 != 0)
            ecx_63 = eax_41
        
        int32_t esi_16
        
        while (true)
            eax_41.b = *ecx_63
            char temp33_1 = *edx_36
            bool c_10 = eax_41.b u< temp33_1
            bool z_19 = eax_41.b == temp33_1
            char var_11_19 = eax_41.b
            eax_41 = var_18
            
            if (z_19)
                if (var_11_19 == 0)
                    esi_16 = 0
                    break
                
                eax_41.b = ecx_63[1]
                char temp34_1 = edx_36[1]
                c_10 = eax_41.b u< temp34_1
                bool z_20 = eax_41.b == temp34_1
                char var_11_20 = eax_41.b
                eax_41 = var_18
                
                if (z_20)
                    ecx_63 = &ecx_63[2]
                    edx_36 = &edx_36[2]
                    
                    if (var_11_20 != 0)
                        continue
                    
                    esi_16 = 0
                    break
            
            esi_16 = sbb.d(esi_14, esi_14, c_10) | 1
            break
        
        int32_t var_8_19 = 0xa
        
        if (data_cdf414 != 0 && eax_41 != 0 && *eax_41 != 0)
            char* eax_42 = sub_44f000(&var_18)
            int32_t temp35_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp35_1 == 1)
                sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_20 = 0xffffffff
        
        if (esi_16 == 0)
            *(eax_27 + 0x14) = 2
            *(eax_27 + 0x18) = 1
            _strncpy(eax_27, "OPTIONAL", 0x10)
            eax_27[0xf] = 0
            data_65ac1c = 0
        
        sub_44f240(&var_18, "btnRequired")
        char* const ecx_67 = &data_5559b1
        char* edx_39 = *(arg_4 + 4)
        char* eax_44 = var_18
        
        if (eax_44 != 0)
            ecx_67 = eax_44
        
        int32_t esi_18
        
        while (true)
            eax_44.b = *ecx_67
            char temp36_1 = *edx_39
            bool c_11 = eax_44.b u< temp36_1
            bool z_21 = eax_44.b == temp36_1
            char var_11_21 = eax_44.b
            eax_44 = var_18
            
            if (z_21)
                if (var_11_21 == 0)
                    esi_18 = 0
                    break
                
                eax_44.b = ecx_67[1]
                char temp37_1 = edx_39[1]
                c_11 = eax_44.b u< temp37_1
                bool z_22 = eax_44.b == temp37_1
                char var_11_22 = eax_44.b
                eax_44 = var_18
                
                if (z_22)
                    ecx_67 = &ecx_67[2]
                    edx_39 = &edx_39[2]
                    
                    if (var_11_22 != 0)
                        continue
                    
                    esi_18 = 0
                    break
            
            esi_18 = sbb.d(esi_16, esi_16, c_11) | 1
            break
        
        int32_t var_8_21 = 0xb
        
        if (data_cdf414 != 0 && eax_44 != 0 && *eax_44 != 0)
            char* eax_45 = sub_44f000(&var_18)
            int32_t temp38_1 = *(eax_45 + 4)
            *(eax_45 + 4) -= 1
            
            if (temp38_1 == 1)
                sub_45d050(eax_45, *(eax_45 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_22 = 0xffffffff
        
        if (esi_18 == 0)
            *(eax_27 + 0x14) = 2
            *(eax_27 + 0x18) = esi_18
            _strncpy(eax_27, "REQUIRED", 0x10)
            eax_27[0xf] = 0
            data_65ac1c = 0
        
        sub_44f240(&var_18, "btnPlayer")
        char* const ecx_71 = &data_5559b1
        char* edx_42 = *(arg_4 + 4)
        char* eax_47 = var_18
        
        if (eax_47 != 0)
            ecx_71 = eax_47
        
        int32_t esi_20
        
        while (true)
            eax_47.b = *ecx_71
            char temp39_1 = *edx_42
            bool c_12 = eax_47.b u< temp39_1
            bool z_23 = eax_47.b == temp39_1
            char var_11_23 = eax_47.b
            eax_47 = var_18
            
            if (z_23)
                if (var_11_23 == 0)
                    esi_20 = 0
                    break
                
                eax_47.b = ecx_71[1]
                char temp40_1 = edx_42[1]
                c_12 = eax_47.b u< temp40_1
                bool z_24 = eax_47.b == temp40_1
                char var_11_24 = eax_47.b
                eax_47 = var_18
                
                if (z_24)
                    ecx_71 = &ecx_71[2]
                    edx_42 = &edx_42[2]
                    
                    if (var_11_24 != 0)
                        continue
                    
                    esi_20 = 0
                    break
            
            esi_20 = sbb.d(esi_18, esi_18, c_12) | 1
            break
        
        int32_t var_8_23 = 0xc
        
        if (data_cdf414 != 0 && eax_47 != 0 && *eax_47 != 0)
            char* eax_48 = sub_44f000(&var_18)
            int32_t temp41_1 = *(eax_48 + 4)
            *(eax_48 + 4) -= 1
            
            if (temp41_1 == 1)
                sub_45d050(eax_48, *(eax_48 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_24 = 0xffffffff
        
        if (esi_20 == 0)
            *(eax_27 + 0x10) = sub_41ba70(eax_3)
            *(eax_27 + 0x14) = 0x3e9
            _strncpy(eax_27, "<Player>", 0x10)
            eax_27[0xf] = 0
            data_65ac1c = 0
        
        sub_44f240(&var_18, "btnProfile")
        void* ecx_76 = &data_5559b1
        char* edx_45 = *(arg_4 + 4)
        char* eax_51 = var_18
        
        if (eax_51 != 0)
            ecx_76 = eax_51
        
        char** esi_22
        
        while (true)
            eax_51.b = *ecx_76
            char temp42_1 = *edx_45
            bool c_13 = eax_51.b u< temp42_1
            bool z_25 = eax_51.b == temp42_1
            char var_11_25 = eax_51.b
            eax_51 = var_18
            
            if (z_25)
                if (var_11_25 == 0)
                    esi_22 = nullptr
                    break
                
                eax_51.b = *(ecx_76 + 1)
                char temp43_1 = edx_45[1]
                c_13 = eax_51.b u< temp43_1
                bool z_26 = eax_51.b == temp43_1
                char var_11_26 = eax_51.b
                eax_51 = var_18
                
                if (z_26)
                    ecx_76 += 2
                    edx_45 = &edx_45[2]
                    
                    if (var_11_26 != 0)
                        continue
                    
                    esi_22 = nullptr
                    break
            
            esi_22 = sbb.d(esi_20, esi_20, c_13) | 1
            break
        
        int32_t var_8_25 = 0xd
        
        if (data_cdf414 != 0 && eax_51 != 0 && *eax_51 != 0)
            char* eax_52 = sub_44f000(&var_18)
            int32_t temp44_1 = *(eax_52 + 4)
            *(eax_52 + 4) -= 1
            
            if (temp44_1 == 1)
                sub_45d050(eax_52, *(eax_52 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_26 = 0xffffffff
        
        if (esi_22 == 0)
            esi_22 = sub_42aaa0(*((*(arg_4 + 8) << 2) + &data_65ac24))
            *(eax_27 + 0x14) = 0x3e8
            char* edx_48 = &data_5559b1
            char* ecx_80 = *esi_22
            
            if (ecx_80 != 0)
                edx_48 = ecx_80
            
            _strncpy(eax_27, edx_48, 0x10)
            eax_27[0xf] = 0
            *(eax_27 + 0x10) = esi_22[2]
            *(eax_27 + 0x18) = esi_22[0x8f]
            data_65ac1c = 0
        
        sub_44f240(&var_18, "btnFriend")
        edi_3 = arg_4
        void* ecx_82 = &data_5559b1
        char* eax_58 = var_18
        
        if (eax_58 != 0)
            ecx_82 = eax_58
        
        char* edx_49 = *(edi_3 + 4)
        
        while (true)
            eax_58.b = *ecx_82
            char temp45_1 = *edx_49
            bool c_14 = eax_58.b u< temp45_1
            bool z_27 = eax_58.b == temp45_1
            char var_11_27 = eax_58.b
            eax_58 = var_18
            
            if (z_27)
                if (var_11_27 == 0)
                    esi_7 = nullptr
                    break
                
                eax_58.b = *(ecx_82 + 1)
                char temp46_1 = edx_49[1]
                c_14 = eax_58.b u< temp46_1
                bool z_28 = eax_58.b == temp46_1
                char var_11_28 = eax_58.b
                eax_58 = var_18
                
                if (z_28)
                    ecx_82 += 2
                    edx_49 = &edx_49[2]
                    
                    if (var_11_28 != 0)
                        continue
                    
                    esi_7 = nullptr
                    break
            
            esi_7 = sbb.d(esi_22, esi_22, c_14) | 1
            break
        
        int32_t var_8_27 = 0xe
        
        if (data_cdf414 != 0 && eax_58 != 0 && *eax_58 != 0)
            eax_58 = sub_44f000(&var_18)
            int32_t temp47_1 = *(eax_58 + 4)
            *(eax_58 + 4) -= 1
            
            if (temp47_1 == 1)
                eax_58 = sub_45d050(eax_58, *(eax_58 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_28 = 0xffffffff
        
        if (esi_7 == 0)
            sub_44e4d0(eax_58, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x38b, "GameCreateGameClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_44f240(&var_20, "imgAddPlayerBg")
        char eax_59 = sub_44f450(&var_20, *(edi_3 + 4))
        int32_t var_8_29 = 0xf
        
        if (data_cdf414 != 0)
            char* ecx_87 = var_20
            
            if (ecx_87 != 0 && *ecx_87 != 0)
                char* eax_60 = sub_44f000(&var_20)
                int32_t temp48_1 = *(eax_60 + 4)
                *(eax_60 + 4) -= 1
                
                if (temp48_1 == 1)
                    sub_45d050(eax_60, *(eax_60 + 0xc) + 0x10)
                    var_20 = &data_5559b1
        
        int32_t var_8_30 = 0xffffffff
        char eax_61 = data_65ac1c
        
        if (eax_59 != 0)
            eax_61 = 0
        
        data_65ac1c = eax_61
        sub_44f240(&var_20, "btnFriendList")
        char* eax_62 = sub_44f450(&var_20, *(edi_3 + 4))
        char var_11_30 = eax_62.b
        int32_t var_8_31 = 0x10
        
        if (data_cdf414 != 0)
            char* const ecx_92 = var_20
            
            if (ecx_92 != 0 && *ecx_92 != 0)
                eax_62 = sub_44f000(&var_20)
                int32_t temp49_1 = *(eax_62 + 4)
                *(eax_62 + 4) -= 1
                
                if (temp49_1 == 1)
                    sub_45d050(eax_62, *(eax_62 + 0xc) + 0x10)
                    var_20 = &data_5559b1
                
                eax_62.b = var_11_30
        
        int32_t var_8_32 = 0xffffffff
        
        if (eax_62.b != 0)
            data_65ac1c = 0
            data_5bb2b8 = 1
            data_5bb2bc = 0
            data_5bb240 = 8
        
        sub_44f240(&var_20, "btnRecentFriend")
        char* eax_63 = sub_44f450(&var_20, *(edi_3 + 4))
        char var_11_31 = eax_63.b
        int32_t var_8_33 = 0x11
        
        if (data_cdf414 != 0)
            char* const ecx_97 = var_20
            
            if (ecx_97 != 0 && *ecx_97 != 0)
                eax_63 = sub_44f000(&var_20)
                int32_t temp50_1 = *(eax_63 + 4)
                *(eax_63 + 4) -= 1
                
                if (temp50_1 == 1)
                    sub_45d050(eax_63, *(eax_63 + 0xc) + 0x10)
                    var_20 = &data_5559b1
                
                eax_63.b = var_11_31
        
        int32_t var_8_34 = 0xffffffff
        
        if (eax_63.b != 0)
            int32_t esi_25 = data_65aabc
            char* eax_64 = data_65ac20
            int32_t edi_4 = *(edi_3 + 8)
            var_24 = eax_64
            
            if (esi_25 == 0)
                sub_44e4d0(eax_64, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_65 = sub_41b9a0()
            char* ecx_100 = &data_5559b1
            void* edi_6 = var_24 * 0x2c + eax_65
            void* ebx_3 = (*((edi_4 << 2) + &data_65ac24) << 4) + esi_25
            esi_7 = edi_6 + 8
            *(edi_6 + 0x18) = *(ebx_3 + 0x30)
            char* eax_67 = *(ebx_3 + 0x2c)
            
            if (eax_67 != 0)
                ecx_100 = eax_67
            
            _strncpy(esi_7, ecx_100, 0x10)
            esi_7[0xf] = 0
            *(edi_6 + 0x1c) = 1
            ebx = &data_5559b1
            *(edi_6 + 0x20) = *(ebx_3 + 0x28)
            data_65ac1c = 0
            edi_3 = arg_4
    sub_44f240(&var_20, "btnPlayerRemove")
    char* const eax_69 = var_20
    void* ecx_102 = &data_5559b1
    char* edx_61 = *(edi_3 + 4)
    
    if (eax_69 != 0)
        ecx_102 = eax_69
    
    int32_t esi_26
    
    while (true)
        eax_69.b = *ecx_102
        char temp19_1 = *edx_61
        bool c_15 = eax_69.b u< temp19_1
        bool z_29 = eax_69.b == temp19_1
        arg_4:3.b = eax_69.b
        eax_69 = var_20
        
        if (z_29)
            if (arg_4:3.b == 0)
                esi_26 = 0
                break
            
            eax_69.b = *(ecx_102 + 1)
            char temp21_1 = edx_61[1]
            c_15 = eax_69.b u< temp21_1
            bool z_30 = eax_69.b == temp21_1
            arg_4:3.b = eax_69.b
            eax_69 = var_20
            
            if (z_30)
                ecx_102 += 2
                edx_61 = &edx_61[2]
                
                if (arg_4:3.b != 0)
                    continue
                
                esi_26 = 0
                break
        
        esi_26 = sbb.d(esi_7, esi_7, c_15) | 1
        break
    
    int32_t var_8_35 = 0x12
    
    if (data_cdf414 != 0 && eax_69 != 0 && *eax_69 != 0)
        char* eax_70 = sub_44f000(&var_20)
        int32_t temp23_1 = *(eax_70 + 4)
        *(eax_70 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_45d050(eax_70, *(eax_70 + 0xc) + 0x10)
    
    int32_t var_8_36 = 0xffffffff
    
    if (esi_26 == 0)
        void* eax_71 = sub_41bf30(eax_3, *(edi_3 + 8))
        data_65ac1c = 0
        *(eax_71 + 0x14) = esi_26
    
    sub_44f240(&arg_4, "btnTimer")
    char* eax_72 = arg_4
    char* ecx_107 = *(edi_3 + 4)
    
    if (eax_72 != 0)
        ebx = eax_72
    
    int32_t esi_28
    
    while (true)
        char edx_65 = *ebx
        char temp25_1 = *ecx_107
        bool c_16 = edx_65 u< temp25_1
        
        if (edx_65 == temp25_1)
            if (edx_65 == 0)
                esi_28 = 0
                break
            
            edx_65 = ebx[1]
            char temp27_1 = ecx_107[1]
            c_16 = edx_65 u< temp27_1
            
            if (edx_65 == temp27_1)
                ebx = &ebx[2]
                ecx_107 = &ecx_107[2]
                
                if (edx_65 != 0)
                    continue
                
                esi_28 = 0
                break
        
        esi_28 = sbb.d(esi_26, esi_26, c_16) | 1
        break
    
    int32_t var_8_37 = 0x13
    
    if (data_cdf414 != 0 && eax_72 != 0 && *eax_72 != 0)
        eax_72 = sub_44f000(&arg_4)
        int32_t temp29_1 = *(eax_72 + 4)
        *(eax_72 + 4) -= 1
        
        if (temp29_1 == 1)
            eax_72 = sub_45d050(eax_72, *(eax_72 + 0xc) + 0x10)
    
    if (esi_28 == 0)
        void* eax_73 = *(eax_3 + 0xf8)
        
        if (eax_73 == 3)
            *(eax_3 + 0xf8) = esi_28
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_73
        
        eax_72 = eax_73 + 1
        *(eax_3 + 0xf8) = eax_72
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_72
}
