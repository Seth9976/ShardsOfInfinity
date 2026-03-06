// 函数名称: sub_41f870
// 虚拟地址: 0x41f870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_41f870(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5413f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_472550(arg4, sub_41e8f0)
    sub_4725d0(arg4, sub_41e870)
    void* eax_3
    char* ecx_4
    eax_3, ecx_4 = sub_42aaa0(*(data_65ac38 + 0xb24))
    int32_t esi
    
    if (data_5bb700 == 1)
        esi = 1
    else if (data_5bb70c != 1)
        void* eax_4 = sub_42aaa0(*(data_65ac38 + 0xb24))
        ecx_4 = *(eax_4 + 0x238)
        
        if (ecx_4 == 0 || *ecx_4 == 0)
            int32_t eax_5 = data_5bb70c
            
            if (eax_5 == 2)
                esi = eax_5 + 2
            else if (eax_5 == 4)
                esi = eax_5 + 1
            else if (eax_5 != 3)
                char* eax_6 = *(eax_4 + 4)
                
                if (eax_6 == 0 || *eax_6 == 0)
                    esi = 0
                else
                    esi = 2
            else
                esi = eax_5 - 1
        else
            esi = 6
    else
        esi = 3
    
    int32_t* eax_8
    bool cond:2_1
    
    switch (esi)
        case 0
            int32_t var_28_2 = 0xffffffff
            int32_t eax_9 = sub_469930(arg4)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_9
        case 1
            var_14 = &data_5559b1
            int32_t var_8_1 = 0
            
            if (sub_47a7a0(ecx_4, &var_14) == 0)
                sub_44f510(&var_14, &data_5bb704)
            
            sub_469cf0(&var_14, &data_5bb7e4, arg4, &var_14, 0xffffffff)
            int32_t var_30_2 = 0xffffffff
            sub_469930(arg4)
            int32_t* esi_1 = var_14
            int32_t* ecx_17 = &data_5559b1
            
            if (esi_1 != 0)
                ecx_17 = esi_1
            
            eax_8 = sub_41e610(ecx_17)
            
            if (eax_8.b == 0)
                int32_t var_28_3 = 0xffffffff
                eax_8 = sub_469930(arg4)
            
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0 && esi_1 != 0)
                cond:2_1 = *esi_1 == 0
                goto label_41fa37
        case 2
            sub_469cf0(eax_3 + 4, &data_5bb7d0, arg4, eax_3 + 4, 0xffffffff)
            int32_t var_30_3 = 0xffffffff
            eax_8 = sub_469930(arg4)
        case 3
            int32_t var_28_4 = 0xffffffff
            int32_t ecx_26 = sub_469930(arg4)
            var_14 = &data_5559b1
            int32_t var_8_3 = 3
            
            if (sub_47a7a0(ecx_26, &var_14) == 0)
                sub_44f510(&var_14, &data_5bb708)
            
            sub_469cf0(&var_14, &data_5bb7e4, arg4, &var_14, 0xffffffff)
            sub_469cf0(eax_3 + 4, &data_5bb7d0, arg4, eax_3 + 4, 0xffffffff)
            eax_8 = sub_41e660(&var_14)
            
            if (eax_8.b == 0)
                int32_t var_28_5 = 0xffffffff
                eax_8 = sub_469930(arg4)
            
            int32_t var_8_4 = 4
            
            if (data_cdf414 != 0)
                eax_8 = var_14
                
                if (eax_8 != 0)
                    cond:2_1 = *eax_8 == 0
                label_41fa37:
                    
                    if (not(cond:2_1))
                        eax_8 = sub_44f000(&var_14)
                        int32_t temp0_1 = eax_8[1]
                        eax_8[1] -= 1
                        
                        if (temp0_1 == 1)
                            int32_t eax_12 = sub_45d050(eax_8, eax_8[3] + 0x10)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_12
        case 4
            int32_t var_28_6 = 0xffffffff
            sub_469930(arg4)
            eax_8 = sub_469cf0(eax_3 + 4, &data_5bb7d0, arg4, eax_3 + 4, 0xffffffff)
            
            if (esi == 5)
                int32_t var_28_7 = 0xffffffff
                int32_t eax_18 = sub_469930(arg4)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_18
            
            if (esi == 4)
                int32_t var_28_8 = 0xffffffff
                int32_t eax_19 = sub_469930(arg4)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_19
        case 6
            int32_t var_28_1 = 0xffffffff
            sub_469930(arg4)
            eax_8 = sub_469cf0(eax_3 + 0x238, &data_5bb7d0, arg4, eax_3 + 0x238, 0xffffffff)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}
