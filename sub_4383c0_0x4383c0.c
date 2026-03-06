// 函数名称: sub_4383c0
// 虚拟地址: 0x4383c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4383c0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    void* ecx = data_65aabc
    char const* const var_38
    int32_t var_34
    char const* const var_30_1
    char* ecx_1
    
    if (ecx != 0)
        int32_t ecx_2 = *(ecx + 0x648)
        
        if (data_5c2e30[1] != ecx_2 || data_5bcd70 != ecx_2 || data_5bcc88 != 0)
        label_438481:
            eax_1.b = 0
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_1
        
        eax_1 = sub_433c60(ecx_2)
        
        if (eax_1[0xc] != 0 || *data_5c2e30 == 7)
            goto label_438481
        
        void* eax_2 = sub_443fc0()
        
        if (eax_2 != 0)
            eax_1 = sub_438240(sub_437070(arg1), 1)
        
        if (eax_2 != 0 && eax_1.b == 0)
            goto label_438481
        
        int32_t** esi_1 = data_5c2e30
        int32_t ecx_5 = data_5c2dbc
        eax_1 = *esi_1
        
        if (eax_1 == 2 && esi_1[0xcb] == 2 && ecx_5 == 2)
            eax_1 = &data_5c2d9c
            
            while (true)
                if (*eax_1 == arg1)
                    if (arg2 == 0)
                        break
                    
                    *arg2 = 6
                    eax_1.b = 1
                    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                    return eax_1
                
                eax_1 = &eax_1[1]
                
                if (eax_1 s>= 0x5c2da4)
                    goto label_438481
            
            goto label_4385e5
        
        if (eax_1 == 5)
            int32_t ebx_1 = 0
            int32_t var_10 = 0
            char var_c_1 = 0
            
            if (ecx_5 s<= 0)
            label_438505:
                int32_t var_1c = 1
                int32_t* ebx_2 = &var_1c
                int32_t var_18_1 = 3
                int32_t var_14_1 = 4
                
                while (true)
                    int32_t eax_7 = *ebx_2
                    
                    if (*(&var_10 + eax_7) == 0)
                        int32_t ecx_11
                        int32_t edx_2
                        
                        if (eax_7 != 1)
                            if (eax_7 == 3)
                                edx_2 = esi_1[0xcd]
                                ecx_11 = esi_1[0xcc]
                                goto label_438585
                            
                            if (eax_7 == 4)
                                edx_2 = esi_1[0xcf]
                                ecx_11 = esi_1[0xce]
                                goto label_438585
                        else
                            edx_2 = esi_1[0xd1]
                            ecx_11 = esi_1[0xd0]
                        label_438585:
                            
                            if (sub_434ab0(eax_7, edx_2, ecx_11, arg1).b != 0)
                                break
                    
                    ebx_2 = &ebx_2[1]
                    
                    if (ebx_2 == &var_10)
                        int32_t* eax_8
                        eax_8.b = 0
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return eax_8
            else
                while (true)
                    *(&var_10 + *(*(sub_445bb0(data_5c2e2c, (*((ebx_1 << 2) + &data_5c2d9c)).w) + 0x10)
                        + 0xc)) = 1
                    
                    if (*((ebx_1 << 2) + &data_5c2d9c) == arg1)
                        eax_1 = arg2
                        
                        if (eax_1 == 0)
                            break
                        
                        *eax_1 = 9
                        eax_1.b = 1
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return eax_1
                    
                    ebx_1 += 1
                    
                    if (ebx_1 s>= data_5c2dbc)
                        esi_1 = data_5c2e30
                        goto label_438505
            
            goto label_4385e5
        
        void* ecx_36
        int32_t edx_10
        
        if (arg2 == 0)
            edx_10 = esi_1[0xca]
            ecx_36 = &esi_1[2]
        label_438734:
            int32_t eax_12 = sub_434ab0(eax_1, edx_10, ecx_36, arg1)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_12
        
        if (eax_1 u<= 0xa)
            switch (eax_1)
                case nullptr, 7, 0xa
                    goto label_438481
                case 1
                    eax_1 = sub_434ab0(eax_1, esi_1[0xcd], esi_1[0xcc], arg1)
                    
                    if (eax_1.b != 0)
                        *arg2 = 1
                    label_4385e5:
                        eax_1.b = 1
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return eax_1
                    
                    int32_t eax_9 = sub_434ab0(eax_1, esi_1[0xd3], esi_1[0xd2], arg1)
                    
                    if (eax_9.b != 0)
                        *arg2 = 3
                        eax_9.b = 1
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return eax_9
                    
                    int32_t eax_10 = sub_434ab0(eax_9, esi_1[0xd1], esi_1[0xd0], arg1)
                    
                    if (eax_10.b != 0)
                        *arg2 = 2
                        eax_10.b = 1
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return eax_10
                    
                    int32_t eax_11 = sub_434ab0(eax_10, esi_1[0xcf], esi_1[0xce], arg1)
                    
                    if (eax_11.b != 0)
                        *arg2 = 5
                        eax_11.b = 1
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return eax_11
                    
                    if (sub_434ab0(eax_11, esi_1[0xd5], esi_1[0xd4], arg1).b == 0)
                        goto label_438481
                    
                    *arg2 = 0xa
                    eax_1.b = 1
                    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                    return eax_1
                case 2
                    *arg2 = 6
                    void* esi_2 = data_5c2e30
                    eax_1 = sub_434ab0(eax_1, *(esi_2 + 0x33c), *(esi_2 + 0x338), arg1)
                    
                    if (eax_1.b == 0)
                        eax_1 = sub_434ab0(eax_1, *(esi_2 + 0x334), *(esi_2 + 0x330), arg1)
                        
                        if (eax_1.b == 0)
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return eax_1
                    
                    goto label_4385e5
                case 3
                    *arg2 = 4
                case 4
                    *arg2 = 9
                case 6
                    *arg2 = 0xa
                case 8
                    *arg2 = 8
                case 9
                    *arg2 = 7
            
            void* ecx_35 = data_5c2e30
            edx_10 = *(ecx_35 + 0x334)
            ecx_36 = *(ecx_35 + 0x330)
            goto label_438734
        
        var_30_1 = "IsCardInActiveSet"
        var_34 = 0xf50
        var_38 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
        ecx_1 = "Halt"
    else
        var_30_1 = "GetClient"
        var_34 = 0x74
        var_38 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, var_38, var_34, var_30_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
