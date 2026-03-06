// 函数名称: sub_439a20
// 虚拟地址: 0x439a20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_439a20()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?fp_format_a@@YAHQBNPADIQADIH_NIQAU__crt_locale_pointers@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_a4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_94[0x74]
    int32_t edx
    __builtin_memcpy(&data_5c2eb0, sub_439430(&var_94, edx, data_5c2e30, &var_94), 0x6c)
    char* eax_6
    
    if (data_5c2f18 s<= 0)
        eax_6 = sub_439780()
    else
        int32_t eax_5 = data_5c2eb0
        char const* const edx_1
        
        switch (eax_5)
            case 0
                edx_1 = "Sure you want to skip your entire turn?"
            label_439add:
                char* var_14
                sub_44f240(&var_14, edx_1)
                int32_t var_8_1 = 0
                char* var_20
                sub_44f240(&var_20, &data_5559b1)
                var_8_1.b = 1
                char* var_1c
                sub_44f240(&var_1c, &data_5559b1)
                var_8_1.b = 2
                char* var_18
                sub_44f240(&var_18, "END TURN?")
                var_8_1.b = 3
                data_5bb260 = 0x3e8
                sub_44f510(&data_5bb2a0, &var_18)
                sub_44f510(&data_5bb2a4, &var_14)
                sub_44f510(&data_5bb2a8, &var_1c)
                eax_6 = sub_44f510(&data_5bb2ac, &var_20)
                data_5bb2b0 = sub_439780
                data_5bb2b4 = sub_439970
                var_8_1.b = 4
                
                if (data_cdf414 != 0)
                    eax_6 = var_18
                    
                    if (eax_6 != 0 && *eax_6 != 0)
                        eax_6 = sub_44f000(&var_18)
                        int32_t temp0_1 = *(eax_6 + 4)
                        *(eax_6 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            eax_6 = sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                
                var_8_1.b = 5
                
                if (data_cdf414 != 0)
                    eax_6 = var_1c
                    
                    if (eax_6 != 0 && *eax_6 != 0)
                        eax_6 = sub_44f000(&var_1c)
                        int32_t temp1_1 = *(eax_6 + 4)
                        *(eax_6 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            eax_6 = sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                
                var_8_1.b = 6
                
                if (data_cdf414 != 0)
                    eax_6 = var_20
                    
                    if (eax_6 != 0 && *eax_6 != 0)
                        eax_6 = sub_44f000(&var_20)
                        int32_t temp2_1 = *(eax_6 + 4)
                        *(eax_6 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            eax_6 = sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                
                int32_t var_8_2 = 7
                
                if (data_cdf414 != 0)
                    eax_6 = var_14
                    
                    if (eax_6 != 0 && *eax_6 != 0)
                        eax_6 = sub_44f000(&var_14)
                        int32_t temp3_1 = *(eax_6 + 4)
                        *(eax_6 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            int32_t eax_7 = sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_7
            case 1
                edx_1 = "Zetta the Encryptor {champion} must be destroyed before attacking opponent.  "
                goto label_439add
            case 2
                edx_1 = "You can still focus to gain {mastery}."
                goto label_439add
            case 3
                edx_1 = "You have an unused Champion {champion}."
                goto label_439add
            case 4
                edx_1 = "You have unused Champions {champion}."
                goto label_439add
            case 5
                edx_1 = "Your opponent has a Champion {champion} that can be destroyed."
                goto label_439add
            case 6
                edx_1 = "Your opponent has Champions {champion} that can be destroyed."
                goto label_439add
            case 7
                edx_1 = "An opponent has a Champion {champion} that can be destroyed."
                goto label_439add
            case 8
                edx_1 = "An opponent has Champion {champion} that can be destroyed."
                goto label_439add
            case 9
                edx_1 = "Your opponents have Champions {champion} that can be destroyed."
                goto label_439add
            case 0xc
                edx_1 = "You have unspent {gems}."
                goto label_439add
            default
                sub_44e4d0(eax_5, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 
                    0x125d, "EndTurnMessage")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6
}
