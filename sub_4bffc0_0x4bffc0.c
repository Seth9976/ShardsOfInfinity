// 函数名称: sub_4bffc0
// 虚拟地址: 0x4bffc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4bffc0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544fa7
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_5c = arg1
    int32_t* var_70 = arg1
    int32_t var_58 = 0
    int64_t var_54 = 0
    int32_t var_4c = 0
    char* const var_48 = &data_5559b1
    int32_t var_8_1 = 1
    void var_44
    _memset(&var_44, 0, 0x30)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_84)(void* arg1) = sub_411610
    `eh vector constructor iterator'(&var_44, 0xc, 4, sub_411600)
    int32_t var_8_2 = 2
    void var_3c
    void* esi = &var_3c
    int32_t edi = 0
    
    while (true)
        void var_6c
        int32_t* eax_4 = (&data_596988)[edi](&var_6c, arg2, eax_2)
        var_8_2.b = 3
        *(esi - 8) = *eax_4
        *(esi - 4) = eax_4[1]
        sub_44f510(esi, &eax_4[2])
        var_8_2.b = 4
        
        if (data_cdf414 != 0)
            char* const var_64
            char* eax_8 = var_64
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_44f000(&var_64)
                int32_t temp0_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                    var_64 = &data_5559b1
        
        var_8_2.b = 2
        int32_t eax_10 = *(esi - 8)
        
        if (eax_10 != 2 && eax_10 != 3 && eax_10 != 4)
            var_54.d = 1
            void* ecx_11 = &var_44 + edi * 0xc
            var_54:4.d = *ecx_11
            int32_t eax_22 = *(ecx_11 + 4)
            sub_44f510(&var_48, esi)
            *arg1 = var_54.d
            arg1[1] = var_54:4.d
            arg1[2] = eax_22
            char* const eax_26 = var_48
            void* var_5c_2 = &arg1[1]
            arg1[3] = eax_26
            
            if (eax_26 != 0 && *eax_26 != 0)
                char* eax_27 = sub_44f000(&arg1[3])
                *(eax_27 + 4) += 1
            
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_84_5)(void* arg1) = sub_411610
            var_8_2.b = 5
            (&arg1[4], &var_44, 0xc, 4, sub_4bd5a0)
            int32_t var_58_2 = 1
            int32_t var_8_4 = 6
            `eh vector vbase constructor iterator'(&var_44, 0xc, 4, sub_411610)
            var_8_4.b = 7
            break
        
        edi += 1
        esi += 0xc
        
        if (edi s>= 3)
            *arg1 = var_54.d
            arg1[1] = var_54:4.d
            arg1[2] = var_4c
            char* const eax_14 = var_48
            int32_t* var_5c_1 = &arg1[1]
            arg1[3] = eax_14
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_44f000(&arg1[3])
                *(eax_15 + 4) += 1
            
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_84_3)(void* arg1) = sub_411610
            var_8_2.b = 8
            (&arg1[4], &var_44, 0xc, 4, sub_4bd5a0)
            int32_t var_58_1 = 1
            int32_t var_8_3 = 9
            `eh vector vbase constructor iterator'(&var_44, 0xc, 4, sub_411610)
            var_8_3.b = 0xa
            break
    
    if (data_cdf414 != 0)
        char* const eax_17 = var_48
        
        if (eax_17 != 0 && *eax_17 != 0)
            char* eax_18 = sub_44f000(&var_48)
            int32_t temp1_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return arg1
}
