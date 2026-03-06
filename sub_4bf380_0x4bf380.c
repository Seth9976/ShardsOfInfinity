// 函数名称: sub_4bf380
// 虚拟地址: 0x4bf380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4bf380(int32_t* arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544ee9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_5c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    int128_t xmm0 = *arg2
    int32_t var_2c
    sub_4be160(&var_2c, arg2)
    int32_t var_8_1 = 1
    int32_t eax_3 = var_2c
    int32_t* result
    int32_t var_28
    char* var_24
    char* eax_5
    
    if (eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
        sub_4bd480(arg2)
        int32_t var_20
        sub_4be160(&var_20, arg2)
        var_8_1.b = 3
        int32_t eax_7 = var_20
        int32_t var_1c
        char* var_18
        
        if (eax_7 == 2 || eax_7 == 3 || eax_7 == 4)
            sub_4bd480(arg2)
            char* eax_12
            eax_12.b = **(arg2 + 4)
            
            if (eax_12.b == 0 || eax_12.b == 0x5d || eax_12.b == 0x2c || eax_12.b == 0x24)
                void* eax_45 = sub_4bd420(*arg2)
                result = arg1
                int32_t var_14_8 = 1
                *eax_45 = 7
                *(eax_45 + 0xc) = var_28
                *(eax_45 + 0x10) = var_1c
                result[2] = &data_5559b1
                *result = 3
                result[1] = eax_45
                var_8_1.b = 6
                
                if (data_cdf414 != 0)
                    char* eax_46 = var_18
                    
                    if (eax_46 != 0 && *eax_46 != 0)
                        char* eax_47 = sub_44f000(&var_18)
                        int32_t temp0_1 = *(eax_47 + 4)
                        *(eax_47 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(eax_47, *(eax_47 + 0xc) + 0x10)
                            var_18 = &data_5559b1
                
                int32_t var_8_9 = 7
            else
                int32_t var_38
                sub_4be160(&var_38, arg2)
                var_8_1.b = 8
                int32_t eax_13 = var_38
                char* const var_30
                
                if (eax_13 == 2 || eax_13 == 3 || eax_13 == 4)
                    sub_4bd480(arg2)
                    char* eax_18
                    eax_18.b = **(arg2 + 4)
                    int32_t var_34
                    
                    if (eax_18.b == 0 || eax_18.b == 0x5d || eax_18.b == 0x2c || eax_18.b == 0x24)
                        void* eax_40 = sub_4bd420(*arg2)
                        result = arg1
                        int32_t var_14_7 = 1
                        *eax_40 = 8
                        *(eax_40 + 0xc) = var_28
                        *(eax_40 + 0x10) = var_1c
                        *(eax_40 + 0x14) = var_34
                        result[2] = &data_5559b1
                        *result = 3
                        result[1] = eax_40
                        var_8_1.b = 0xc
                        
                        if (data_cdf414 != 0)
                            char* const eax_41 = var_30
                            
                            if (eax_41 != 0 && *eax_41 != 0)
                                char* eax_42 = sub_44f000(&var_30)
                                int32_t temp3_1 = *(eax_42 + 4)
                                *(eax_42 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                                    var_30 = &data_5559b1
                        
                        var_8_1.b = 0xd
                        
                        if (data_cdf414 != 0)
                            char* eax_43 = var_18
                            
                            if (eax_43 != 0 && *eax_43 != 0)
                                char* eax_44 = sub_44f000(&var_18)
                                int32_t temp4_1 = *(eax_44 + 4)
                                *(eax_44 + 4) -= 1
                                
                                if (temp4_1 == 1)
                                    sub_45d050(eax_44, *(eax_44 + 0xc) + 0x10)
                                    var_18 = &data_5559b1
                        
                        int32_t var_8_8 = 0xe
                    else
                        void var_44
                        sub_4be160(&var_44, arg2)
                        var_8_1.b = 0xf
                        char* const var_3c
                        
                        if (sub_4bd650(&var_44) != 0)
                            sub_4bd480(arg2)
                            
                            if (sub_4bf360(arg2) == 0)
                                *arg2 = xmm0
                                result = arg1
                                sub_4bd5a0(result, &data_e47140)
                                int32_t var_14_6 = 1
                                var_8_1.b = 0x18
                                
                                if (data_cdf414 != 0)
                                    char* const eax_34 = var_3c
                                    
                                    if (eax_34 != 0 && *eax_34 != 0)
                                        char* eax_35 = sub_44f000(&var_3c)
                                        int32_t temp8_1 = *(eax_35 + 4)
                                        *(eax_35 + 4) -= 1
                                        
                                        if (temp8_1 == 1)
                                            sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                                            var_3c = &data_5559b1
                                
                                var_8_1.b = 0x19
                                
                                if (data_cdf414 != 0)
                                    char* const eax_36 = var_30
                                    
                                    if (eax_36 != 0 && *eax_36 != 0)
                                        char* eax_37 = sub_44f000(&var_30)
                                        int32_t temp11_1 = *(eax_37 + 4)
                                        *(eax_37 + 4) -= 1
                                        
                                        if (temp11_1 == 1)
                                            sub_45d050(eax_37, *(eax_37 + 0xc) + 0x10)
                                            var_30 = &data_5559b1
                                
                                var_8_1.b = 0x1a
                                
                                if (data_cdf414 != 0)
                                    char* eax_38 = var_18
                                    
                                    if (eax_38 != 0 && *eax_38 != 0)
                                        char* eax_39 = sub_44f000(&var_18)
                                        int32_t temp14_1 = *(eax_39 + 4)
                                        *(eax_39 + 4) -= 1
                                        
                                        if (temp14_1 == 1)
                                            sub_45d050(eax_39, *(eax_39 + 0xc) + 0x10)
                                            var_18 = &data_5559b1
                                
                                int32_t var_8_7 = 0x1b
                            else
                                void* eax_27 = sub_4bd420(*arg2)
                                result = arg1
                                int32_t var_14_5 = 1
                                *eax_27 = 9
                                *(eax_27 + 0xc) = var_28
                                *(eax_27 + 0x10) = var_1c
                                *(eax_27 + 0x14) = var_34
                                int32_t var_40
                                *(eax_27 + 0x18) = var_40
                                result[2] = &data_5559b1
                                *result = 3
                                result[1] = eax_27
                                var_8_1.b = 0x14
                                
                                if (data_cdf414 != 0)
                                    char* const eax_28 = var_3c
                                    
                                    if (eax_28 != 0 && *eax_28 != 0)
                                        char* eax_29 = sub_44f000(&var_3c)
                                        int32_t temp9_1 = *(eax_29 + 4)
                                        *(eax_29 + 4) -= 1
                                        
                                        if (temp9_1 == 1)
                                            sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
                                            var_3c = &data_5559b1
                                
                                var_8_1.b = 0x15
                                
                                if (data_cdf414 != 0)
                                    char* const eax_30 = var_30
                                    
                                    if (eax_30 != 0 && *eax_30 != 0)
                                        char* eax_31 = sub_44f000(&var_30)
                                        int32_t temp12_1 = *(eax_31 + 4)
                                        *(eax_31 + 4) -= 1
                                        
                                        if (temp12_1 == 1)
                                            sub_45d050(eax_31, *(eax_31 + 0xc) + 0x10)
                                            var_30 = &data_5559b1
                                
                                var_8_1.b = 0x16
                                
                                if (data_cdf414 != 0)
                                    char* eax_32 = var_18
                                    
                                    if (eax_32 != 0 && *eax_32 != 0)
                                        char* eax_33 = sub_44f000(&var_18)
                                        int32_t temp15_1 = *(eax_33 + 4)
                                        *(eax_33 + 4) -= 1
                                        
                                        if (temp15_1 == 1)
                                            sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
                                            var_18 = &data_5559b1
                                
                                int32_t var_8_6 = 0x17
                        else
                            *arg2 = xmm0
                            result = arg1
                            sub_4bd5a0(result, &var_44)
                            int32_t var_14_4 = 1
                            var_8_1.b = 0x10
                            
                            if (data_cdf414 != 0)
                                char* eax_20 = var_3c
                                
                                if (eax_20 != 0 && *eax_20 != 0)
                                    char* eax_21 = sub_44f000(&var_3c)
                                    int32_t temp7_1 = *(eax_21 + 4)
                                    *(eax_21 + 4) -= 1
                                    
                                    if (temp7_1 == 1)
                                        sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                                        var_3c = &data_5559b1
                            
                            var_8_1.b = 0x11
                            
                            if (data_cdf414 != 0)
                                char* const eax_22 = var_30
                                
                                if (eax_22 != 0 && *eax_22 != 0)
                                    char* eax_23 = sub_44f000(&var_30)
                                    int32_t temp10_1 = *(eax_23 + 4)
                                    *(eax_23 + 4) -= 1
                                    
                                    if (temp10_1 == 1)
                                        sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
                                        var_30 = &data_5559b1
                            
                            var_8_1.b = 0x12
                            
                            if (data_cdf414 != 0)
                                char* eax_24 = var_18
                                
                                if (eax_24 != 0 && *eax_24 != 0)
                                    char* eax_25 = sub_44f000(&var_18)
                                    int32_t temp13_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp13_1 == 1)
                                        sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
                                        var_18 = &data_5559b1
                            
                            int32_t var_8_5 = 0x13
                else
                    *arg2 = xmm0
                    result = arg1
                    sub_4bd5a0(result, &var_38)
                    int32_t var_14_3 = 1
                    var_8_1.b = 9
                    
                    if (data_cdf414 != 0)
                        char* eax_14 = var_30
                        
                        if (eax_14 != 0 && *eax_14 != 0)
                            char* eax_15 = sub_44f000(&var_30)
                            int32_t temp5_1 = *(eax_15 + 4)
                            *(eax_15 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                                var_30 = &data_5559b1
                    
                    var_8_1.b = 0xa
                    
                    if (data_cdf414 != 0)
                        char* eax_16 = var_18
                        
                        if (eax_16 != 0 && *eax_16 != 0)
                            char* eax_17 = sub_44f000(&var_18)
                            int32_t temp6_1 = *(eax_17 + 4)
                            *(eax_17 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                                var_18 = &data_5559b1
                    
                    int32_t var_8_4 = 0xb
        else
            *arg2 = xmm0
            result = arg1
            *result = eax_7
            result[1] = var_1c
            char* eax_9 = var_18
            result[2] = eax_9
            
            if (eax_9 != 0 && *eax_9 != 0)
                char* eax_10 = sub_44f000(&result[2])
                *(eax_10 + 4) += 1
                eax_9 = var_18
            
            int32_t var_14_2 = 1
            var_8_1.b = 4
            
            if (data_cdf414 != 0 && eax_9 != 0 && *eax_9 != 0)
                char* eax_11 = sub_44f000(&var_18)
                int32_t temp1_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_18 = &data_5559b1
            
            int32_t var_8_3 = 5
        
        if (data_cdf414 != 0)
            eax_5 = var_24
        label_4bfa0c:
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_48 = sub_44f000(&var_24)
                int32_t temp2_1 = *(eax_48 + 4)
                *(eax_48 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_48, *(eax_48 + 0xc) + 0x10)
    else
        result = arg1
        *result = eax_3
        result[1] = var_28
        eax_5 = var_24
        result[2] = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_44f000(&result[2])
            *(eax_6 + 4) += 1
            eax_5 = var_24
        
        int32_t var_14_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cdf414 != 0)
            goto label_4bfa0c
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
