// 函数名称: sub_417c10
// 虚拟地址: 0x417c10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_417c10(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541090
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_11
    
    if (sub_476940(arg1, &var_11) != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return var_11
    
    char* ecx_2 = *arg1
    
    if (ecx_2 == 1)
        int32_t eax_4 = arg1[1]
        
        if (eax_4 == 0xd && (arg1[2].b & 4) != 0)
            sub_4154d0()
            void* eax_5
            eax_5.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_5
        
        if (eax_4 != 0x57)
            goto label_417d66
        
        sub_415580()
        char* eax_6
        eax_6.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    if (ecx_2 != 0)
        if (ecx_2 != 9 || data_5bb244.d != 0xf || data_5bb244:4 == 0)
            goto label_417d66
        
        float xmm1_1 = _mm_cvtepi32_ps(zx.o(arg1[3]))
        sub_442110(xmm1_1 / sub_41b760(xmm1_1))
        void* eax_11
        eax_11.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
    
    int32_t eax_7 = arg1[1]
    
    if (eax_7 == 0x73)
        sub_439080()
        void* eax_8
        eax_8.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    if (eax_7 != 0x63)
    label_417d66:
        int32_t eax_12
        eax_12.b = *(data_cdf428 + 0x20)
        
        if (eax_12.b == 0)
        label_417f61:
            eax_12.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_12
        
        if (ecx_2 != 0 || arg1[1] != 0x64)
            if (eax_12.b == 0)
                goto label_417f61
            
            if (ecx_2 == 1)
                if (arg1[1] == 0x4e)
                    int32_t ecx_20 = data_e47300
                    int32_t var_2c_1 = ecx_20
                    data_e47300 = ecx_20 + 1
                    char* var_1c
                    int32_t ecx_21 = sub_44f980(&var_1c, "New Notification %d")
                    int32_t var_8_1 = 0
                    char* const esi_3 = &data_5559b1
                    char* eax_22 = var_1c
                    char* const edx_3 = &data_5559b1
                    
                    if (eax_22 != 0)
                        edx_3 = eax_22
                    
                    sub_481c70(ecx_21, edx_3)
                    int32_t ecx_22 = data_e47300
                    int32_t var_38_1 = ecx_22
                    data_e47300 = ecx_22 + 1
                    int32_t var_18
                    int32_t ecx_23 = sub_44f980(&var_18, "New Notification %d")
                    var_8_1.b = 1
                    int32_t eax_24 = var_18
                    
                    if (eax_24 != 0)
                        esi_3 = eax_24
                    
                    sub_481c70(ecx_23, esi_3)
                    var_8_1.b = 2
                    
                    if (data_cdf414 != 0)
                        eax_12 = var_18
                        
                        if (eax_12 != 0 && *eax_12 != 0)
                            eax_12 = sub_44f000(&var_18)
                            int32_t temp0_1 = *(eax_12 + 4)
                            *(eax_12 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
                                var_18 = &data_5559b1
                    
                    int32_t var_8_2 = 3
                    
                    if (data_cdf414 != 0)
                        eax_12 = var_1c
                        
                        if (eax_12 != 0 && *eax_12 != 0)
                            eax_12 = sub_44f000(&var_1c)
                            int32_t temp1_1 = *(eax_12 + 4)
                            *(eax_12 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
                                var_1c = &data_5559b1
                    
                    int32_t var_8_3 = 0xffffffff
                    ecx_2 = *arg1
                
                if (ecx_2 == 1)
                    eax_12 = arg1[1]
                    
                    if (eax_12 == 0x5a && (arg1[2].b & 2) != 0)
                        sub_41aff0()
                        void* eax_25
                        eax_25.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_25
                    
                    if (eax_12 == 0x59 && (arg1[2].b & 2) != 0)
                        sub_41b0e0()
                        void* eax_26
                        eax_26.b = 1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_26
            
            goto label_417f61
        
        sub_4373e0(sub_41af20(1))
        int32_t eax_14 = sub_41af20(1)
        *(sub_445b50(sub_444860(), eax_14) + 8) = 0
        sub_4373e0(sub_41af20(2))
        int32_t eax_18 = sub_41af20(2)
        void* eax_20 = sub_445b50(sub_444860(), eax_18)
        *(eax_20 + 8) = 0
        sub_437760(eax_20, 0, 0, 0)
    else
        data_5bccbc = data_5bccbc == 0
        
        if (sub_443fc0() != 0 && sub_443fc0()[5] == 5)
            sub_443df0(5)
            void* eax_10
            eax_10.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_10
    
    int32_t* eax_9
    eax_9.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_9
}
