// 函数名称: sub_43bf50
// 虚拟地址: 0x43bf50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_43bf50(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541fd4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14 = arg1
    char* const edi = &data_5559b1
    
    if (data_e48570 s> *(*fsbase->ThreadLocalStoragePointer + 4))
        __Init_thread_header(&data_e48570)
        
        if (data_e48570 == 0xffffffff)
            int32_t var_8_1 = 0
            sub_44f240(&data_e48574, &data_5559b1)
            _atexit(sub_546f90)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_e48570)
        
        arg1 = var_14
    
    int32_t* eax_5 = data_5c2e30
    
    if (*eax_5 != 0xa)
        char* eax_10 = eax_5[1]
        char* var_18 = eax_10
        
        if (eax_10 == arg1)
            var_14 = &data_5559b1
            int32_t var_8_5 = 5
            int32_t eax_19 = *(sub_41ad20() + 0xf8) - 1
            
            if (eax_19 u<= 4)
                char* var_2c_3
                
                switch (eax_19)
                    case 0
                        var_2c_3 = "Your mission: Buy a card."
                    case 1
                        var_2c_3 = "Your mission: Use the Command Seer."
                    case 2
                        var_2c_3 = "Your mission: Attack you opponent!"
                    case 3
                        var_2c_3 = "Your mission: Level up!"
                    case 4
                        var_2c_3 = "Your mission: Banish two cards!"
                
                sub_44f590(&var_14, var_2c_3)
                sub_44f510(&data_e48574, &var_14)
                sub_44f510(arg2, &data_e48574)
                int32_t var_8_6 = 6
                int32_t* eax_20
                
                if (data_cdf414 != 0)
                    eax_20 = var_14
                    
                    if (eax_20 != 0 && *eax_20 != 0)
                        eax_20 = sub_44f000(&var_14)
                        int32_t temp2_1 = eax_20[1]
                        eax_20[1] -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_20, eax_20[3] + 0x10)
                
                eax_20.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_20
            
            int32_t* eax_21 = data_5c2e30
            char const* const var_2c_5
            
            switch (*eax_21)
                case 0
                    sub_44e4d0(eax_21, &data_5559b1, "Halt", 
                        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x15ae, "GetPromptText")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                case 1
                    void* ecx_16 = data_65aabc
                    
                    if (ecx_16 == 0)
                        sub_44e4d0(eax_21, &data_5559b1, "gClient", 
                            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    if (data_5bcd70 != *(ecx_16 + 0x648))
                        sub_44f510(arg2, &data_e48574)
                        int32_t* eax_23
                        eax_23.b = 0
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_23
                    
                    if (sub_42bf40() != 1)
                        var_2c_5 = "Play cards, Exhaust champions, or Recruit from the center row"
                    else
                        var_2c_5 =
                            "Drag to Play cards, Exhaust champions, or Recruit from the center row"
                    
                    sub_44f590(&data_e48574, var_2c_5)
                case 2
                    sub_44f590(&data_e48574, "Banish a card from your hand or discard or Pass")
                case 3
                    sub_44f590(&data_e48574, "Acquire a card from the center row")
                case 4
                    sub_44f590(&data_e48574, "Reveal an Undergrowth Ally to trigger Unify or Pass")
                case 5
                    int32_t ecx_20 = eax_21[0xd1]
                    
                    if (ecx_20 == 0)
                    label_43c2c6:
                        
                        if (eax_21[0xcd] != 0)
                            if (eax_21[0xcf] == 0)
                                var_2c_5 = "Reveal an Undergrowth card to trigger Dominion, or Pass"
                            else
                                var_2c_5 = "
                                    Reveal an Undergrowth and Wraethe card to trigger Dominion, or Pass"
                            
                            sub_44f590(&data_e48574, var_2c_5)
                        else if (ecx_20 != 0)
                            sub_44f590(&data_e48574, 
                                "Reveal a Homodeus card to trigger Dominion, or Pass")
                        else if (eax_21[0xcf] != 0)
                            sub_44f590(&data_e48574, 
                                "Reveal a Wraethe card to trigger Dominion, or Pass")
                    else
                        int32_t edx_8 = eax_21[0xcd]
                        
                        if (edx_8 == 0)
                        label_43c2b6:
                            
                            if (eax_21[0xcf] == 0)
                                goto label_43c2c6
                            
                            sub_44f590(&data_e48574, 
                                "Reveal a Homodeus and Wraethe card to trigger Dominion, or Pass")
                        else if (eax_21[0xcf] == 0)
                            if (edx_8 == 0)
                                goto label_43c2b6
                            
                            sub_44f590(&data_e48574, 
                                "Reveal a Homodeus and Undergrowth card to trigger Dominion, or Pass")
                        else
                            sub_44f590(&data_e48574, 
                                "Reveal a Homodeus, Undergrowth and Wraethe card to trigger Dominion, or Pass")
                case 6
                    sub_44f590(&data_e48574, "Choose an opponents Champion to destroy")
                case 7
                    sub_44f590(&data_e48574, "Choose an opponent to lose mastery")
                case 8
                    sub_44f590(&data_e48574, "Return a card to your hand")
                case 9
                    sub_44f590(&data_e48574, "Copy an ally in play")
                case 0xb
                    nop
                default
                    sub_44e4d0(eax_21, &data_5559b1, "Halt", 
                        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x1610, "GetPromptText")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
        else
            void* eax_11 = sub_41ad20()
            void* eax_12 = sub_41af80(eax_11 + 8, var_18)
            int32_t** var_2c_1 = &var_14
            sub_4167e0(eax_12, eax_11 + 8, &var_18, eax_12)
            int32_t var_8_3 = 1
            char* esi_2 = var_18
            
            if (esi_2 != 0)
                edi = esi_2
            
            char* const var_34_1 = edi
            var_8_3.b = 2
            sub_44f510(&data_e48574, sub_44f980(&var_14, "Waiting for %s"))
            var_8_3.b = 3
            
            if (data_cdf414 != 0)
                int32_t* eax_14 = var_14
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_44f000(&var_14)
                    int32_t temp0_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
            
            int32_t var_8_4 = 4
            
            if (data_cdf414 != 0 && esi_2 != 0 && *esi_2 != 0)
                char* eax_16 = sub_44f000(&var_18)
                int32_t temp1_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
        
        int32_t var_8_7 = 0xffffffff
    else
        char* eax_6 = data_e48574
        
        if (eax_6 != 0)
            edi = eax_6
        
        if (edi != "Game Over")
            sub_44f100(eax_6, 9, &data_e48574, 0)
            __builtin_strncpy(data_e48574, "Game Ove", 8)
            *(data_e48574 + 8) = 0x72
            sub_44f510(arg2, &data_e48574)
            int32_t* eax_9
            eax_9.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
    
    sub_44f510(arg2, &data_e48574)
    int32_t* eax_25
    eax_25.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_25
}
