// 函数名称: sub_4403d0
// 虚拟地址: 0x4403d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4403d0(int32_t arg1, uint32_t arg2, int32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_65ac30
    int32_t esi = arg3
    char const* const var_10c_1
    int32_t var_108_1
    char const* const var_104_1
    char* ecx
    
    if (eax_2 != 0)
        int32_t eax_3 = *(eax_2 + 8)
        int32_t var_8c_1
        
        if (eax_3 == 0)
            eax_2 = sub_411690()
            
            if (*(eax_2 + 0x434) != 1)
                var_8c_1 = 0x1f4
            else
                eax_2, arg3 = sub_440040(sub_41ad20())
                var_8c_1 = 0x5dc
                
                if (eax_2.b == 0)
                    var_8c_1 = 0x1f4
            
            goto label_440486
        
        eax_2 = eax_3 - 1
        
        if (eax_3 == 1)
            var_8c_1 = 0xfa
        label_440486:
            int32_t var_110_1
            char var_10c_3
            int32_t var_108_2
            char var_104_4
            int128_t var_30
            int32_t var_20
            int32_t eax_16
            uint32_t ecx_36
            uint32_t ecx_53
            int32_t edx_3
            int32_t edx_22
            uint32_t edi_2
            int128_t xmm0_1
            
            if (esi u> 0x29)
                var_104_1 = "ResolveEffect"
                var_108_1 = 0x20f5
                ecx = "Halt"
                var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            else
                switch (esi)
                    case 0
                        int32_t var_104_22 = arg6 + 1
                        int32_t* eax_67 = sub_43e950(arg6 + 1, arg4, arg6, arg2, arg5.b, 0, arg6)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_67
                    case 1
                        void* eax_71 = sub_433c60(arg2)
                        *(eax_71 + 0xc) = arg5
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_71
                    case 2
                        void* eax_72 = sub_433c60(arg2)
                        *(eax_72 + 8) = arg5
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_72
                    case 3
                        data_5bcae8 = 0
                        void* eax_107 = sub_44ddd0(&data_5c6384)
                        data_5c63a0 = 0
                        data_5c63ac = 0
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_107
                    case 4
                        eax_2 = sub_437070(arg4)
                        bool cond:0_1 = *(eax_2 + 8) == 0xffffffff
                        *(eax_2 + 0xc) = 4
                        *(eax_2 + 0x10) = arg5
                        *(eax_2 + 0x15) = 0
                        
                        if (cond:0_1)
                            var_20 = 6
                            int32_t var_1c_1 = 0xffffffff
                            uint32_t var_18_1 = arg5
                            int32_t var_14_1 = 0xffffffff
                            xmm0_1 = var_20.o
                            goto label_4404f2
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1e80
                        ecx = "gfx.card.owner == PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 5
                        int32_t* eax_68 = sub_437070(arg5)
                        int32_t eax_69
                        uint32_t ecx_103
                        eax_69, ecx_103 = sub_4388e0(eax_68[2], eax_68[3])
                        int32_t var_104_23 = eax_69
                        int32_t* eax_70 =
                            sub_43e950(eax_69, arg4, ecx_103, arg2, (eax_68[3]).b, 1, eax_68[4])
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_70
                    case 6
                        eax_2 = sub_437070(arg4)
                        *(eax_2 + 0xc) = 0xa
                        *(eax_2 + 0x10) = 0
                        *(eax_2 + 8) = arg2
                        
                        if (arg2 != 0xffffffff)
                        label_440a14:
                            var_104_4 = arg8.b
                            edx_3 = 0xa
                            var_108_2 = 0x16
                            ecx_53 = arg2
                            goto label_4405ec
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1f33
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 7
                        int32_t eax_19 = sub_4388e0(arg2, 7)
                        eax_2 = sub_437070(arg4)
                        bool cond:4_1 = *(eax_2 + 8) != 0xffffffff
                        *(eax_2 + 0xc) = 7
                        *(eax_2 + 0x10) = eax_19
                        
                        if (cond:4_1)
                        label_440bec:
                            var_104_4 = arg8.b
                            edx_3 = 7
                            var_108_2 = 0x12
                            ecx_53 = arg2
                            goto label_4405ec
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1f23
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 8
                        int32_t eax_45 = sub_4388e0(arg2, 6)
                        int32_t* eax_46 = sub_437070(arg4)
                        eax_46[3] = 6
                        eax_46[4] = eax_45
                        eax_2 = eax_46[2]
                        
                        if (eax_2 != 0xffffffff)
                            if (eax_2 == arg2)
                                char esi_15 = arg8.b
                                int32_t eax_49 = sub_43ee60(
                                    sub_43ee60(sub_43ee60(eax_2, 5, arg2, 7, esi_15), 7, arg2, 0x12, 
                                        esi_15), 
                                    6, arg2, 0x11, esi_15)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return eax_49
                            
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1fc3
                            ecx = "gfx.card.owner == who"
                        else
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1fc2
                            ecx = "gfx.card.owner != PLAYER_NONE"
                        
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 9
                        int32_t eax_50 = sub_4388e0(arg2, 5)
                        int32_t* eax_51 = sub_437070(arg4)
                        eax_51[3] = 5
                        eax_51[4] = eax_50
                        eax_2 = eax_51[2]
                        
                        if (eax_2 != 0xffffffff)
                            if (eax_2 == arg2)
                                char esi_17 = arg8.b
                                eax_16 = sub_43ee60(eax_2, 7, arg2, 0x12, esi_17)
                                var_10c_3 = esi_17
                                var_110_1 = 7
                                edx_22 = 5
                                ecx_36 = arg2
                            label_440796:
                                int32_t eax_17 =
                                    sub_43ee60(eax_16, edx_22, ecx_36, var_110_1, var_10c_3)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return eax_17
                            
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1fd7
                            ecx = "gfx.card.owner == who"
                            var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                        else
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1fd6
                            ecx = "gfx.card.owner != PLAYER_NONE"
                            var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0xa
                        int32_t eax_53 = sub_4388e0(arg2, 0xa)
                        int32_t* eax_54 = sub_437070(arg4)
                        eax_54[3] = 0xa
                        eax_54[4] = eax_53
                        eax_2 = eax_54[2]
                        
                        if (eax_2 != 0xffffffff)
                            if (eax_2 == arg2)
                                eax_2 = data_65aabc
                                
                                if (eax_2 == 0)
                                    goto label_44066d
                                
                                char edi_7 = arg8.b
                                
                                if (arg2 != *(eax_2 + 0x648))
                                    int32_t* eax_56 = sub_437260(&var_30, arg2, 0x14, &var_30, 0, 1)
                                    var_20.o = *eax_56
                                    eax_2 = sub_432830(
                                        sub_432710(eax_56, &var_20, &eax_54[0x28], 6, edi_7), var_8c_1, 
                                        &eax_54[0x28], edi_7)
                                
                                eax_16 = sub_43ee60(eax_2, 7, arg2, 0x12, edi_7)
                                var_10c_3 = edi_7
                                var_110_1 = 0x16
                                edx_22 = 0xa
                                ecx_36 = arg2
                                goto label_440796
                            
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1ff6
                            ecx = "gfx.card.owner == who"
                            var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                        else
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1ff5
                            ecx = "gfx.card.owner != PLAYER_NONE"
                            var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0xb
                        int32_t eax_52 = sub_4388e0(arg2, 6)
                        eax_2 = sub_437070(arg4)
                        var_104_4 = arg8.b
                        edx_3 = 5
                        var_108_2 = 7
                        *(eax_2 + 0xc) = 5
                        *(eax_2 + 0x10) = eax_52
                        *(eax_2 + 8) = arg2
                        *(eax_2 + 0x15) = 1
                        ecx_53 = arg2
                        goto label_4405ec
                    case 0xc
                        int32_t eax_10 = sub_438990(arg2)
                        eax_2 = sub_437070(arg4)
                        *(eax_2 + 0xc) = 9
                        *(eax_2 + 8) = arg2
                        *(eax_2 + 0x10) = eax_10
                        
                        if (arg2 != 0xffffffff)
                            if (*(eax_2 + 0x16) != 0)
                                *(eax_2 + 0x10) = 0
                            
                        label_4405e0:
                            var_104_4 = arg8.b
                            edx_3 = 9
                            var_108_2 = 0x13
                            ecx_53 = arg2
                            goto label_4405ec
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1e9f
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0xd
                        eax_2 = sub_437070(arg4)
                        xmm0_1 = data_59e680
                        *(eax_2 + 0xc) = 3
                        *(eax_2 + 8) = 0xffffffff
                    label_4404f2:
                        var_20.o = xmm0_1
                        int128_t* eax_6 = sub_432670(eax_2, &var_20, eax_2 + 0xa0, 6, arg8.b)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_6
                    case 0xe
                        eax_2 = data_65aabc
                        
                        if (eax_2 == 0)
                            goto label_44066d
                        
                        if (arg2 != *(eax_2 + 0x648))
                            int32_t* eax_81 = sub_437070(arg4)
                            int128_t xmm0_16 = *sub_437260(&var_30, arg2, 0x14, &var_30, 0, 1)
                            int32_t eax_84 = eax_81[0x13c]
                            var_30 = xmm0_16
                            var_20.o = *(eax_81 + 0x10c)
                            
                            if (eax_84 s> 0)
                                eax_84 *= 0x70
                                var_20.o = *(eax_84 + eax_81 + 0x104)
                            
                            char esi_24 = arg8.b
                            sub_432710(
                                sub_432830(sub_432710(eax_84, &var_30, &eax_81[0x28], 6, esi_24), 
                                    var_8c_1, &eax_81[0x28], esi_24), 
                                &var_20, &eax_81[0x28], 6, esi_24)
                        
                        int32_t* eax_87 = sub_437070(arg4)
                        eax_87[5].b = 1
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_87
                    case 0xf
                        if (arg8.b == 0)
                            data_dfcef8
                            sub_482460()
                        
                        void* eax_88 = sub_433c60(arg2)
                        *(eax_88 + 8) += 1
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_88
                    case 0x10, 0x11, 0x12, 0x13
                        int32_t eax_73 = arg8
                        
                        if (eax_73.b == 0)
                            if (esi == 0x12)
                                data_dfcef8
                                sub_482460()
                                eax_73 = arg8
                            else if (esi == 0x11)
                                data_dfcf00
                                sub_482460()
                                eax_73 = arg8
                        
                        int32_t* eax_74 =
                            sub_43ed80(eax_73, arg2, esi - 0x10, arg4, arg5, arg6, eax_73.b)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_74
                    case 0x14
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_2
                    case 0x15
                        int32_t* eax_89 = sub_437070(arg4)
                        eax_89[5].b = 0
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_89
                    case 0x16
                        eax_2 = sub_437070(arg4)
                        int32_t edx_1 = *(eax_2 + 8)
                        
                        if (edx_1 != 0xffffffff)
                            if (edx_1 == arg2)
                                *(eax_2 + 0xc) = 8
                                *(eax_2 + 0x10) = 0xffffffff
                                int32_t* eax_8 =
                                    sub_437260(&var_30, edx_1, 9, &var_30, 0xffffffff, 0xffffffff)
                                var_20.o = *eax_8
                                int128_t* eax_9 = sub_432710(eax_8, &var_20, eax_2 + 0xa0, 8, arg8.b)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return eax_9
                            
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1e8b
                            ecx = "gfx.card.owner == who"
                        else
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1e8a
                            ecx = "gfx.card.owner != PLAYER_NONE"
                        
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x17
                        void* eax_90 = sub_433c60(arg4)
                        *(eax_90 + 8) -= arg5
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_90
                    case 0x18
                        eax_2 = sub_433c60(arg2)
                        int32_t edx_44 = *(eax_2 + 0x34)
                        
                        if (edx_44 s< 4)
                            *(eax_2 + (edx_44 << 2) + 0x38) = arg5
                            *(eax_2 + 0x34) += 1
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return arg5
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x209d
                        ecx = "pgui.numOngoing < MAX_ONGOING"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x19
                        void* eax_92 = sub_433c60(arg2)
                        int32_t ecx_147 = 0
                        eax_2 = *(eax_92 + 0x34)
                        
                        if (eax_2 s<= 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_2
                        
                        char* edx_45 = eax_92 + 0x38
                        
                        do
                            if (*edx_45 == arg5)
                                char* eax_96 = sub_51dd40(edx_45, eax_92 + ((ecx_147 + 0xf) << 2), 
                                    ((eax_2 - ecx_147) << 2) + 0xfffffffc)
                                *(eax_92 + 0x34) -= 1
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return eax_96
                            
                            ecx_147 += 1
                            edx_45 = &edx_45[4]
                        while (ecx_147 s< eax_2)
                        
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_2
                    case 0x1a
                        if (arg2 == 0)
                            data_5bcae8 += 1
                        
                        data_5bcd70 = arg2
                        void* eax_11 = sub_433c60(arg2)
                        int32_t esi_4 = *(eax_11 + 0x10) + *(eax_11 + 0x28)
                        void* eax_12 = sub_433c60(arg2)
                        *(eax_12 + 0x10) -= esi_4
                        void* eax_13 = *(eax_11 + 0x28)
                        int32_t ecx_17 = *(eax_11 + 0x10)
                        eax_2 = eax_13 + ecx_17
                        
                        if (eax_13 == neg.d(ecx_17))
                            if (ecx_17 == 0)
                                eax_2 = data_65aabc
                                
                                if (eax_2 == 0)
                                    goto label_44066d
                                
                                if (arg2 != *(eax_2 + 0x648) || arg8.b != 0)
                                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                    return eax_2
                                
                                data_dfcf20
                                int32_t eax_14 = sub_482420()
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return eax_14
                            
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1ebe
                            ecx = "pgui.resources[TOKEN_SHIELD] == 0"
                            var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                        else
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1ebd
                            ecx = "pgui.shield() == 0"
                            var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x1b
                        eax_2 = sub_433c60(arg2)
                        *eax_2 = neg.d(*(eax_2 + 0x18))
                        bool cond:1_1 = *(eax_2 + 0x34) == 0
                        *(eax_2 + 4) = neg.d(*(eax_2 + 0x1c))
                        
                        if (cond:1_1)
                            data_5bcd68 = 0
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_2
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1ecc
                        ecx = "pgui.numOngoing == 0"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x1c
                        int32_t eax_20 = sub_438990(arg2)
                        eax_2 = sub_437070(arg4)
                        void* edi_3 = eax_2
                        *(edi_3 + 0xc) = 9
                        *(edi_3 + 8) = arg2
                        *(edi_3 + 0x10) = eax_20
                        
                        if (arg2 != 0xffffffff)
                            eax_2 = data_65aabc
                            
                            if (eax_2 != 0)
                                if (arg2 != *(eax_2 + 0x648))
                                    int32_t* eax_23 =
                                        sub_437260(&var_30, arg2, 0x14, &var_30, eax_20, eax_20 + 1)
                                    var_20.o = *eax_23
                                    sub_432830(sub_432710(eax_23, &var_20, edi_3 + 0xa0, 6, arg8.b), 
                                        var_8c_1, edi_3 + 0xa0, arg8.b)
                                
                                eax_2 = sub_440310(edi_3, arg8.b)
                                goto label_4405e0
                            
                        label_44066d:
                            var_104_1 = "GetClient"
                            var_108_1 = 0x74
                            var_10c_1 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                            ecx = "gClient"
                        else
                            var_104_1 = "ResolveEffect"
                            var_108_1 = 0x1f40
                            ecx = "gfx.card.owner != PLAYER_NONE"
                            var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x1d
                        int32_t eax_25 = sub_4388e0(arg2, 6)
                        int32_t* eax_26 = sub_437070(arg4)
                        eax_26[2] = arg2
                        char ebx_2 = arg8.b
                        eax_26[3] = 6
                        eax_26[4] = eax_25
                        *(eax_26 + 0x15) = 1
                        eax_2 = sub_440310(eax_26, ebx_2)
                        ecx_53 = arg2
                        edx_3 = 6
                        var_104_4 = ebx_2
                        var_108_2 = 0x11
                    label_4405ec:
                        eax_2 = sub_43ee60(eax_2, edx_3, ecx_53, var_108_2, var_104_4)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_2
                    case 0x1e
                        int32_t eax_27 = sub_4388e0(arg2, 0xa)
                        eax_2 = sub_437070(arg4)
                        void* esi_10 = eax_2
                        *(esi_10 + 0xc) = 0xa
                        *(esi_10 + 0x10) = eax_27
                        *(esi_10 + 8) = arg2
                        
                        if (arg2 != 0xffffffff)
                            sub_440310(esi_10, arg8.b)
                            eax_2 = data_65aabc
                            
                            if (eax_2 == 0)
                                goto label_44066d
                            
                            if (arg2 != *(eax_2 + 0x648))
                                int32_t* eax_30 = sub_437260(&var_30, arg2, 0x14, &var_30, 
                                    *(esi_10 + 0x10), eax_27 + 1)
                                var_20.o = *eax_30
                                eax_2 = sub_432830(
                                    sub_432710(eax_30, &var_20, esi_10 + 0xa0, 6, arg8.b), var_8c_1, 
                                    esi_10 + 0xa0, arg8.b)
                            
                            goto label_440a14
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1f73
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x1f
                        int32_t eax_40 = sub_4388e0(arg2, 7)
                        eax_2 = sub_437070(arg4)
                        void* esi_13 = eax_2
                        *(esi_13 + 0xc) = 7
                        *(esi_13 + 0x10) = eax_40
                        *(esi_13 + 8) = arg2
                        
                        if (arg2 != 0xffffffff)
                            sub_440310(esi_13, arg8.b)
                            eax_2 = data_65aabc
                            
                            if (eax_2 == 0)
                                goto label_44066d
                            
                            if (arg2 != *(eax_2 + 0x648))
                                int32_t* eax_43 = sub_437260(&var_30, arg2, 0x14, &var_30, 
                                    *(esi_13 + 0x10), eax_40 + 1)
                                var_20.o = *eax_43
                                eax_2 = sub_432830(
                                    sub_432710(eax_43, &var_20, esi_13 + 0xa0, 6, arg8.b), var_8c_1, 
                                    esi_13 + 0xa0, arg8.b)
                            
                            goto label_440bec
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1fa7
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x20
                        eax_2 = sub_433c60(arg2)
                        *eax_2 -= arg5
                        
                        if (*(eax_2 + 0x10) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_2
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1ed7
                        ecx = "pgui.resources[TOKEN_SHIELD] == 0"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x21
                        int32_t eax_32 = sub_4388e0(arg2, 7)
                        int32_t edx_13
                        eax_2, edx_13 = sub_437070(arg4)
                        int32_t ecx_61 = eax_32
                        void* esi_11 = eax_2
                        bool cond:5_1 = *(esi_11 + 8) != 0xffffffff
                        *(esi_11 + 0xc) = 7
                        *(esi_11 + 0x10) = ecx_61
                        
                        if (cond:5_1)
                            if (arg8.b == 0)
                                void var_f0
                                int128_t* eax_34 = sub_433310(&var_f0, edx_13, esi_11, &var_f0)
                                int128_t var_88 = *eax_34
                                int128_t var_78_1 = eax_34[1]
                                int128_t var_68_1 = eax_34[2]
                                int128_t var_58_1 = eax_34[3]
                                int32_t var_38_1 = eax_34[5].d
                                int128_t var_48_1 = eax_34[4]
                                sub_432600(esi_11 + 0xa0, &var_88)
                                ecx_61 = eax_32
                            
                            eax_2 = data_65aabc
                            
                            if (eax_2 == 0)
                                goto label_44066d
                            
                            char esi_12
                            
                            if (arg2 == *(eax_2 + 0x648))
                                esi_12 = arg8.b
                            else
                                int32_t* eax_38 = sub_437260(&var_30, arg2, 0x14, &var_30, 
                                    *(esi_11 + 0x10), ecx_61 + 1)
                                esi_12 = arg8.b
                                var_20.o = *eax_38
                                eax_2 = sub_432830(
                                    sub_432710(eax_38, &var_20, esi_11 + 0xa0, 6, esi_12), var_8c_1, 
                                    esi_11 + 0xa0, esi_12)
                            
                            eax_16 = sub_43ee60(eax_2, 7, arg2, 0x12, esi_12)
                            var_10c_3 = esi_12
                            ecx_36 = arg2
                            goto label_44078f
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1f8e
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x22
                        eax_2 = sub_437070(arg4)
                        bool cond:6_1 = *(eax_2 + 8) != 0xffffffff
                        *(eax_2 + 0xc) = 0xb
                        
                        if (cond:6_1)
                            void* ecx_90 = data_65aabc
                            
                            if (ecx_90 == 0)
                                goto label_44066d
                            
                            char esi_21 = arg8.b
                            
                            if (arg2 != *(ecx_90 + 0x648))
                                int32_t* eax_59 = sub_437260(&var_30, arg2, 0x14, &var_30, 0, 1)
                                var_20.o = *eax_59
                                sub_432830(sub_432710(eax_59, &var_20, eax_2 + 0xa0, 6, esi_21), 
                                    var_8c_1, eax_2 + 0xa0, esi_21)
                            
                            int32_t* eax_62 =
                                sub_437260(&var_30, arg2, 0xa, &var_30, 0xffffffff, 0xffffffff)
                            var_20.o = *eax_62
                            int32_t eax_65 = sub_43ee60(
                                sub_43ee60(sub_432710(eax_62, &var_20, eax_2 + 0xa0, 6, esi_21), 7, 
                                    arg2, 0x12, esi_21), 
                                9, arg2, 0x13, esi_21)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_65
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x200c
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x23
                        char eax_75 = arg8.b
                        
                        if (eax_75 == 0)
                            data_dfcf44
                            sub_482460()
                            eax_75 = arg8.b
                        
                        uint32_t ecx_120 = arg5
                        
                        if (arg6 != 0)
                            ecx_120 = arg6
                        
                        sub_43ed80(arg6, arg2, 4, arg4, arg5, ecx_120, eax_75)
                        eax_2 = data_65aabc
                        
                        if (eax_2 == 0)
                            goto label_44066d
                        
                        if (arg2 == *(eax_2 + 0x648))
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_2
                        
                        int32_t* eax_77 = sub_437070(arg4)
                        int32_t* eax_79 = sub_437260(&var_30, arg2, 0x14, &var_30, 0, 1)
                        char edi_9 = arg8.b
                        var_20.o = *eax_79
                        eax_2 = sub_432830(sub_432710(eax_79, &var_20, &eax_77[0x28], 6, edi_9), 
                            var_8c_1, &eax_77[0x28], edi_9)
                        edx_3 = 7
                        var_104_4 = edi_9
                        var_108_2 = 0x12
                        ecx_53 = arg2
                        goto label_4405ec
                    case 0x24
                        int32_t* eax_18 = sub_437070(arg4)
                        edi_2 = eax_18[2]
                        eax_2 = sub_438990(edi_2)
                        bool cond:3_1 = eax_18[2] != 0xffffffff
                        eax_18[3] = 9
                        eax_18[4] = eax_2
                        
                        if (cond:3_1)
                            goto label_44076b
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1f01
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x25
                        int32_t* eax_15 = sub_437070(arg4)
                        edi_2 = eax_15[2]
                        eax_2 = sub_438990(edi_2)
                        bool cond:2_1 = eax_15[2] != 0xffffffff
                        eax_15[3] = 9
                        eax_15[4] = eax_2
                        
                        if (cond:2_1)
                            eax_2 = sub_433c60(arg2)
                            *(eax_2 + 4) -= arg5
                        label_44076b:
                            char ebx_1 = arg8.b
                            
                            if (ebx_1 == 0)
                                data_dfcf14
                                eax_2 = sub_482460()
                            
                            eax_16 = sub_43ee60(eax_2, 0xa, edi_2, 0x16, ebx_1)
                            var_10c_3 = ebx_1
                            ecx_36 = edi_2
                        label_44078f:
                            edx_22 = 9
                            var_110_1 = 0x13
                            goto label_440796
                        
                        var_104_1 = "ResolveEffect"
                        var_108_1 = 0x1ee2
                        ecx = "gfx.card.owner != PLAYER_NONE"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x26
                        void* eax_99 = sub_433c60(arg2)
                        *(eax_99 + 4) -= arg5
                        eax_2 = sub_433c60(arg4)
                        *(eax_2 + 0xc) -= arg7
                        
                        if (arg8.b != 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_2
                        
                        eax_2 = data_5bcd3c
                        
                        if (eax_2 s< 5)
                            void* ecx_161 = eax_2 * 3
                            data_5bcd3c = eax_2 + 1
                            *((ecx_161 << 3) + &data_5bccd8) = data_5bcd40
                            *((ecx_161 << 3) + &data_5bccc4) = arg2
                            *((ecx_161 << 3) + &data_5bccc8) = arg4
                            *((ecx_161 << 3) + &data_5bcccc) = arg5
                            *((ecx_161 << 3) + &data_5bccd0) = arg6
                            *((ecx_161 << 3) + &data_5bccd4) = arg7
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return arg6
                        
                        var_104_1 = "DamageSequenceAdd"
                        var_108_1 = 0xcac
                        ecx = "gShardsClient.gui.numDamages < MAX_PLAYERS"
                        var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                    case 0x27
                        void* eax_97 = sub_433c60(arg4)
                        *(eax_97 + 0x48) = 1
                        
                        if (arg8.b == 0)
                            uint32_t eax_98 = sub_4373e0(arg4)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_98
                        
                        *(eax_97 + 0x49) = 1
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_97
                    case 0x28
                        arg3.b = arg8.b
                        int128_t* eax_106 = sub_4374e0(arg3.b)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_106
                    case 0x29
                        char ebx_3 = arg8.b
                        
                        if (ebx_3 != 0)
                            eax_2, arg3 = sub_44b580(sub_444860())
                            
                            if (eax_2.b != 0)
                                eax_2, arg3 = sub_439080()
                        
                        arg3.b = ebx_3
                        eax_2.b = arg5 != 0
                        uint32_t eax_104 = zx.d(eax_2.b)
                        int32_t* eax_105 = sub_437760(eax_104, arg4, arg3.b, eax_104.b)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_105
        else
            void* temp2_1 = eax_2
            eax_2 -= 1
            
            if (temp2_1 == 1)
                var_8c_1 = 0x64
                goto label_440486
            
            var_104_1 = "ResolveEffect"
            var_108_1 = 0x1e73
            ecx = "Halt"
            var_10c_1 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
    else
        var_104_1 = "GetLocalSettings"
        var_108_1 = 0x23d
        var_10c_1 = "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
        ecx = "gGameSettings.localSettings"
    
    sub_44e4d0(eax_2, &data_5559b1, ecx, var_10c_1, var_108_1, var_104_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
