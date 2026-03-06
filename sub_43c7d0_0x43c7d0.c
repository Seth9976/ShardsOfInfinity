// 函数名称: sub_43c7d0
// 虚拟地址: 0x43c7d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_43c7d0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542018
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_2 = arg1
    char* result_1 = result_2
    void* ecx = data_65aabc
    
    if (ecx == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(ecx + 0x434) == 2)
        void* ebx_3
        
        if (*(data_5c2e30 + 4) != *(ecx + 0x648))
            void* eax_10 = sub_41ad20()
            result = sub_42bf90(*(eax_10 + 0x100))
            
            if (result != 0xffffffff)
                void* edx_5 = data_65aabc
                
                if (edx_5 == 0)
                    sub_44e4d0(result, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                ebx_3 = result - *(sub_41af80(eax_10 + 8, *(edx_5 + 0x648)) + 0x28)
            label_43c8c9:
                int32_t var_38_1 = 0xffffffff
                sub_469930(result_2)
                void* esi_3 = nullptr
                
                if (ebx_3 s> 0)
                    esi_3 = ebx_3
                
                if (esi_3 == 0 && *(sub_41ad20() + 0x104) != 0x3e8)
                    *(sub_41ad20() + 0x104) = 0x3e8
                    char* var_20
                    sub_44f240(&var_20, &data_5559b1)
                    void* var_8_1 = esi_3
                    char* var_1c
                    sub_44f240(&var_1c, &data_5559b1)
                    var_8_1.b = 1
                    char* var_18
                    sub_44f240(&var_18, "Your time has expired.")
                    var_8_1.b = 2
                    char* var_14
                    sub_44f240(&var_14, "TIME EXPIRED")
                    var_8_1.b = 3
                    sub_428fd0(&var_1c, &var_18, &var_14, 0x1b, &var_1c, &var_20, sub_43cb50, esi_3)
                    var_8_1.b = 4
                    
                    if (data_cdf414 != esi_3)
                        char* eax_15 = var_14
                        
                        if (eax_15 != 0 && *eax_15 != 0)
                            char* eax_16 = sub_44f000(&var_14)
                            int32_t temp1_1 = *(eax_16 + 4)
                            *(eax_16 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                    
                    var_8_1.b = 5
                    
                    if (data_cdf414 != 0)
                        char* eax_17 = var_18
                        
                        if (eax_17 != 0 && *eax_17 != 0)
                            char* eax_18 = sub_44f000(&var_18)
                            int32_t temp2_1 = *(eax_18 + 4)
                            *(eax_18 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                    
                    var_8_1.b = 6
                    
                    if (data_cdf414 != 0)
                        char* eax_19 = var_1c
                        
                        if (eax_19 != 0 && *eax_19 != 0)
                            char* eax_20 = sub_44f000(&var_1c)
                            int32_t temp3_1 = *(eax_20 + 4)
                            *(eax_20 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
                    
                    int32_t var_8_2 = 7
                    
                    if (data_cdf414 != 0)
                        char* eax_21 = var_20
                        
                        if (eax_21 != 0 && *eax_21 != 0)
                            char* eax_22 = sub_44f000(&var_20)
                            int32_t temp4_1 = *(eax_22 + 4)
                            *(eax_22 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                    
                    int32_t var_8_3 = 0xffffffff
                
                sub_41d110(&result_1, esi_3)
                int32_t var_8_4 = 8
                result = sub_469cf0(&result_1, &data_5c38e4, result_2, &result_1, 0xffffffff)
                int32_t var_8_5 = 9
                
                if (data_cdf414 != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_1)
                        int32_t temp0_1 = result[1]
                        result[1] -= 1
                        
                        if (temp0_1 == 1)
                            result = sub_45d050(result, &result[3][2])
        else
            void* eax_4 = sub_41ad20()
            result = sub_42bf90(*(eax_4 + 0x100))
            
            if (result != 0xffffffff)
                void* edx_1 = data_65aabc
                
                if (edx_1 != 0)
                    void* eax_5 = sub_41af80(eax_4 + 8, *(edx_1 + 0x648))
                    int32_t eax_7
                    int32_t edx_3
                    edx_3:eax_7 = muls.dp.d(0x10624dd3, sub_45ccc0(eax_4 + 8))
                    result_2 = result_1
                    int32_t edx_4 = edx_3 s>> 6
                    ebx_3 = result - *(eax_5 + 0x28) - (*(eax_5 + 0x24) + (edx_4 u>> 0x1f) + edx_4)
                    goto label_43c8c9
                
                sub_44e4d0(result, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
