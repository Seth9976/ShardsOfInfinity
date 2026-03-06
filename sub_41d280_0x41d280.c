// 函数名称: sub_41d280
// 虚拟地址: 0x41d280
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_41d280(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5412e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_6c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_472550(arg1, sub_41bfa0)
    void* edi = sub_41b9a0()
    void* var_40 = edi
    void* eax_4 = sub_42aaa0(*(data_65ac38 + 0xb24))
    int32_t ecx_2 = data_65ac14
    char var_2d
    char* var_28
    
    if (ecx_2 == 1 || ecx_2 == 2)
        int32_t var_70_1 = 0xffffffff
        var_2d = 1
        sub_469930(arg1)
        int32_t eax_5 = *(edi + 0xf8)
        char const* const var_24 = "30 Minutes"
        char const* const var_20_1 = "1 Week"
        char const* const var_1c_1 = "1 Month"
        char const* const var_18_1 = "Unlimited"
        char* edx_1 = (&var_24)[eax_5]
        
        if (edx_1 == 0)
            sub_44e4d0(eax_5, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_44f240(&var_28, edx_1)
        int32_t var_8_1 = 0
        sub_469cf0(&var_28, &data_5bb37c, arg1, &var_28, 0xffffffff)
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            char* eax_7 = var_28
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_44f000(&var_28)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_28 = &data_5559b1
        
        int32_t var_8_3 = 0xffffffff
    else
        var_2d = 0
    
    if (data_65ac14 == 1)
        if (*(edi + 0x1c) != 1)
            *(edi + 0x1c) = 1
            *(edi + 0x20) = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x230)
            *(edi + 0x48) = 2
            *(edi + 0x4c) = 0
            _strncpy(edi + 0x34, "REQUIRED", 0x10)
            *(edi + 0x43) = 0
        
        *(edi + 0x1c) = 1
        *(edi + 0x20) = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x230)
        int32_t eax_13 = *(edi + 0x48)
        
        if (eax_13 != 2 && eax_13 != 1 && eax_13 != 3)
            *(edi + 0x48) = 2
            *(edi + 0x4c) = 0
            _strncpy(edi + 0x34, "REQUIRED", 0x10)
            *(edi + 0x43) = 0
    else if (data_65ac14 == 0)
        if (*(edi + 0x1c) != 0x3e8)
            *(edi + 0x1c) = 0x3e8
            *(edi + 0x20) = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x23c)
            *(edi + 0x48) = 3
            *(edi + 0x4c) = 0
            _strncpy(edi + 0x34, "Easy AI", 0x10)
            *(edi + 0x43) = 0
            *(edi + 0x44) = 0xd8
        
        *(edi + 0x1c) = 0x3e8
        void* eax_16 = sub_42aaa0(*(data_65ac38 + 0xb24))
        bool cond:0_1 = *(edi + 0x48) != 0
        *(edi + 0x20) = *(eax_16 + 0x23c)
        
        if (not(cond:0_1))
            *(edi + 0x48) = 3
            *(edi + 0x4c) = 0
            _strncpy(edi + 0x34, "Easy AI", 0x10)
            *(edi + 0x43) = 0
            *(edi + 0x44) = 0xd8
    
    char* const var_2c
    uint32_t esi_5
    
    if (data_65ac14 != 2)
        esi_5 = arg1
    else
        int32_t eax_18 = *(edi + 0xfc)
        
        if (eax_18 == 2)
            sub_44f240(&var_28, "Game Completed")
        else if (eax_18 == 1)
            sub_44f240(&var_28, "Game in Progress")
        else if (eax_18 != 0)
            sub_44f240(&var_28, &data_5559b1)
        else
            int32_t eax_20
            int32_t edx_5
            edx_5:eax_20 = muls.dp.d(0x10624dd3, sub_45ccc0(edi))
            int32_t edx_6 = edx_5 s>> 6
            int32_t edx_8 = *(edi + 0x104) - ((edx_6 u>> 0x1f) + edx_6)
            
            if (edx_8 s> 0)
                sub_41d110(&var_2c, edx_8)
                int32_t var_8_4 = 2
                char* const ecx_19 = &data_5559b1
                char* eax_24 = var_2c
                
                if (eax_24 != 0)
                    ecx_19 = eax_24
                
                char* const var_70_2 = ecx_19
                sub_44f980(&var_28, "Formation expires in{br}%s")
                int32_t var_8_5 = 3
                
                if (data_cdf414 != 0)
                    char* eax_25 = var_2c
                    
                    if (eax_25 != 0 && *eax_25 != 0)
                        char* eax_26 = sub_44f000(&var_2c)
                        int32_t temp7_1 = *(eax_26 + 4)
                        *(eax_26 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
                            var_2c = &data_5559b1
            else
                sub_44f240(&var_28, "Formation Expired")
        
        esi_5 = arg1
        int32_t var_70_3 = 0xffffffff
        int32_t var_8_6 = 4
        sub_469930(esi_5)
        sub_469cf0(&var_28, &data_5bb6ec, esi_5, &var_28, 0xffffffff)
        int32_t var_8_7 = 5
        
        if (data_cdf414 != 0)
            char* eax_28 = var_28
            
            if (eax_28 != 0 && *eax_28 != 0)
                char* eax_29 = sub_44f000(&var_28)
                int32_t temp4_1 = *(eax_29 + 4)
                *(eax_29 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
                    var_28 = &data_5559b1
        
        int32_t var_8_8 = 0xffffffff
    
    int32_t eax_30 = sub_41bc40(edi)
    
    if (eax_30 u> 8)
        sub_44e4d0(eax_30, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
            0x676, "GameCreateGameUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    switch (eax_30)
        case 0
            int32_t var_70_4 = 0xffffffff
            sub_469930(esi_5)
            int32_t esi_6 = 0
            int32_t edx_15 = 0
            int32_t edi_1 = 0
            void* ecx_30 = var_40 + 0x20
            int32_t i_2 = 5
            int32_t i
            
            do
                int32_t eax_31 = *(ecx_30 - 4)
                
                if (eax_31 s> 3)
                    if (eax_31 - 0x3e8 u<= 1)
                        esi_6 += 1
                else if (eax_31 == 3)
                    edi_1 += 1
                else if (eax_31 == 1)
                    esi_6 += 1
                else if (eax_31 == 2)
                    int32_t eax_34 = edx_15 + 1
                    
                    if (*ecx_30 != 0)
                        eax_34 = edx_15
                    
                    edx_15 = eax_34
                
                ecx_30 += 0x2c
                i = i_2
                i_2 -= 1
            while (i != 1)
            int32_t eax_36 = edx_15 + esi_6
            
            if (var_2d == i_2.b)
                eax_36 = edi_1 + esi_6
            
            esi_5 = arg1
            eax_36.b = eax_36 s>= 2
            
            if (eax_36.b == 0)
                int32_t var_70_5 = 0xffffffff
                sub_469930(esi_5)
            
            edi = var_40
        case 6, 7
            int32_t var_70_7 = 0xffffffff
            sub_469930(esi_5)
            int32_t var_74_2 = 0xffffffff
            sub_469930(esi_5)
    
    int32_t result = arg2
    uint32_t ebx_1 = 0
    uint32_t var_34 = 0
    
    if (result s> 0)
        while (true)
            char* const ebx_2
            
            if (result == 4)
                char* eax_44 = sub_41b7f0(ebx_1 * 0x24 + &data_e47c90, esi_5, "tblPlayers", ebx_1)
                ebx_2 = eax_44
                var_2c = eax_44
            else
                if (result != 5)
                    sub_44e4d0(result - 5, &data_5559b1, "Halt", 
                        "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x61c, "GetTablePlayer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (ebx_1 != 0)
                    ebx_2 = sub_41b7f0(ebx_1 * 0x24 + &data_e47d44, esi_5, "tblPlayers", ebx_1 - 1)
                    var_2c = ebx_2
                else
                    ebx_2 = sub_41b7f0(&data_e47d44, esi_5, "tblPlayerMe", ebx_1)
                    var_2c = ebx_2
            
            if (ebx_2 != 0 && (data_65ac14 != 2 || var_34 s< *(edi + 0xe4)))
                void* esi_8 = var_34 * 0x2c + edi
                void* var_50_1
                
                if (var_2d != 0)
                    var_50_1 = esi_8 + 0x1c
                    
                    if (*(esi_8 + 0x1c) != 1 || *(esi_8 + 0x20) != *(eax_4 + 0x230))
                        goto label_41d913
                    
                    goto label_41d848
                
                var_50_1 = esi_8 + 0x1c
                
                if (*(esi_8 + 0x1c) != 0x3e8 || *(esi_8 + 0x20) != *(eax_4 + 0x23c))
                    var_50_1 = esi_8 + 0x1c
                label_41d913:
                    int32_t var_5c
                    int32_t* var_70_10 = &var_5c
                    char* var_4c
                    sub_4167e0(&var_5c, var_40, &var_4c, esi_8 + 8)
                    int32_t var_8_11 = 8
                    sub_441db0(var_5c)
                    int32_t var_78_11 = 0xffffffff
                    sub_469930(ebx_2)
                    sub_469cf0(&var_4c, &data_5bb1cc, ebx_2, &var_4c, 0xffffffff)
                    int32_t eax_62 = *var_50_1
                    
                    if (eax_62 s> 0x3e9)
                    label_41de43:
                        sub_44e4d0(eax_62, &data_5559b1, "Halt", 
                            "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x6c3, 
                            "GameCreateGameUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    if (eax_62 s>= 0x3e8)
                    label_41d996:
                        int32_t var_70_12 = 0xffffffff
                        sub_469930(ebx_2)
                    else
                        if (eax_62 u> 3)
                            goto label_41de43
                        
                        switch (eax_62)
                            case 0
                                if (data_65ac1c != 0 && data_65ac20 == var_34)
                                    goto label_41d996
                            case 1
                                if (*(esi_8 + 0x28) == 1)
                                    int32_t var_70_11 = 0xffffffff
                                    sub_469930(ebx_2)
                                
                                goto label_41d996
                            case 2
                                goto label_41d996
                    
                    int32_t var_8_12 = 9
                    
                    if (data_cdf414 != 0)
                        char* eax_63 = var_4c
                        
                        if (eax_63 != 0 && *eax_63 != 0)
                            char* eax_64 = sub_44f000(&var_4c)
                            int32_t temp9_1 = *(eax_64 + 4)
                            *(eax_64 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_45d050(eax_64, *(eax_64 + 0xc) + 0x10)
                                var_4c = &data_5559b1
                else
                label_41d848:
                    char* const ecx_38 = &data_5559b1
                    char* eax_50 = *eax_4
                    
                    if (eax_50 != 0)
                        ecx_38 = eax_50
                    
                    _strncpy(esi_8 + 8, ecx_38, 0x10)
                    *(esi_8 + 0x17) = 0
                    int32_t var_7c_1 = 0xffffffff
                    *(esi_8 + 0x18) = *(eax_4 + 8)
                    sub_469930(ebx_2)
                    int32_t var_58
                    int32_t* var_80_1 = &var_58
                    char* var_48
                    sub_4167e0(&var_58, var_40, &var_48, esi_8 + 8)
                    int32_t var_8_9 = 6
                    sub_469cf0(&var_48, &data_5bb1cc, ebx_2, &var_48, 0xffffffff)
                    sub_441db0(var_58)
                    int32_t var_90_1 = 0xffffffff
                    sub_469930(ebx_2)
                    int32_t var_8_10 = 7
                    
                    if (data_cdf414 != 0)
                        char* eax_56 = var_48
                        
                        if (eax_56 != 0 && *eax_56 != 0)
                            char* eax_57 = sub_44f000(&var_48)
                            int32_t temp8_1 = *(eax_57 + 4)
                            *(eax_57 + 4) -= 1
                            
                            if (temp8_1 == 1)
                                sub_45d050(eax_57, *(eax_57 + 0xc) + 0x10)
                                var_48 = &data_5559b1
                
                uint32_t ecx_68 = var_34
                int32_t var_8_13 = 0xffffffff
                
                if (data_65ac1c != 0 && data_65ac20 == ecx_68)
                    int32_t var_70_13 = 0xffffffff
                    
                    if (data_65ac14 != 0)
                        sub_469930(ebx_2)
                        void* eax_70 = eax_4
                        void* esi_10 = nullptr
                        void* edx_45 = data_65aabc
                        var_28 = nullptr
                        void* var_44_2 = nullptr
                        
                        if (*(eax_70 + 0x254) s> 0)
                            void* ebx_4 = eax_70 + 0x248
                            void* ecx_62 = eax_70
                            
                            while (true)
                                if (edx_45 == 0)
                                    sub_44e4d0(eax_70, &data_5559b1, "gClient", 
                                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
                                        "GetClient")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                int32_t esi_11 = *(edx_45 + 0x424)
                                int32_t eax_71 = 0
                                
                                if (esi_11 s<= 0)
                                    esi_10 = var_28
                                else
                                    void* ecx_63 = edx_45 + 0x24
                                    
                                    while (true)
                                        if (*ecx_63 != *ebx_4)
                                            eax_71 += 1
                                            ecx_63 += 0x10
                                            
                                            if (eax_71 s< esi_11)
                                                continue
                                        else if (eax_71 != 0xffffffff)
                                            char* esi_13 = var_28
                                            sub_41d060(eax_71, esi_13, var_2c, eax_71)
                                            edx_45 = data_65aabc
                                            esi_10 = &esi_13[1]
                                            var_28 = esi_10
                                            break
                                        
                                        esi_10 = var_28
                                        break
                                    
                                    ecx_62 = eax_4
                                
                                ebx_4 += 4
                                eax_70 = var_44_2 + 1
                                var_44_2 = eax_70
                                
                                if (eax_70 s>= *(ecx_62 + 0x254))
                                    eax_70 = eax_4
                                    break
                        
                        int32_t edi_5 = 0xffffffff
                        bool cond:8_1 = esi_10 u> 3
                        
                        if (esi_10 s< 3)
                            while (true)
                                int32_t esi_12 = *(eax_70 + 0x254)
                                
                                if (edx_45 == 0)
                                    sub_44e4d0(eax_70, &data_5559b1, "gClient", 
                                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
                                        "GetClient")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                eax_70 = *(edx_45 + 0x424)
                                edi_5 += 1
                                void* var_44_3 = eax_70
                                
                                if (edi_5 s>= eax_70)
                                label_41dc70:
                                    esi_10 = var_28
                                else
                                    eax_70 = edi_5 << 4
                                    void* ebx_6 = edx_45 + 0x24 + eax_70
                                    
                                    while (true)
                                        int32_t ecx_64 = 0
                                        
                                        if (esi_12 s<= 0)
                                            break
                                        
                                        eax_70 = eax_4 + 0x248
                                        
                                        while (*ebx_6 != *eax_70)
                                            ecx_64 += 1
                                            eax_70 += 4
                                            
                                            if (ecx_64 s>= esi_12)
                                                goto label_41dc0c
                                        
                                        edi_5 += 1
                                        ebx_6 += 0x10
                                        
                                        if (edi_5 s>= var_44_3)
                                            goto label_41dc70
                                    
                                label_41dc0c:
                                    esi_10 = var_28
                                    
                                    if (edi_5 != 0xffffffff)
                                        eax_70 = sub_41d060(eax_70, esi_10, var_2c, edi_5)
                                        esi_10 += 1
                                        var_28 = esi_10
                                        cond:8_1 = esi_10 u> 3
                                        
                                        if (esi_10 s>= 3)
                                            break
                                        
                                        edx_45 = data_65aabc
                                        eax_70 = eax_4
                                        continue
                                
                                cond:8_1 = esi_10 u> 3
                                break
                        
                        if (cond:8_1)
                            sub_44e4d0(eax_70, &data_5559b1, "Halt", 
                                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x713, 
                                "GameCreateGameUpdate")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        switch (jump_table_41ded4[esi_10])
                            case 0x41dafb
                                goto label_41dafb
                            case 0x41db14
                                goto label_41db14
                            case 0x41dc83
                                goto label_41dc83
                            case 0x41dc99
                                ebx_2 = var_2c
                    else
                        sub_469930(ebx_2)
                        int32_t edi_3 = 0
                        int32_t ebx_3 = 0
                        int32_t eax_66 = *(data_65ac38 + 0xb20)
                        
                        if (eax_66 s> 0)
                            void* eax_68
                            
                            do
                                void* eax_67 = sub_42aa50(ebx_3)
                                eax_68 = *(eax_67 + 0x23c)
                                
                                if (eax_68 != *(eax_4 + 0x23c))
                                    char* const ecx_57 = var_2c
                                    *((edi_3 << 2) + &data_65ac24) = eax_68
                                    sub_469cf0(eax_68, &data_5bb458, ecx_57, eax_67, edi_3)
                                    eax_68 = sub_41b9a0()
                                    int32_t i_1 = 0
                                    void* ecx_58 = eax_68 + 0x20
                                    
                                    do
                                        if (*(ecx_58 - 4) == 0x3e8)
                                            eax_68 = *ecx_58
                                            
                                            if (eax_68 == *(eax_67 + 0x23c))
                                                int32_t var_70_15 = edi_3
                                                eax_68 = sub_469930(var_2c)
                                                break
                                        
                                        i_1 += 1
                                        ecx_58 += 0x2c
                                    while (i_1 s< 5)
                                    
                                    edi_3 += 1
                                
                                ebx_3 += 1
                            while (ebx_3 s< eax_66)
                            
                            if (edi_3 u> 3)
                                sub_44e4d0(eax_68, &data_5559b1, "Halt", 
                                    "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x6ed, 
                                    "GameCreateGameUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                        
                        switch (edi_3)
                            case 0
                                ebx_2 = var_2c
                            case 1
                            label_41dc83:
                                ebx_2 = var_2c
                                int32_t var_70_20 = 0xffffffff
                                sub_469930(ebx_2)
                            case 2
                            label_41dafb:
                                ebx_2 = var_2c
                                int32_t var_70_16 = 0xffffffff
                                sub_469930(ebx_2)
                            case 3
                            label_41db14:
                                ebx_2 = var_2c
                                int32_t var_70_17 = 0xffffffff
                                sub_469930(ebx_2)
                    
                    ecx_68 = var_34
                
                int32_t eax_75 = data_65ac14
                
                if ((eax_75 == 1 || eax_75 == 0) && ecx_68 != 0 && ecx_68 != 1 && *var_50_1 != 0)
                    int32_t var_70_21 = 0xffffffff
                    sub_469930(ebx_2)
                
                esi_5 = arg1
            
            result = arg2
            ebx_1 = var_34 + 1
            var_34 = ebx_1
            
            if (ebx_1 s>= result)
                break
            
            edi = var_40
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
