// 函数名称: sub_4a8d30
// 虚拟地址: 0x4a8d30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4a8d30(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544301
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = arg1
    int32_t* result_1 = result
    int32_t var_20 = 0
    char* var_40 = arg1
    
    if (arg2 == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    sub_44f240(&var_40, arg2)
    char* var_18
    sub_48e630(&var_18)
    int32_t var_8_1 = 1
    sub_44f240(&var_40, &data_ce18a0)
    char* var_14
    sub_48e630(&var_14)
    var_8_1.b = 2
    char* ecx_4 = var_14
    char* ebx
    
    if (ecx_4 == 0 || *ecx_4 == 0)
        ebx = nullptr
    else
        char* eax_4 = sub_44f000(&var_14)
        ecx_4 = var_14
        ebx = *(eax_4 + 8)
    
    char* eax_5 = var_18
    char* const edi = &data_5559b1
    char* const edx = &data_5559b1
    var_40 = ebx
    
    if (eax_5 != 0)
        edx = eax_5
    
    char* eax_6 = &data_5559b1
    
    if (ecx_4 != 0)
        eax_6 = ecx_4
    
    uint32_t eax_7
    char* ecx_6
    eax_7, ecx_6 = __strnicmp(eax_6, edx, var_40)
    char* eax_15
    
    if (eax_7 != 0)
        var_40 = ecx_6
        sub_44f240(&var_40, 0xce1798)
        char* var_1c
        sub_48e630(&var_1c)
        var_8_1.b = 7
        char* ecx_17 = var_1c
        char* ebx_1
        
        if (ecx_17 == 0 || *ecx_17 == 0)
            ebx_1 = nullptr
        else
            char* eax_20 = sub_44f000(&var_1c)
            ecx_17 = var_1c
            ebx_1 = *(eax_20 + 8)
        
        char* eax_21 = var_18
        char* edx_5 = &data_5559b1
        var_40 = ebx_1
        
        if (eax_21 != 0)
            edx_5 = eax_21
        
        char* eax_22 = &data_5559b1
        
        if (ecx_17 != 0)
            eax_22 = ecx_17
        
        bool cond:4_1 = __strnicmp(eax_22, edx_5) != 0
        char* eax_24 = var_18
        
        if (cond:4_1)
            *result = eax_24
            
            if (eax_24 != 0 && *eax_24 != 0)
                char* eax_40 = sub_44f000(result)
                *(eax_40 + 4) += 1
            
            int32_t var_20_5 = 1
            var_8_1.b = 0xe
            
            if (data_cdf414 != 0)
                char* eax_41 = var_1c
                
                if (eax_41 != 0 && *eax_41 != 0)
                    char* eax_42 = sub_44f000(&var_1c)
                    int32_t temp1_1 = *(eax_42 + 4)
                    *(eax_42 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_42, *(eax_42 + 0xc) + 0x10)
                        var_1c = &data_5559b1
            
            var_8_1.b = 0xf
            
            if (data_cdf414 != 0)
                char* eax_43 = var_14
                
                if (eax_43 != 0 && *eax_43 != 0)
                    char* eax_44 = sub_44f000(&var_14)
                    int32_t temp2_1 = *(eax_44 + 4)
                    *(eax_44 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(eax_44, *(eax_44 + 0xc) + 0x10)
                        var_14 = &data_5559b1
            
            int32_t var_8_6 = 0x10
        else
            if (eax_24 != 0)
                edi = eax_24
            
            char* eax_25 = var_1c
            void* const eax_27
            
            if (eax_25 == 0 || *eax_25 == 0)
                eax_27 = nullptr
            else
                eax_27 = *(sub_44f000(&var_1c) + 8)
            
            void* eax_28 = eax_27 + edi
            var_40 = 4
            void* edi_2 = eax_28 + 1
            
            if (*eax_28 != 0x2f)
                edi_2 = eax_28
            
            if (_strncmp(edi_2, "sys/") == 0)
                var_40 = edi_2
                sub_44f2d0(result, var_40)
                int32_t var_20_4 = 1
                var_8_1.b = 0xb
                
                if (data_cdf414 != 0)
                    char* eax_36 = var_1c
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        char* eax_37 = sub_44f000(&var_1c)
                        int32_t temp5_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_45d050(eax_37, *(eax_37 + 0xc) + 0x10)
                            var_1c = &data_5559b1
                
                var_8_1.b = 0xc
                
                if (data_cdf414 != 0)
                    char* eax_38 = var_14
                    
                    if (eax_38 != 0 && *eax_38 != 0)
                        char* eax_39 = sub_44f000(&var_14)
                        int32_t temp6_1 = *(eax_39 + 4)
                        *(eax_39 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_45d050(eax_39, *(eax_39 + 0xc) + 0x10)
                            var_14 = &data_5559b1
                
                int32_t var_8_5 = 0xd
            else
                char* eax_30 = var_18
                *result = eax_30
                
                if (eax_30 != 0 && *eax_30 != 0)
                    char* eax_31 = sub_44f000(result)
                    *(eax_31 + 4) += 1
                
                int32_t var_20_3 = 1
                var_8_1.b = 8
                
                if (data_cdf414 != 0)
                    char* eax_32 = var_1c
                    
                    if (eax_32 != 0 && *eax_32 != 0)
                        char* eax_33 = sub_44f000(&var_1c)
                        int32_t temp7_1 = *(eax_33 + 4)
                        *(eax_33 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
                            var_1c = &data_5559b1
                
                var_8_1.b = 9
                
                if (data_cdf414 != 0)
                    char* eax_34 = var_14
                    
                    if (eax_34 != 0 && *eax_34 != 0)
                        char* eax_35 = sub_44f000(&var_14)
                        int32_t temp8_1 = *(eax_35 + 4)
                        *(eax_35 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                            var_14 = &data_5559b1
                
                int32_t var_8_4 = 0xa
        
    label_4a917d:
        
        if (data_cdf414 != 0)
            eax_15 = var_18
        label_4a9189:
            
            if (eax_15 != 0 && *eax_15 != 0)
                char* eax_45 = sub_44f000(&var_18)
                int32_t temp4_1 = *(eax_45 + 4)
                *(eax_45 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_45, *(eax_45 + 0xc) + 0x10)
    else
        char* eax_8 = var_18
        
        if (eax_8 != 0)
            edi = eax_8
        
        char* eax_9 = var_14
        void* const eax_11
        
        if (eax_9 == 0 || *eax_9 == 0)
            eax_11 = nullptr
        else
            eax_11 = *(sub_44f000(&var_14) + 8)
        
        void* eax_12 = eax_11 + edi
        var_40 = 4
        void* edi_1 = eax_12 + 1
        
        if (*eax_12 != 0x2f)
            edi_1 = eax_12
        
        int32_t eax_13 = _strncmp(edi_1, "res/")
        int32_t eax_14
        
        if (eax_13 != 0)
            var_40 = 5
            eax_14 = _strncmp(edi_1, "xbin/", var_40)
        
        if (eax_13 == 0 || eax_14 == 0)
            var_40 = edi_1
            sub_44f2d0(result, var_40)
            int32_t var_20_2 = 1
            var_8_1.b = 5
            
            if (data_cdf414 != 0)
                char* eax_18 = var_14
                
                if (eax_18 != 0 && *eax_18 != 0)
                    char* eax_19 = sub_44f000(&var_14)
                    int32_t temp0_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
                        var_14 = &data_5559b1
            
            int32_t var_8_3 = 6
            goto label_4a917d
        
        eax_15 = var_18
        *result = eax_15
        
        if (eax_15 != 0 && *eax_15 != 0)
            char* eax_16 = sub_44f000(result)
            *(eax_16 + 4) += 1
            eax_15 = var_18
        
        int32_t var_20_1 = 1
        var_8_1.b = 3
        
        if (data_cdf414 != 0)
            char* ecx_9 = var_14
            
            if (ecx_9 != 0 && *ecx_9 != 0)
                char* eax_17 = sub_44f000(&var_14)
                int32_t temp3_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_14 = &data_5559b1
                
                eax_15 = var_18
        
        int32_t var_8_2 = 4
        
        if (data_cdf414 != 0)
            goto label_4a9189
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
