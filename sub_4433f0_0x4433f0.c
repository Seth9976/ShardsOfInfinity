// 函数名称: sub_4433f0
// 虚拟地址: 0x4433f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4433f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5421a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    sub_472550(arg1, sub_442d10)
    void* edi = sub_41ad20()
    void* var_30 = edi
    int32_t eax_4 = *(edi + 0xec)
    int32_t var_2c = eax_4
    
    if (eax_4 == 3)
        int32_t var_48_1 = 0xffffffff
        sub_469930(arg1)
        eax_4 = var_2c
    
    int32_t esi = 0
    int32_t eax_5 = eax_4 - 1
    int32_t var_28 = 0
    
    if (eax_5 s> 0)
        int32_t var_24_1 = 0
        
        do
            int32_t ecx_2 = *(sub_41ad20() + 0xec)
            void* eax_7 = data_65aabc
            
            if (eax_7 == 0)
                sub_44e4d0(eax_7, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            int32_t eax_10 = *(eax_7 + 0x648) + 1 + esi
            int32_t esi_2 = eax_10 - ecx_2
            
            if (eax_10 s< ecx_2)
                esi_2 = eax_10
            
            int32_t ecx_3 = 0
            void* eax_11 = edi + 8
            char* var_20
            int32_t var_8_1
            void* edi_1
            
            while (true)
                if (ecx_3 s>= *(edi + 0xec))
                    sub_44e4d0(eax_11, &data_5559b1, "Halt", 
                        "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0xabb, "GameGetPlayer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (*(eax_11 + 0x24) == esi_2)
                    void var_34
                    void* var_48_2 = &var_34
                    sub_4167e0(eax_11 + 8, edi + 8, &var_20, eax_11 + 8)
                    var_8_1 = 0
                    edi_1 = *fsbase->ThreadLocalStoragePointer
                    break
                
                ecx_3 += 1
                eax_11 += 0x2c
            
            if (data_e48854 s> *(edi_1 + 4))
                __Init_thread_header(&data_e48854)
                
                if (data_e48854 == 0xffffffff)
                    int32_t eax_15 = data_cdf41c
                    data_e4885c = eax_15
                    data_e48868 = "player1Name"
                    data_e48858 = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    data_e48864 = data_cdf418
                    data_e48884 = eax_15 + 2
                    data_e4887c = "player2Name"
                    data_e48870 = eax_15 + 1
                    data_e48878 = &data_e48858
                    data_e4886c = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    data_e48890 = "player3Name"
                    data_cdf41c = eax_15 + 3
                    data_e4888c = &data_e4886c
                    data_cdf418 = &data_e48880
                    data_e48880 = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    __Init_thread_footer(&data_e48854)
            
            if (data_e48894 s> *(edi_1 + 4))
                __Init_thread_header(&data_e48894)
                
                if (data_e48894 == 0xffffffff)
                    int32_t eax_20 = data_cdf41c
                    data_e4889c = eax_20
                    data_e488a8 = "player1Damage"
                    data_e48898 = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    data_e488a4 = data_cdf418
                    data_e488c4 = eax_20 + 2
                    data_e488bc = "player2Damage"
                    data_e488b0 = eax_20 + 1
                    data_e488b8 = &data_e48898
                    data_e488ac = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    data_e488d0 = "player3Damage"
                    data_cdf41c = eax_20 + 3
                    data_e488cc = &data_e488ac
                    data_cdf418 = &data_e488c0
                    data_e488c0 = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    __Init_thread_footer(&data_e48894)
            
            if (data_e488d4 s> *(edi_1 + 4))
                __Init_thread_header(&data_e488d4)
                
                if (data_e488d4 == 0xffffffff)
                    int32_t eax_25 = data_cdf41c
                    data_e488dc = eax_25
                    data_e488e8 = "txtHealth1"
                    data_e488d8 = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    data_e488e4 = data_cdf418
                    data_e48904 = eax_25 + 2
                    data_e488fc = "txtHealth2"
                    data_e488f0 = eax_25 + 1
                    data_e488f8 = &data_e488d8
                    data_e488ec = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    data_e48910 = "txtHealth3"
                    data_cdf41c = eax_25 + 3
                    data_e4890c = &data_e488ec
                    data_cdf418 = &data_e48900
                    data_e48900 = &UI2StateDeclText::`vftable'{for `UI2StateDecl'}
                    __Init_thread_footer(&data_e488d4)
            
            int32_t var_48_3 = *((var_28 << 2) + &data_5bcc8c)
            char* const var_1c
            char** eax_30 = sub_44f980(&var_1c, &data_5828f8)
            int32_t var_14_1 = var_14 | 1
            var_8_1.b = 1
            
            if (esi_2 s< 0)
                sub_44e4d0(eax_30, &data_5559b1, "who >= 0", 
                    "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x512, "PGUIGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (esi_2 s>= 5)
                sub_44e4d0(eax_30, &data_5559b1, "(int)who < (int)MAX_PLAYERS", 
                    "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x513, "PGUIGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_31 = esi_2 * 0x4c
            int32_t var_48_4 = *(eax_31 + 0x5bcb14) + *(eax_31 + 0x5bcb2c)
            char* const var_18
            sub_44f980(&var_18, &data_5828f8)
            var_14 = var_14_1 | 2
            var_8_1.b = 2
            sub_469cf0(&var_20, var_24_1 + &data_e48858, arg1, &var_20, 0xffffffff)
            sub_469cf0(&var_1c, var_24_1 + &data_e48898, arg1, &var_1c, 0xffffffff)
            sub_469cf0(&var_18, var_24_1 + &data_e488d8, arg1, &var_18, 0xffffffff)
            int32_t edi_2
            
            if ((&data_5bcca0)[var_28] == 0)
                edi_2 = var_24_1
            else
                if (data_e48914 s> *(edi_1 + 4))
                    __Init_thread_header(&data_e48914)
                    
                    if (data_e48914 == 0xffffffff)
                        int32_t eax_36 = data_cdf41c
                        data_e4891c = eax_36
                        data_e48918 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                        data_e48928 = "player1Invul"
                        data_e48924 = data_cdf418
                        data_e48944 = eax_36 + 2
                        data_e4892c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                        data_e4893c = "player2Invul"
                        data_e48930 = eax_36 + 1
                        data_e48938 = &data_e48918
                        data_e48940 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                        data_e48950 = "player3Invul"
                        data_cdf41c = eax_36 + 3
                        data_e4894c = &data_e4892c
                        data_cdf418 = &data_e48940
                        __Init_thread_footer(&data_e48914)
                
                edi_2 = var_24_1
                int32_t var_48_5 = 0xffffffff
                sub_469930(arg1)
            
            var_8_1.b = 3
            
            if (data_cdf414 != 0)
                char* eax_40 = var_18
                
                if (eax_40 != 0 && *eax_40 != 0)
                    char* eax_41 = sub_44f000(&var_18)
                    int32_t temp0_1 = *(eax_41 + 4)
                    *(eax_41 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_41, *(eax_41 + 0xc) + 0x10)
                        var_18 = &data_5559b1
            
            var_8_1.b = 4
            
            if (data_cdf414 != 0)
                char* eax_42 = var_1c
                
                if (eax_42 != 0 && *eax_42 != 0)
                    char* eax_43 = sub_44f000(&var_1c)
                    int32_t temp1_1 = *(eax_43 + 4)
                    *(eax_43 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_43, *(eax_43 + 0xc) + 0x10)
                        var_1c = &data_5559b1
            
            int32_t var_8_2 = 5
            
            if (data_cdf414 != 0)
                char* eax_44 = var_20
                
                if (eax_44 != 0 && *eax_44 != 0)
                    char* eax_45 = sub_44f000(&var_20)
                    int32_t temp2_1 = *(eax_45 + 4)
                    *(eax_45 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(eax_45, *(eax_45 + 0xc) + 0x10)
                        var_20 = &data_5559b1
            
            esi = var_28 + 1
            var_24_1 = edi_2 + 0x14
            edi = var_30
            int32_t var_8_3 = 0xffffffff
            eax_5 = var_2c - 1
            var_28 = esi
        while (esi s< eax_5)
    
    int32_t ecx
    
    if (data_5bcc8c.d == 0)
        int32_t var_48_6 = 0xffffffff
        eax_5, ecx = sub_469930(arg1)
    
    if (data_5bcc8c:4 == 0)
        int32_t var_48_7 = 0xffffffff
        sub_469930(arg1)
        int32_t var_4c_2 = 0xffffffff
        eax_5, ecx = sub_469930(arg1)
    
    if (data_5bcc8c:8 == 0)
        int32_t var_48_8 = 0xffffffff
        eax_5, ecx = sub_469930(arg1)
    
    if (var_2c != 3)
        if (data_5bcca0 != 0)
            int32_t var_48_11 = 0xffffffff
            sub_469930(arg1)
        
        eax_5 = data_5bcca2.d
        
        if (eax_5.b != 0)
            int32_t var_48_12 = 0xffffffff
            sub_469930(arg1)
            eax_5 = data_5bcca2.d
        
        ecx.b = data_5bcca0
        bool cond:0_1
        
        if (ecx.b == 0)
            if (data_5bcca1 != 0)
                cond:0_1 = eax_5.b != 0
                goto label_443a6d
            
        label_443a6f:
            
            if (ecx.b != 0 && eax_5.b != 0)
                goto label_443a77
        else
            cond:0_1 = data_5bcca1 != 0
        label_443a6d:
            
            if (not(cond:0_1))
                goto label_443a6f
            
        label_443a77:
            int32_t var_48_13 = 0xffffffff
            sub_469930(arg1)
            int32_t var_4c_3 = 0xffffffff
            sub_469930(arg1)
            int32_t var_50_3 = 0xffffffff
            sub_469930(arg1)
            int32_t var_54_1 = 0xffffffff
            eax_5 = sub_469930(arg1)
    else
        if (data_5bcca0 != 0)
            int32_t var_48_9 = 0xffffffff
            eax_5 = sub_469930(arg1)
        
        if (data_5bcca1 != 0)
            int32_t var_48_10 = 0xffffffff
            int32_t eax_46 = sub_469930(arg1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_46
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5
}
