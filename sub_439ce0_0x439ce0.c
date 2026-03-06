// 函数名称: sub_439ce0
// 虚拟地址: 0x439ce0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_439ce0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = data_5c2e30
    data_5bcaf0 = 0
    data_5bcaf8 = 0
    data_5bcb00 = 0xffffffff
    data_5bccbc = 0
    char* eax_3 = *eax_2
    
    if (eax_3 == 0xa)
        void* eax_4 = sub_439080()
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_4
    
    char* var_38
    int64_t var_30
    
    if (eax_3 == 2)
        var_38 = eax_3
        int32_t var_34_1 = 8
    label_439d9f:
        int32_t esi_1 = data_5c2dbc
        __builtin_memset(&var_30, 0, 0x20)
        int32_t var_c_1 = 0
        eax_3 = sub_51d5b0(&var_30, &data_5c2d9c, esi_1 << 2)
        int32_t var_10_1 = esi_1
        data_5c2dbc = 0
        goto label_439de9
    
    if (eax_3 == 4)
        __builtin_memset(&var_30, 0, 0x28)
        var_38 = eax_3
        int32_t var_34_2 = 9
    label_439de9:
        void* esi_2 = data_65aabc
        
        if (esi_2 != 0)
            int32_t esi_3 = *(esi_2 + 0x648)
            void* eax_6 = sub_41ad20()
            void* eax_7 = sub_436b50(eax_6, esi_3, eax_6, &var_38)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_7
        
        goto label_43a098
    
    if (eax_3 == 9)
        var_38 = eax_3
        int32_t var_34_3 = 7
        goto label_439d9f
    
    if (eax_3 == 5)
        var_38 = eax_3
        int32_t var_34_4 = 9
        goto label_439d9f
    
    if (eax_3 != 1)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_3
    
    int32_t* var_3c
    int32_t eax_8 = sub_438bc0(&var_3c)
    char const* const var_58_2
    int32_t var_54
    char const* const var_50_3
    char* ecx_9
    
    if (eax_8 == 0xa)
        char** eax_24 = data_5c2e30
        void* esi_11 = data_65aabc
        __builtin_memset(&var_30, 0, 0x28)
        eax_3 = *eax_24
        var_38 = eax_3
        int32_t var_34_7 = 3
        
        if (esi_11 != 0)
            int32_t esi_12 = *(esi_11 + 0x648)
            int32_t* eax_25 = sub_41ad20()
            sub_436b50(eax_25, esi_12, eax_25, &var_38)
            eax_3 = sub_443fc0()
            
            if (eax_3 != 0)
                eax_3 = sub_443fc0()
                
                if (*(eax_3 + 0x14) == 3)
                    eax_3 = sub_443df0(3)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_3
        
    label_43a098:
        var_50_3 = "GetClient"
        var_54 = 0x74
        var_58_2 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_9 = "gClient"
    else
        if (eax_8 == 0xb)
            char** eax_21 = data_5c2e30
            void* esi_9 = data_65aabc
            __builtin_memset(&var_30, 0, 0x28)
            eax_3 = *eax_21
            var_38 = eax_3
            int32_t var_34_6 = 0xd
            
            if (esi_9 == 0)
                goto label_43a098
            
            int32_t esi_10 = *(esi_9 + 0x648)
            int32_t* eax_22 = sub_41ad20()
            void* eax_23 = sub_436b50(eax_22, esi_10, eax_22, &var_38)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_23
        
        if (eax_8 != 0xc)
            char* eax_12 = sub_439a20()
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_12
        
        char** esi_4 = data_5c2e30
        __builtin_memset(&var_30, 0, 0x28)
        int32_t esi_5 = esi_4[1]
        var_38 = *esi_4
        int32_t var_34_5 = 1
        sub_444860()
        eax_3 = data_5c2e30
        
        if (*(eax_3 + 4) != esi_5)
            var_50_3 = "FindFocus"
            var_54 = 0x10c2
            var_58_2 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            ecx_9 = "Halt"
        else if (*eax_3 == 1)
            int32_t ebx_1 = *(eax_3 + 0x33c)
            int32_t esi_6 = 0
            
            if (ebx_1 s<= 0)
            label_439f34:
                var_50_3 = "FindFocus"
                var_54 = 0x10cd
                var_58_2 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
                ecx_9 = "Halt"
            else
                int32_t* eax_14 = *(eax_3 + 0x338)
                int32_t* edi_1 = eax_14
                var_3c = eax_14
            label_439ef2:
                eax_3 = zx.d((*edi_1).w)
                
                if (eax_3 u< 0xc8)
                    int32_t ecx_11 = 0
                    eax_3 = *((eax_3 << 5) + data_5c2e2c + 0x14) + 0x34
                    
                    while (true)
                        int32_t edx_2 = *eax_3
                        
                        if ((edx_2 & 0x20000000) != 0 && edx_2.b == 6)
                            int32_t var_10_2 = 1
                            eax_3 = var_3c[esi_6]
                            void* esi_7 = data_65aabc
                            var_30.d = eax_3
                            
                            if (esi_7 == 0)
                                break
                            
                            int32_t esi_8 = *(esi_7 + 0x648)
                            int32_t* eax_19 = sub_41ad20()
                            void* eax_20 = sub_436b50(eax_19, esi_8, eax_19, &var_38)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_20
                        
                        ecx_11 += 1
                        eax_3 = &eax_3[0xc]
                        
                        if (ecx_11 s>= 4)
                            esi_6 += 1
                            edi_1 = &edi_1[1]
                            
                            if (esi_6 s< ebx_1)
                                goto label_439ef2
                            
                            goto label_439f34
                    
                    goto label_43a098
                
                var_50_3 = "CardGet"
                var_54 = 0x87
                var_58_2 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
                ecx_9 = "idNoMimic < MAX_CARDS"
        else
            var_50_3 = "FindFocus"
            var_54 = 0x10c3
            var_58_2 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
            ecx_9 = "Halt"
    
    sub_44e4d0(eax_3, &data_5559b1, ecx_9, var_58_2, var_54, var_50_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
