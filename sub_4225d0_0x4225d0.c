// 函数名称: sub_4225d0
// 虚拟地址: 0x4225d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_4225d0(int32_t arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541660
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_24 = ebx
    int32_t var_2c = arg1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_14
    sub_44f240(&var_14, "btnBack")
    char* const ecx_1 = &data_5559b1
    char* eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    char* edx = arg2[1]
    int32_t ecx_3
    
    while (true)
        ebx.b = *ecx_1
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_3 = 0
                break
            
            ebx.b = ecx_1[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_1 = &ecx_1[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_3 = 0
                break
        
        ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
        break
    
    if (ecx_3 == 0 || arg2[6] == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && eax_3 != 0 && *eax_3 != 0)
        eax_3 = sub_44f000(&var_14)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            eax_3 = sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        data_5bb240 = 3
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    sub_44f240(&var_14, "btnYourNext")
    char* const eax_4 = var_14
    char* const ecx_9 = &data_5559b1
    char* edx_3 = arg2[1]
    
    if (eax_4 != 0)
        ecx_9 = eax_4
    
    int32_t edi_1
    
    while (true)
        ebx.b = *ecx_9
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = ecx_9[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_9 = &ecx_9[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && eax_4 != 0 && *eax_4 != 0)
        eax_4 = sub_44f000(&var_14)
        int32_t temp5_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp5_1 == 1)
            eax_4 = sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    
    if (edi_1 == 0)
        data_65aafc += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    sub_44f240(&var_14, "btnYourPrev")
    char* const eax_5 = var_14
    char* const ecx_15 = &data_5559b1
    char* edx_6 = arg2[1]
    
    if (eax_5 != 0)
        ecx_15 = eax_5
    
    int32_t edi_4
    
    while (true)
        ebx.b = *ecx_15
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                edi_4 = 0
                break
            
            ebx.b = ecx_15[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                ecx_15 = &ecx_15[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_4 = 0
                break
        
        edi_4 = sbb.d(edi_1, edi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && eax_5 != 0 && *eax_5 != 0)
        eax_5 = sub_44f000(&var_14)
        int32_t temp8_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp8_1 == 1)
            eax_5 = sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    
    if (edi_4 == 0)
        data_65aafc -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    sub_44f240(&var_14, "btnOpenNext")
    char* eax_6 = sub_44f450(&var_14, arg2[1])
    ebx.b = eax_6.b
    int32_t var_8_7 = 3
    
    if (data_cdf414 != 0)
        char* const ecx_22 = var_14
        
        if (ecx_22 != 0 && *ecx_22 != 0)
            eax_6 = sub_44f000(&var_14)
            int32_t temp9_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp9_1 == 1)
                eax_6 = sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_8 = 0xffffffff
    
    if (ebx.b != 0)
        data_65ab00 += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    sub_44f240(&var_14, "btnOpenPrev")
    char* eax_7 = sub_44f450(&var_14, arg2[1])
    ebx.b = eax_7.b
    int32_t var_8_9 = 4
    
    if (data_cdf414 != 0)
        char* const ecx_29 = var_14
        
        if (ecx_29 != 0 && *ecx_29 != 0)
            eax_7 = sub_44f000(&var_14)
            int32_t temp10_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp10_1 == 1)
                eax_7 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_10 = 0xffffffff
    
    if (ebx.b != 0)
        data_65ab00 -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    sub_44f240(&var_14, "btnGame")
    ebx.b = sub_44f450(&var_14, arg2[1])
    int32_t var_8_11 = 5
    
    if (data_cdf414 != 0)
        char* const ecx_36 = var_14
        
        if (ecx_36 != 0 && *ecx_36 != 0)
            char* eax_9 = sub_44f000(&var_14)
            int32_t temp11_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp11_1 == 1)
                sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_12 = 0xffffffff
    char* var_20
    char* var_1c
    char* var_18
    char* eax_13
    char* const* ecx_60
    
    if (ebx.b == 0)
        sub_44f240(&var_14, "btnTrash")
        ebx.b = sub_44f450(&var_14, arg2[1])
        int32_t var_8_15 = 0xe
        
        if (data_cdf414 != 0)
            char* const ecx_66 = var_14
            
            if (ecx_66 != 0 && *ecx_66 != 0)
                char* eax_26 = sub_44f000(&var_14)
                int32_t temp12_1 = *(eax_26 + 4)
                *(eax_26 + 4) -= 1
                
                if (temp12_1 == 1)
                    sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_16 = 0xffffffff
        
        if (ebx.b == 0)
            sub_44f240(&var_20, "btnCreateGame")
            eax_13 = sub_44f450(&var_20, arg2[1])
            ebx.b = eax_13.b
            int32_t var_8_23 = 0x27
            
            if (data_cdf414 != 0)
                char* ecx_123 = var_20
                
                if (ecx_123 != 0 && *ecx_123 != 0)
                    eax_13 = sub_44f000(&var_20)
                    int32_t temp13_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
            
            if (ebx.b == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_13
            
            data_65ac18 = 0xffffffff
            data_65ac14 = 1
            goto label_423068
        
        uint32_t eax_27 = sub_47b080(*arg2)
        
        if (eax_27.b == 0)
            sub_44e4d0(eax_27, &data_5559b1, "gameDescType == GAMEDESC_MINE", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xd15, "MultiplayerClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_28 = data_65aafc
        int32_t esi_2 = arg2[2] + (eax_28 << 2)
        int32_t* esi_3
        
        if (esi_2 s< data_65ab84)
            esi_3 = *((esi_2 << 2) + &data_65ab04)
        
        if (esi_2 s>= data_65ab84 || esi_3 == 0)
            sub_44e4d0(eax_28, &data_5559b1, "gameIndex != GAMEIDX_NONE", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xd17, "MultiplayerClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* eax_30 = sub_4220d0(&sub_416cc0(esi_3)[2])
        data_65aaf8 = esi_3
        
        if (eax_30 u> 0x11)
        label_423197:
            sub_44e4d0(eax_30, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xd61, "MultiplayerClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_30 = zx.d(*(eax_30 + &lookup_table_423230))
        
        switch (eax_30)
            case nullptr
                sub_44f240(&var_14, "Yes (Decline)")
                int32_t var_8_17 = 0xf
                sub_44f240(&var_18, "No")
                var_8_17.b = 0x10
                sub_44f240(&var_1c, "Are you sure you want to decline this invitation?")
                var_8_17.b = 0x11
                sub_44f240(&var_20, "GAME INVITE")
                var_8_17.b = 0x12
                eax_13 = sub_428fd0(&var_18, &var_1c, &var_20, 0x1c, &var_18, &var_14, sub_423250, 0)
                var_8_17.b = 0x13
                
                if (data_cdf414 != 0)
                    eax_13 = var_20
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_20)
                        int32_t temp16_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp16_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                var_8_17.b = 0x14
                
                if (data_cdf414 != 0)
                    eax_13 = var_1c
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_1c)
                        int32_t temp20_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp20_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                var_8_17.b = 0x15
                
                if (data_cdf414 != 0)
                    eax_13 = var_18
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_18)
                        int32_t temp23_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp23_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                int32_t var_8_18 = 0x16
            case 1
                sub_44e4d0(eax_30, &data_5559b1, "Halt", 
                    "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xd30, "MultiplayerClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            case 2
                sub_44f240(&var_14, "Yes (Abandon)")
                int32_t var_8_19 = 0x17
                sub_44f240(&var_18, "No")
                var_8_19.b = 0x18
                sub_44f240(&var_1c, "Are you sure you want to abandon this game?")
                var_8_19.b = 0x19
                sub_44f240(&var_20, "ABANDON GAME")
                var_8_19.b = 0x1a
                eax_13 = sub_428fd0(&var_18, &var_1c, &var_20, 0x1c, &var_18, &var_14, sub_423270, 0)
                var_8_19.b = 0x1b
                
                if (data_cdf414 != 0)
                    eax_13 = var_20
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_20)
                        int32_t temp17_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp17_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                var_8_19.b = 0x1c
                
                if (data_cdf414 != 0)
                    eax_13 = var_1c
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_1c)
                        int32_t temp21_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp21_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                var_8_19.b = 0x1d
                
                if (data_cdf414 != 0)
                    eax_13 = var_18
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_18)
                        int32_t temp24_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp24_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                int32_t var_8_20 = 0x1e
                goto label_422d32
            case 3
                sub_41a9f0(esi_3)
                int32_t eax_33 = sub_41beb0(esi_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_33
            case 4
                sub_41a9f0(esi_3)
                int32_t eax_34 = sub_41beb0(esi_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_34
            case 5
                sub_41a9f0(esi_3)
            label_422fe8:
                int32_t eax_37 = sub_41beb0(esi_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_37
            case 6
                goto label_422fe8
            case 7
                sub_44f240(&var_14, "Yes (Forfeit)")
                int32_t var_8_21 = 0x1f
                sub_44f240(&var_18, "No")
                var_8_21.b = 0x20
                sub_44f240(&var_1c, "Are you sure you want to forfeit this game?")
                var_8_21.b = 0x21
                sub_44f240(&var_20, "FORFEIT GAME")
                var_8_21.b = 0x22
                eax_13 = sub_428fd0(&var_18, &var_1c, &var_20, 0x1c, &var_18, &var_14, sub_423290, 0)
                var_8_21.b = 0x23
                
                if (data_cdf414 != 0)
                    eax_13 = var_20
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_20)
                        int32_t temp18_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp18_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                var_8_21.b = 0x24
                
                if (data_cdf414 != 0)
                    eax_13 = var_1c
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_1c)
                        int32_t temp22_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp22_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                var_8_21.b = 0x25
                
                if (data_cdf414 != 0)
                    eax_13 = var_18
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        eax_13 = sub_44f000(&var_18)
                        int32_t temp25_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp25_1 == 1)
                            eax_13 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
                
                int32_t var_8_22 = 0x26
            case 8
                void* eax_35 = sub_422540(esi_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_35
            case 9
                goto label_423197
        
    label_422d32:
        
        if (data_cdf414 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        
        eax_13 = var_14
        
        if (eax_13 == 0 || *eax_13 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        
        ecx_60 = &var_14
        goto label_422b33
    
    int32_t edx_18
    edx_18.b = sub_47b080(*arg2) == 0
    int32_t* eax_11 = sub_422500(arg2[2], edx_18)
    
    if (eax_11 == 0)
        sub_44e4d0(eax_11, &data_5559b1, "gameIndex != GAMEIDX_NONE", 
            "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xce4, "MultiplayerClick")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* esi_1 = sub_416cc0(eax_11)
    eax_13 = sub_4220d0(&esi_1[2])
    
    switch (eax_13)
        case nullptr, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xe, 0x12
            data_65ac18 = eax_11
            data_65ac14 = 2
        label_423068:
            data_5bb240 = 0xe
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        case 0xc
            int32_t ecx_47 = esi_1[0x3b]
            int32_t eax_15 = 0
            
            if (ecx_47 s<= 0)
            label_4230cf:
                sub_44e4d0(eax_15, &data_5559b1, "Halt", 
                    "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xcc6, "GetPlayerForfeited")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            while (esi_1[0xc] != 0x3e9)
                eax_15 += 1
                esi_1 = &esi_1[0xb]
                
                if (eax_15 s>= ecx_47)
                    goto label_4230cf
            
            void* var_34_1 = &esi_1[4]
            sub_44f980(&var_20, "%s forfeited the game.")
            int32_t var_8_13 = 6
            sub_44f240(&var_1c, &data_5559b1)
            var_8_13.b = 7
            sub_44f240(&var_18, &data_5559b1)
            var_8_13.b = 8
            sub_44f240(&var_14, "FORFEIT")
            var_8_13.b = 9
            sub_428fd0(&var_18, &var_20, &var_14, 0x1b, &var_18, &var_1c, 0, 0)
            var_8_13.b = 0xa
            
            if (data_cdf414 != 0)
                char* const eax_18 = var_14
                
                if (eax_18 != 0 && *eax_18 != 0)
                    char* eax_19 = sub_44f000(&var_14)
                    int32_t temp14_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
            
            var_8_13.b = 0xb
            
            if (data_cdf414 != 0)
                char* eax_20 = var_18
                
                if (eax_20 != 0 && *eax_20 != 0)
                    char* eax_21 = sub_44f000(&var_18)
                    int32_t temp15_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
            
            var_8_13.b = 0xc
            
            if (data_cdf414 != 0)
                char* eax_22 = var_1c
                
                if (eax_22 != 0 && *eax_22 != 0)
                    char* eax_23 = sub_44f000(&var_1c)
                    int32_t temp19_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp19_1 == 1)
                        sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
            
            var_8_13.b = 6
            sub_41a9f0(eax_11)
            eax_13 = sub_41beb0(eax_11)
            int32_t var_8_14 = 0xd
            
            if (data_cdf414 == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_13
            
            eax_13 = var_20
            
            if (eax_13 == 0 || *eax_13 == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_13
            
            ecx_60 = &var_20
        label_422b33:
            eax_13 = sub_44f000(ecx_60)
            int32_t temp26_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp26_1 != 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_13
            
            int32_t eax_24 = sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_24
        case 0xf, 0x10, 0x11
            void* eax_14 = sub_416d70(eax_11)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
        default
            sub_44e4d0(eax_13, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xd0f, "MultiplayerClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
}
