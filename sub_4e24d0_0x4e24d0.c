// 函数名称: sub_4e24d0
// 虚拟地址: 0x4e24d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __fastcallsub_4e24d0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_W_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_44 = arg1
    char* result_3
    int32_t edx_1 = sub_4e2430(&result_3, &var_44)
    int32_t var_8_1 = 0
    char* const result_19 = &data_5559b1
    char* result_4 = result_3
    char* result_1 = nullptr
    
    if (result_4 != 0)
        result_19 = result_4
    
    int32_t* var_bc = &result_1
    sub_4529c0(&result_1, edx_1, result_19, result_19, &data_5828f8)
    char* result = &result_1[1]
    result_1 = result
    
    if (result == arg2[1])
        arg2[1] = result
        var_8_1.b = 2
        void* result_2
        int32_t edx_5 = sub_44f510(&result_3, sub_4e2430(&result_2, &var_44))
        var_8_1.b = 3
        
        if (data_cdf414 != 0)
            void* result_5 = result_2
            
            if (result_5 != 0 && *result_5 != 0)
                char* eax_6 = sub_44f000(&result_2)
                int32_t temp0_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp0_1 == 1)
                    edx_5 = sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                    result_2 = &data_5559b1
        
        var_8_1.b = 0
        char* const result_20 = &data_5559b1
        char* result_6 = result_3
        int32_t* var_bc_2 = arg2
        
        if (result_6 != 0)
            result_20 = result_6
        
        *arg2 = 0
        sub_4529c0(result_6, edx_5, result_20, result_20, &data_5828f8)
        result = *arg2
        
        if (result s<= 0)
            int32_t var_8_3 = 4
            goto label_4e2557
        
        int32_t eax_7 = result * result_1
        arg2[3] = eax_7
        void* esi_1 = eax_7 * 0x2c
        uint32_t (* eax_8)[0x4] = sub_45cd70(esi_1)
        _memset(eax_8, 0, esi_1)
        arg2[4] = eax_8
        var_8_1.b = 5
        sub_44f510(&result_3, sub_4e2430(&result_2, &var_44))
        var_8_1.b = 6
        
        if (data_cdf414 != 0)
            void* result_7 = result_2
            
            if (result_7 != 0 && *result_7 != 0)
                char* eax_11 = sub_44f000(&result_2)
                int32_t temp2_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                    result_2 = &data_5559b1
        
        var_8_1.b = 0
        var_8_1.b = 7
        sub_44f510(&result_3, sub_4e2430(&result_2, &var_44))
        var_8_1.b = 8
        
        if (data_cdf414 != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_2)
                int32_t temp3_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(result, *(result + 0xc) + 0x10)
                    result_2 = &data_5559b1
        
        int32_t* edi_2 = arg2
        int32_t i = 0
        var_8_1.b = 0
        int32_t i_1 = 0
        
        if (*edi_2 s> 0)
            do
                var_8_1.b = 9
                char* const var_50
                sub_44f510(&result_3, sub_4e2430(&var_50, &var_44))
                var_8_1.b = 0xa
                
                if (data_cdf414 != 0)
                    char* eax_14 = var_50
                    
                    if (eax_14 != 0 && *eax_14 != 0)
                        char* eax_15 = sub_44f000(&var_50)
                        int32_t temp5_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_50 = &data_5559b1
                
                var_8_1.b = 0
                var_8_1.b = 0xb
                char* const var_54
                sub_44f510(&result_3, sub_4e2430(&var_54, &var_44))
                var_8_1.b = 0xc
                
                if (data_cdf414 != 0)
                    char* eax_17 = var_54
                    
                    if (eax_17 != 0 && *eax_17 != 0)
                        char* eax_18 = sub_44f000(&var_54)
                        int32_t temp6_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                            var_54 = &data_5559b1
                
                var_8_1.b = 0
                char* const result_21 = &data_5559b1
                int128_t* edx_21 = i * result_1 * 0x2c + edi_2[4]
                *edx_21 = data_5724f8
                *(edx_21 + 0x1c) = 0x3f8000003f800000
                *(edx_21 + 0x24) = 0x3f800000
                char* result_8 = result_3
                
                if (result_8 != 0)
                    result_21 = result_8
                
                void* var_bc_8 = edx_21 + 0x18
                void* var_c0_1 = edx_21 + 0x14
                void* var_c4_3 = &edx_21[1]
                result = sub_4529c0(&edx_21[1], edx_21, result_21, result_21, "%f %f %f")
                
                if (result != 3)
                    sub_44e4d0(result, &data_5559b1, "count == 3", "c:\ax2017\engine\animimport.cpp", 
                        0x5a, "sAnimExtractDataFromText")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                char* result_10 = result_1
                int32_t edx_22 = 1
                int32_t var_74_1 = 1
                
                if (result_10 s> 1)
                    do
                        int128_t* eax_25 = (i * result_10 + edx_22) * 0x2c + edi_2[4]
                        char* const var_58
                        int32_t* result_9 = sub_4e2430(&var_58, &var_44)
                        result_2 = result_9
                        var_8_1.b = 0xd
                        char* const result_24 = &data_5559b1
                        char* result_11 = result_3
                        char* const esi_4 = &data_5559b1
                        char* edx_25 = *result_9
                        
                        if (result_11 != 0)
                            result_24 = result_11
                        
                        if (edx_25 != 0)
                            esi_4 = edx_25
                        
                        if (result_24 != esi_4)
                            if (data_cdf414 != 0 && result_11 != 0 && *result_11 != 0)
                                char* eax_26 = sub_44f000(&result_3)
                                int32_t temp8_1 = *(eax_26 + 4)
                                *(eax_26 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
                                    result_3 = &data_5559b1
                            
                            result_11 = *result_2
                            result_3 = result_11
                            
                            if (result_11 != 0 && *result_11 != 0)
                                char* eax_27 = sub_44f000(&result_3)
                                *(eax_27 + 4) += 1
                                result_11 = result_3
                        
                        var_8_1.b = 0xe
                        
                        if (data_cdf414 != 0)
                            char* eax_28 = var_58
                            
                            if (eax_28 != 0 && *eax_28 != 0)
                                char* eax_29 = sub_44f000(&var_58)
                                int32_t temp7_1 = *(eax_29 + 4)
                                *(eax_29 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
                                    var_58 = &data_5559b1
                                
                                result_11 = result_3
                        
                        var_8_1.b = 0
                        char* result_22 = &data_5559b1
                        
                        if (result_11 != 0)
                            result_22 = result_11
                        
                        void* var_bc_9 = eax_25 + 0x24
                        void* var_c0_2 = &eax_25[2]
                        void* var_c4_4 = eax_25 + 0x1c
                        result_2 = sub_4529c0(eax_25 + 0x1c, result_22, eax_25, result_22, "%f %f %f")
                        char* const var_5c
                        int32_t* eax_34 = sub_4e2430(&var_5c, &var_44)
                        var_8_1.b = 0xf
                        char* const result_25 = &data_5559b1
                        char* result_12 = result_3
                        char* const esi_5 = &data_5559b1
                        char* edx_32 = *eax_34
                        
                        if (result_12 != 0)
                            result_25 = result_12
                        
                        if (edx_32 != 0)
                            esi_5 = edx_32
                        
                        if (result_25 != esi_5)
                            if (data_cdf414 != 0 && result_12 != 0 && *result_12 != 0)
                                char* eax_35 = sub_44f000(&result_3)
                                int32_t temp10_1 = *(eax_35 + 4)
                                *(eax_35 + 4) -= 1
                                
                                if (temp10_1 == 1)
                                    edx_32 = sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                                    result_3 = &data_5559b1
                            
                            result_12 = *eax_34
                            result_3 = result_12
                            
                            if (result_12 != 0 && *result_12 != 0)
                                char* eax_36 = sub_44f000(&result_3)
                                *(eax_36 + 4) += 1
                                result_12 = result_3
                        
                        var_8_1.b = 0x10
                        
                        if (data_cdf414 != 0)
                            char* eax_37 = var_5c
                            
                            if (eax_37 != 0 && *eax_37 != 0)
                                char* eax_38 = sub_44f000(&var_5c)
                                int32_t temp9_1 = *(eax_38 + 4)
                                *(eax_38 + 4) -= 1
                                
                                if (temp9_1 == 1)
                                    edx_32 = sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
                                    var_5c = &data_5559b1
                                
                                result_12 = result_3
                        
                        var_8_1.b = 0
                        char* result_16 = &data_5559b1
                        
                        if (result_12 != 0)
                            result_16 = result_12
                        
                        int32_t var_30
                        int32_t* var_bc_10 = &var_30
                        int32_t var_34
                        int32_t* var_c0_3 = &var_34
                        int32_t var_38
                        int32_t* var_c4_5 = &var_38
                        int32_t eax_39 = sub_4529c0(result_16, edx_32, &var_38, result_16, "%f %f %f")
                        result_2 += eax_39
                        char* const var_60
                        int32_t* eax_40 = sub_4e2430(&var_60, &var_44)
                        var_8_1.b = 0x11
                        char* const result_26 = &data_5559b1
                        char* result_13 = result_3
                        char* const esi_6 = &data_5559b1
                        char* edx_39 = *eax_40
                        
                        if (result_13 != 0)
                            result_26 = result_13
                        
                        if (edx_39 != 0)
                            esi_6 = edx_39
                        
                        if (result_26 != esi_6)
                            if (data_cdf414 != 0 && result_13 != 0 && *result_13 != 0)
                                char* eax_41 = sub_44f000(&result_3)
                                int32_t temp12_1 = *(eax_41 + 4)
                                *(eax_41 + 4) -= 1
                                
                                if (temp12_1 == 1)
                                    edx_39 = sub_45d050(eax_41, *(eax_41 + 0xc) + 0x10)
                                    result_3 = &data_5559b1
                            
                            result_13 = *eax_40
                            result_3 = result_13
                            
                            if (result_13 != 0 && *result_13 != 0)
                                char* eax_42 = sub_44f000(&result_3)
                                *(eax_42 + 4) += 1
                                result_13 = result_3
                        
                        var_8_1.b = 0x12
                        
                        if (data_cdf414 != 0)
                            char* eax_43 = var_60
                            
                            if (eax_43 != 0 && *eax_43 != 0)
                                char* eax_44 = sub_44f000(&var_60)
                                int32_t temp11_1 = *(eax_44 + 4)
                                *(eax_44 + 4) -= 1
                                
                                if (temp11_1 == 1)
                                    edx_39 = sub_45d050(eax_44, *(eax_44 + 0xc) + 0x10)
                                    var_60 = &data_5559b1
                                
                                result_13 = result_3
                        
                        var_8_1.b = 0
                        char* result_17 = &data_5559b1
                        
                        if (result_13 != 0)
                            result_17 = result_13
                        
                        int32_t var_24
                        int32_t* var_bc_11 = &var_24
                        int32_t var_28
                        int32_t* var_c0_4 = &var_28
                        int32_t var_2c
                        int32_t* var_c4_6 = &var_2c
                        int32_t eax_45 = sub_4529c0(result_17, edx_39, &var_2c, result_17, "%f %f %f")
                        result_2 += eax_45
                        char* const var_64
                        char** edx_45 = sub_4e2430(&var_64, &var_44)
                        var_8_1.b = 0x13
                        char* result_27 = &data_5559b1
                        char* result_14 = result_3
                        char* const esi_7 = &data_5559b1
                        char* edx_46 = *edx_45
                        
                        if (result_14 != 0)
                            result_27 = result_14
                        
                        if (edx_46 != 0)
                            esi_7 = edx_46
                        
                        if (result_27 != esi_7)
                            if (data_cdf414 != 0 && result_14 != 0 && *result_14 != 0)
                                char* eax_47 = sub_44f000(&result_3)
                                int32_t temp14_1 = *(eax_47 + 4)
                                *(eax_47 + 4) -= 1
                                
                                if (temp14_1 == 1)
                                    edx_46 = sub_45d050(eax_47, *(eax_47 + 0xc) + 0x10)
                                    result_3 = &data_5559b1
                            
                            result_14 = *edx_45
                            result_3 = result_14
                            
                            if (result_14 != 0 && *result_14 != 0)
                                char* eax_48 = sub_44f000(&result_3)
                                *(eax_48 + 4) += 1
                                result_14 = result_3
                        
                        var_8_1.b = 0x14
                        
                        if (data_cdf414 != 0)
                            char* eax_49 = var_64
                            
                            if (eax_49 != 0 && *eax_49 != 0)
                                char* eax_50 = sub_44f000(&var_64)
                                int32_t temp13_1 = *(eax_50 + 4)
                                *(eax_50 + 4) -= 1
                                
                                if (temp13_1 == 1)
                                    edx_46 = sub_45d050(eax_50, *(eax_50 + 0xc) + 0x10)
                                    var_64 = &data_5559b1
                                
                                result_14 = result_3
                        
                        var_8_1.b = 0
                        char* result_18 = &data_5559b1
                        
                        if (result_14 != 0)
                            result_18 = result_14
                        
                        int32_t var_18
                        int32_t* var_bc_12 = &var_18
                        int32_t var_1c
                        int32_t* var_c0_5 = &var_1c
                        int32_t var_20
                        int32_t* var_c4_7 = &var_20
                        int32_t eax_51
                        int32_t edx_51
                        eax_51, edx_51 = sub_4529c0(result_18, edx_46, &var_20, result_18, "%f %f %f")
                        int32_t xmm0_3 = var_38
                        int32_t xmm0_4 = var_2c
                        result_2 += eax_51
                        int32_t var_98_1 = xmm0_4
                        int32_t var_94_1 = var_20
                        int32_t var_90_1 = var_34
                        int32_t xmm0_7 = var_28
                        int32_t var_88_1 = var_1c
                        int32_t var_84_1 = var_30
                        int32_t var_80_1 = var_24
                        var_18 = var_18
                        var_38.o = xmm0_3.o
                        var_28.o = xmm0_7.o
                        float var_ac[0x4]
                        *eax_25 = *sub_412db0(&var_ac, edx_51, &var_38, &var_ac)
                        char* const var_68
                        char** eax_56 = sub_4e2430(&var_68, &var_44)
                        var_8_1.b = 0x15
                        char* result_28 = &data_5559b1
                        char* result_15 = result_3
                        char* esi_8 = &data_5559b1
                        char* edx_54 = *eax_56
                        
                        if (result_15 != 0)
                            result_28 = result_15
                        
                        if (edx_54 != 0)
                            esi_8 = edx_54
                        
                        if (result_28 != esi_8)
                            if (data_cdf414 != 0 && result_15 != 0 && *result_15 != 0)
                                char* eax_57 = sub_44f000(&result_3)
                                int32_t temp16_1 = *(eax_57 + 4)
                                *(eax_57 + 4) -= 1
                                
                                if (temp16_1 == 1)
                                    sub_45d050(eax_57, *(eax_57 + 0xc) + 0x10)
                                    result_3 = &data_5559b1
                            
                            result_15 = *eax_56
                            result_3 = result_15
                            
                            if (result_15 != 0 && *result_15 != 0)
                                char* eax_58 = sub_44f000(&result_3)
                                *(eax_58 + 4) += 1
                                result_15 = result_3
                        
                        var_8_1.b = 0x16
                        
                        if (data_cdf414 != 0)
                            char* eax_59 = var_68
                            
                            if (eax_59 != 0 && *eax_59 != 0)
                                char* eax_60 = sub_44f000(&var_68)
                                int32_t temp15_1 = *(eax_60 + 4)
                                *(eax_60 + 4) -= 1
                                
                                if (temp15_1 == 1)
                                    sub_45d050(eax_60, *(eax_60 + 0xc) + 0x10)
                                    var_68 = &data_5559b1
                                
                                result_15 = result_3
                        
                        var_8_1.b = 0
                        char* result_23 = &data_5559b1
                        
                        if (result_15 != 0)
                            result_23 = result_15
                        
                        void* var_bc_13 = eax_25 + 0x18
                        void* var_c0_6 = eax_25 + 0x14
                        void* var_c4_8 = &eax_25[1]
                        result = sub_4529c0(&eax_25[1], result_23, eax_25, result_23, "%f %f %f")
                        
                        if (result_2 + result != 0xf)
                            sub_44e4d0(result, &data_5559b1, "count == 15", 
                                "c:\ax2017\engine\animimport.cpp", 0x7a, "sAnimExtractDataFromText")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        result_10 = result_1
                        edx_22 = var_74_1 + 1
                        i = i_1
                        edi_2 = arg2
                        var_74_1 = edx_22
                    while (edx_22 s< result_10)
                
                i += 1
                i_1 = i
            while (i s< *edi_2)
        
        int32_t var_8_4 = 0x17
        
        if (data_cdf414 != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_3)
                int32_t temp4_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(result, *(result + 0xc) + 0x10)
        
        result.b = 1
    else
        int32_t var_8_2 = 1
    label_4e2557:
        
        if (data_cdf414 != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_44f000(&result_3)
                int32_t temp1_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_45d050(result, *(result + 0xc) + 0x10)
        
        result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
