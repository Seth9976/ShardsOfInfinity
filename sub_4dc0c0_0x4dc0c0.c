// 函数名称: sub_4dc0c0
// 虚拟地址: 0x4dc0c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __convention("regparm")sub_4dc0c0(int32_t arg1, char* arg2, char** arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5459ea
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_6c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    void* var_70 = arg3
    
    if (arg2 == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_70, arg2)
    char* var_2c
    sub_48e630(&var_2c)
    int32_t var_8_1 = 1
    char* var_24
    sub_490ce0(&var_24, arg2)
    char* eax_4 = var_24
    char* var_44 = eax_4
    
    if (eax_4 == 0 || *eax_4 == 0)
        var_70 = arg2
        sub_44e260("OpenGl shader failed to read file: %s")
        *arg3 = &data_5559b1
        int32_t var_18_7 = 1
        var_8_1.b = 3
        
        if (data_cdf414 != 0)
            char* eax_50 = var_24
            
            if (eax_50 != 0 && *eax_50 != 0)
                char* eax_51 = sub_44f000(&var_24)
                int32_t temp0_1 = *(eax_51 + 4)
                *(eax_51 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_51, *(eax_51 + 0xc) + 0x10)
                    var_24 = &data_5559b1
        
        int32_t var_8_3 = 4
        
        if (data_cdf414 != 0)
            char* eax_52 = var_2c
            
            if (eax_52 != 0 && *eax_52 != 0)
                char* eax_53 = sub_44f000(&var_2c)
                int32_t temp1_1 = *(eax_53 + 4)
                *(eax_53 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_53, *(eax_53 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    char* const esi = &data_5559b1
    char* const var_20 = &data_5559b1
    var_8_1.b = 5
    int32_t var_50 = 1
    char* var_4c
    
    if (arg4 != 0)
        char* eax_5 = var_2c
        char* const ecx_3 = &data_5559b1
        
        if (eax_5 != 0)
            ecx_3 = eax_5
        
        var_70 = ecx_3
        int32_t var_74_1 = 0
        var_8_1.b = 6
        char* ecx_4 = &data_5559b1
        char* eax_7 = *sub_44f980(&var_4c, "#line %d "%s"\n")
        
        if (eax_7 != 0)
            ecx_4 = eax_7
        
        var_70 = ecx_4
        sub_44f620(&var_20, var_70)
        var_8_1.b = 7
        
        if (data_cdf414 != 0)
            char* eax_8 = var_4c
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_44f000(&var_4c)
                int32_t temp2_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
        
        var_8_1.b = 5
        esi = var_20
    
    void* var_40
    var_70 = sub_4a8d30(&var_40, arg2)
    var_8_1.b = 8
    void* eax_10 = var_40
    var_70 = eax_10
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_44f000(&var_70)
        *(eax_11 + 4) += 1
    
    void* var_3c
    int32_t* ecx_12 = sub_4a9d10(&var_3c)
    var_8_1.b = 9
    char* edi_2 = *data_ce1794
    char* var_54 = edi_2
    
    if (edi_2 != 0 && *edi_2 != 0)
        ecx_12 = &var_54
        char* eax_12 = sub_44f000(ecx_12)
        *(eax_12 + 4) += 1
    
    char* ebx_1 = 2
    char* var_14 = 2
    int32_t var_18_1 = 2
    var_70 = ecx_12
    var_8_1.b = 0xa
    void* eax_13 = var_3c
    var_70 = eax_13
    
    if (eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_44f000(&var_70)
        *(eax_14 + 4) += 1
    
    char** ecx_14 = sub_4a6d40()
    char* eax_15
    eax_15.b = *var_44
    
    if (eax_15.b != 0)
        do
            void* ecx_15 = nullptr
            char* ebx_2 = var_44
            
            while (eax_15.b != 0)
                if (eax_15.b != 0xd)
                    if (eax_15.b == 0xa)
                        ecx_15 = ebx_2 - var_44
                        ebx_2 = &ebx_2[1]
                        break
                else if (ebx_2[1] == 0xa)
                    ecx_15 = ebx_2 - var_44
                    ebx_2 = &ebx_2[2]
                    break
                
                eax_15.b = ebx_2[1]
                ebx_2 = &ebx_2[1]
            
            var_70 = ecx_15
            char* var_74_2 = var_44
            var_44 = ebx_2
            char* const var_1c = &data_5559b1
            sub_44f690(&var_1c, var_74_2, var_70)
            int32_t eax_17 = var_14 | 4
            int32_t var_14_1 = eax_17
            int32_t var_18_2 = eax_17
            var_8_1.b = 0xb
            char* const esi_2 = &data_5559b1
            char* const edi_3 = var_1c
            
            if (edi_3 != 0)
                esi_2 = edi_3
            
            eax_17.b = *esi_2
            
            if (eax_17.b != 0)
                while (eax_17.b == 0x20 || eax_17.b == 9)
                    eax_17.b = esi_2[1]
                    esi_2 = &esi_2[1]
                    
                    if (eax_17.b == 0)
                        break
            
            var_70 = 8
            int32_t eax_18
            void* ecx_19
            eax_18, ecx_19 = _strncmp(esi_2, "#include", var_70)
            void* var_30
            char* const var_28
            char* const esi_3
            
            if (eax_18 == 0)
                eax_18.b = esi_2[8]
                void* esi_4 = &esi_2[8]
                
                if (eax_18.b != 0)
                    while (eax_18.b == 0x20 || eax_18.b == 9)
                        eax_18.b = *(esi_4 + 1)
                        esi_4 += 1
                        
                        if (eax_18.b == 0)
                            break
                
                eax_18.b = *esi_4
                
                if (eax_18.b == 0x22 || eax_18.b == 0x3c)
                    var_70 = &data_5997b8
                    var_30 = esi_4 + 1
                    void* eax_19
                    eax_19, ecx_19 = _strcspn(esi_4 + 1, var_70)
                    ecx_19.b = *(esi_4 + 1 + eax_19)
                    
                    if (ecx_19.b == 0x22 || ecx_19.b == 0x3e)
                        var_70 = eax_19
                        ecx_19 = sub_44f320(&var_28, var_30, var_70)
                        esi_3 = var_28
                    else
                        esi_3 = &data_5559b1
                        var_28 = &data_5559b1
                else
                    esi_3 = &data_5559b1
                    var_28 = &data_5559b1
            else
                esi_3 = &data_5559b1
                var_28 = &data_5559b1
            
            char* eax_21 = var_14_1 | 8
            char* var_18_3 = eax_21
            var_14 = eax_21
            var_8_1.b = 0xc
            
            if (esi_3 == 0 || *esi_3 == 0)
                char* const eax_49 = &data_5559b1
                
                if (edi_3 != 0)
                    eax_49 = edi_3
                
                var_70 = eax_49
                sub_44f620(&var_20, var_70)
                var_70 = &data_5742d4
                eax_15, ecx_14 = sub_44f620(&var_20, var_70)
            else
                var_70 = ecx_19
                var_70 = esi_3
                
                if (*esi_3 != 0)
                    char* eax_22 = sub_44f000(&var_70)
                    *(eax_22 + 4) += 1
                
                char* var_38
                sub_48ff30(&var_38)
                var_8_1.b = 0xd
                char* var_34
                sub_44f240(&var_34, U"\n")
                var_8_1.b = 0xe
                var_8_1.b = 0x10
                void* eax_25 = *sub_4dc0c0(arg4.d)
                var_30 = eax_25
                
                if (eax_25 != 0 && *eax_25 != 0)
                    char* eax_26 = sub_44f000(&var_30)
                    *(eax_26 + 4) += 1
                
                char* const ecx_25 = &data_5559b1
                int32_t eax_28 = var_14 | 0x10
                int32_t var_18_4 = eax_28
                char* eax_29 = var_34
                
                if (eax_29 != 0)
                    ecx_25 = eax_29
                
                var_70 = ecx_25
                sub_44f620(&var_30, var_70)
                void* edi_4 = var_30
                void* eax_30 = &data_5559b1
                
                if (edi_4 != 0)
                    eax_30 = edi_4
                
                var_70 = eax_30
                ecx_14 = sub_44f620(&var_20, var_70)
                eax_15 = eax_28 & 0xffffffef
                var_14 = eax_15
                char* var_18_5 = eax_15
                var_8_1.b = 0x11
                
                if (data_cdf414 != 0 && edi_4 != 0 && *edi_4 != 0)
                    ecx_14 = &var_30
                    eax_15 = sub_44f000(ecx_14)
                    int32_t temp11_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        eax_15, ecx_14 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                
                var_8_1.b = 0x12
                
                if (data_cdf414 != 0)
                    char* var_48
                    eax_15 = var_48
                    
                    if (eax_15 != 0 && *eax_15 != 0)
                        ecx_14 = &var_48
                        eax_15 = sub_44f000(ecx_14)
                        int32_t temp12_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp12_1 == 1)
                            eax_15, ecx_14 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_48 = &data_5559b1
                
                var_8_1.b = 0x13
                
                if (data_cdf414 != 0)
                    eax_15 = var_34
                    
                    if (eax_15 != 0 && *eax_15 != 0)
                        ecx_14 = &var_34
                        eax_15 = sub_44f000(ecx_14)
                        int32_t temp13_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            eax_15, ecx_14 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_34 = &data_5559b1
                
                var_8_1.b = 0xd
                
                if (arg4 != 0)
                    char* eax_32 = var_2c
                    char* const ecx_31 = &data_5559b1
                    
                    if (eax_32 != 0)
                        ecx_31 = eax_32
                    
                    var_70 = ecx_31
                    int32_t var_74_6 = var_50
                    var_8_1.b = 0x14
                    char* ecx_32 = &data_5559b1
                    char* eax_34 = *sub_44f980(&var_4c, "#line %d "%s"\n")
                    
                    if (eax_34 != 0)
                        ecx_32 = eax_34
                    
                    var_70 = ecx_32
                    eax_15, ecx_14 = sub_44f620(&var_20, var_70)
                    var_8_1.b = 0x15
                    
                    if (data_cdf414 != 0)
                        eax_15 = var_4c
                        
                        if (eax_15 != 0 && *eax_15 != 0)
                            ecx_14 = &var_4c
                            eax_15 = sub_44f000(ecx_14)
                            int32_t temp15_1 = *(eax_15 + 4)
                            *(eax_15 + 4) -= 1
                            
                            if (temp15_1 == 1)
                                eax_15, ecx_14 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                                var_4c = &data_5559b1
                
                var_8_1.b = 0x16
                
                if (data_cdf414 != 0)
                    eax_15 = var_38
                    
                    if (eax_15 != 0 && *eax_15 != 0)
                        ecx_14 = &var_38
                        eax_15 = sub_44f000(ecx_14)
                        int32_t temp14_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            eax_15, ecx_14 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_38 = &data_5559b1
                
                edi_3 = var_1c
            
            var_50 += 1
            var_8_1.b = 0x17
            
            if (data_cdf414 != 0 && esi_3 != 0 && *esi_3 != 0)
                ecx_14 = &var_28
                eax_15 = sub_44f000(ecx_14)
                int32_t temp9_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp9_1 == 1)
                    eax_15, ecx_14 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                    var_28 = &data_5559b1
            
            var_8_1.b = 0x18
            
            if (data_cdf414 != 0 && edi_3 != 0 && *edi_3 != 0)
                ecx_14 = &var_1c
                eax_15 = sub_44f000(ecx_14)
                int32_t temp10_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp10_1 == 1)
                    eax_15, ecx_14 = sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
            
            var_8_1.b = 0xa
            eax_15.b = *ebx_2
        while (eax_15.b != 0)
        
        esi = var_20
        ebx_1 = var_14
    
    var_70 = ecx_14
    var_70 = edi_2
    
    if (edi_2 != 0 && *edi_2 != 0)
        char* eax_35 = sub_44f000(&var_70)
        *(eax_35 + 4) += 1
    
    sub_4a6d40()
    *arg3 = esi
    
    if (esi != 0 && *esi != 0)
        char* eax_37 = sub_44f000(arg3)
        *(eax_37 + 4) += 1
    
    int32_t var_18_6 = ebx_1 | 1
    var_8_1.b = 0x19
    
    if (data_cdf414 != 0 && edi_2 != 0 && *edi_2 != 0)
        char* eax_38 = sub_44f000(&var_54)
        int32_t temp3_1 = *(eax_38 + 4)
        *(eax_38 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
    
    var_8_1.b = 0x1a
    
    if (data_cdf414 != 0)
        void* eax_39 = var_3c
        
        if (eax_39 != 0 && *eax_39 != 0)
            char* eax_40 = sub_44f000(&var_3c)
            int32_t temp4_1 = *(eax_40 + 4)
            *(eax_40 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
                var_3c = &data_5559b1
    
    var_8_1.b = 0x1b
    
    if (data_cdf414 != 0)
        void* eax_41 = var_40
        
        if (eax_41 != 0 && *eax_41 != 0)
            char* eax_42 = sub_44f000(&var_40)
            int32_t temp5_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                var_40 = &data_5559b1
    
    var_8_1.b = 0x1c
    
    if (data_cdf414 != 0 && esi != 0 && *esi != 0)
        char* eax_43 = sub_44f000(&var_20)
        int32_t temp6_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp6_1 == 1)
            sub_45d050(eax_43, *(eax_43 + 0xc) + 0x10)
    
    var_8_1.b = 0x1d
    
    if (data_cdf414 != 0)
        char* eax_44 = var_24
        
        if (eax_44 != 0 && *eax_44 != 0)
            char* eax_45 = sub_44f000(&var_24)
            int32_t temp7_1 = *(eax_45 + 4)
            *(eax_45 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_45d050(eax_45, *(eax_45 + 0xc) + 0x10)
                var_24 = &data_5559b1
    
    int32_t var_8_2 = 0x1e
    
    if (data_cdf414 != 0)
        char* eax_46 = var_2c
        
        if (eax_46 != 0 && *eax_46 != 0)
            char* eax_47 = sub_44f000(&var_2c)
            int32_t temp8_1 = *(eax_47 + 4)
            *(eax_47 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_45d050(eax_47, *(eax_47 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
