// 函数名称: sub_4bfa50
// 虚拟地址: 0x4bfa50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4bfa50(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544f41
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    sub_4bd480(arg2)
    int32_t var_20
    sub_4bd940(&var_20, arg2)
    int32_t var_8_1 = 1
    int32_t eax_3 = var_20
    int32_t var_1c
    char* var_18
    
    if (eax_3 != 2 && eax_3 != 3 && eax_3 != 4)
        *arg1 = eax_3
        arg1[1] = var_1c
        char* eax_5 = var_18
        arg1[2] = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_44f000(&arg1[2])
            *(eax_6 + 4) += 1
            eax_5 = var_18
        
        int32_t var_14_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cdf414 != 0 && eax_5 != 0 && *eax_5 != 0)
            char* eax_7 = sub_44f000(&var_18)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    sub_4bd480(arg2)
    char* esi_1
    int32_t xmm0
    
    if (_strncmp(0x59376c, arg2[1], 1) == 0)
        arg2[1] += 1
        sub_4bd480(arg2)
        xmm0 = (data_654ed4.q).d
        esi_1 = data_654edc
    else
        xmm0 = (data_e47140.q).d
        esi_1 = data_e47148
    
    char* var_24 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_10 = sub_44f000(&var_24)
        *(eax_10 + 4) += 1
    
    int32_t var_14_2 = 6
    var_8_1.b = 3
    int32_t* edi_1
    char* eax_14
    
    if (xmm0 == 2 || xmm0 == 3 || xmm0 == 4)
        int32_t var_38
        sub_4beed0(xmm0, arg2, &var_38, &data_596994, 2)
        int32_t var_14_4 = 0xe
        var_8_1.b = 4
        int32_t ebx_1 = var_38
        int32_t var_34
        char* var_30
        
        if (ebx_1 != 2 && ebx_1 != 3 && ebx_1 != 4)
            char* edi_2 = var_30
            *arg1 = ebx_1
            arg1[1] = var_34
            arg1[2] = edi_2
            
            if (edi_2 != 0 && *edi_2 != 0)
                char* eax_18 = sub_44f000(&arg1[2])
                *(eax_18 + 4) += 1
            
            int32_t var_14_5 = 0xf
            var_8_1.b = 5
            
            if (data_cdf414 != 0 && edi_2 != 0 && *edi_2 != 0)
                char* eax_19 = sub_44f000(&var_30)
                int32_t temp4_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
            
            var_8_1.b = 6
            
            if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_20 = sub_44f000(&var_24)
                int32_t temp5_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
            
            int32_t var_8_4 = 7
            
            if (data_cdf414 != 0)
                char* eax_21 = var_18
                
                if (eax_21 != 0 && *eax_21 != 0)
                    char* eax_22 = sub_44f000(&var_18)
                    int32_t temp7_1 = *(eax_22 + 4)
                    *(eax_22 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        void* eax_24 = sub_4bd420(*arg2)
        *eax_24 = 0xb
        
        if (var_20 != 3)
            sub_44e4d0(eax_24, &data_5559b1, "resultLeft.result == UIPARSERESULT_SUCCESS_EXPRESSION", 
                "c:\ax2017\engine\ui2expr.cpp", 0xd4, "UI2ExprMakeBinary")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(eax_24 + 0xc) = var_1c
        
        if (ebx_1 != 3)
            sub_44e4d0(var_1c, &data_5559b1, "resultRight.result == UIPARSERESULT_SUCCESS_EXPRESSION", 
                "c:\ax2017\engine\ui2expr.cpp", 0xd6, "UI2ExprMakeBinary")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        edi_1 = arg1
        *(eax_24 + 0x10) = var_34
        int32_t var_14_6 = 0xf
        edi_1[2] = &data_5559b1
        *edi_1 = ebx_1
        edi_1[1] = eax_24
        var_8_1.b = 8
        
        if (data_cdf414 != 0)
            char* eax_27 = var_30
            
            if (eax_27 != 0 && *eax_27 != 0)
                char* eax_28 = sub_44f000(&var_30)
                int32_t temp1_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
        
        var_8_1.b = 9
        
        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_29 = sub_44f000(&var_24)
            int32_t temp3_1 = *(eax_29 + 4)
            *(eax_29 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
        
        int32_t var_8_5 = 0xa
        
        if (data_cdf414 != 0)
            eax_14 = var_18
        label_4bfdfc:
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_30 = sub_44f000(&var_18)
                int32_t temp6_1 = *(eax_30 + 4)
                *(eax_30 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
    else
        edi_1 = arg1
        *edi_1 = var_20
        edi_1[1] = var_1c
        eax_14 = var_18
        edi_1[2] = eax_14
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_44f000(&edi_1[2])
            *(eax_15 + 4) += 1
            eax_14 = var_18
        
        int32_t var_14_3 = 7
        var_8_1.b = 0xb
        
        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_16 = sub_44f000(&var_24)
            int32_t temp2_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
            
            eax_14 = var_18
        
        int32_t var_8_3 = 0xc
        
        if (data_cdf414 != 0)
            goto label_4bfdfc
    fsbase->NtTib.ExceptionList = ExceptionList
    return edi_1
}
