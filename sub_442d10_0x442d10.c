// 函数名称: sub_442d10
// 虚拟地址: 0x442d10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_442d10(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542170
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_1c = ebx
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14
    sub_44f240(&var_14, "BtnBack")
    char* const result_2 = &data_5559b1
    char* eax_3 = var_14
    char* const ecx_1 = &data_5559b1
    char* edx = *(arg1 + 4)
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    int32_t ecx_3
    
    while (true)
        ebx.b = *ecx_1
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_3 = 0
                break
            
            ebx.b = ecx_1[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_1 = &ecx_1[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_3 = 0
                break
        
        ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
        break
    
    if (ecx_3 == 0 || *(arg1 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_44f000(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        sub_45e9a0(&data_5bb250:4)
        int64_t xmm0_1 = data_5bb244
        data_5bb258 = data_5bb24c
        int32_t eax_6 = data_5bb25c
        data_5bb24c = eax_6
        data_5bb250 = xmm0_1
        data_5bb244:4 = 0
        data_5bb244.d = 0
        data_5bb25c = eax_6 + 1
        data_5bb240 = 0
        data_5bcc88 = 0
    
    sub_44f240(&var_14, "BtnOK")
    char* eax_8 = var_14
    char* const ecx_7 = &data_5559b1
    char* edx_3 = *(arg1 + 4)
    
    if (eax_8 != 0)
        ecx_7 = eax_8
    
    int32_t edi_1
    
    while (true)
        ebx.b = *ecx_7
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = ecx_7[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_7 = &ecx_7[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_44f000(&var_14)
        int32_t temp5_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    
    if (edi_1 == 0)
        sub_438f20(&data_5bcc8c)
        sub_45e9a0(&data_5bb250:4)
        int64_t xmm0_2 = data_5bb244
        data_5bb258 = data_5bb24c
        int32_t eax_11 = data_5bb25c
        data_5bb24c = eax_11
        data_5bb250 = xmm0_2
        data_5bb244:4 = edi_1
        data_5bb244.d = edi_1
        data_5bb25c = eax_11 + 1
        data_5bb240 = edi_1
        data_5bcc88 = 0
    
    var_14 = data_5bcc8c:4 + data_5bcc8c:8 + data_5bcc8c.d
    char* result_1
    sub_44f240(&result_1, "btnPlayer1")
    char* const result_9 = &data_5559b1
    char* edx_6 = *(arg1 + 4)
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_9 = result_3
    
    int32_t edi_3
    
    while (true)
        ebx.b = *result_9
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                edi_3 = 0
                break
            
            ebx.b = result_9[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_9 = &result_9[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_3 = 0
                break
        
        edi_3 = sbb.d(edi_1, edi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_17 = sub_44f000(&result_1)
        int32_t temp8_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
    
    int32_t var_8_6 = 0xffffffff
    
    if (edi_3 == 0)
        data_5bcc8c.d = var_14
        data_5bcc8c:4 = edi_3
        data_5bcc8c:8 = edi_3
    
    sub_44f240(&result_1, "btnPlayer2")
    char* const result_10 = &data_5559b1
    char* edx_9 = *(arg1 + 4)
    char* result_4 = result_1
    
    if (result_4 != 0)
        result_10 = result_4
    
    int32_t edi_5
    
    while (true)
        ebx.b = *result_10
        char temp9_1 = *edx_9
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                edi_5 = 0
                break
            
            ebx.b = result_10[1]
            char temp10_1 = edx_9[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                result_10 = &result_10[2]
                edx_9 = &edx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_5 = 0
                break
        
        edi_5 = sbb.d(edi_3, edi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cdf414 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_20 = sub_44f000(&result_1)
        int32_t temp11_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
    
    int32_t var_8_8 = 0xffffffff
    
    if (edi_5 == 0)
        char* eax_21 = var_14
        data_5bcc8c.d = edi_5
        data_5bcc8c:4 = eax_21
        data_5bcc8c:8 = edi_5
    
    sub_44f240(&result_1, "btnPlayer3")
    char* const result_11 = &data_5559b1
    char* edx_12 = *(arg1 + 4)
    char* result_5 = result_1
    
    if (result_5 != 0)
        result_11 = result_5
    
    int32_t edi_7
    
    while (true)
        ebx.b = *result_11
        char temp12_1 = *edx_12
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                edi_7 = 0
                break
            
            ebx.b = result_11[1]
            char temp13_1 = edx_12[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                result_11 = &result_11[2]
                edx_12 = &edx_12[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_7 = 0
                break
        
        edi_7 = sbb.d(edi_5, edi_5, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_cdf414 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_23 = sub_44f000(&result_1)
        int32_t temp14_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
    
    int32_t var_8_10 = 0xffffffff
    
    if (edi_7 == 0)
        char* eax_24 = var_14
        data_5bcc8c.d = edi_7
        data_5bcc8c:4 = edi_7
        data_5bcc8c:8 = eax_24
    
    sub_44f240(&result_1, "btnLeft1")
    char* const result_12 = &data_5559b1
    char* edx_15 = *(arg1 + 4)
    char* result_6 = result_1
    
    if (result_6 != 0)
        result_12 = result_6
    
    int32_t edi_9
    
    while (true)
        ebx.b = *result_12
        char temp15_1 = *edx_15
        bool c_6 = ebx.b u< temp15_1
        
        if (ebx.b == temp15_1)
            if (ebx.b == 0)
                edi_9 = 0
                break
            
            ebx.b = result_12[1]
            char temp16_1 = edx_15[1]
            c_6 = ebx.b u< temp16_1
            
            if (ebx.b == temp16_1)
                result_12 = &result_12[2]
                edx_15 = &edx_15[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_9 = 0
                break
        
        edi_9 = sbb.d(edi_7, edi_7, c_6) | 1
        break
    
    int32_t var_8_11 = 5
    
    if (data_cdf414 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_26 = sub_44f000(&result_1)
        int32_t temp17_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
    
    int32_t var_8_12 = 0xffffffff
    
    if (edi_9 == 0)
        data_5bcc8c.d += 1
        data_5bcc8c:4 -= 1
    
    sub_44f240(&result_1, "btnLeft2")
    char* result_13 = &data_5559b1
    char* edx_18 = *(arg1 + 4)
    char* result_7 = result_1
    
    if (result_7 != 0)
        result_13 = result_7
    
    int32_t edi_11
    
    while (true)
        ebx.b = *result_13
        char temp18_1 = *edx_18
        bool c_7 = ebx.b u< temp18_1
        
        if (ebx.b == temp18_1)
            if (ebx.b == 0)
                edi_11 = 0
                break
            
            ebx.b = result_13[1]
            char temp19_1 = edx_18[1]
            c_7 = ebx.b u< temp19_1
            
            if (ebx.b == temp19_1)
                result_13 = &result_13[2]
                edx_18 = &edx_18[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_11 = 0
                break
        
        edi_11 = sbb.d(edi_9, edi_9, c_7) | 1
        break
    
    int32_t var_8_13 = 6
    
    if (data_cdf414 != 0 && result_7 != 0 && *result_7 != 0)
        char* eax_28 = sub_44f000(&result_1)
        int32_t temp20_1 = *(eax_28 + 4)
        *(eax_28 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
    
    int32_t var_8_14 = 0xffffffff
    
    if (edi_11 == 0)
        if (data_5bcca1 == 0)
            data_5bcc8c:4 += 1
        else
            data_5bcc8c.d += 1
        
        data_5bcc8c:8 -= 1
    
    sub_44f240(&result_1, "btnRight1")
    char* result_14 = &data_5559b1
    char* edx_21 = *(arg1 + 4)
    char* result_8 = result_1
    
    if (result_8 != 0)
        result_14 = result_8
    
    int32_t edi_13
    
    while (true)
        ebx.b = *result_14
        char temp21_1 = *edx_21
        bool c_8 = ebx.b u< temp21_1
        
        if (ebx.b == temp21_1)
            if (ebx.b == 0)
                edi_13 = 0
                break
            
            ebx.b = result_14[1]
            char temp22_1 = edx_21[1]
            c_8 = ebx.b u< temp22_1
            
            if (ebx.b == temp22_1)
                result_14 = &result_14[2]
                edx_21 = &edx_21[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_13 = 0
                break
        
        edi_13 = sbb.d(edi_11, edi_11, c_8) | 1
        break
    
    int32_t var_8_15 = 7
    
    if (data_cdf414 != 0 && result_8 != 0 && *result_8 != 0)
        char* eax_30 = sub_44f000(&result_1)
        int32_t temp23_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
    
    int32_t var_8_16 = 0xffffffff
    
    if (edi_13 == 0)
        data_5bcc8c.d -= 1
        
        if (data_5bcca1 == 0)
            data_5bcc8c:4 += 1
        else
            data_5bcc8c:8 += 1
    
    sub_44f240(&result_1, "btnRight2")
    char* ecx_29 = *(arg1 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_1
    
    while (true)
        char edx_24 = *result_2
        char temp24_1 = *ecx_29
        bool c_9 = edx_24 u< temp24_1
        
        if (edx_24 == temp24_1)
            if (edx_24 == 0)
                esi_1 = 0
                break
            
            edx_24 = result_2[1]
            char temp25_1 = ecx_29[1]
            c_9 = edx_24 u< temp25_1
            
            if (edx_24 == temp25_1)
                result_2 = &result_2[2]
                ecx_29 = &ecx_29[2]
                
                if (edx_24 != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(result_2, result_2, c_9) | 1
        break
    
    int32_t var_8_17 = 8
    
    if (data_cdf414 != 0 && result != 0 && *result != 0)
        result = sub_44f000(&result_1)
        int32_t temp26_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp26_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    if (esi_1 == 0)
        data_5bcc8c:4 -= 1
        data_5bcc8c:8 += 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
