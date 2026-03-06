// 函数名称: sub_43cbd0
// 虚拟地址: 0x43cbd0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_43cbd0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5420a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = sub_443fc0()
    
    if (esi != 0)
        int32_t ecx_1 = *(esi + 0x18)
        
        if (ecx_1 == 0 || ecx_1 == 0x17 || ecx_1 == 0x18 || ecx_1 == 0x15 || ecx_1 == 0x16 || ecx_1 == 1
                || ecx_1 == 2 || ecx_1 == 3)
            int32_t var_40_1 = 0xffffffff
            sub_469930(arg1)
        
        int32_t var_40_2 = 0xffffffff
        sub_469930(arg1)
        int32_t var_44_1 = 0xffffffff
        sub_469930(arg1)
    
    int32_t var_40_3 = 0xffffffff
    sub_469930(arg1)
    sub_472550(arg1, sub_43a370)
    int32_t eax_4 = sub_4153c0()
    
    if (eax_4 != 0 && eax_4 != 1 && eax_4 != 2)
        sub_44e4d0(eax_4, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x1789, 
            "GameSpecific_MainLayoutUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_40_4 = 0xffffffff
    int32_t eax_5 = sub_469930(arg1)
    int32_t ecx_12 = data_5bcaec
    int32_t eax_7
    
    if (ecx_12 == 0)
    label_43cd0d:
        int32_t var_40_5 = 0xffffffff
        sub_469930(arg1)
        eax_7 = data_e47328
    else
        uint32_t edx_8 = zx.d(ecx_12.w)
        
        if (edx_8 u< data_5bcd80)
            esi = data_5bcd7c
            eax_5 = edx_8 * 0x568
        
        if (edx_8 u>= data_5bcd80 || *(eax_5 + esi + 0x564) != ecx_12)
            sub_44e4d0(eax_5, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct ShGfx>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_6 = edx_8 * 0x568
        
        if (*(eax_6 + esi + 0x16) == 0)
            if (*(eax_6 + esi + 0x15) == 0)
                goto label_43cd0d
            
            eax_7 = 1
            data_e47328 = 1
        else
            eax_7 = 0
            data_e47328 = 0
    
    if (eax_7 != 0 && eax_7 != 1)
        sub_44e4d0(eax_7 - 1, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 
            0x16dc, "ZoomDescUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_40_6 = 0xffffffff
    sub_469930(arg1)
    sub_43c5d0(arg1)
    sub_43c7d0(arg1)
    int32_t eax_10
    int32_t edi_1
    eax_10, edi_1 = sub_43c420(arg1, esi)
    void* ecx_18 = data_65aabc
    
    if (ecx_18 == 0)
        sub_44e4d0(eax_10, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (sub_4388e0(*(ecx_18 + 0x648), 5) != 0)
        int32_t var_40_7 = 0xffffffff
        sub_469930(edi_1)
    
    int32_t ecx_21 = data_5bcd70
    char* const var_14
    int32_t eax_18
    
    if (ecx_21 == 0xffffffff)
        int32_t var_40_12 = 0xffffffff
        sub_469930(edi_1)
        int32_t var_44_2 = 0xffffffff
        eax_18 = sub_469930(edi_1)
    else
        int32_t* eax_12 = sub_433c60(ecx_21)
        int32_t ecx_22 = eax_12[1]
        int32_t esi_1 = *eax_12
        
        if (ecx_22 != 0)
            int32_t var_40_9 = ecx_22
            sub_44f980(&var_14, &data_5828f8)
            int32_t var_8_3 = 2
            sub_469cf0(&var_14, &data_5c32f4, edi_1, &var_14, 0xffffffff)
            int32_t var_8_4 = 3
        else
            int32_t var_40_8 = 0xffffffff
            sub_469930(edi_1)
            sub_44f240(&var_14, &data_5559b1)
            int32_t var_8_1 = 0
            sub_469cf0(&var_14, &data_5c32f4, edi_1, &var_14, 0xffffffff)
            int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            char* eax_15 = var_14
            
            if (eax_15 != 0 && *eax_15 != 0)
                char* eax_16 = sub_44f000(&var_14)
                int32_t temp5_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_5 = 0xffffffff
        
        if (esi_1 != 0)
            int32_t var_40_11 = esi_1
            sub_44f980(&var_14, &data_5828f8)
            int32_t var_8_8 = 6
            eax_18 = sub_469cf0(&var_14, &data_5c3308, edi_1, &var_14, 0xffffffff)
            int32_t var_8_9 = 7
        else
            int32_t var_40_10 = 0xffffffff
            sub_469930(edi_1)
            sub_44f240(&var_14, &data_5559b1)
            int32_t var_8_6 = 4
            eax_18 = sub_469cf0(&var_14, &data_5c3308, edi_1, &var_14, 0xffffffff)
            int32_t var_8_7 = 5
        
        if (data_cdf414 != 0)
            eax_18 = var_14
            
            if (eax_18 != 0 && *eax_18 != 0)
                eax_18 = sub_44f000(&var_14)
                int32_t temp6_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp6_1 == 1)
                    eax_18 = sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_10 = 0xffffffff
    
    void* ecx_37 = data_65aabc
    
    if (ecx_37 == 0)
        sub_44e4d0(eax_18, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_20 = sub_4388e0(*(ecx_37 + 0x648), 7)
    int32_t eax_21
    
    if (eax_20 s>= 1)
        void* ecx_39 = data_65aabc
        
        if (ecx_39 == 0)
            sub_44e4d0(eax_20, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        eax_21 = sub_4388e0(*(ecx_39 + 0x648), 7)
    else
        eax_21 = 1
    
    sub_469bf0(eax_21, &data_5c377c, edi_1, eax_21, 0xffffffff)
    int32_t eax_23
    
    if (sub_438880() s>= 1)
        eax_23 = sub_438880()
    else
        eax_23 = 1
    
    void* eax_24 = sub_469bf0(eax_23, &data_5c3790, edi_1, eax_23, 0xffffffff)
    void* ecx_43 = data_65aabc
    
    if (ecx_43 == 0)
        sub_44e4d0(eax_24, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_25 = sub_433c60(*(ecx_43 + 0x648))
    int32_t ecx_45 = *(eax_25 + 8)
    int32_t eax_26 = *(eax_25 + 0x10)
    int32_t* i_4 = *(eax_25 + 0xc)
    void* ecx_47 = data_65aabc
    
    if (ecx_47 == 0)
        sub_44e4d0(eax_26, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_27 = sub_4388e0(*(ecx_47 + 0x648), 0xa)
    
    if (data_5bccbc == 0 && eax_27 u<= 3)
        switch (eax_27)
            case 0, 1
                int32_t var_40_13 = 0xffffffff
                sub_469930(edi_1)
            case 2
                int32_t var_40_14 = 0xffffffff
                sub_469930(edi_1)
            case 3
                int32_t var_40_15 = 0xffffffff
                sub_469930(edi_1)
    else
        int32_t var_40_16 = 0xffffffff
        sub_469930(edi_1)
        int32_t eax_28 = eax_27
        
        if (eax_27 s< 1)
            eax_28 = 1
        
        sub_469bf0(eax_28, &data_5c3768, edi_1, eax_28, 0xffffffff)
    
    int32_t eax_29 = 0
    
    if (eax_27 - 1 s>= 0)
        eax_29 = eax_27 - 1
    
    int32_t var_40_17 = eax_29
    sub_44f980(&var_14, &data_5828f8)
    int32_t var_8_11 = 8
    sub_469cf0(&var_14, &data_5c32e0, edi_1, &var_14, 0xffffffff)
    int32_t var_8_12 = 9
    
    if (data_cdf414 != 0)
        char* const eax_31 = var_14
        
        if (eax_31 != 0 && *eax_31 != 0)
            char* eax_32 = sub_44f000(&var_14)
            int32_t temp7_1 = *(eax_32 + 4)
            *(eax_32 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_40_18 = ecx_45
    int32_t var_8_13 = 0xffffffff
    sub_44f980(&var_14, &data_5828f8)
    int32_t var_8_14 = 0xa
    sub_469cf0(&var_14, &data_5c331c, edi_1, &var_14, 0xffffffff)
    int32_t var_8_15 = 0xb
    
    if (data_cdf414 != 0)
        char* const eax_34 = var_14
        
        if (eax_34 != 0 && *eax_34 != 0)
            char* eax_35 = sub_44f000(&var_14)
            int32_t temp8_1 = *(eax_35 + 4)
            *(eax_35 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_16 = 0xffffffff
    
    if (eax_26 == 0)
        int32_t var_40_19 = 0xffffffff
        sub_469930(edi_1)
    
    int32_t var_40_20 = eax_26
    sub_44f980(&var_14, &data_5828f8)
    int32_t var_8_17 = 0xc
    sub_469cf0(&var_14, &data_5c3344, edi_1, &var_14, 0xffffffff)
    int32_t var_8_18 = 0xd
    
    if (data_cdf414 != 0)
        char* const eax_37 = var_14
        
        if (eax_37 != 0 && *eax_37 != 0)
            char* eax_38 = sub_44f000(&var_14)
            int32_t temp9_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_19 = 0xffffffff
    int32_t* i_5 = i_4
    sub_44f980(&var_14, &data_5828f8)
    int32_t var_8_20 = 0xe
    sub_469cf0(&var_14, &data_5c3330, edi_1, &var_14, 0xffffffff)
    int32_t var_8_21 = 0xf
    
    if (data_cdf414 != 0)
        char* const eax_40 = var_14
        
        if (eax_40 != 0 && *eax_40 != 0)
            char* eax_41 = sub_44f000(&var_14)
            int32_t temp10_1 = *(eax_41 + 4)
            *(eax_41 + 4) -= 1
            
            if (temp10_1 == 1)
                sub_45d050(eax_41, *(eax_41 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_22 = 0xffffffff
    char* const eax_42 = sub_47a160(edi_1, "img_playerAvatar")
    
    if (eax_42 != 0)
        void* eax_43 = sub_41ad20()
        void* edx_35 = data_65aabc
        
        if (edx_35 == 0)
            sub_44e4d0(eax_43, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* eax_44 = sub_41af80(eax_43 + 8, *(edx_35 + 0x648))
        int32_t* var_40_21 = &i_4
        sub_4167e0(eax_44, eax_43 + 8, &var_14, eax_44)
        int32_t var_8_23 = 0x10
        sub_441db0(i_4)
        int32_t var_48_10 = 0xffffffff
        eax_42 = sub_469930(eax_42)
        int32_t var_8_24 = 0x11
        
        if (data_cdf414 != 0)
            eax_42 = var_14
            
            if (eax_42 != 0 && *eax_42 != 0)
                eax_42 = sub_44f000(&var_14)
                int32_t temp11_1 = *(eax_42 + 4)
                *(eax_42 + 4) -= 1
                
                if (temp11_1 == 1)
                    eax_42 = sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_25 = 0xffffffff
    
    void* ecx_75 = data_65aabc
    
    if (ecx_75 == 0)
        sub_44e4d0(eax_42, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_46 = sub_4388e0(*(ecx_75 + 0x648), 8)
    void* ecx_77 = data_65aabc
    
    if (ecx_77 == 0)
        sub_44e4d0(eax_46, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_40_22 = eax_46
    i_4 = sub_438990(*(ecx_77 + 0x648))
    sub_44f980(&var_14, &data_5828f8)
    int32_t var_8_26 = 0x12
    sub_469cf0(&var_14, &data_5c336c, edi_1, &var_14, 0xffffffff)
    int32_t var_8_27 = 0x13
    
    if (data_cdf414 != 0)
        char* const eax_49 = var_14
        
        if (eax_49 != 0 && *eax_49 != 0)
            char* eax_50 = sub_44f000(&var_14)
            int32_t temp12_1 = *(eax_50 + 4)
            *(eax_50 + 4) -= 1
            
            if (temp12_1 == 1)
                sub_45d050(eax_50, *(eax_50 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_28 = 0xffffffff
    int32_t* i_6 = i_4
    sub_44f980(&var_14, &data_5828f8)
    int32_t var_8_29 = 0x14
    sub_469cf0(&var_14, &data_5c3380, edi_1, &var_14, 0xffffffff)
    int32_t var_8_30 = 0x15
    
    if (data_cdf414 != 0)
        char* const eax_52 = var_14
        
        if (eax_52 != 0 && *eax_52 != 0)
            char* eax_53 = sub_44f000(&var_14)
            int32_t temp13_1 = *(eax_53 + 4)
            *(eax_53 + 4) -= 1
            
            if (temp13_1 == 1)
                sub_45d050(eax_53, *(eax_53 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_31 = 0xffffffff
    
    if (*(eax_25 + 0x30) != 0)
        int32_t var_40_23 = 0xffffffff
        sub_469930(edi_1)
    
    int32_t* i_7 = *fsbase->ThreadLocalStoragePointer
    int32_t eax_55 = data_e48578
    i_4 = i_7
    
    if (eax_55 s> i_7[1])
        eax_55 = __Init_thread_header(&data_e48578)
        
        if (data_e48578 == 0xffffffff)
            int32_t eax_56 = data_cdf41c
            data_e48580 = eax_56
            data_cdf41c = eax_56 + 1
            int32_t eax_58 = data_cdf418
            data_e4858c = "num_buffs"
            data_e48588 = eax_58
            data_cdf418 = &data_e4857c
            data_e4857c = &UI2StateDeclInt::`vftable'{for `UI2StateDecl'}
            eax_55 = __Init_thread_footer(&data_e48578)
    
    sub_469bf0(eax_55, &data_e4857c, edi_1, *(eax_25 + 0x34), 0xffffffff)
    int32_t i = 0
    
    if (*(eax_25 + 0x34) s> 0)
        var_14 = eax_25 + 0x38
        
        do
            if (data_e48590 s> i_4[1])
                __Init_thread_header(&data_e48590)
                
                if (data_e48590 == 0xffffffff)
                    int32_t eax_62 = data_cdf41c
                    data_e4859c = eax_62
                    data_e48598 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_e485a8 = "buff_shield"
                    data_e485a4 = data_cdf418
                    data_e485c4 = eax_62 + 2
                    data_e485d8 = eax_62 + 3
                    data_e485ec = eax_62 + 4
                    data_e485ac = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_e485bc = "buff_decurion"
                    data_e485b0 = eax_62 + 1
                    data_e485b8 = &data_e48598
                    data_e485c0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_e485d0 = "buff_numeri"
                    data_e485cc = &data_e485ac
                    data_e485d4 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_e485e4 = "buff_unify"
                    data_e485e0 = &data_e485c0
                    data_e485e8 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_e485f8 = "buff_dominion"
                    data_cdf41c = eax_62 + 5
                    data_e485f4 = &data_e485d4
                    data_cdf418 = &data_e485e8
                    __Init_thread_footer(&data_e48590)
            
            int32_t i_3 = i
            sub_469930(edi_1)
            i += 1
            var_14 = &var_14[4]
        while (i s< *(eax_25 + 0x34))
    
    int32_t eax_72 = sub_438bc0(&i_4)
    void* ecx_91 = data_65aabc
    
    if (ecx_91 == 0)
        sub_44e4d0(eax_72, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_73 = *(ecx_91 + 0x434)
    bool cond:2_1
    
    if (eax_73 == 1)
        if (eax_72 != 0xa && eax_72 != 0xb)
            cond:2_1 = eax_72 == 0xc
            goto label_43d668
    else if (eax_73 == 2)
        cond:2_1 = *(data_5c2e30 + 4) == *(ecx_91 + 0x648)
    label_43d668:
        int32_t var_28
        
        if (not(cond:2_1) && sub_4222f0(&var_28) != 0)
            int32_t var_40_24 = 0xffffffff
            sub_469930(edi_1)
            
            if (var_28 == 1)
                int32_t var_40_25 = 0xffffffff
                sub_469930(edi_1)
    
    if (eax_72 == 0)
        int32_t var_40_26 = 0xffffffff
        sub_469930(edi_1)
    
    if (i_4 - 1 u> 0xb)
        sub_44e4d0(i_4 - 1, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 
            0x184c, "GameSpecific_MainLayoutUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    switch (i_4)
        case 7
            int32_t var_40_27 = 0xffffffff
            sub_469930(edi_1)
            int32_t var_44_7 = 0xffffffff
            sub_469930(edi_1)
        case 9
            int32_t var_40_28 = 0xffffffff
            sub_469930(edi_1)
    
    int32_t esi_8 = data_5bcaf4
    int32_t eax_82
    
    if (data_5bcaf0 == 1)
        eax_82 = sub_4388e0(esi_8, 9)
        sub_469bf0(eax_82, &data_5c345c, edi_1, eax_82, 0xffffffff)
    else
        int32_t ecx_100
        
        if (data_5bb1e4.d != 0x1e)
            ecx_100 = 0
            
            if (data_5bb1f0.d == 0x1e)
                ecx_100 = data_5bb1f0:4
        else
            ecx_100 = data_5bb1e4:4
        
        int32_t eax_80 = sub_47a160(ecx_100, "grpDiscard")
        
        if (eax_80 != 0 && sub_47b570(eax_80) != 0)
            eax_82 = sub_4388e0(esi_8, 9)
            sub_469bf0(eax_82, &data_5c345c, edi_1, eax_82, 0xffffffff)
    
    if (data_5bcaf0 == 1)
        int32_t var_40_29 = 0xffffffff
        sub_469930(edi_1)
        void* eax_83 = data_65aabc
        
        if (eax_83 == 0)
            sub_44e4d0(eax_83, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (esi_8 == *(eax_83 + 0x648))
            int32_t var_40_30 = 0xffffffff
            sub_469930(edi_1)
    
    void* eax_84 = data_65ac30
    char* esi_9 = data_5bcafc
    var_14 = esi_9
    
    if (eax_84 == 0)
        sub_44e4d0(eax_84, &data_5559b1, "gGameSettings.localSettings", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (data_5bcaf8 == 1)
    label_43d84a:
        void* esi_10 = data_5c2e98
        i_4 = nullptr
        *(esi_10 + 0x400) = 0
        *(esi_10 + 0x608) = data_571cf8
        int32_t ecx_108 = sub_445070(&data_5bcd7c, &i_4)
        int32_t* i_1
        
        for (i_1 = i_4; i_1 != 0xffffffff; i_1 = i_4)
            int32_t eax_89
            int32_t ecx_113
            void* j
            
            if (*(eax_84 + 0x28) != 1)
                void* edx_69 = data_65aabc
                
                if (edx_69 == 0)
                    sub_44e4d0(i_1, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                char* const ecx_117 = var_14
                
                if (ecx_117 != *(edx_69 + 0x648))
                    if (*i_1 == 0 && i_1[2] == ecx_117)
                        int32_t ecx_120 = i_1[3]
                        
                        if (ecx_120 == 8 || ecx_120 == 7)
                            int32_t eax_95 = i_1[1]
                            uint32_t ecx_121 = zx.d(eax_95.w)
                            
                            if (ecx_121 u>= 0xc8)
                                sub_44e4d0(eax_95, &data_5559b1, "idNoMimic < MAX_CARDS", 
                                    "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            eax_89 = 0
                            ecx_113 = *(esi_10 + 0x400)
                            j = *((ecx_121 << 5) + data_5c2e2c + 0x14) + 0x10
                            
                            if (ecx_113 s<= 0)
                                goto label_43d901
                            
                            while (*(esi_10 + (eax_89 << 3)) != j)
                                eax_89 += 1
                                
                                if (eax_89 s>= ecx_113)
                                    goto label_43d901
                            
                            *(esi_10 + (eax_89 << 3) + 4) += 1
                else if (*i_1 == 0 && i_1[2] == ecx_117 && i_1[3] == 8)
                    int32_t eax_93 = i_1[1]
                    uint32_t ecx_118 = zx.d(eax_93.w)
                    
                    if (ecx_118 u>= 0xc8)
                        sub_44e4d0(eax_93, &data_5559b1, "idNoMimic < MAX_CARDS", 
                            "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    eax_89 = 0
                    ecx_113 = *(esi_10 + 0x400)
                    j = *((ecx_118 << 5) + data_5c2e2c + 0x14) + 0x10
                    
                    if (ecx_113 s<= 0)
                    label_43d901:
                        *(esi_10 + 0x400) = ecx_113 + 1
                        *(esi_10 + (ecx_113 << 3) + 4) = 1
                        *(esi_10 + (ecx_113 << 3)) = j
                    else
                        while (*(esi_10 + (eax_89 << 3)) != j)
                            eax_89 += 1
                            
                            if (eax_89 s>= ecx_113)
                                goto label_43d901
                        
                        *(esi_10 + (eax_89 << 3) + 4) += 1
            else if (*i_1 == 0 && i_1[2] == var_14 && i_1[3] != 0xb && *(i_1 + 0x15) == 0
                    && *(i_1 + 0x16) == 0)
                int32_t eax_87 = i_1[1]
                uint32_t ecx_111 = zx.d(eax_87.w)
                
                if (ecx_111 u>= 0xc8)
                    sub_44e4d0(eax_87, &data_5559b1, "idNoMimic < MAX_CARDS", 
                        "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* edx_65 = *((ecx_111 << 5) + data_5c2e2c + 0x14)
                
                if (*(edx_65 + 0x28) != 3)
                    ecx_113 = *(esi_10 + 0x400)
                    j = edx_65 + 0x10
                    eax_89 = 0
                    
                    if (ecx_113 s<= 0)
                        goto label_43d901
                    
                    while (*(esi_10 + (eax_89 << 3)) != j)
                        eax_89 += 1
                        
                        if (eax_89 s>= ecx_113)
                            goto label_43d901
                    
                    *(esi_10 + (eax_89 << 3) + 4) += 1
            ecx_108 = sub_445070(&data_5bcd7c, &i_4)
        
        int32_t var_40_33 = ecx_108
        int32_t var_44_9 = 0x2eb8
        sub_413820(i_1, edi_1, esi_10, "tbl_player_deck_zoom", 1, 0x2ced, edi_1, ecx_108)
        
        if (*(eax_84 + 0x28) == 1)
            int32_t var_40_34 = 0xffffffff
            sub_469930(edi_1)
        
        esi_9 = var_14
    else
        int32_t ecx_106
        
        if (data_5bb1e4.d != 0x1e)
            ecx_106 = 0
            
            if (data_5bb1f0.d == 0x1e)
                ecx_106 = data_5bb1f0:4
        else
            ecx_106 = data_5bb1e4:4
        
        int32_t eax_85 = sub_47a160(ecx_106, "grpDeck")
        
        if (eax_85 != 0 && sub_47b570(eax_85) != 0)
            goto label_43d84a
    
    if (data_5bcaf8 == 1)
        int32_t var_40_35 = 0xffffffff
        sub_469930(edi_1)
        void* eax_92 = data_65aabc
        
        if (eax_92 == 0)
            sub_44e4d0(eax_92, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        if (esi_9 == *(eax_92 + 0x648))
            int32_t var_40_36 = 0xffffffff
            sub_469930(edi_1)
    
    int32_t esi_11 = *(sub_41ad20() + 0xec)
    void* eax_99 = sub_469bf0(esi_11 - 1, &data_5c33a8, edi_1, esi_11 - 1, 0xffffffff)
    
    if (esi_11 == 4)
        int32_t var_40_37 = 0xffffffff
        eax_99 = sub_469930(edi_1)
    
    void* i_2 = nullptr
    var_14 = nullptr
    
    if (esi_11 - 1 s> 0)
        do
            int32_t ecx_126 = *(sub_41ad20() + 0xec)
            void* eax_101 = data_65aabc
            
            if (eax_101 == 0)
                sub_44e4d0(eax_101, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_104 = *(eax_101 + 0x648) + 1 + i_2
            void* esi_13 = eax_104 - ecx_126
            
            if (eax_104 s< ecx_126)
                esi_13 = eax_104
            
            eax_99 = sub_47a240(var_14)
            char* const esi_15
            
            if (eax_99 == 0)
                esi_15 = var_14
            else
                eax_99 = __vcasan::DumpThisThreadExceptionFilter(eax_99, esi_13)
                int32_t eax_105
                
                if (data_5bcb00 == esi_13)
                    data_659a6c = esi_13
                    eax_105 = sub_4388e0(esi_13, 0xa)
                    eax_99 = sub_469bf0(eax_105, &data_5c35d8, edi_1, eax_105, 0xffffffff)
                else if (esi_13 == data_659a6c)
                    int32_t ecx_129
                    
                    if (data_5bb1e4.d != 0x1e)
                        ecx_129 = 0
                        
                        if (data_5bb1f0.d == 0x1e)
                            ecx_129 = data_5bb1f0:4
                    else
                        ecx_129 = data_5bb1e4:4
                    
                    eax_99 = sub_47a160(ecx_129, "img_opp_construct_zoom_bg")
                    
                    if (eax_99 != 0)
                        eax_99 = sub_47b570(eax_99)
                        
                        if (eax_99.b != 0)
                            eax_105 = sub_4388e0(esi_13, 0xa)
                            eax_99 = sub_469bf0(eax_105, &data_5c35d8, edi_1, eax_105, 0xffffffff)
                
                if (data_5bcb00 != esi_13)
                    esi_15 = var_14
                else
                    if (edi_1 == 0)
                        sub_44e4d0(eax_99, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    uint32_t esi_14 = zx.d(edi_1.w)
                    void* ecx_134
                    
                    if (esi_14 u< data_5c99a4)
                        ecx_134 = esi_14 * 0x1008 + data_5c99a0
                    
                    if (esi_14 u>= data_5c99a4 || *(ecx_134 + 0x1004) != edi_1)
                        sub_44e4d0(eax_99, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    void* eax_106 = sub_469800(eax_99, &data_5c35b0, ecx_134, 0x3f800000, 0xffffffff)
                    void* ecx_136
                    
                    if (esi_14 u< data_5c99a4)
                        ecx_136 = esi_14 * 0x1008 + data_5c99a0
                    
                    if (esi_14 u>= data_5c99a4 || *(ecx_136 + 0x1004) != edi_1)
                        sub_44e4d0(eax_106, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    esi_15 = var_14
                    eax_99 = sub_469800(eax_106, &data_5c35c4, ecx_136, 0x3f800000, esi_15)
            
            i_2 = &esi_15[1]
            var_14 = i_2
        while (i_2 s< esi_11 - 1)
    
    var_14 = &data_5559b1
    int32_t var_8_32 = 0x16
    void* ecx_137 = data_65aabc
    
    if (ecx_137 == 0)
        sub_44e4d0(eax_99, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* eax_107 = sub_43bf50(*(ecx_137 + 0x648), &var_14)
    
    if (eax_107.b == 0)
        if (edi_1 == 0)
            sub_44e4d0(eax_107, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 
                0x6c, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t eax_108 = zx.d(edi_1.w)
        void* ecx_140
        
        if (eax_108 u< data_5c99a4)
            ecx_140 = eax_108 * 0x1008 + data_5c99a0
        
        if (eax_108 u>= data_5c99a4 || *(ecx_140 + 0x1004) != edi_1)
            sub_44e4d0(eax_108, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_469800(eax_108, &data_5c33d0, ecx_140, 0x3f800000, 0xffffffff)
    
    void* eax_110 = sub_469cf0(&var_14, &data_5c33bc, edi_1, &var_14, 0xffffffff)
    
    if (data_5bcaec == 0)
        void* eax_120 = data_5c2e98
        int32_t esi_17 = *(eax_120 + 0x618)
        
        if (esi_17 != 0xffffffff)
        label_43de96:
            char ecx_157 = 2
            
            if (esi_17 s<= 0)
                ecx_157 = 0
            
            int32_t eax_122 = *(eax_120 + 0x400) - 1
            char edx_79 = ecx_157 | 4
            
            if (esi_17 s>= eax_122)
                edx_79 = ecx_157
            
            if (edi_1 == 0)
                sub_44e4d0(eax_122, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 
                    0x6c, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t eax_123 = zx.d(edi_1.w)
            void* ecx_159
            
            if (eax_123 u< data_5c99a4)
                ecx_159 = eax_123 * 0x1008 + data_5c99a0
            
            if (eax_123 u>= data_5c99a4 || *(ecx_159 + 0x1004) != edi_1)
                sub_44e4d0(eax_123, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                    "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            sub_469800(eax_123, &data_5c33e4, ecx_159, 0x3f800000, 0xffffffff)
            void* eax_124 = data_65aabc
            
            if (eax_124 == 0)
                sub_44e4d0(eax_124, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t eax_126
            int32_t ecx_161
            
            if (*(eax_124 + 0x434) == 1)
                eax_126 = sub_44dea0(*(sub_41ad20() + 0xf8), &i_4)
                ecx_161 = data_5bcd74
            
            if (*(eax_124 + 0x434) != 1 || ecx_161 s>= eax_126 || ecx_161 << 5 == neg.d(i_4))
                char eax_127 = edx_79
                
                if ((eax_127 & 2) != 0)
                    int32_t var_40_40 = 0xffffffff
                    sub_469930(edi_1)
                    eax_127 = edx_79
                
                if ((eax_127 & 4) != 0)
                    int32_t var_40_41 = 0xffffffff
                    sub_469930(edi_1)
        else
            eax_120 = data_5c2e9c
            esi_17 = *(eax_120 + 0x618)
            
            if (esi_17 != 0xffffffff)
                goto label_43de96
    else
        if (edi_1 == 0)
            sub_44e4d0(eax_110, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 
                0x6c, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t esi_16 = zx.d(edi_1.w)
        void* ecx_143
        
        if (esi_16 u< data_5c99a4)
            ecx_143 = esi_16 * 0x1008 + data_5c99a0
        
        if (esi_16 u>= data_5c99a4 || *(ecx_143 + 0x1004) != edi_1)
            sub_44e4d0(eax_110, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_469800(eax_110, &data_5c33e4, ecx_143, 0x3f800000, 0xffffffff)
        void* eax_111 = data_65aabc
        
        if (eax_111 == 0)
            sub_44e4d0(eax_111, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_113
        int32_t ecx_145
        
        if (*(eax_111 + 0x434) == 1)
            eax_113 = sub_44dea0(*(sub_41ad20() + 0xf8), &i_4)
            ecx_145 = data_5bcd74
        
        if (*(eax_111 + 0x434) != 1 || ecx_145 s>= eax_113 || ecx_145 << 5 == neg.d(i_4))
            int32_t eax_114 = sub_43a120(data_5bcaec, 0)
            
            if (eax_114 != 0)
                void* ecx_150
                
                if (esi_16 u< data_5c99a4)
                    ecx_150 = esi_16 * 0x1008 + data_5c99a0
                
                if (esi_16 u>= data_5c99a4 || *(ecx_150 + 0x1004) != edi_1)
                    sub_44e4d0(eax_114, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_469800(eax_114, &data_5c33f8, ecx_150, 0x3f800000, 0xffffffff)
            
            int32_t eax_115 = sub_43a120(data_5bcaec, 1)
            
            if (eax_115 != 0)
                void* ecx_153
                
                if (esi_16 u< data_5c99a4)
                    ecx_153 = esi_16 * 0x1008 + data_5c99a0
                
                if (esi_16 u>= data_5c99a4 || *(ecx_153 + 0x1004) != edi_1)
                    sub_44e4d0(eax_115, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                sub_469800(eax_115, &data_5c340c, ecx_153, 0x3f800000, 0xffffffff)
    
    int32_t var_18_3
    
    if (data_e48600 != "tbl_global_play" || data_e485fc != edi_1 || data_e48604 != 0xffffffff)
    label_43de48:
        int32_t eax_119 = sub_47a160(edi_1, "tbl_global_play")
        var_18_3 = eax_119
        data_e4861c = eax_119
        
        if (eax_119 != 0)
            data_e48600 = "tbl_global_play"
            data_e485fc = edi_1
            data_e48604 = 0xffffffff
        else
            var_18_3 = eax_119
    else
        int32_t ecx_154 = data_e4861c
        var_18_3 = ecx_154
        
        if (ecx_154 == 0)
            goto label_43de48
        
        uint32_t eax_116 = zx.d(ecx_154.w)
        
        if (eax_116 u>= data_5c99a4 || *(eax_116 * 0x1008 + data_5c99a0 + 0x1004) != ecx_154)
            goto label_43de48
    
    char* result
    char* result_1
    
    if (data_e48624 != "tbl_player_hand" || data_e48620 != edi_1 || data_e48628 != 0xffffffff)
    label_43dfce:
        result = sub_47a160(edi_1, "tbl_player_hand")
        result_1 = result
        data_e48640 = result_1
        
        if (result_1 != 0)
            data_e48624 = "tbl_player_hand"
            data_e48620 = edi_1
            data_e48628 = 0xffffffff
    else
        result_1 = data_e48640
        
        if (result_1 == 0)
            goto label_43dfce
        
        uint32_t eax_128 = zx.d(result_1.w)
        
        if (eax_128 u>= data_5c99a4)
            goto label_43dfce
        
        result = eax_128 * 0x1008 + data_5c99a0
        
        if (*(result + 0x1004) != result_1)
            goto label_43dfce
    
    if (var_18_3 != 0 && eax_4 s> 0)
        uint32_t eax_130 = zx.d(var_18_3.w)
        void* ecx_168
        
        if (eax_130 u< data_5c99a4)
            ecx_168 = eax_130 * 0x1008 + data_5c99a0
        
        if (eax_130 u>= data_5c99a4 || *(ecx_168 + 0x1004) != var_18_3)
            sub_44e4d0(eax_130, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = sub_469800(eax_130, &data_5c2fac, ecx_168, 0x3f800000, 0xffffffff)
    
    if (result_1 != 0 && eax_4 s> 0)
        uint32_t eax_131 = zx.d(result_1.w)
        void* ecx_170
        
        if (eax_131 u< data_5c99a4)
            ecx_170 = eax_131 * 0x1008 + data_5c99a0
        
        if (eax_131 u>= data_5c99a4 || *(ecx_170 + 0x1004) != result_1)
            sub_44e4d0(eax_131, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        result = sub_469800(eax_131, &data_5c2fac, ecx_170, 0x3f800000, 0xffffffff)
    
    int32_t var_8_33 = 0x17
    
    if (data_cdf414 != 0)
        result = var_14
        
        if (result != 0 && *result != 0)
            result = sub_44f000(&var_14)
            int32_t temp20_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp20_1 == 1)
                result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
