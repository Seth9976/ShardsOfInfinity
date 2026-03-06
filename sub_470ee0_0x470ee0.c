// 函数名称: sub_470ee0
// 虚拟地址: 0x470ee0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_470ee0(int32_t arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542bfe
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    __alloca_probe(0x1028)
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_18 = eax_2
    int32_t i_8
    int32_t i_9 = i_8
    int32_t var_20 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = arg2
    void* var_1020 = edi
    char* const result_1
    sub_44f240(&result_1, "propertyItemEdit_click")
    char* result_3 = result_1
    char* const result_22 = &data_5559b1
    char* edx = *(edi + 4)
    
    if (result_3 != 0)
        result_22 = result_3
    
    int32_t ecx_2
    
    while (true)
        i_8.b = *result_22
        char temp0_1 = *edx
        bool c_1 = i_8.b u< temp0_1
        
        if (i_8.b == temp0_1)
            if (i_8.b == 0)
                ecx_2 = 0
                break
            
            i_8.b = result_22[1]
            char temp1_1 = edx[1]
            c_1 = i_8.b u< temp1_1
            
            if (i_8.b == temp1_1)
                result_22 = &result_22[2]
                edx = &edx[2]
                
                if (i_8.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_22, result_22, c_1) | 1
        break
    
    if (ecx_2 != 0 || data_5cea2c s<= ecx_2)
        i_8.b = 0
    else
        i_8.b = 1
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_44f000(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (i_8.b != 0)
        data_5cea38 = 0xffffffff
        data_5cea3c = 0xffffffff
        data_5cea38 = *(edi + 8)
    
    sub_44f240(&result_1, "layerItemButtonHidden")
    char* const result_4 = result_1
    char* const result_23 = &data_5559b1
    char* edx_3 = *(edi + 4)
    
    if (result_4 != 0)
        result_23 = result_4
    
    void* esi
    
    while (true)
        i_8.b = *result_23
        char temp3_1 = *edx_3
        bool c_2 = i_8.b u< temp3_1
        
        if (i_8.b == temp3_1)
            if (i_8.b == 0)
                esi = nullptr
                break
            
            i_8.b = result_23[1]
            char temp4_1 = edx_3[1]
            c_2 = i_8.b u< temp4_1
            
            if (i_8.b == temp4_1)
                result_23 = &result_23[2]
                edx_3 = &edx_3[2]
                
                if (i_8.b != 0)
                    continue
                
                esi = nullptr
                break
        
        esi = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_5 = sub_44f000(&result_1)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    int32_t i_4
    
    if (esi == 0)
        data_5cea38 = 0xffffffff
        data_5cea3c = 0xffffffff
        esi = sub_46aa20(*(edi + 8))
        i_8.b = *(esi + 0xa)
        void* eax_7 = sub_46b120(esi, 0x7d)
        char* ecx_10
        ecx_10.b = i_8.b == 0
        sub_4b8610(eax_7, eax_7, &data_5b1d6c, 0x7d, ecx_10)
        sub_46e560(esi)
        int32_t* var_102c_1 = &data_5c99a0
        int32_t* var_24_2 = &i_4
        i_4 = 0
        sub_47b8c0(&data_5c99a0, var_24_2)
        
        for (int32_t i = i_4; i != 0xffffffff; i = i_4)
            *(i + 0x654) = 2
            sub_47b8c0(var_102c_1, &i_4)
    
    sub_44f240(&result_1, "layerItemButtonLocked")
    char* const result_5 = result_1
    char* const result_24 = &data_5559b1
    char* edx_7 = *(edi + 4)
    
    if (result_5 != 0)
        result_24 = result_5
    
    void* esi_2
    
    while (true)
        i_8.b = *result_24
        char temp6_1 = *edx_7
        bool c_3 = i_8.b u< temp6_1
        
        if (i_8.b == temp6_1)
            if (i_8.b == 0)
                esi_2 = nullptr
                break
            
            i_8.b = result_24[1]
            char temp7_1 = edx_7[1]
            c_3 = i_8.b u< temp7_1
            
            if (i_8.b == temp7_1)
                result_24 = &result_24[2]
                edx_7 = &edx_7[2]
                
                if (i_8.b != 0)
                    continue
                
                esi_2 = nullptr
                break
        
        esi_2 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_8 = sub_44f000(&result_1)
        int32_t temp8_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_2 == 0)
        data_5cea38 = 0xffffffff
        data_5cea3c = 0xffffffff
        esi_2 = sub_46aa20(*(edi + 8))
        i_8.b = *(esi_2 + 0xb)
        void* eax_10 = sub_46b120(esi_2, 0x7e)
        char* ecx_18
        ecx_18.b = i_8.b == 0
        sub_4b8610(eax_10, eax_10, &data_5b1d6c, 0x7e, ecx_18)
        sub_46e560(esi_2)
        int32_t* var_102c_2 = &data_5c99a0
        void** var_24_5 = &i_4
        i_4 = nullptr
        sub_47b8c0(&data_5c99a0, var_24_5)
        
        for (int32_t i_1 = i_4; i_1 != 0xffffffff; i_1 = i_4)
            *(i_1 + 0x654) = 2
            sub_47b8c0(var_102c_2, &i_4)
    
    sub_44f240(&result_1, "layerItemButtonMinimized")
    char* const result_6 = result_1
    char* const result_25 = &data_5559b1
    char* edx_11 = *(edi + 4)
    
    if (result_6 != 0)
        result_25 = result_6
    
    int32_t esi_4
    
    while (true)
        i_8.b = *result_25
        char temp9_1 = *edx_11
        bool c_4 = i_8.b u< temp9_1
        
        if (i_8.b == temp9_1)
            if (i_8.b == 0)
                esi_4 = 0
                break
            
            i_8.b = result_25[1]
            char temp10_1 = edx_11[1]
            c_4 = i_8.b u< temp10_1
            
            if (i_8.b == temp10_1)
                result_25 = &result_25[2]
                edx_11 = &edx_11[2]
                
                if (i_8.b != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cdf414 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_11 = sub_44f000(&result_1)
        int32_t temp11_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_4 == 0)
        data_5cea38 = 0xffffffff
        data_5cea3c = 0xffffffff
        void* eax_12 = sub_46aa20(*(edi + 8))
        char edx_14
        
        if (*(eax_12 + 0xc) == 0)
            edx_14 = 0
        else
            edx_14 = 1
        
        sub_470e20(eax_12, edx_14)
        int32_t* var_102c_3 = &data_5c99a0
        void** var_24_7 = &i_4
        i_4 = nullptr
        sub_47b8c0(&data_5c99a0, var_24_7)
        
        for (int32_t i_2 = i_4; i_2 != 0xffffffff; i_2 = i_4)
            *(i_2 + 0x654) = 2
            sub_47b8c0(var_102c_3, &i_4)
    
    sub_44f240(&result_1, "layerItemButton")
    char* const result_7 = result_1
    char* const result_26 = &data_5559b1
    char* edx_15 = *(edi + 4)
    
    if (result_7 != 0)
        result_26 = result_7
    
    int32_t i_3
    
    while (true)
        i_8.b = *result_26
        char temp12_1 = *edx_15
        bool c_5 = i_8.b u< temp12_1
        
        if (i_8.b == temp12_1)
            if (i_8.b == 0)
                i_3 = 0
                break
            
            i_8.b = result_26[1]
            char temp13_1 = edx_15[1]
            c_5 = i_8.b u< temp13_1
            
            if (i_8.b == temp13_1)
                result_26 = &result_26[2]
                edx_15 = &edx_15[2]
                
                if (i_8.b != 0)
                    continue
                
                i_3 = 0
                break
        
        i_3 = sbb.d(esi_4, esi_4, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_cdf414 != 0 && result_7 != 0 && *result_7 != 0)
        char* eax_13 = sub_44f000(&result_1)
        int32_t temp14_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_10 = 0xffffffff
    
    if (i_3 == 0)
        data_5cea38 = 0xffffffff
        data_5cea3c = 0xffffffff
        int32_t nVirtKey = 0x10
        i_3 = *(sub_46aa20(*(edi + 8)) + 0x1004)
        
        if ((0x8000 & GetKeyState(nVirtKey)) == 0)
        label_47151d:
            
            if ((0x8000 & GetKeyState(0x11)) == 0)
                sub_46e810(i_3)
            else
                void* eax_23
                eax_23.b = *(data_65ae04 + 0x18)
                
                if (eax_23.b == 0)
                    sub_46e810(i_3)
                else
                    HWND eax_24 = GetFocus()
                    
                    if (eax_24 == data_ce1790 || eax_24 == 0)
                        sub_46f040(i_3)
                    else
                        sub_46e810(i_3)
        else
            void* eax_16
            eax_16.b = *(data_65ae04 + 0x18)
            
            if (eax_16.b == 0)
                goto label_47151d
            
            HWND eax_17 = GetFocus()
            
            if ((eax_17 != data_ce1790 && eax_17 != 0) || data_5cea2c s<= 0)
                goto label_47151d
            
            int32_t i_5 = data_5cea30
            int32_t i_6 = *(var_1020 + 8)
            i_3 = i_6
            
            if (i_6 s>= i_5)
                i_3 = i_5
            
            if (i_6 s<= i_5)
                i_6 = i_5
            
            char eax_18 = sub_468df0()
            int32_t ecx_32 = data_5cea2c
            
            if (eax_18 == 0)
                ecx_32 = 0
            
            data_5cea2c = ecx_32
            
            for (; i_3 s<= i_6; i_3 += 1)
                sub_46ef90(*(sub_46aa20(i_3) + 0x1004))
            
            sub_51d5b0(&(&data_5cda24)[data_64f840 * 0x407], &data_5cda28, 0x1018)
        
        edi = var_1020
    
    sub_44f240(&result_1, "propertyItem_click")
    char* const result_8 = result_1
    char* const result_27 = &data_5559b1
    char* edx_18 = *(edi + 4)
    
    if (result_8 != 0)
        result_27 = result_8
    
    int32_t ecx_39
    
    while (true)
        i_8.b = *result_27
        char temp15_1 = *edx_18
        bool c_6 = i_8.b u< temp15_1
        
        if (i_8.b == temp15_1)
            if (i_8.b == 0)
                ecx_39 = 0
                break
            
            i_8.b = result_27[1]
            char temp16_1 = edx_18[1]
            c_6 = i_8.b u< temp16_1
            
            if (i_8.b == temp16_1)
                result_27 = &result_27[2]
                edx_18 = &edx_18[2]
                
                if (i_8.b != 0)
                    continue
                
                ecx_39 = 0
                break
        
        ecx_39 = sbb.d(result_27, result_27, c_6) | 1
        break
    
    if (ecx_39 != 0 || data_5cea2c s<= ecx_39)
        i_8.b = 0
    else
        i_8.b = 1
    
    int32_t var_8_11 = 5
    
    if (data_cdf414 != 0 && result_8 != 0 && *result_8 != 0)
        char* eax_25 = sub_44f000(&result_1)
        int32_t temp17_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_45d050(eax_25, *(eax_25 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_12 = 0xffffffff
    
    if (i_8.b != 0)
        data_5cea38 = 0xffffffff
        data_5cea3c = 0xffffffff
        data_5cea38 = *(edi + 8)
    
    sub_44f240(&result_1, "propBtnDropDown")
    char* const result_9 = result_1
    char* const result_28 = &data_5559b1
    char* edx_21 = *(edi + 4)
    
    if (result_9 != 0)
        result_28 = result_9
    
    int32_t esi_7
    
    while (true)
        i_8.b = *result_28
        char temp18_1 = *edx_21
        bool c_7 = i_8.b u< temp18_1
        
        if (i_8.b == temp18_1)
            if (i_8.b == 0)
                esi_7 = 0
                break
            
            i_8.b = result_28[1]
            char temp19_1 = edx_21[1]
            c_7 = i_8.b u< temp19_1
            
            if (i_8.b == temp19_1)
                result_28 = &result_28[2]
                edx_21 = &edx_21[2]
                
                if (i_8.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(i_3, i_3, c_7) | 1
        break
    
    int32_t var_8_13 = 6
    
    if (data_cdf414 != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_27 = sub_44f000(&result_1)
        int32_t temp20_1 = *(eax_27 + 4)
        *(eax_27 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_45d050(eax_27, *(eax_27 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_14 = 0xffffffff
    
    if (esi_7 == 0)
        data_5cea38 = *(edi + 8)
        int32_t eax_29 = *(edi + 8)
        
        if (data_5cea3c == eax_29)
            eax_29 = 0xffffffff
        
        data_5cea3c = eax_29
    
    sub_44f240(&result_1, "propBtnPlus")
    char* const result_10 = result_1
    char* const result_29 = &data_5559b1
    char* edx_24 = *(edi + 4)
    
    if (result_10 != 0)
        result_29 = result_10
    
    int32_t* esi_9
    
    while (true)
        i_8.b = *result_29
        char temp21_1 = *edx_24
        bool c_8 = i_8.b u< temp21_1
        
        if (i_8.b == temp21_1)
            if (i_8.b == 0)
                esi_9 = nullptr
                break
            
            i_8.b = result_29[1]
            char temp22_1 = edx_24[1]
            c_8 = i_8.b u< temp22_1
            
            if (i_8.b == temp22_1)
                result_29 = &result_29[2]
                edx_24 = &edx_24[2]
                
                if (i_8.b != 0)
                    continue
                
                esi_9 = nullptr
                break
        
        esi_9 = sbb.d(esi_7, esi_7, c_8) | 1
        break
    
    int32_t var_8_15 = 7
    
    if (data_cdf414 != 0 && result_10 != 0 && *result_10 != 0)
        char* eax_30 = sub_44f000(&result_1)
        int32_t temp23_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_16 = 0xffffffff
    char* var_1034
    char* const var_1024
    int32_t var_1018[0x3fa]
    
    if (esi_9 == 0)
        char* eax_31 = sub_469160(data_5cda2c)
        *(eax_31 + 0x1004)
        *(eax_31 + 0x64c) = esi_9
        data_5cea38
        
        if (sub_46e9d0() != 0x6b)
            void* eax_47 = sub_46af30(eax_31)
            
            if (eax_47 == 0)
                if (sub_46ae50(eax_31, &var_1034) != 1)
                    eax_47 = sub_45d320(eax_31)
                    esi_9 = eax_47
                else
                    sub_44f2d0(&result_1, var_1034)
                    int32_t var_8_25 = 0x10
                    eax_47 = sub_46ad40(eax_31, &result_1)
                    void* esi_16 = eax_47
                    int32_t var_8_26 = 0x11
                    
                    if (data_cdf414 != 0)
                        char* const result_20 = result_1
                        
                        if (result_20 != 0 && *result_20 != 0)
                            eax_47 = sub_44f000(&result_1)
                            int32_t temp26_1 = *(eax_47 + 4)
                            *(eax_47 + 4) -= 1
                            
                            if (temp26_1 == 1)
                                eax_47 = sub_45d050(eax_47, *(eax_47 + 0xc) + 0x10)
                                result_1 = &data_5559b1
                    
                    int32_t var_8_27 = 0xffffffff
                    esi_9 = esi_16 + 4
            else
                esi_9 = eax_47 + 4
            
            int32_t var_24_18 = 0x6c
            int32_t var_28_4 = data_dff698
            *(eax_31 + 0x648) = 0
            int32_t i_7 = sub_4b8ac0(eax_47, esi_9, &data_5b1d6c, var_28_4, var_24_18)
            i_8 = i_7
            
            if (i_8 == 0)
                i_4 = i_7
                int64_t var_1030 = 0
                i_8 = sub_4b8ac0(sub_4b8610(&var_1030, esi_9, &data_5b1d6c, 0x6c, &var_1030), esi_9, 
                    &data_5b1d6c, data_dff698, 0x6c)
            
            if (*(i_8 + 8) != 3)
                int32_t* eax_52
                int32_t ecx_81
                eax_52, ecx_81 = sub_4709d0(eax_31)
                int32_t var_24_20 = *(i_8 + 8)
                esi_9 = eax_52
                int32_t var_28_6 = ecx_81
                int32_t* eax_53 = sub_48c3c0(data_dff698, 4)
                sub_4d2b10(eax_53, eax_53, i_8, var_24_20)
                *(*(i_8 + 4) + *(i_8 + 8) * 0x10 - 0x10) = esi_9
                int32_t ecx_85
                ecx_85.b = 1
                sub_469210(ecx_85.b)
            
            edi = var_1020
        else
            void* eax_33 = sub_46af30(eax_31)
            int32_t ecx_52 = sub_44f240(&result_1, "newState")
            
            if (eax_33 == 0)
                int32_t var_24_14 = ecx_52
                int32_t var_8_19 = 0xc
                uint32_t eax_38 = sub_46fcf0(eax_31, &var_1018)
                int32_t esi_13 = 0
                
                if (eax_38 s> 0)
                    do
                        sub_46f950(var_1018[esi_13], &result_1)
                        esi_13 += 1
                    while (esi_13 s< eax_38)
                
                sub_469210(1)
                int32_t var_8_20 = 0xd
            else
                int32_t var_8_17 = 8
                int32_t var_24_12 = sub_44f2d0(&var_1024, *eax_33)
                var_8_17.b = 9
                uint32_t eax_34 = sub_46fcf0(eax_31, &var_1018)
                int32_t esi_12 = 0
                
                if (eax_34 s> 0)
                    do
                        sub_46fab0(&result_1, &var_1024, var_1018[esi_12], &result_1)
                        esi_12 += 1
                    while (esi_12 s< eax_34)
                
                sub_469210(1)
                var_8_17.b = 0xa
                
                if (data_cdf414 != 0)
                    char* eax_36 = var_1024
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        char* eax_37 = sub_44f000(&var_1024)
                        int32_t temp27_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp27_1 == 1)
                            sub_45d050(eax_37, *(eax_37 + 0xc) + 0x10)
                            var_1024 = &data_5559b1
                
                int32_t var_8_18 = 0xb
            
            if (data_cdf414 != 0)
                char* const result_11 = result_1
                
                if (result_11 != 0 && *result_11 != 0)
                    char* eax_39 = sub_44f000(&result_1)
                    int32_t temp29_1 = *(eax_39 + 4)
                    *(eax_39 + 4) -= 1
                    
                    if (temp29_1 == 1)
                        sub_45d050(eax_39, *(eax_39 + 0xc) + 0x10)
                        result_1 = &data_5559b1
            
            int32_t var_8_21 = 0xffffffff
            sub_44f240(&result_1, "newState")
            int32_t var_8_22 = 0xe
            sub_46fd80(eax_31, &result_1)
            int32_t var_8_23 = 0xf
            
            if (data_cdf414 != 0)
                char* const result_12 = result_1
                
                if (result_12 != 0 && *result_12 != 0)
                    char* eax_40 = sub_44f000(&result_1)
                    int32_t temp31_1 = *(eax_40 + 4)
                    *(eax_40 + 4) -= 1
                    
                    if (temp31_1 == 1)
                        sub_45d050(eax_40, *(eax_40 + 0xc) + 0x10)
                        result_1 = &data_5559b1
            
            char* const* ecx_67
            ecx_67.b = 1
            int32_t var_8_24 = 0xffffffff
            edi = var_1020
            int32_t eax_42 = sub_46e020(sub_469210(ecx_67.b), "propValue", data_5cda18, *(edi + 8))
            struct _EXCEPTION_REGISTRATION_RECORD** eax_43 = sub_46f730(eax_42, nullptr)
            
            if (eax_42 == 0)
                sub_44e4d0(eax_43, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 
                    0x6c, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t ecx_71 = zx.d(eax_42.w)
            int32_t edx_39
            
            if (ecx_71 u< data_5c99a4)
                edx_39 = data_5c99a0
                eax_43 = ecx_71 * 0x1008
            
            if (ecx_71 u>= data_5c99a4 || *(eax_43 + edx_39 + 0x1004) != eax_42)
                sub_44e4d0(eax_43, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                    "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            esi_9 = ecx_71 * 0x1008 + edx_39
            sub_44f590(&esi_9[0x1e6], "newState")
            esi_9[0x1e9] = 0
            char* eax_44 = esi_9[0x1e6]
            
            if (eax_44 == 0 || *eax_44 == 0)
                esi_9[0x1e7] = 0
            else
                esi_9[0x1e7] = *(sub_44f000(&esi_9[0x1e6]) + 8)
    
    sub_44f240(&result_1, "propBtnMinus")
    char* const result_13 = result_1
    char* const result_30 = &data_5559b1
    char* edx_48 = *(edi + 4)
    
    if (result_13 != 0)
        result_30 = result_13
    
    char* const esi_17
    
    while (true)
        i_8.b = *result_30
        char temp24_1 = *edx_48
        bool c_9 = i_8.b u< temp24_1
        
        if (i_8.b == temp24_1)
            if (i_8.b == 0)
                esi_17 = nullptr
                break
            
            i_8.b = result_30[1]
            char temp25_1 = edx_48[1]
            c_9 = i_8.b u< temp25_1
            
            if (i_8.b == temp25_1)
                result_30 = &result_30[2]
                edx_48 = &edx_48[2]
                
                if (i_8.b != 0)
                    continue
                
                esi_17 = nullptr
                break
        
        esi_17 = sbb.d(esi_9, esi_9, c_9) | 1
        break
    
    int32_t var_8_28 = 0x12
    
    if (data_cdf414 != 0 && result_13 != 0 && *result_13 != 0)
        char* eax_55 = sub_44f000(&result_1)
        int32_t temp28_1 = *(eax_55 + 4)
        *(eax_55 + 4) -= 1
        
        if (temp28_1 == 1)
            sub_45d050(eax_55, *(eax_55 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_29 = 0xffffffff
    
    if (esi_17 == 0)
        i_8 = sub_469160(data_5cda2c)
        i_4 = i_8
        *(i_8 + 0x1004)
        *(i_8 + 0x64c) = esi_17
        data_5cea38
        
        if (sub_46e9d0() != 0x6b)
            sub_470b90(i_8, data_5cea38)
        else
            void* eax_58 = sub_46af30(i_8)
            
            if (eax_58 != 0)
                sub_44f2d0(&var_1024, *eax_58)
                int32_t var_8_30 = 0x13
                char* const eax_59 = &data_5559b1
                esi_17 = var_1024
                char* const ecx_93 = &data_5559b1
                
                if (esi_17 != 0)
                    eax_59 = esi_17
                
                int32_t eax_61
                
                while (true)
                    char edx_52 = *eax_59
                    char temp33_1 = *ecx_93
                    bool c_10 = edx_52 u< temp33_1
                    
                    if (edx_52 == temp33_1)
                        if (edx_52 == 0)
                            eax_61 = 0
                            break
                        
                        edx_52 = eax_59[1]
                        char temp34_1 = ecx_93[1]
                        c_10 = edx_52 u< temp34_1
                        
                        if (edx_52 == temp34_1)
                            eax_59 = &eax_59[2]
                            ecx_93 = &ecx_93[2]
                            
                            if (edx_52 != 0)
                                continue
                            
                            eax_61 = 0
                            break
                    
                    eax_61 = sbb.d(eax_59, eax_59, c_10) | 1
                    break
                
                if (eax_61 != 0)
                    char* const var_24_22 = ecx_93
                    uint32_t eax_62
                    char* const ecx_95
                    void* result_21
                    eax_62, ecx_95, result_21 = sub_46fcf0(i_8, &var_1018)
                    void* result_34 = nullptr
                    result_1 = nullptr
                    
                    if (eax_62 s> 0)
                        while (true)
                            ecx_95 = &data_5559b1
                            char* const eax_63 = &data_5559b1
                            
                            if (esi_17 != 0)
                                ecx_95 = esi_17
                            
                            int32_t eax_65
                            
                            while (true)
                                result_21.b = *ecx_95
                                char temp39_1 = *eax_63
                                bool c_11 = result_21.b u< temp39_1
                                
                                if (result_21.b == temp39_1)
                                    if (result_21.b == 0)
                                        eax_65 = 0
                                        break
                                    
                                    result_21.b = ecx_95[1]
                                    char temp41_1 = eax_63[1]
                                    c_11 = result_21.b u< temp41_1
                                    
                                    if (result_21.b == temp41_1)
                                        ecx_95 = &ecx_95[2]
                                        eax_63 = &eax_63[2]
                                        
                                        if (result_21.b != 0)
                                            continue
                                        
                                        eax_65 = 0
                                        break
                                
                                eax_65 = sbb.d(eax_63, eax_63, c_11) | 1
                                break
                            
                            if (eax_65 != 0)
                                int32_t var_24_23 = 0x68
                                int32_t var_28_7 = data_dff67c
                                int32_t* eax_66 = sub_45d320(var_1018[result_34])
                                char*** eax_67 =
                                    sub_4b8ac0(eax_66, eax_66, &data_5b1d6c, var_28_7, var_24_23)
                                var_1034 = eax_67
                                
                                if (eax_67 != 0)
                                    int32_t edi_2 = 0
                                    
                                    if (eax_67[1] s> 0)
                                        char** ebx = *eax_67
                                        
                                        while (true)
                                            ecx_95 = *ebx
                                            char* const eax_68 = &data_5559b1
                                            
                                            if (esi_17 != 0)
                                                eax_68 = esi_17
                                            
                                            int32_t eax_70
                                            
                                            while (true)
                                                char edx_55 = *ecx_95
                                                char temp45_1 = *eax_68
                                                bool c_12 = edx_55 u< temp45_1
                                                
                                                if (edx_55 == temp45_1)
                                                    if (edx_55 == 0)
                                                        eax_70 = 0
                                                        break
                                                    
                                                    edx_55 = ecx_95[1]
                                                    char temp48_1 = eax_68[1]
                                                    c_12 = edx_55 u< temp48_1
                                                    
                                                    if (edx_55 == temp48_1)
                                                        ecx_95 = &ecx_95[2]
                                                        eax_68 = &eax_68[2]
                                                        
                                                        if (edx_55 != 0)
                                                            continue
                                                        
                                                        eax_70 = 0
                                                        break
                                                
                                                eax_70 = sbb.d(eax_68, eax_68, c_12) | 1
                                                break
                                            
                                            if (eax_70 == 0)
                                                uint32_t var_24_24 = 0
                                                int32_t* eax_72 = sub_48c3c0(data_dff67c, 0)
                                                sub_4d2d50(eax_72, eax_72, var_1034, edi_2, var_24_24)
                                                break
                                            
                                            edi_2 += 1
                                            ebx = &ebx[3]
                                            
                                            if (edi_2 s>= *(var_1034 + 4))
                                                break
                            
                            result_21 = &result_1[1]
                            result_34 = result_21
                            result_1 = result_21
                            
                            if (result_21 s>= eax_62)
                                break
                        
                        i_8 = i_4
                    
                    ecx_95.b = 1
                    sub_469210(ecx_95.b)
                    edi = var_1020
                
                int32_t var_8_31 = 0x14
                
                if (data_cdf414 != 0 && esi_17 != 0 && *esi_17 != 0)
                    char* eax_73 = sub_44f000(&var_1024)
                    int32_t temp38_1 = *(eax_73 + 4)
                    *(eax_73 + 4) -= 1
                    
                    if (temp38_1 == 1)
                        sub_45d050(eax_73, *(eax_73 + 0xc) + 0x10)
                        var_1024 = &data_5559b1
                
                int32_t var_8_32 = 0xffffffff
                sub_44f240(&result_1, &data_5559b1)
                int32_t var_8_33 = 0x15
                sub_46fd80(i_8, &result_1)
                int32_t var_8_34 = 0x16
                
                if (data_cdf414 != 0)
                    char* const result_14 = result_1
                    
                    if (result_14 != 0 && *result_14 != 0)
                        char* eax_74 = sub_44f000(&result_1)
                        int32_t temp40_1 = *(eax_74 + 4)
                        *(eax_74 + 4) -= 1
                        
                        if (temp40_1 == 1)
                            sub_45d050(eax_74, *(eax_74 + 0xc) + 0x10)
                            result_1 = &data_5559b1
                
                char* const* ecx_103
                ecx_103.b = 1
                int32_t var_8_35 = 0xffffffff
                sub_469210(ecx_103.b)
    
    sub_44f240(&result_1, "propBtnUndo")
    void* result_15 = result_1
    void* result_31 = &data_5559b1
    char* edx_64 = *(edi + 4)
    
    if (result_15 != 0)
        result_31 = result_15
    
    int32_t esi_19
    
    while (true)
        i_8.b = *result_31
        char temp30_1 = *edx_64
        bool c_13 = i_8.b u< temp30_1
        
        if (i_8.b == temp30_1)
            if (i_8.b == 0)
                esi_19 = 0
                break
            
            i_8.b = *(result_31 + 1)
            char temp32_1 = edx_64[1]
            c_13 = i_8.b u< temp32_1
            
            if (i_8.b == temp32_1)
                result_31 += 2
                edx_64 = &edx_64[2]
                
                if (i_8.b != 0)
                    continue
                
                esi_19 = 0
                break
        
        esi_19 = sbb.d(esi_17, esi_17, c_13) | 1
        break
    
    int32_t var_8_36 = 0x17
    
    if (data_cdf414 != 0 && result_15 != 0 && *result_15 != 0)
        char* eax_75 = sub_44f000(&result_1)
        int32_t temp35_1 = *(eax_75 + 4)
        *(eax_75 + 4) -= 1
        
        if (temp35_1 == 1)
            sub_45d050(eax_75, *(eax_75 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_37 = 0xffffffff
    
    if (esi_19 == 0)
        char* eax_76 = sub_469160(data_5cda2c)
        *(eax_76 + 0x1004)
        *(eax_76 + 0x64c) = esi_19
        data_5cea38
        esi_19 = sub_46e9d0()
        void* eax_78 = sub_46b120(eax_76, esi_19)
        sub_4b8790(eax_78, eax_78, &data_5b1d6c, esi_19)
        sub_469210(1)
        edi = var_1020
    
    sub_44f240(&result_1, "propBtnFile")
    void* result_16 = result_1
    void* result_32 = &data_5559b1
    char* edx_70 = *(edi + 4)
    
    if (result_16 != 0)
        result_32 = result_16
    
    char* const esi_21
    
    while (true)
        i_8.b = *result_32
        char temp36_1 = *edx_70
        bool c_14 = i_8.b u< temp36_1
        
        if (i_8.b == temp36_1)
            if (i_8.b == 0)
                esi_21 = nullptr
                break
            
            i_8.b = *(result_32 + 1)
            char temp37_1 = edx_70[1]
            c_14 = i_8.b u< temp37_1
            
            if (i_8.b == temp37_1)
                result_32 += 2
                edx_70 = &edx_70[2]
                
                if (i_8.b != 0)
                    continue
                
                esi_21 = nullptr
                break
        
        esi_21 = sbb.d(esi_19, esi_19, c_14) | 1
        break
    
    int32_t var_8_38 = 0x18
    
    if (data_cdf414 != 0 && result_16 != 0 && *result_16 != 0)
        char* eax_79 = sub_44f000(&result_1)
        int32_t temp42_1 = *(eax_79 + 4)
        *(eax_79 + 4) -= 1
        
        if (temp42_1 == 1)
            sub_45d050(eax_79, *(eax_79 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_39 = 0xffffffff
    
    if (esi_21 == 0)
        char* eax_80 = sub_469160(data_5cda2c)
        *(eax_80 + 0x1004)
        *(eax_80 + 0x64c) = esi_21
        data_5cea38
        int32_t eax_81 = sub_46e9d0()
        
        if (eax_81 - 0x80 u> 0x72)
        label_47245e:
            sub_44e4d0(eax_81, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x275f, 
                "UI2EditorClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        char const* const ecx_119
        
        switch (eax_81)
            case 0x80
                ecx_119 = "Image (*.jpg, *.png)"
            case 0x81, 0x82, 0x83, 0x85, 0x86, 0x87, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 
                    0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 
                    0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 
                    0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 
                    0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc9, 0xca, 
                    0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 
                    0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 
                    0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef
                goto label_47245e
            case 0x84
                ecx_119 = "Material (*.material.xml, *.materialFn.xml)"
            case 0x88, 0x89
                ecx_119 = "Model (*.fbx)"
            case 0xc8
                ecx_119 = "UI2 (*.ui2)"
            case 0xd3
                ecx_119 = "Font (*.font.xml)"
            case 0xf0
                ecx_119 = "Sound (*.wav, *.ogg, *.xmlsound)"
            case 0xf1
                ecx_119 = "Flanim (*.flanim)"
            case 0xf2
                ecx_119 = "Particle (*.particle)"
        
        var_1024 = &data_5559b1
        int32_t var_8_40 = 0x19
        char eax_82 = sub_4d27f0(ecx_119, &var_1024)
        esi_21 = var_1024
        
        if (eax_82 != 0)
            void* eax_83 = sub_46b120(eax_80, eax_81)
            char* const edx_76 = &data_5559b1
            
            if (esi_21 != 0)
                edx_76 = esi_21
            
            sub_4a8d30(&result_1, edx_76)
            var_8_40.b = 0x1a
            char const (** result_33)[0x5] = &data_5559b1
            char const (** result_17)[0x5] = result_1
            
            if (result_17 != 0)
                result_33 = result_17
            
            char* eax_84 = sub_4d26e0(result_33)
            sub_4b8610(eax_84, eax_83, &data_5b1d6c, eax_81, eax_84)
            sub_469210(1)
            var_8_40.b = 0x1b
            
            if (data_cdf414 != 0)
                char* const result_18 = result_1
                
                if (result_18 != 0 && *result_18 != 0)
                    char* eax_85 = sub_44f000(&result_1)
                    int32_t temp49_1 = *(eax_85 + 4)
                    *(eax_85 + 4) -= 1
                    
                    if (temp49_1 == 1)
                        sub_45d050(eax_85, *(eax_85 + 0xc) + 0x10)
                        result_1 = &data_5559b1
        
        int32_t var_8_41 = 0x1c
        
        if (data_cdf414 != 0 && esi_21 != 0 && *esi_21 != 0)
            char* eax_86 = sub_44f000(&var_1024)
            int32_t temp47_1 = *(eax_86 + 4)
            *(eax_86 + 4) -= 1
            
            if (temp47_1 == 1)
                sub_45d050(eax_86, *(eax_86 + 0xc) + 0x10)
                var_1024 = &data_5559b1
        
        edi = var_1020
        int32_t var_8_42 = 0xffffffff
    
    sub_44f240(&result_1, "comboBoxItem_click")
    void* result = result_1
    void* result_2 = &data_5559b1
    char* edx_82 = *(edi + 4)
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_23
    
    while (true)
        i_8.b = *result_2
        char temp43_1 = *edx_82
        bool c_15 = i_8.b u< temp43_1
        
        if (i_8.b == temp43_1)
            if (i_8.b == 0)
                esi_23 = 0
                break
            
            i_8.b = *(result_2 + 1)
            char temp44_1 = edx_82[1]
            c_15 = i_8.b u< temp44_1
            
            if (i_8.b == temp44_1)
                result_2 += 2
                edx_82 = &edx_82[2]
                
                if (i_8.b != 0)
                    continue
                
                esi_23 = 0
                break
        
        esi_23 = sbb.d(esi_21, esi_21, c_15) | 1
        break
    
    int32_t var_8_43 = 0x1d
    
    if (data_cdf414 != 0 && result != 0 && *result != 0)
        result = sub_44f000(&result_1)
        int32_t temp46_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp46_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_44 = 0xffffffff
    
    if (esi_23 == 0)
        char* eax_87 = sub_469160(data_5cda2c)
        *(eax_87 + 0x64c) = 0
        
        if (data_5cea2c s<= 0)
            sub_44e4d0(eax_87, &data_5559b1, "gUI2Editor.s.activeSetCount > 0", 
                "c:\ax2017\engine\ui2.cpp", 0x2773, "UI2EditorClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        data_5cea3c
        *(eax_87 + 0x1004)
        int32_t eax_88 = sub_46e9d0()
        void* eax_89 = sub_46b120(eax_87, eax_88)
        data_5cea3c
        *(eax_87 + 0x1004)
        int32_t eax_90 = sub_4709a0()
        char* var_24_28
        char* eax_92
        char* const* ecx_139
        
        if (eax_90 != 2)
            if (eax_90 != 5)
                sub_44e4d0(eax_90, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x2796, 
                    "UI2EditorClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            data_5cea3c
            eax_92 = sub_46eb00(*(eax_87 + 0x1004))[*(var_1020 + 8)]
            var_24_28 = eax_92
            
            if (eax_88 != 0x6b)
                goto label_4722ec
            
            sub_44f2d0(&result_1, var_24_28)
            int32_t var_8_45 = 0x1e
            sub_46fd80(eax_87, &result_1)
            int32_t var_8_46 = 0x1f
            
            if (data_cdf414 != 0)
                char* const result_19 = result_1
                
                if (result_19 != 0 && *result_19 != 0)
                    char* eax_94 = sub_44f000(&result_1)
                    int32_t temp50_1 = *(eax_94 + 4)
                    *(eax_94 + 4) -= 1
                    
                    if (temp50_1 == 1)
                        sub_45d050(eax_94, *(eax_94 + 0xc) + 0x10)
            
            int32_t var_8_47 = 0xffffffff
            ecx_139.b = 1
            result = sub_469210(ecx_139.b)
        else
            data_5cea3c
            *(eax_87 + 0x1004)
            int32_t eax_91 = sub_46ee40()
            
            if (eax_88 - 0x6d u> 3)
                eax_92 = *(var_1020 + 8)
                var_24_28 = *(eax_91 + (eax_92 << 3))
            label_4722ec:
                sub_4b8610(eax_92, eax_89, &data_5b1d6c, eax_88, var_24_28)
                ecx_139.b = 1
                result = sub_469210(ecx_139.b)
            else
                int32_t var_24_27 = *(eax_91 + (*(var_1020 + 8) << 3) + 4)
                result = sub_46fe20(eax_91, eax_89, eax_87, eax_88, data_5cea3c)
        data_5cea3c = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return result
}
