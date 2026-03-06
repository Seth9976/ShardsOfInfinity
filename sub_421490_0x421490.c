// 函数名称: sub_421490
// 虚拟地址: 0x421490
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_421490(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5415b9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1 = nullptr
    char* var_20
    sub_44f240(&var_20, "btn_screen")
    int32_t var_8_1 = 0
    char* const result_2 = &data_5559b1
    char* esi = var_20
    char* const var_1c = 1
    char* ecx_1 = *(arg1 + 4)
    result_1 = 1
    char* const eax_3 = &data_5559b1
    
    if (esi != 0)
        eax_3 = esi
    
    int32_t eax_5
    
    while (true)
        void* edx
        edx.b = *eax_3
        char temp0_1 = *ecx_1
        bool c_1 = edx.b u< temp0_1
        
        if (edx.b == temp0_1)
            if (edx.b == 0)
                eax_5 = 0
                break
            
            edx.b = eax_3[1]
            char temp1_1 = ecx_1[1]
            c_1 = edx.b u< temp1_1
            
            if (edx.b == temp1_1)
                eax_3 = &eax_3[2]
                ecx_1 = &ecx_1[2]
                
                if (edx.b != 0)
                    continue
                
                eax_5 = 0
                break
        
        eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
        break
    
    void* result_11 = 1
    void* result_12 = 1
    char* const var_18
    char var_11
    char* eax_7
    
    if (eax_5 == 0)
        eax_7 = var_18
        var_11 = 1
    else
        sub_44f240(&var_18, "btn_resume")
        char* const ecx_3 = &data_5559b1
        var_1c = 3
        char* edx_1 = *(arg1 + 4)
        eax_7 = var_18
        
        if (eax_7 != 0)
            ecx_3 = eax_7
        
        int32_t edx_3
        
        while (true)
            result_11.b = *ecx_3
            char temp2_1 = *edx_1
            bool c_2 = result_11.b u< temp2_1
            
            if (result_11.b == temp2_1)
                if (result_11.b == 0)
                    edx_3 = 0
                    break
                
                result_11.b = ecx_3[1]
                char temp3_1 = edx_1[1]
                c_2 = result_11.b u< temp3_1
                
                if (result_11.b == temp3_1)
                    ecx_3 = &ecx_3[2]
                    edx_1 = &edx_1[2]
                    
                    if (result_11.b != 0)
                        continue
                    
                    edx_3 = 0
                    break
            
            edx_3 = sbb.d(edx_1, edx_1, c_2) | 1
            break
        
        result_11 = 3
        result_12 = 3
        
        if (edx_3 == 0 || *(arg1 + 0x18) == 2)
            var_11 = 1
        else
            var_11 = 0
    
    if ((result_11.b & 2) != 0)
        result_11 = var_1c & 0xfffffffd
        result_1 = result_11
        int32_t var_8_2 = 1
        result_12 = result_11
        
        if (data_cdf414 != 0)
            if (eax_7 == 0 || *eax_7 == 0)
                result_12 = result_11
            else
                char* eax_8 = sub_44f000(&var_18)
                result_12 = result_11
                int32_t temp4_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_18 = &data_5559b1
                    result_12 = result_11
    
    int32_t var_8_3 = 0xffffffff
    
    if ((result_12.b & 1) != 0)
        result_1 = result_12 & 0xfffffffe
        int32_t var_8_4 = 2
        
        if (data_cdf414 != 0 && esi != 0 && *esi != 0)
            char* eax_9 = sub_44f000(&var_20)
            int32_t temp6_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                var_20 = &data_5559b1
        
        int32_t var_8_5 = 0xffffffff
    
    if (var_11 != 0)
        sub_45e9a0(&data_5bb250:4)
        int64_t xmm0_1 = data_5bb244
        data_5bb258 = data_5bb24c
        int32_t eax_11 = data_5bb25c
        data_5bb24c = eax_11
        data_5bb250 = xmm0_1
        data_5bb244:4 = 0
        data_5bb244.d = 0
        data_5bb25c = eax_11 + 1
        data_5bb240 = 0
    
    sub_44f240(&result_1, "BtnOptions")
    char* const result_13 = &data_5559b1
    char* edx_9 = *(arg1 + 4)
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_13 = result_3
    
    int32_t esi_1
    
    while (true)
        result_11.b = *result_13
        char temp5_1 = *edx_9
        bool c_3 = result_11.b u< temp5_1
        
        if (result_11.b == temp5_1)
            if (result_11.b == 0)
                esi_1 = 0
                break
            
            result_11.b = result_13[1]
            char temp7_1 = edx_9[1]
            c_3 = result_11.b u< temp7_1
            
            if (result_11.b == temp7_1)
                result_13 = &result_13[2]
                edx_9 = &edx_9[2]
                
                if (result_11.b != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_6 = 3
    
    if (data_cdf414 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_14 = sub_44f000(&result_1)
        int32_t temp8_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_7 = 0xffffffff
    int32_t eax_15 = data_5bb240
    
    if (esi_1 == 0)
        eax_15 = 0xc
    
    data_5bb240 = eax_15
    sub_44f240(&result_1, "BtnRules")
    char* const result_14 = &data_5559b1
    char* edx_12 = *(arg1 + 4)
    char* result_4 = result_1
    
    if (result_4 != 0)
        result_14 = result_4
    
    int32_t esi_3
    
    while (true)
        result_11.b = *result_14
        char temp9_1 = *edx_12
        bool c_4 = result_11.b u< temp9_1
        
        if (result_11.b == temp9_1)
            if (result_11.b == 0)
                esi_3 = 0
                break
            
            result_11.b = result_14[1]
            char temp10_1 = edx_12[1]
            c_4 = result_11.b u< temp10_1
            
            if (result_11.b == temp10_1)
                result_14 = &result_14[2]
                edx_12 = &edx_12[2]
                
                if (result_11.b != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_4) | 1
        break
    
    int32_t var_8_8 = 4
    
    if (data_cdf414 != 0 && result_4 != 0 && *result_4 != 0)
        char* eax_17 = sub_44f000(&result_1)
        int32_t temp11_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_9 = 0xffffffff
    int32_t eax_18 = data_5bb240
    
    if (esi_3 == 0)
        eax_18 = 0x15
    
    data_5bb240 = eax_18
    sub_44f240(&result_1, "BtnLog")
    char* const result_15 = &data_5559b1
    char* edx_15 = *(arg1 + 4)
    char* result_5 = result_1
    
    if (result_5 != 0)
        result_15 = result_5
    
    int32_t esi_5
    
    while (true)
        result_11.b = *result_15
        char temp12_1 = *edx_15
        bool c_5 = result_11.b u< temp12_1
        
        if (result_11.b == temp12_1)
            if (result_11.b == 0)
                esi_5 = 0
                break
            
            result_11.b = result_15[1]
            char temp13_1 = edx_15[1]
            c_5 = result_11.b u< temp13_1
            
            if (result_11.b == temp13_1)
                result_15 = &result_15[2]
                edx_15 = &edx_15[2]
                
                if (result_11.b != 0)
                    continue
                
                esi_5 = 0
                break
        
        esi_5 = sbb.d(esi_3, esi_3, c_5) | 1
        break
    
    int32_t var_8_10 = 5
    
    if (data_cdf414 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_20 = sub_44f000(&result_1)
        int32_t temp14_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_11 = 0xffffffff
    int32_t eax_21 = data_5bb240
    
    if (esi_5 == 0)
        eax_21 = 0x1f
    
    data_5bb240 = eax_21
    sub_44f240(&result_1, "BtnForfeit")
    char* const result_16 = &data_5559b1
    char* edx_18 = *(arg1 + 4)
    char* result_6 = result_1
    
    if (result_6 != 0)
        result_16 = result_6
    
    int32_t esi_7
    
    while (true)
        result_11.b = *result_16
        char temp15_1 = *edx_18
        bool c_6 = result_11.b u< temp15_1
        
        if (result_11.b == temp15_1)
            if (result_11.b == 0)
                esi_7 = 0
                break
            
            result_11.b = result_16[1]
            char temp16_1 = edx_18[1]
            c_6 = result_11.b u< temp16_1
            
            if (result_11.b == temp16_1)
                result_16 = &result_16[2]
                edx_18 = &edx_18[2]
                
                if (result_11.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_5, esi_5, c_6) | 1
        break
    
    int32_t var_8_12 = 6
    
    if (data_cdf414 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_23 = sub_44f000(&result_1)
        int32_t temp17_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp17_1 == 1)
            sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_13 = 0xffffffff
    
    if (esi_7 == 0)
        sub_45e9a0(&data_5bb250:4)
        int64_t xmm0_2 = data_5bb244
        data_5bb258 = data_5bb24c
        int32_t eax_25 = data_5bb25c
        data_5bb24c = eax_25
        data_5bb250 = xmm0_2
        data_5bb244:4 = esi_7
        data_5bb244.d = esi_7
        data_5bb25c = eax_25 + 1
        data_5bb240 = esi_7
        sub_44f240(&result_1, &data_5559b1)
        int32_t var_8_14 = 7
        sub_44f240(&var_20, &data_5559b1)
        var_8_14.b = 8
        sub_44f240(&var_1c, "Are you sure you want to forfeit this game?")
        var_8_14.b = 9
        sub_44f240(&var_18, "FORFEIT GAME")
        var_8_14.b = 0xa
        data_5bb260 = 0x1b
        sub_44f510(&data_5bb2a0, &var_18)
        sub_44f510(&data_5bb2a4, &var_1c)
        sub_44f510(&data_5bb2a8, &var_20)
        sub_44f510(&data_5bb2ac, &result_1)
        data_5bb2b0 = sub_421d40
        data_5bb2b4 = esi_7
        var_8_14.b = 0xb
        
        if (data_cdf414 != esi_7)
            char* const eax_27 = var_18
            
            if (eax_27 != 0 && *eax_27 != 0)
                char* eax_28 = sub_44f000(&var_18)
                int32_t temp19_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp19_1 == 1)
                    sub_45d050(eax_28, *(eax_28 + 0xc) + 0x10)
                    var_18 = &data_5559b1
        
        var_8_14.b = 0xc
        
        if (data_cdf414 != 0)
            char* eax_29 = var_1c
            
            if (eax_29 != 0 && *eax_29 != 0)
                char* eax_30 = sub_44f000(&var_1c)
                int32_t temp21_1 = *(eax_30 + 4)
                *(eax_30 + 4) -= 1
                
                if (temp21_1 == 1)
                    sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
                    var_1c = &data_5559b1
        
        var_8_14.b = 0xd
        
        if (data_cdf414 != 0)
            char* eax_31 = var_20
            
            if (eax_31 != 0 && *eax_31 != 0)
                char* eax_32 = sub_44f000(&var_20)
                int32_t temp22_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp22_1 == 1)
                    sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
                    var_20 = &data_5559b1
        
        int32_t var_8_15 = 0xe
        
        if (data_cdf414 != 0)
            char* result_7 = result_1
            
            if (result_7 != 0 && *result_7 != 0)
                char* eax_33 = sub_44f000(&result_1)
                int32_t temp23_1 = *(eax_33 + 4)
                *(eax_33 + 4) -= 1
                
                if (temp23_1 == 1)
                    sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
                    result_1 = &data_5559b1
        
        int32_t var_8_16 = 0xffffffff
    
    sub_44f240(&result_1, "BtnDebug")
    void* result_17 = &data_5559b1
    char* edx_29 = *(arg1 + 4)
    void* result_8 = result_1
    
    if (result_8 != 0)
        result_17 = result_8
    
    int32_t esi_9
    
    while (true)
        result_11.b = *result_17
        char temp18_1 = *edx_29
        bool c_7 = result_11.b u< temp18_1
        
        if (result_11.b == temp18_1)
            if (result_11.b == 0)
                esi_9 = 0
                break
            
            result_11.b = *(result_17 + 1)
            char temp20_1 = edx_29[1]
            c_7 = result_11.b u< temp20_1
            
            if (result_11.b == temp20_1)
                result_17 += 2
                edx_29 = &edx_29[2]
                
                if (result_11.b != 0)
                    continue
                
                esi_9 = 0
                break
        
        esi_9 = sbb.d(esi_7, esi_7, c_7) | 1
        break
    
    int32_t var_8_17 = 0xf
    
    if (data_cdf414 != 0 && result_8 != 0 && *result_8 != 0)
        char* eax_35 = sub_44f000(&result_1)
        int32_t temp24_1 = *(eax_35 + 4)
        *(eax_35 + 4) -= 1
        
        if (temp24_1 == 1)
            sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_18 = 0xffffffff
    int32_t eax_36 = data_5bb240
    
    if (esi_9 == 0)
        eax_36 = 0x18
    
    data_5bb240 = eax_36
    sub_44f240(&result_1, "btn_exit")
    char* result_18 = &data_5559b1
    char* edx_32 = *(arg1 + 4)
    char* result_9 = result_1
    
    if (result_9 != 0)
        result_18 = result_9
    
    int32_t esi_11
    
    while (true)
        result_11.b = *result_18
        char temp25_1 = *edx_32
        bool c_8 = result_11.b u< temp25_1
        
        if (result_11.b == temp25_1)
            if (result_11.b == 0)
                esi_11 = 0
                break
            
            result_11.b = result_18[1]
            char temp26_1 = edx_32[1]
            c_8 = result_11.b u< temp26_1
            
            if (result_11.b == temp26_1)
                result_18 = &result_18[2]
                edx_32 = &edx_32[2]
                
                if (result_11.b != 0)
                    continue
                
                esi_11 = 0
                break
        
        esi_11 = sbb.d(esi_9, esi_9, c_8) | 1
        break
    
    int32_t var_8_19 = 0x10
    
    if (data_cdf414 != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_38 = sub_44f000(&result_1)
        int32_t temp27_1 = *(eax_38 + 4)
        *(eax_38 + 4) -= 1
        
        if (temp27_1 == 1)
            sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
            result_1 = &data_5559b1
    
    int32_t var_8_20 = 0xffffffff
    
    if (esi_11 == 0)
        void* eax_39 = data_65aabc
        
        if (eax_39 == 0)
            sub_44e4d0(eax_39, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        *(eax_39 + 0x42c) = 5
    
    sub_44f240(&result_1, "btnLeft")
    char* result_19 = &data_5559b1
    char* edx_35 = *(arg1 + 4)
    char* result_10 = result_1
    
    if (result_10 != 0)
        result_19 = result_10
    
    int32_t esi_13
    
    while (true)
        result_11.b = *result_19
        char temp28_1 = *edx_35
        bool c_9 = result_11.b u< temp28_1
        
        if (result_11.b == temp28_1)
            if (result_11.b == 0)
                esi_13 = 0
                break
            
            result_11.b = result_19[1]
            char temp29_1 = edx_35[1]
            c_9 = result_11.b u< temp29_1
            
            if (result_11.b == temp29_1)
                result_19 = &result_19[2]
                edx_35 = &edx_35[2]
                
                if (result_11.b != 0)
                    continue
                
                esi_13 = 0
                break
        
        esi_13 = sbb.d(esi_11, esi_11, c_9) | 1
        break
    
    int32_t var_8_21 = 0x11
    
    if (data_cdf414 != 0 && result_10 != 0 && *result_10 != 0)
        char* eax_41 = sub_44f000(&result_1)
        int32_t temp30_1 = *(eax_41 + 4)
        *(eax_41 + 4) -= 1
        
        if (temp30_1 == 1)
            sub_45d050(eax_41, *(eax_41 + 0xc) + 0x10)
    
    int32_t var_8_22 = 0xffffffff
    
    if (esi_13 == 0)
        data_5c63a4 -= 1
    
    sub_44f240(&result_1, "btnRight")
    char* ecx_43 = *(arg1 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_15
    
    while (true)
        char edx_38 = *result_2
        char temp31_1 = *ecx_43
        bool c_10 = edx_38 u< temp31_1
        
        if (edx_38 == temp31_1)
            if (edx_38 == 0)
                esi_15 = 0
                break
            
            edx_38 = result_2[1]
            char temp32_1 = ecx_43[1]
            c_10 = edx_38 u< temp32_1
            
            if (edx_38 == temp32_1)
                result_2 = &result_2[2]
                ecx_43 = &ecx_43[2]
                
                if (edx_38 != 0)
                    continue
                
                esi_15 = 0
                break
        
        esi_15 = sbb.d(esi_13, esi_13, c_10) | 1
        break
    
    int32_t var_8_23 = 0x12
    
    if (data_cdf414 != 0 && result != 0 && *result != 0)
        result = sub_44f000(&result_1)
        int32_t temp33_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp33_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    if (esi_15 == 0)
        data_5c63a4 += 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
