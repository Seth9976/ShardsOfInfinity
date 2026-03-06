// 函数名称: sub_4d28d0
// 虚拟地址: 0x4d28d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4d28d0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545718
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_8c = eax_2
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_ce1b88 != 0)
        WINDOWPLACEMENT lpwndpl
        lpwndpl.length = 0x2c
        WINDOWPLACEMENT lpwndpl_1
        lpwndpl_1.length = 0x2c
        GetWindowPlacement(data_ce1790, &lpwndpl)
        GetWindowPlacement(data_ce1c8c, &lpwndpl_1)
        void* eax_3 = data_ce1afc
        char* var_80
        int32_t* ecx_1 = &var_80
        char* const esi_1 = &data_5559b1
        char* edx_1 = &data_5559b1
        
        if (eax_3 != 0)
            char* eax_4 = *(eax_3 + 0x20)
            
            if (eax_4 != 0)
                edx_1 = eax_4
            
            sub_4a8b60(ecx_1, edx_1)
        else
            sub_44f240(ecx_1, &data_5559b1)
        
        int32_t var_8_1 = 0
        char* eax_5 = var_80
        char* edx_2 = &data_5559b1
        
        if (eax_5 != 0)
            edx_2 = eax_5
        
        void var_7c
        sub_48b620(&var_7c, edx_2)
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            char* eax_6 = var_80
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(&var_80)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
        char** ecx_5 = &var_80
        void* eax_8 = data_ce1b00
        char* edx_5 = &data_5559b1
        
        if (eax_8 != 0)
            char* eax_9 = *(eax_8 + 0x20)
            
            if (eax_9 != 0)
                edx_5 = eax_9
            
            sub_4a8b60(ecx_5, edx_5)
        else
            sub_44f240(ecx_5, &data_5559b1)
        
        int32_t var_8_4 = 2
        char* eax_10 = var_80
        char* edx_6 = &data_5559b1
        
        if (eax_10 != 0)
            edx_6 = eax_10
        
        void* var_78
        sub_48b620(&var_78, edx_6)
        int32_t var_8_5 = 3
        
        if (data_cdf414 != 0)
            char* eax_11 = var_80
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_44f000(&var_80)
                int32_t temp1_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
        
        int32_t var_8_6 = 0xffffffff
        char* var_84
        char** ecx_9 = &var_84
        void* eax_13 = data_ce1b04
        char* edx_9 = &data_5559b1
        
        if (eax_13 != 0)
            char* eax_14 = *(eax_13 + 0x20)
            
            if (eax_14 != 0)
                edx_9 = eax_14
            
            sub_4a8b60(ecx_9, edx_9)
        else
            sub_44f240(ecx_9, &data_5559b1)
        
        int32_t var_8_7 = 4
        char* eax_15 = var_84
        
        if (eax_15 != 0)
            esi_1 = eax_15
        
        void* var_74
        sub_48b620(&var_74, esi_1)
        int32_t var_8_8 = 5
        
        if (data_cdf414 != 0)
            char* eax_16 = var_84
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_44f000(&var_84)
                int32_t temp2_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_84 = &data_5559b1
        
        int32_t var_8_9 = 0xffffffff
        int32_t* eax_18 = sub_494290(&var_7c, data_e4718c)
        sub_494520(eax_18, data_e4718c, eax_18, &data_ce1b88)
        result = sub_48b560(sub_491590(eax_18), data_e4718c, &var_7c, 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
