// 函数名称: sub_438bc0
// 虚拟地址: 0x438bc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_438bc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *arg1 = data_659a68
    int32_t* eax_3 = data_5c2e30
    
    if (eax_3 != 0)
        if (*eax_3 == 0xa)
            data_659a68 = 8
            *arg1 = 8
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 8
        
        void* ecx_2 = data_65aabc
        char const* const var_28
        int32_t var_24
        char const* const var_20
        char* ecx_3
        
        if (ecx_2 == 0)
        label_438c1c:
            var_20 = "GetClient"
            var_24 = 0x74
            var_28 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_3 = "gClient"
        label_438ed7:
            sub_44e4d0(eax_3, &data_5559b1, ecx_3, var_28, var_24, var_20)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t ecx_4 = *(ecx_2 + 0x648)
        
        if (eax_3[1] == ecx_4 && *(sub_433c60(ecx_4) + 0x30) == 0)
            void* eax_6 = sub_443fc0()
            
            if (eax_6 == 0 || *(eax_6 + 0x18) == 5)
                sub_444860()
                int32_t** ecx_5 = data_5c2e30
                eax_3 = *ecx_5
                
                switch (eax_3)
                    case nullptr
                        var_20 = "CalcOkState"
                        var_24 = 0x1182
                        goto label_438ec8
                    case 1
                        void* edx_1 = data_65aabc
                        
                        if (edx_1 == 0)
                            goto label_438c1c
                        
                        if (data_5bcd70 == *(edx_1 + 0x648))
                            if (ecx_5[0xcd] != 0)
                                data_659a68 = 0xa
                                *arg1 = 0xa
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 0xa
                            
                            if (ecx_5[0xcf] == 0 || eax_6 != 0)
                                void var_10
                                
                                if (*(ecx_5[1] * 0x9c + data_5c2e2c + 0x1e6c) s> 0
                                        && sub_438a40(sub_444860(), &var_10) s> 0)
                                    data_659a68 = 4
                                    *arg1 = 4
                                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                    return 4
                                
                                data_659a68 = 3
                                *arg1 = 3
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 3
                            
                            int32_t edi_2 = ecx_5[1]
                            char eax_9
                            int32_t ecx_8
                            eax_9, ecx_8 = sub_438b10(ecx_5, edi_2)
                            
                            if ((eax_9 == 0 || *(data_5c2e30 + 0x33c) s<= 1)
                                    && sub_438b10(ecx_8, edi_2) != 0)
                                data_659a68 = 0xc
                                *arg1 = 0xc
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 0xc
                            
                            data_659a68 = 0xb
                            *arg1 = 0xb
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0xb
                    case 2
                        if (data_5c2dbc == 0)
                            goto label_438e7b
                        
                        data_659a68 = 5
                        *arg1 = 5
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 5
                    case 3, 6, 7, 8, 0xb
                        nop
                    case 4
                    label_438e7b:
                        data_659a68 = 1
                        *arg1 = 1
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 1
                    case 5
                        int32_t eax_21 = data_5c2dbc
                        
                        if (eax_21 == 0)
                            goto label_438e7b
                        
                        if (eax_21 == ecx_5[0xcb])
                            data_659a68 = 6
                            *arg1 = 6
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 6
                        
                        data_659a68 = 7
                        *arg1 = 7
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 7
                    case 9
                        if (data_5c2dbc != 0)
                            data_659a68 = 9
                            *arg1 = 9
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 9
                    default
                        var_20 = "CalcOkState"
                        var_24 = 0x118b
                    label_438ec8:
                        ecx_3 = "Halt"
                        var_28 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                        goto label_438ed7
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
