// 函数名称: sub_4c0560
// 虚拟地址: 0x4c0560
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4c0560(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545051
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_70 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    int32_t var_24
    sub_4beed0(sub_4bd480(arg2), arg2, &var_24, &data_596978, 4)
    int32_t var_14_1 = 2
    int32_t var_8_1 = 1
    int32_t eax_4 = var_24
    int32_t var_20
    char* var_1c
    char* edi_1
    
    if (eax_4 != 2 && eax_4 != 3 && eax_4 != 4)
        edi_1 = var_1c
        *arg1 = eax_4
        arg1[1] = var_20
        arg1[2] = edi_1
        
        if (edi_1 != 0 && *edi_1 != 0)
            char* eax_6 = sub_44f000(&arg1[2])
            *(eax_6 + 4) += 1
        
        int32_t var_14_2 = 3
        int32_t var_8_2 = 2
        goto label_4c0600
    
    int32_t var_3c
    sub_4bd500(sub_4bd480(arg2), arg2, &var_3c, U",")
    var_8_1.b = 3
    int32_t ebx_1 = var_3c
    char* var_34
    
    if (ebx_1 != 2 && ebx_1 != 3 && ebx_1 != 4)
        edi_1 = var_1c
        *arg1 = var_24
        arg1[1] = var_20
        arg1[2] = edi_1
        
        if (edi_1 != 0 && *edi_1 != 0)
            char* eax_10 = sub_44f000(&arg1[2])
            *(eax_10 + 4) += 1
        
        int32_t var_14_3 = 3
        var_8_1.b = 4
        
        if (data_cdf414 != 0)
            char* eax_11 = var_34
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_44f000(&var_34)
                int32_t temp1_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
        
        int32_t var_8_3 = 5
        goto label_4c0600
    
    void var_30
    sub_4beed0(sub_4bd480(arg2), arg2, &var_30, &data_596978, 4)
    int32_t var_14_4 = 6
    var_8_1.b = 6
    char* var_28
    bool cond:0_1
    
    if (ebx_1 == 2 || ebx_1 == 3 || ebx_1 == 4)
        void var_54
        sub_4bd500(sub_4bd480(arg2), arg2, &var_54, U"$")
        var_8_1.b = 0xa
        int32_t var_60
        char* var_4c
        
        if (ebx_1 == 2 || ebx_1 == 3 || ebx_1 == 4)
            sub_4bd480(arg2)
            int32_t var_48
            sub_4c0410(&var_48, arg2)
            var_8_1.b = 0x11
            int32_t eax_31 = var_48
            char* const var_40
            
            if (eax_31 == 2 || eax_31 == 3 || eax_31 == 4)
                sub_4bd480(arg2)
                int32_t* var_74_3 = &var_48
                void* eax_44 = sub_4bd8a0(&var_30, &var_24, *arg2, &var_30)
                arg1[2] = &data_5559b1
                *arg1 = 3
                arg1[1] = eax_44
                int32_t var_14_8 = 7
                var_8_1.b = 0x19
                
                if (data_cdf414 != 0)
                    char* const eax_45 = var_40
                    
                    if (eax_45 != 0 && *eax_45 != 0)
                        char* eax_46 = sub_44f000(&var_40)
                        int32_t temp0_1 = *(eax_46 + 4)
                        *(eax_46 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(eax_46, *(eax_46 + 0xc) + 0x10)
                            var_40 = &data_5559b1
                
                var_8_1.b = 0x1a
                
                if (data_cdf414 != 0)
                    char* eax_47 = var_4c
                    
                    if (eax_47 != 0 && *eax_47 != 0)
                        char* eax_48 = sub_44f000(&var_4c)
                        int32_t temp2_1 = *(eax_48 + 4)
                        *(eax_48 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_45d050(eax_48, *(eax_48 + 0xc) + 0x10)
                
                var_8_1.b = 0x1b
                
                if (data_cdf414 != 0)
                    char* eax_49 = var_28
                    
                    if (eax_49 != 0 && *eax_49 != 0)
                        char* eax_50 = sub_44f000(&var_28)
                        int32_t temp6_1 = *(eax_50 + 4)
                        *(eax_50 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_45d050(eax_50, *(eax_50 + 0xc) + 0x10)
                
                var_8_1.b = 0x1c
                
                if (data_cdf414 != 0)
                    char* eax_51 = var_34
                    
                    if (eax_51 != 0 && *eax_51 != 0)
                        char* eax_52 = sub_44f000(&var_34)
                        int32_t temp10_1 = *(eax_52 + 4)
                        *(eax_52 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            sub_45d050(eax_52, *(eax_52 + 0xc) + 0x10)
                
                int32_t var_8_7 = 0x1d
            else
                void* eax_32 = sub_4bd420(*arg2)
                char* const var_58_2 = &data_5559b1
                var_60 = 3
                void* var_5c_2 = eax_32
                *eax_32 = 0xc
                *(eax_32 + 4) = 1
                var_8_1.b = 0x12
                int32_t* var_74_2 = &var_60
                void* eax_34 = sub_4bd8a0(&var_30, &var_24, *arg2, &var_30)
                arg1[2] = &data_5559b1
                *arg1 = 3
                arg1[1] = eax_34
                int32_t var_14_7 = 7
                var_8_1.b = 0x14
                
                if (data_cdf414 != 0)
                    char* eax_35 = var_40
                    
                    if (eax_35 != 0 && *eax_35 != 0)
                        char* eax_36 = sub_44f000(&var_40)
                        int32_t temp7_1 = *(eax_36 + 4)
                        *(eax_36 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_45d050(eax_36, *(eax_36 + 0xc) + 0x10)
                            var_40 = &data_5559b1
                
                var_8_1.b = 0x15
                
                if (data_cdf414 != 0)
                    char* eax_37 = var_4c
                    
                    if (eax_37 != 0 && *eax_37 != 0)
                        char* eax_38 = sub_44f000(&var_4c)
                        int32_t temp11_1 = *(eax_38 + 4)
                        *(eax_38 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
                
                var_8_1.b = 0x16
                
                if (data_cdf414 != 0)
                    char* eax_39 = var_28
                    
                    if (eax_39 != 0 && *eax_39 != 0)
                        char* eax_40 = sub_44f000(&var_28)
                        int32_t temp13_1 = *(eax_40 + 4)
                        *(eax_40 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
                
                var_8_1.b = 0x17
                
                if (data_cdf414 != 0)
                    char* eax_41 = var_34
                    
                    if (eax_41 != 0 && *eax_41 != 0)
                        char* eax_42 = sub_44f000(&var_34)
                        int32_t temp14_1 = *(eax_42 + 4)
                        *(eax_42 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                
                int32_t var_8_6 = 0x18
        else
            void* eax_22 = sub_4bd420(*arg2)
            char* const var_58_1 = &data_5559b1
            var_60 = 3
            void* var_5c_1 = eax_22
            *eax_22 = 0xc
            *(eax_22 + 4) = 1
            var_8_1.b = 0xb
            int32_t* var_74_1 = &var_60
            void* eax_24 = sub_4bd8a0(&var_30, &var_24, *arg2, &var_30)
            arg1[2] = &data_5559b1
            *arg1 = 3
            arg1[1] = eax_24
            int32_t var_14_6 = 7
            var_8_1.b = 0xd
            
            if (data_cdf414 != 0)
                char* eax_25 = var_4c
                
                if (eax_25 != 0 && *eax_25 != 0)
                    char* eax_26 = sub_44f000(&var_4c)
                    int32_t temp3_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
            
            var_8_1.b = 0xe
            
            if (data_cdf414 != 0)
                char* eax_27 = var_28
                
                if (eax_27 != 0 && *eax_27 != 0)
                    char* eax_28 = sub_44f000(&var_28)
                    int32_t temp8_1 = *(eax_28 + 4)
                    *(eax_28 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
            
            var_8_1.b = 0xf
            
            if (data_cdf414 != 0)
                char* eax_29 = var_34
                
                if (eax_29 != 0 && *eax_29 != 0)
                    char* eax_30 = sub_44f000(&var_34)
                    int32_t temp12_1 = *(eax_30 + 4)
                    *(eax_30 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
            
            int32_t var_8_5 = 0x10
        
        if (data_cdf414 != 0)
            char* eax_53 = var_1c
            
            if (eax_53 != 0)
                cond:0_1 = *eax_53 == 0
                goto label_4c0b5b
    else
        edi_1 = var_1c
        *arg1 = var_24
        arg1[1] = var_20
        arg1[2] = edi_1
        
        if (edi_1 != 0 && *edi_1 != 0)
            char* eax_16 = sub_44f000(&arg1[2])
            *(eax_16 + 4) += 1
        
        int32_t var_14_5 = 7
        var_8_1.b = 7
        
        if (data_cdf414 != 0)
            char* eax_17 = var_28
            
            if (eax_17 != 0 && *eax_17 != 0)
                char* eax_18 = sub_44f000(&var_28)
                int32_t temp4_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
        
        var_8_1.b = 8
        
        if (data_cdf414 != 0)
            char* eax_19 = var_34
            
            if (eax_19 != 0 && *eax_19 != 0)
                char* eax_20 = sub_44f000(&var_34)
                int32_t temp9_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp9_1 == 1)
                    sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
        
        int32_t var_8_4 = 9
    label_4c0600:
        
        if (data_cdf414 != 0 && edi_1 != 0)
            cond:0_1 = *edi_1 == 0
        label_4c0b5b:
            
            if (not(cond:0_1))
                char* eax_54 = sub_44f000(&var_1c)
                int32_t temp5_1 = *(eax_54 + 4)
                *(eax_54 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(eax_54, *(eax_54 + 0xc) + 0x10)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
