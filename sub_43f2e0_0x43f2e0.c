// 函数名称: sub_43f2e0
// 虚拟地址: 0x43f2e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_43f2e0(int32_t arg1, int32_t* arg2, char* arg3, char arg4, char arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5420ec
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_19c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_f8 = arg2
    char* var_ec = arg3
    void* ecx = data_65aabc
    
    if (ecx == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gClient", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* result
    
    if (*(data_5c2e30 + 4) != *(ecx + 0x648))
        result = nullptr
    else
        char* i_3 = *(arg3 + 4)
        char* i_1 = i_3
        
        if (sub_4383c0(i_3, nullptr) == 0)
            result = nullptr
        else
            void* eax_6 = sub_438240(arg3, 0)
            
            if (eax_6.b == 0)
                result = nullptr
            else
                void* ecx_4 = data_65aabc
                
                if (ecx_4 == 0)
                    sub_44e4d0(eax_6, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (*(sub_433c60(*(ecx_4 + 0x648)) + 0x30) != 0)
                    result = nullptr
                else
                    int128_t var_50
                    int128_t var_4c
                    
                    if (arg4 != 0)
                        int32_t* eax_8 = var_f8
                        int32_t var_1a0_1 = eax_8[1]
                        int32_t var_1a4_1 = *eax_8
                        void var_118
                        int64_t* eax_9 = sub_466120(&var_118)
                        int64_t var_124_1 = *eax_9
                        int32_t var_11c_1 = eax_9[1].d
                        var_4c = 0x3f800000.o
                        int128_t var_3c_1 = data_5724f8
                        int32_t* eax_11 = sub_495120(data_dfc86c, &var_50:4)
                        int32_t ecx_7 = eax_11[0x1e]
                        eax_11[0xb] = 0x3e4ccccd
                        *((data_5c2e00 << 2) + &data_5c2dc0) = ecx_7
                        data_dfcea0
                        data_5c2e00 += 1
                        sub_482460()
                    
                    int128_t var_60
                    _memset(&var_60:4, 0, 0x30)
                    int32_t* edx_2 = data_5c2e30
                    char* i_6 = i_3
                    int32_t var_34_1 = 1
                    char* result_1 = 1
                    int32_t eax_13 = *edx_2
                    int32_t var_5c_1 = eax_13
                    void* eax_14 = eax_13 - 1
                    void var_e8
                    __builtin_memcpy(&var_e8, &arg3[0x108], 0x68)
                    int32_t edx_21
                    char* edi_1
                    
                    if (eax_14 u> 8)
                        result = 2
                    else
                        switch (eax_14)
                            case nullptr
                                char* i = i_1
                                eax_14 = sub_4387e0(i)
                                
                                if (eax_14.b == 0)
                                    int32_t* edx_12 = data_5c2e30
                                    
                                    if (*edx_12 != 1)
                                        sub_44e4d0(eax_14, &data_5559b1, 
                                            "gShardsClient.yld->yieldType == CHOICE_ACTION", 
                                            "c:\ax2017\jams\shards\code\shardsclient.cpp", 0xfc3, 
                                            "IsCardInBuy")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    int32_t edi_2 = edx_12[0xd1]
                                    int32_t ecx_26 = 0
                                    
                                    if (edi_2 s<= 0)
                                    label_43f72c:
                                        int32_t edi_3 = edx_12[0xcf]
                                        int32_t ecx_27 = 0
                                        
                                        if (edi_3 s<= 0)
                                        label_43f750:
                                            int32_t edi_4 = edx_12[0xd5]
                                            int32_t ecx_28 = 0
                                            
                                            if (edi_4 s> 0)
                                                eax_14 = edx_12[0xd4]
                                                
                                                do
                                                    if (*eax_14 == i)
                                                        void* eax_44 = data_65aabc
                                                        int32_t var_58_4 = 4
                                                        
                                                        if (eax_44 == 0)
                                                            sub_44e4d0(eax_44, &data_5559b1, "gClient", 
                                                                "c:\ax2017\jams\shared\tgggame\code\gameapp."
                                                            "cpp", 
                                                                0x74, "GetClient")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_44e680()
                                                            noreturn
                                                        
                                                        char* eax_45 = var_ec
                                                        var_f8 = *(eax_44 + 0x648)
                                                        char* i_4 = *(eax_45 + 4)
                                                        i_1 = i_4
                                                        void* eax_46 = sub_444860()
                                                        uint32_t esi_3 = zx.d(i_4.w)
                                                        
                                                        if (esi_3 u>= 0xc8)
                                                            sub_44e4d0(eax_46, &data_5559b1, 
                                                                "idNoMimic < MAX_CARDS", 
                                                                "c:\ax2017\jams\shards\code\shardsgame.cpp", 
                                                                0x87, "CardGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_44e680()
                                                            noreturn
                                                        
                                                        void* eax_47 = sub_433c60(var_f8)
                                                        int32_t* var_100_1 = &data_5bcd7c
                                                        int32_t* var_fc = nullptr
                                                        int32_t edx_15 = *(eax_47 + 0x1c)
                                                            - *(*((esi_3 << 5) + eax_46 + 0x14) + 0x2c)
                                                            + *(eax_47 + 4)
                                                        sub_445070(&data_5bcd7c, &var_fc)
                                                        int32_t* ecx_41 = var_fc
                                                        
                                                        if (ecx_41 == 0xffffffff)
                                                        label_43fa6b:
                                                            data_5bcb00 = 0xffffffff
                                                        else
                                                            while (true)
                                                                if (*ecx_41 == 0
                                                                        && ecx_41[2] == data_5bcb00
                                                                        && ecx_41[3] == 0xa)
                                                                    int32_t edx_16 = ecx_41[1]
                                                                    
                                                                    if (edx_16 != i_1)
                                                                        void* eax_49 =
                                                                            sub_445bb0(eax_46, edx_16.w)
                                                                        void var_114
                                                                        
                                                                        if (*(*(eax_49 + 0x10) + 0x28) == 2 &&
                                                                                *(sub_445af0(eax_46, *(eax_49 + 4)) + 8)
                                                                                s> 0)
                                                                            if (sub_4473e0(&var_114, eax_49, 
                                                                                eax_46, 0xc, &var_114) == 0)
                                                                            label_43fa45:
                                                                                
                                                                                if (*(*(eax_49 + 0x10) + 0x2c)
                                                                                        s<= edx_15)
                                                                                    break
                                                                            else
                                                                                var_f8 = *(eax_49 + 4)
                                                                                int32_t* eax_54 =
                                                                                    sub_447380(eax_46, &var_114)
                                                                                
                                                                                if ((*eax_54 & 0x4000000) != 0 &&
                                                                                        sub_447510(eax_54, var_f8, eax_46, 0x29)
                                                                                        == 0)
                                                                                    goto label_43fa45
                                                                
                                                                sub_445070(var_100_1, &var_fc)
                                                                ecx_41 = var_fc
                                                                
                                                                if (ecx_41 == 0xffffffff)
                                                                    goto label_43fa6b
                                                        
                                                        eax_14 = sub_443fc0()
                                                        
                                                        if (eax_14 != 0)
                                                            eax_14 = sub_443fc0()
                                                            
                                                            if (*(eax_14 + 0x14) == 9)
                                                                eax_14 = sub_443df0(9)
                                                        
                                                        break
                                                    
                                                    ecx_28 += 1
                                                    eax_14 += 4
                                                while (ecx_28 s< edi_4)
                                            
                                            goto label_43fbb3
                                        
                                        eax_14 = edx_12[0xce]
                                        
                                        while (*eax_14 != i)
                                            ecx_27 += 1
                                            eax_14 += 4
                                            
                                            if (ecx_27 s>= edi_3)
                                                goto label_43f750
                                        
                                        if (sub_443fc0() == 0)
                                        label_43f87a:
                                            int32_t var_58_3 = 1
                                            result_1 = 2
                                            
                                            if (sub_443fc0() == 0)
                                                edi_1 = var_ec
                                            else
                                                void* eax_42 = sub_443fc0()
                                                edi_1 = var_ec
                                                
                                                if (*(eax_42 + 0x14) == 7
                                                        && sub_432960(edi_1, 0x27) != 0)
                                                    sub_443df0(7)
                                            
                                            eax_14 = sub_443fc0()
                                            
                                            if (eax_14 != 0)
                                                eax_14 = sub_443fc0()
                                                
                                                if (*(eax_14 + 0x14) == 0xf)
                                                    eax_14 = sub_432960(edi_1, 1)
                                                    
                                                    if (eax_14.b != 0)
                                                        eax_14 = sub_443df0(0xf)
                                            
                                            goto label_43fbb9
                                        
                                        if (*(sub_443fc0() + 0x14) == 7)
                                            goto label_43f87a
                                        
                                        if (*(sub_443fc0() + 0x14) == 0xf)
                                            goto label_43f87a
                                        
                                        result = nullptr
                                    else
                                        eax_14 = edx_12[0xd0]
                                        
                                        while (*eax_14 != i)
                                            ecx_26 += 1
                                            eax_14 += 4
                                            
                                            if (ecx_26 s>= edi_2)
                                                goto label_43f72c
                                        
                                        edi_1 = var_ec
                                        int32_t var_1a0_2 = 0
                                        sub_47b200(eax_14, "acquireCard", *(edi_1 + 0x530), ecx_26.b)
                                        void* eax_33 = sub_434410(i)
                                        
                                        if (eax_33.b == 0)
                                            int32_t var_58_2 = 2
                                            eax_14 = sub_443fc0()
                                            
                                            if (eax_14 != 0)
                                                eax_14 = sub_443fc0()
                                                
                                                if (*(eax_14 + 0x14) == 4)
                                                    arg4 = 0
                                                    eax_14 = sub_443df0(4)
                                            
                                            goto label_43fbb9
                                        
                                        void* edi_5 = data_65aabc
                                        
                                        if (edi_5 == 0)
                                            sub_44e4d0(eax_33, &data_5559b1, "gClient", 
                                                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
                                                "GetClient")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        
                                        int32_t edi_6 = *(edi_5 + 0x648)
                                        int32_t eax_34 = sub_4388e0(edi_6, 5)
                                        char* eax_35 = var_ec
                                        *(eax_35 + 0x508) = *(eax_35 + 0x518)
                                        void* eax_36 = sub_433c60(edi_6)
                                        *(eax_36 + 0x30) = i_1
                                        char* ecx_34 = var_ec
                                        int32_t eax_37 = *(ecx_34 + 0x10)
                                        *(ecx_34 + 0xc) = 5
                                        *(ecx_34 + 8) = edi_6
                                        *(ecx_34 + 0x52c) = eax_37
                                        *(ecx_34 + 0x10) = eax_34
                                        sub_43ee60(eax_37, 5, edi_6, 7, 0)
                                        result = 1
                                else
                                    edi_1 = var_ec
                                    uint32_t eax_16 = zx.d((*(edi_1 + 4)).w)
                                    
                                    if (eax_16 u>= 0xc8)
                                        sub_44e4d0(eax_16, &data_5559b1, "idNoMimic < MAX_CARDS", 
                                            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, 
                                            "CardGet")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    int32_t eax_19
                                    
                                    if (**((eax_16 << 5) + data_5c2e2c + 0x14) == 0xf)
                                        eax_19 = sub_4388e0(*(data_5c2e30 + 4), 6)
                                    
                                    if (**((eax_16 << 5) + data_5c2e2c + 0x14) != 0xf || eax_19 != 0)
                                        int32_t var_58_1 = 0
                                        data_5bcd68 = 0
                                        
                                        if (sub_443fc0() != 0 && *(sub_443fc0() + 0x14) == 3
                                                && *(data_5c2e30 + 0x334) == 1)
                                            sub_443df0(3)
                                        
                                        if (sub_443fc0() != 0 && *(sub_443fc0() + 0x14) == 0xd
                                                && *(data_5c2e30 + 0x334) == 4)
                                            sub_443df0(0xd)
                                        
                                        eax_14 = sub_443fc0()
                                        
                                        if (eax_14 != 0)
                                            eax_14 = sub_443fc0()
                                            
                                            if (*(eax_14 + 0x14) == 0x10)
                                                eax_14 = sub_443df0(0x10)
                                        
                                        goto label_43fbb9
                                    
                                    data_5c2e34 = i
                                    sub_44f240(&var_f8, &data_5559b1)
                                    int32_t var_14_1 = 0
                                    sub_44f240(&var_ec, "Play Ojas")
                                    var_14_1.b = 1
                                    sub_44f240(&i_1, 
                                        "There are no cards to copy. Are you sure you want to play Ojas, "
                                    "Genesis Druid")
                                    var_14_1.b = 2
                                    sub_44f240(&result_1, "CONFIRM")
                                    var_14_1.b = 3
                                    sub_428fd0(&var_ec, &i_1, &result_1, 0x3e8, &var_ec, &var_f8, 
                                        j_sub_43f230, 0)
                                    var_14_1.b = 4
                                    
                                    if (data_cdf414 != 0)
                                        char* result_3 = result_1
                                        
                                        if (result_3 != 0 && *result_3 != 0)
                                            char* eax_21 = sub_44f000(&result_1)
                                            int32_t temp0_1 = *(eax_21 + 4)
                                            *(eax_21 + 4) -= 1
                                            
                                            if (temp0_1 == 1)
                                                sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                                    
                                    var_14_1.b = 5
                                    
                                    if (data_cdf414 != 0)
                                        char* i_2 = i_1
                                        
                                        if (i_2 != 0 && *i_2 != 0)
                                            char* eax_22 = sub_44f000(&i_1)
                                            int32_t temp1_1 = *(eax_22 + 4)
                                            *(eax_22 + 4) -= 1
                                            
                                            if (temp1_1 == 1)
                                                sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                                    
                                    var_14_1.b = 6
                                    
                                    if (data_cdf414 != 0)
                                        char* eax_23 = var_ec
                                        
                                        if (eax_23 != 0 && *eax_23 != 0)
                                            char* eax_24 = sub_44f000(&var_ec)
                                            int32_t temp2_1 = *(eax_24 + 4)
                                            *(eax_24 + 4) -= 1
                                            
                                            if (temp2_1 == 1)
                                                sub_45d050(eax_24, *(eax_24 + 0xc) + 0x10)
                                    
                                    int32_t var_14_2 = 7
                                    
                                    if (data_cdf414 != 0)
                                        int32_t* eax_25 = var_f8
                                        
                                        if (eax_25 != 0 && *eax_25 != 0)
                                            char* eax_26 = sub_44f000(&var_f8)
                                            int32_t temp3_1 = *(eax_26 + 4)
                                            *(eax_26 + 4) -= 1
                                            
                                            if (temp3_1 == 1)
                                                sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
                                    
                                    result = 2
                            case 1
                                edx_21 = edx_2[0xcb]
                                
                                if (edx_21 != 1)
                                    sub_43f170(i_1, edx_21)
                                    result = 2
                                else
                                    char* i_5 = i_1
                                    char eax_57 = sub_4387e0(i_5)
                                    int32_t eax_58
                                    
                                    if (eax_57 != 0)
                                        eax_58 = sub_42bf40()
                                    
                                    if (eax_57 == 0 || eax_58 != 2 || arg5 != 0)
                                        if (sub_443fc0() == 0)
                                            edi_1 = var_ec
                                        else
                                            void* eax_60 = sub_443fc0()
                                            edi_1 = var_ec
                                            
                                            if (*(eax_60 + 0x14) == 0x12 && sub_432960(edi_1, 6) != 0)
                                                sub_443df0(0x12)
                                        
                                        eax_14 = sub_443fc0()
                                        
                                        if (eax_14 != 0)
                                            eax_14 = sub_443fc0()
                                            
                                            if (*(eax_14 + 0x14) == 0x13)
                                                eax_14 = sub_432960(edi_1, 5)
                                                
                                                if (eax_14.b != 0)
                                                    eax_14 = sub_443df0(0x13)
                                        
                                        int32_t var_58_5 = 8
                                        data_5bcaf0 = 0
                                        goto label_43fbb9
                                    
                                    sub_43f170(i_5, *(data_5c2e30 + 0x32c))
                                    result = 2
                            case 2
                                int32_t var_58_6 = 6
                            label_43fbb3:
                                edi_1 = var_ec
                            label_43fbb9:
                                void* esi_6 = data_65aabc
                                
                                if (esi_6 == 0)
                                    sub_44e4d0(eax_14, &data_5559b1, "gClient", 
                                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
                                        "GetClient")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                int32_t esi_7 = *(esi_6 + 0x648)
                                void* eax_62 = sub_41ad20()
                                int32_t edx_25 = sub_436b50(eax_62, esi_7, eax_62, &var_60:4)
                                
                                if (arg4 == 0)
                                    result = result_1
                                else
                                    void var_190
                                    int128_t* eax_64 = sub_434630(&var_190, edx_25, edi_1, &var_190)
                                    int128_t var_80 = *eax_64
                                    int128_t var_70_1 = eax_64[1]
                                    var_60 = eax_64[2]
                                    var_50 = eax_64[3]
                                    int32_t var_30_1 = eax_64[5].d
                                    var_4c = eax_64[4]
                                    int32_t eax_66 = sub_432600(&edi_1[0xa0], &var_80)
                                    char* result_2 = result_1
                                    
                                    if (result_2 != 2)
                                        result = result_2
                                    else
                                        void var_e4
                                        sub_432710(eax_66, &var_e4, &edi_1[0xa0], 6, 0)
                                        result = result_2
                            case 3
                            label_43fb7f:
                                int32_t var_58_7 = 9
                                result_1 = 2
                                goto label_43fbb3
                            case 4
                                edx_21 = edx_2[0xcb]
                                
                                if (edx_21 == 1)
                                    goto label_43fb7f
                                
                                sub_43f170(i_1, edx_21)
                                result = 2
                            case 5
                                int32_t var_58_8 = 0xb
                                data_5bcb00 = 0xffffffff
                                goto label_43fbb3
                            case 6
                                result = 2
                            case 7
                                int32_t var_58_9 = 0xc
                                data_5bcaf0 = 0
                                goto label_43fbb3
                            case 8
                                sub_43f170(i_1, edx_2[0xcb])
                                result = 2
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
