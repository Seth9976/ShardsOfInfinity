// 函数名称: sub_418de0
// 虚拟地址: 0x418de0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_418de0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_wcrtomb_s_l@@YAHQAHQADI_WQAU_Mbstatet@@QAU__crt_locale_pointers@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_65aabc
    int32_t* var_1c = esi
    
    if (esi == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gClient", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ecx = *arg1
    int32_t* eax_4 = data_65acf4
    
    if (ecx != 0)
        int32_t edi_1 = eax_4[1]
        uint32_t edx_1 = zx.d(ecx.w)
        
        if (edx_1 u< edi_1)
            int32_t* var_20 = *eax_4
            eax_4 = var_20[edx_1 * 0x13 + 0x12]
            char* var_24 = eax_4
            
            if (eax_4 == ecx)
                int32_t eax_10
                
                if (ecx != 0 && edx_1 u< edi_1 && var_24 == ecx)
                    eax_10 = var_20[edx_1 * 0x13 + 5]
                
                if (ecx != 0 && edx_1 u< edi_1 && var_24 == ecx && (eax_10 == 2 || eax_10 == 3))
                    eax_4 = arg1[1]
                    
                    if (eax_4 != 0x3ea)
                        if (eax_4 == 0xfa0)
                            char* eax_11 = arg1[0x1fa4]
                            char* const ecx_1 = &data_5559b1
                            
                            if (eax_11 != 0)
                                ecx_1 = eax_11
                            
                            char* const var_38_1 = ecx_1
                            int32_t var_3c_1 = arg1[0x1fa3]
                            sub_44e260("http response code %d, message: %s")
                            eax_4 = *arg1
                            void* edx_2 = data_65acf4
                            
                            if (eax_4 != 0)
                                uint32_t ecx_2 = zx.d(eax_4.w)
                                
                                if (ecx_2 u< *(edx_2 + 4))
                                    int128_t* ecx_4 = ecx_2 * 0x4c + *edx_2
                                    
                                    if (*(ecx_4 + 0x48) == eax_4)
                                        sub_450480(ecx_4)
                        else if (eax_4 != 0xfa2)
                            if (eax_4 == 0x3eb || eax_4 == 0xfa1)
                                sub_44e260("analytics connect failed")
                                int32_t eax_13
                                eax_13.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_13
                            
                            int32_t* var_38_2 = eax_4
                            sub_44e260("Analytics unknown message type %d")
                            int32_t eax_12
                            eax_12.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_12
                else
                    int32_t eax_14 = arg1[1]
                    
                    if (eax_14 s> 0xf4242)
                        if (eax_14 - 0xf4243 u> 0xd)
                        label_4198c5:
                            eax_4.b = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_4
                        
                        int32_t* var_18
                        int32_t* var_14
                        int32_t** ecx_71
                        
                        switch (eax_14)
                            case 0xf4243
                                void* eax_20 = sub_42aaa0(*(data_65ac38 + 0xb24))
                                *(eax_20 + 0x22c) = arg1[4]
                                *(eax_20 + 0x230) = arg1[5]
                                sub_44f590(eax_20 + 0x234, &arg1[6])
                                sub_44f590(eax_20 + 0x238, arg1 + 0x21)
                                
                                if (sub_44f3f0(eax_20 + 0x238, eax_20 + 4) != 0)
                                    sub_44f590(eax_20 + 4, &data_5559b1)
                                
                                sub_42a740(data_65ac38)
                                
                                if (arg1[3] == 1)
                                    var_1c[7] = 3
                                    int32_t* eax_24
                                    eax_24.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_24
                            case 0xf4244
                                int32_t eax_48 = arg1[3]
                                
                                if (eax_48 != 0)
                                    if (eax_48 == 1)
                                        void* eax_50 = sub_42aaa0(*(data_65ac38 + 0xb24))
                                        sub_44f510(eax_50 + 0x238, eax_50 + 4)
                                        sub_44f590(eax_50 + 4, &data_5559b1)
                                        char** eax_51
                                        eax_51.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_51
                                    
                                    sub_44e4d0(eax_48 - 1, &data_5559b1, "Halt", 
                                        "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x86f, 
                                        "GameClientHandleMessage")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                            case 0xf4245
                                void* eax_52 = sub_42aaa0(*(data_65ac38 + 0xb24))
                                int32_t ecx_86 = arg1[3]
                                
                                if (ecx_86 == 0)
                                    data_5bb70c = 0
                                    sub_44f590(eax_52 + 0x238, &arg1[4])
                                    sub_44f590(eax_52 + 4, &data_5559b1)
                                    sub_42a740(data_65ac38)
                                    char* eax_54
                                    eax_54.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_54
                                
                                if (ecx_86 == 1)
                                    data_5bb70c = 4
                                    eax_52.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_52
                                
                                sub_44e4d0(eax_52, &data_5559b1, "Halt", 
                                    "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x834, 
                                    "GameProfileHandleEmailCodeResponse")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            case 0xf4246
                                sub_4202e0(&arg1[3])
                                int32_t* eax_47
                                eax_47.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_47
                            case 0xf4247
                                if (sub_483940(eax_14 - 0xf4243, &arg1[3], &arg1[3], data_dfc4fc, 
                                        nullptr, arg1[2]).b != 0)
                                    sub_4185f0(&arg1[3])
                                    struct _EXCEPTION_REGISTRATION_RECORD** eax_57
                                    eax_57.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_57
                            case 0xf4248
                                eax_4 = esi[0x109]
                                int32_t ecx_96 = 0
                                
                                if (eax_4 s> 0)
                                    void* esi_6 = &esi[9]
                                    
                                    while (*esi_6 != arg1[3])
                                        ecx_96 += 1
                                        esi_6 += 0x10
                                        
                                        if (ecx_96 s>= eax_4)
                                            eax_4.b = 1
                                            fsbase->NtTib.ExceptionList = ExceptionList
                                            return eax_4
                                    
                                    if (ecx_96 != 0xffffffff)
                                        sub_418360(ecx_96)
                                        char* eax_55
                                        eax_55.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_55
                            case 0xf4249
                                sub_418420(arg1[3], &arg1[5])
                                int32_t* eax_56
                                eax_56.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_56
                            case 0xf424a
                                if (sub_483940(eax_14 - 0xf4243, &arg1[3], &arg1[3], data_dfc508, 
                                        nullptr, arg1[2]).b != 0)
                                    sub_4188a0(&arg1[3])
                                    int32_t* eax_64
                                    eax_64.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_64
                            case 0xf424b
                                if (sub_483940(eax_14 - 0xf4243, &arg1[3], &arg1[3], data_dfc514, 
                                        nullptr, arg1[2]).b != 0)
                                    int32_t* edi_4 = sub_418c50(arg1[3])
                                    
                                    if (edi_4 != 0)
                                        sub_418a80(&arg1[3], edi_4)
                                        
                                        if (arg1[7] s> 1)
                                            sub_416d10(edi_4)
                                            void* eax_63
                                            eax_63.b = 1
                                            fsbase->NtTib.ExceptionList = ExceptionList
                                            return eax_63
                            case 0xf424c
                                sub_418cf0(&arg1[3])
                                int32_t* eax_65
                                eax_65.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_65
                            case 0xf424d
                                if (*(sub_411690() + 8) == arg1[4])
                                    int32_t** ecx_108 = sub_411690() + 0x10
                                    *ecx_108 = arg1[3]
                                
                                if (arg1[6].b != 0)
                                    eax_4 = sub_418c50(arg1[4])
                                    
                                    if (eax_4 != 0)
                                        if (esi[0x10d] != 2 || esi[0x10e] != eax_4)
                                            *(sub_418d80(sub_416cc0(eax_4), arg1[5]) + 0x20) = 0x3ec
                                            void* eax_62
                                            eax_62.b = 1
                                            fsbase->NtTib.ExceptionList = ExceptionList
                                            return eax_62
                                        
                                        sub_44f240(&var_14, &data_5559b1)
                                        int32_t var_8_3 = 0xe
                                        sub_44f240(&var_18, &data_5559b1)
                                        var_8_3.b = 0xf
                                        sub_44f240(&var_1c, 
                                            "You've run out of time and forfeited the game.")
                                        var_8_3.b = 0x10
                                        sub_44f240(&var_20, "TIME EXPIRED")
                                        var_8_3.b = 0x11
                                        sub_428fd0(&var_18, &var_1c, &var_20, 0x1b, &var_18, &var_14, 
                                            sub_419a90, 0)
                                        var_8_3.b = 0x12
                                        
                                        if (data_cdf414 != 0)
                                            eax_4 = var_20
                                            
                                            if (eax_4 != 0 && *eax_4 != 0)
                                                eax_4 = sub_44f000(&var_20)
                                                int32_t temp12_1 = eax_4[1]
                                                eax_4[1] -= 1
                                                
                                                if (temp12_1 == 1)
                                                    sub_45d050(eax_4, eax_4[3] + 0x10)
                                        
                                        var_8_3.b = 0x13
                                        
                                        if (data_cdf414 != 0)
                                            eax_4 = var_1c
                                            
                                            if (eax_4 != 0 && *eax_4 != 0)
                                                eax_4 = sub_44f000(&var_1c)
                                                int32_t temp14_1 = eax_4[1]
                                                eax_4[1] -= 1
                                                
                                                if (temp14_1 == 1)
                                                    sub_45d050(eax_4, eax_4[3] + 0x10)
                                        
                                        var_8_3.b = 0x14
                                        
                                        if (data_cdf414 != 0)
                                            eax_4 = var_18
                                            
                                            if (eax_4 != 0 && *eax_4 != 0)
                                                eax_4 = sub_44f000(&var_18)
                                                int32_t temp16_1 = eax_4[1]
                                                eax_4[1] -= 1
                                                
                                                if (temp16_1 == 1)
                                                    sub_45d050(eax_4, eax_4[3] + 0x10)
                                        
                                        int32_t var_8_4 = 0x15
                                        
                                        if (data_cdf414 != 0)
                                            eax_4 = var_14
                                            
                                            if (eax_4 != 0 && *eax_4 != 0)
                                                ecx_71 = &var_14
                                            label_419436:
                                                eax_4 = sub_44f000(ecx_71)
                                                int32_t temp19_1 = eax_4[1]
                                                eax_4[1] -= 1
                                                
                                                if (temp19_1 == 1)
                                                    sub_45d050(eax_4, eax_4[3] + 0x10)
                                                    int32_t eax_46
                                                    eax_46.b = 1
                                                    fsbase->NtTib.ExceptionList = ExceptionList
                                                    return eax_46
                            case 0xf424e
                                eax_4 = sub_418c50(arg1[3])
                                
                                if (esi[0x10d] == 2 && esi[0x10e] == eax_4)
                                    void* eax_33 = sub_41ad20()
                                    void* eax_34 = sub_418d80(eax_33, arg1[4])
                                    int32_t** var_38_8 = &var_20
                                    sub_4167e0(eax_34, eax_33 + 8, &var_24, eax_34)
                                    int32_t var_8_1 = 0
                                    char* const eax_35 = &data_5559b1
                                    char* esi_3 = var_24
                                    
                                    if (esi_3 != 0)
                                        eax_35 = esi_3
                                    
                                    char* const var_40_2 = eax_35
                                    sub_44f980(&var_14, "%s forfeited the game.")
                                    var_8_1.b = 1
                                    int32_t eax_36 = arg1[5]
                                    
                                    if (eax_36 == 0)
                                        char* eax_41 = &data_5559b1
                                        
                                        if (esi_3 != 0)
                                            eax_41 = esi_3
                                        
                                        char* var_38_11 = eax_41
                                        var_8_1.b = 2
                                        sub_44f510(&var_14, 
                                            sub_44f980(&var_20, "%s forfeited the game."))
                                        var_8_1.b = 3
                                    else
                                        if (eax_36 != 1)
                                            sub_44e4d0(eax_36 - 1, &data_5559b1, "Halt", 
                                                "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 
                                                0x84d, "GameClientHandleMessage")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        
                                        char* eax_39 = &data_5559b1
                                        
                                        if (esi_3 != 0)
                                            eax_39 = esi_3
                                        
                                        char* var_38_9 = eax_39
                                        var_8_1.b = 4
                                        sub_44f510(&var_14, sub_44f980(&var_20, "Time expired for %s."))
                                        var_8_1.b = 5
                                    
                                    if (data_cdf414 != 0)
                                        int32_t* eax_43 = var_20
                                        
                                        if (eax_43 != 0 && *eax_43 != 0)
                                            char* eax_44 = sub_44f000(&var_20)
                                            int32_t temp13_1 = *(eax_44 + 4)
                                            *(eax_44 + 4) -= 1
                                            
                                            if (temp13_1 == 1)
                                                sub_45d050(eax_44, *(eax_44 + 0xc) + 0x10)
                                    
                                    var_8_1.b = 1
                                    sub_44f240(&var_20, &data_5559b1)
                                    var_8_1.b = 6
                                    sub_44f240(&var_1c, &data_5559b1)
                                    var_8_1.b = 7
                                    sub_44f240(&var_18, "OPPONENT FORFEITED")
                                    var_8_1.b = 8
                                    sub_428fd0(&var_1c, &var_14, &var_18, 0x1b, &var_1c, &var_20, 
                                        sub_419a20, 0)
                                    var_8_1.b = 9
                                    
                                    if (data_cdf414 != 0)
                                        eax_4 = var_18
                                        
                                        if (eax_4 != 0 && *eax_4 != 0)
                                            eax_4 = sub_44f000(&var_18)
                                            int32_t temp15_1 = eax_4[1]
                                            eax_4[1] -= 1
                                            
                                            if (temp15_1 == 1)
                                                sub_45d050(eax_4, eax_4[3] + 0x10)
                                    
                                    var_8_1.b = 0xa
                                    
                                    if (data_cdf414 != 0)
                                        eax_4 = var_1c
                                        
                                        if (eax_4 != 0 && *eax_4 != 0)
                                            eax_4 = sub_44f000(&var_1c)
                                            int32_t temp17_1 = eax_4[1]
                                            eax_4[1] -= 1
                                            
                                            if (temp17_1 == 1)
                                                sub_45d050(eax_4, eax_4[3] + 0x10)
                                    
                                    var_8_1.b = 0xb
                                    
                                    if (data_cdf414 != 0)
                                        eax_4 = var_20
                                        
                                        if (eax_4 != 0 && *eax_4 != 0)
                                            eax_4 = sub_44f000(&var_20)
                                            int32_t temp18_1 = eax_4[1]
                                            eax_4[1] -= 1
                                            
                                            if (temp18_1 == 1)
                                                sub_45d050(eax_4, eax_4[3] + 0x10)
                                    
                                    var_8_1.b = 0xc
                                    
                                    if (data_cdf414 != 0)
                                        eax_4 = var_14
                                        
                                        if (eax_4 != 0 && *eax_4 != 0)
                                            eax_4 = sub_44f000(&var_14)
                                            int32_t temp20_1 = eax_4[1]
                                            eax_4[1] -= 1
                                            
                                            if (temp20_1 == 1)
                                                sub_45d050(eax_4, eax_4[3] + 0x10)
                                                var_14 = &data_5559b1
                                    
                                    int32_t var_8_2 = 0xd
                                    
                                    if (data_cdf414 != 0 && esi_3 != 0 && *esi_3 != 0)
                                        ecx_71 = &var_24
                                        goto label_419436
                            case 0xf424f
                                if (arg1[3] == 0)
                                    *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x244) = 2
                                    sub_42a740(data_65ac38)
                                    int32_t ecx_141
                                    ecx_141.b = 1
                                    sub_415330(ecx_141, 1)
                                    void* eax_67
                                    eax_67.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_67
                                
                                sub_44e4d0(eax_14 - 0xf4243, &data_5559b1, "Halt", 
                                    "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x69, 
                                    "ClientGotLinkResponse")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            case 0xf4250
                                int32_t* edx_4 = sub_42aaa0(*(data_65ac38 + 0xb24))
                                
                                if (edx_4[0x8c] == arg1[3])
                                    int32_t eax_25 = arg1[4]
                                    
                                    if (eax_25 == 0)
                                        edx_4[arg1[5] + 0xa0] = arg1[6]
                                        edx_4[arg1[5] + 0xa3] = arg1[7]
                                        edx_4[arg1[5] + 0xa6] = arg1[8]
                                        int32_t eax_32
                                        eax_32.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_32
                                    
                                    if (eax_25 == 1)
                                        edx_4[arg1[5] + 0x97] = arg1[6]
                                        edx_4[arg1[5] + 0x9a] = arg1[7]
                                        edx_4[arg1[5] + 0x9d] = arg1[8]
                                        int32_t eax_29
                                        eax_29.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_29
                    else if (eax_14 == 0xf4242)
                        if (sub_483940(eax_14, &arg1[3], &arg1[3], data_dfc51c, nullptr, arg1[2]).b
                                != 0)
                            sub_44f590(&esi[8], arg1[5])
                            esi[0x194] = *esi
                            esi[0x195] = esi[1]
                            
                            switch (arg1[3])
                                case nullptr
                                    esi[7] = 6
                                    eax_4.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_4
                                case 1
                                    esi[7] = 4
                                    eax_4.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_4
                                case 2
                                    esi[7] = 5
                                    eax_4.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_4
                                case 3
                                    esi[7] = 1
                                    eax_4.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_4
                    else
                        if (eax_14 == 0x3ea)
                            esi[6] = 3
                            sub_418140()
                            char* eax_17
                            eax_17.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_17
                        
                        if (eax_14 == 0x3eb)
                            esi[6] = 0
                            int32_t eax_16
                            eax_16.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_16
                        
                        if (eax_14 != 0x3ec)
                            goto label_4198c5
                        
                        bool cond:1_1 = esi[7] != 6
                        esi[6] = eax_14 - 0x3ec
                        
                        if (not(cond:1_1))
                            esi[7] = eax_14 - 0x3ec
                            eax_4.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_4
    
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4
}
