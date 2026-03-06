// 函数名称: sub_44d500
// 虚拟地址: 0x44d500
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_44d500(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542208
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = data_65aabc
    
    if (eax_3 == 0)
        sub_44e4d0(eax_3, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t ebx = arg1
    int32_t var_28
    char* const var_18
    
    if (*(eax_3 + 0x434) != 0)
        void* eax_4 = sub_41ad20()
        int32_t var_48_1 = data_5c63a4
        char** eax_5 = sub_44f980(&var_18, "Round: %d")
        int32_t var_8_1 = 0
        sub_469cf0(eax_5, &data_5c66f8, arg1, eax_5, 0xffffffff)
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            char* eax_6 = var_18
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(&var_18)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_18 = &data_5559b1
        
        int32_t i = 0
        int32_t var_8_3 = 0xffffffff
        
        if (*(eax_4 + 0xec) s> 0)
            do
                void* eax_8 = sub_41af80(eax_4 + 8, i)
                int32_t* var_48_2 = &var_28
                sub_4167e0(&var_28, eax_4 + 8, &var_18, eax_8)
                int32_t var_8_4 = 2
                
                if (data_cdf414 != 0)
                    char* const eax_10 = var_18
                    
                    if (eax_10 != 0 && *eax_10 != 0)
                        char* eax_11 = sub_44f000(&var_18)
                        int32_t temp1_1 = *(eax_11 + 4)
                        *(eax_11 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                            var_18 = &data_5559b1
                
                int32_t var_8_5 = 0xffffffff
                void* eax_12 = sub_441db0(var_28)
                int32_t ecx_9 = data_5c2e2c
                *((i << 2) + &data_e4767c) = eax_12
                
                if (ecx_9 == 0)
                    sub_44e4d0(eax_12, &data_5559b1, "gShardsClient.g", 
                        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x26fe, "ShGameGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                i += 1
                *((*(eax_8 + 0x1c) << 2) + &data_e47668) = sub_437300(ecx_9, *(eax_8 + 0x1c)) - 1
            while (i s< *(eax_4 + 0xec))
        
        ebx = arg1
    
    if (data_5c63a4 s>= data_5bcae8)
        int32_t var_48_3 = 0xffffffff
        sub_469930(ebx)
    
    if (data_5c63a4 == 1)
        int32_t var_48_4 = 0xffffffff
        sub_469930(ebx)
    
    void* eax_17 = data_65ac30
    int32_t esi_1 = 0
    int32_t var_20 = 0
    int32_t var_24_2 = 0
    var_28 = 0xffffffff
    char var_11 = 0
    
    if (eax_17 == 0)
        sub_44e4d0(eax_17, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax_17 + 0x24) == 1)
        int32_t var_48_5 = 0xffffffff
        sub_469930(ebx)
    
    int32_t* var_30 = nullptr
    void* eax_18 = sub_44de40(&data_5c6384, &var_30)
    int32_t* edi_2 = var_30
    
    if (edi_2 != 0xffffffff)
        while (true)
            int32_t ecx_15 = var_24_2 + 1
            var_24_2 = ecx_15
            
            if (ecx_15 s>= data_5c6394 - 0x5f5e100)
                if (*edi_2 != 0)
                label_44d74d:
                    
                    if (data_5c63a4 - 1 == edi_2[0xb])
                        int32_t eax_24 = var_20
                        var_20 += 1
                        int32_t ecx_18 = ebx
                        int32_t eax_25 = sub_47a240(eax_24)
                        
                        if (eax_25 != 0)
                            if (var_28 != edi_2[0xc])
                                if (esi_1 != 0)
                                    int32_t var_48_9 = 0xffffffff
                                    ecx_18 = sub_469930(esi_1)
                                
                                var_11 = 0
                            else
                                if (esi_1 != 0 && var_11 == 0)
                                    int32_t var_48_8 = 0xffffffff
                                    ecx_18 = sub_469930(esi_1)
                                
                                var_11 = 1
                            
                            var_28 = edi_2[0xc]
                            int32_t eax_28 = *edi_2
                            
                            if (eax_28 u> 6)
                                sub_44e4d0(eax_28, &data_5559b1, "Halt", 
                                    "c:\ax2017\jams\shards\code\shardslog.cpp", 0x281, "ShLogUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            int32_t var_8_10
                            
                            switch (eax_28)
                                case 0
                                    int32_t eax_29 = edi_2[5]
                                    
                                    if (eax_29 u> 7)
                                        sub_44e4d0(eax_29, &data_5559b1, "Halt", 
                                            "c:\ax2017\jams\shards\code\shardslog.cpp", 0x252, 
                                            "ShLogUpdate")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    switch (eax_29)
                                        case 0
                                            sub_44e4d0(eax_29, &data_5559b1, "Halt", 
                                                "c:\ax2017\jams\shards\code\shardslog.cpp", 0x205, 
                                                "ShLogUpdate")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        case 1
                                            sub_44e4d0(eax_29, &data_5559b1, "Halt", 
                                                "c:\ax2017\jams\shards\code\shardslog.cpp", 0x21e, 
                                                "ShLogUpdate")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        case 2
                                            sub_44e4d0(eax_29, &data_5559b1, "Halt", 
                                                "c:\ax2017\jams\shards\code\shardslog.cpp", 0x222, 
                                                "ShLogUpdate")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        case 3
                                            int32_t var_48_10 = 0xffffffff
                                            sub_469930(eax_25)
                                            
                                            if (*((edi_2[0xa] << 2) + &data_e4767c) != 0)
                                                int32_t var_48_11 = 0xffffffff
                                                sub_469930(eax_25)
                                            
                                            int32_t var_48_12 = 0xffffffff
                                            sub_469930(eax_25)
                                            sub_44f240(&var_18, "-2")
                                            int32_t var_8_6 = 3
                                            sub_469cf0(&var_18, &data_5c661c, eax_25, &var_18, 
                                                0xffffffff)
                                            int32_t var_8_7 = 4
                                            
                                            if (data_cdf414 != 0)
                                                char* const eax_32 = var_18
                                                
                                                if (eax_32 != 0 && *eax_32 != 0)
                                                    char* eax_33 = sub_44f000(&var_18)
                                                    int32_t temp3_1 = *(eax_33 + 4)
                                                    *(eax_33 + 4) -= 1
                                                    
                                                    if (temp3_1 == 1)
                                                        sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
                                                        var_18 = &data_5559b1
                                            
                                            var_8_10 = 0xffffffff
                                            goto label_44da30
                                        case 6
                                            int32_t var_48_13 = 0xffffffff
                                            sub_44d460(ecx_18, edi_2[8])
                                            sub_469930(eax_25)
                                            int32_t var_4c_2 = 0xffffffff
                                            sub_469930(eax_25)
                                            goto label_44da30
                                        case 7
                                            int32_t var_48_14 = 0xffffffff
                                            sub_44d460(sub_469930(eax_25), edi_2[8])
                                            int32_t var_4c_3 = 0xffffffff
                                            sub_469930(eax_25)
                                            goto label_44da30
                                case 1
                                    sub_44d460(ecx_18, edi_2[1])
                                label_44d918:
                                    int32_t var_48_15 = 0xffffffff
                                    sub_469930(eax_25)
                                    int32_t var_4c_4 = 0xffffffff
                                    sub_469930(eax_25)
                                label_44da30:
                                    
                                    if (data_e48da8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                        __Init_thread_header(&data_e48da8)
                                        
                                        if (data_e48da8 == 0xffffffff)
                                            int32_t eax_43 = data_cdf41c
                                            data_e48db4 = eax_43
                                            data_e48db0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                            data_e48dc0 = "colorPlayer0"
                                            data_e48dbc = data_cdf418
                                            data_e48ddc = eax_43 + 2
                                            data_e48df0 = eax_43 + 3
                                            data_e48dc4 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                            data_e48dd4 = "colorPlayer1"
                                            data_e48dc8 = eax_43 + 1
                                            data_e48dd0 = &data_e48db0
                                            data_e48dd8 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                            data_e48de8 = "colorPlayer2"
                                            data_e48de4 = &data_e48dc4
                                            data_e48dec = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                            data_e48dfc = "colorPlayer3"
                                            data_cdf41c = eax_43 + 4
                                            data_e48df8 = &data_e48dd8
                                            data_cdf418 = &data_e48dec
                                            __Init_thread_footer(&data_e48da8)
                                    
                                    int32_t var_48_19 = eax_24
                                    sub_469930(arg1)
                                    esi_1 = eax_25
                                case 2
                                    sub_44d460(ecx_18, edi_2[1])
                                    goto label_44d918
                                case 3
                                    sub_44d460(ecx_18, edi_2[1])
                                    goto label_44d918
                                case 4
                                    sub_44d460(ecx_18, edi_2[1])
                                    goto label_44d918
                                case 5
                                    sub_44d460(ecx_18, edi_2[1])
                                    goto label_44d918
                                case 6
                                    int32_t var_48_16 = 0xffffffff
                                    sub_469930(eax_25)
                                    
                                    if (*((edi_2[2] << 2) + &data_e4767c) != 0)
                                        int32_t var_48_17 = 0xffffffff
                                        sub_469930(eax_25)
                                    
                                    int32_t var_48_18 = 0xffffffff
                                    sub_469930(eax_25)
                                    int32_t var_4c_5 = edi_2[3]
                                    char* const var_1c
                                    sub_44f980(&var_1c, &data_5828f8)
                                    int32_t var_8_8 = 5
                                    sub_469cf0(&var_1c, &data_5c661c, eax_25, &var_1c, 0xffffffff)
                                    int32_t var_8_9 = 6
                                    
                                    if (data_cdf414 != 0)
                                        char* eax_39 = var_1c
                                        
                                        if (eax_39 != 0 && *eax_39 != 0)
                                            char* eax_40 = sub_44f000(&var_1c)
                                            int32_t temp2_1 = *(eax_40 + 4)
                                            *(eax_40 + 4) -= 1
                                            
                                            if (temp2_1 == 1)
                                                sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
                                                var_1c = &data_5559b1
                                    
                                    var_8_10 = 0xffffffff
                                    goto label_44da30
                else
                    int32_t eax_21 = edi_2[5]
                    
                    if (eax_21 != 1 && eax_21 != 2)
                        goto label_44d74d
            
            eax_18 = sub_44de40(&data_5c6384, &var_30)
            edi_2 = var_30
            
            if (edi_2 == 0xffffffff)
                break
            
            ebx = arg1
        
        if (esi_1 != 0)
            if (var_11 != 0)
                uint32_t eax_51 = zx.d(esi_1.w)
                void* ecx_49
                
                if (eax_51 u< data_5c99a4)
                    ecx_49 = eax_51 * 0x1008 + data_5c99a0
                
                if (eax_51 u>= data_5c99a4 || *(ecx_49 + 0x1004) != esi_1)
                    sub_44e4d0(eax_51, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                eax_18 = sub_469800(eax_51, &data_5c66bc, ecx_49, 0x3f800000, 0xffffffff)
            else
                int32_t var_48_21 = 0xffffffff
                data_5c63ac
                eax_18 = sub_469930(esi_1)
    
    void* result = sub_469bf0(eax_18, &data_5c65e0, arg1, var_20, 0xffffffff)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
