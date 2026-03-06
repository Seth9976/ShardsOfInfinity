// 函数名称: sub_427c10
// 虚拟地址: 0x427c10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_427c10(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541898
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_18
    sub_44f240(&var_18, "BtnBack")
    char* const result_2 = &data_5559b1
    char* eax_3 = var_18
    char* const ecx_1 = &data_5559b1
    char* edx = *(arg1 + 4)
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    int32_t ecx_3
    
    while (true)
        eax_3.b = *ecx_1
        char temp2_1 = *edx
        bool c_1 = eax_3.b u< temp2_1
        bool z_1 = eax_3.b == temp2_1
        char var_11_1 = eax_3.b
        eax_3 = var_18
        
        if (z_1)
            if (var_11_1 == 0)
                ecx_3 = 0
                break
            
            eax_3.b = ecx_1[1]
            char temp3_1 = edx[1]
            c_1 = eax_3.b u< temp3_1
            bool z_2 = eax_3.b == temp3_1
            char var_11_2 = eax_3.b
            eax_3 = var_18
            
            if (z_2)
                ecx_1 = &ecx_1[2]
                edx = &edx[2]
                
                if (var_11_2 != 0)
                    continue
                
                ecx_3 = 0
                break
        
        ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
        break
    
    char var_11_3
    
    if (ecx_3 != 0)
        var_11_3 = 0
    
    if (ecx_3 == 0 || *(arg1 + 0x18) == 2)
        var_11_3 = 1
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_44f000(&var_18)
        int32_t temp4_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_11_3 != 0)
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
    
    char* result_1 = *(sub_41ad20() + 0xf0)
    sub_44f240(&var_18, "btnUndo")
    char* const eax_10 = var_18
    char* const ecx_7 = &data_5559b1
    char* edx_3 = *(arg1 + 4)
    
    if (eax_10 != 0)
        ecx_7 = eax_10
    
    int32_t edi_1
    
    while (true)
        eax_10.b = *ecx_7
        char temp5_1 = *edx_3
        bool c_2 = eax_10.b u< temp5_1
        bool z_3 = eax_10.b == temp5_1
        char var_11_4 = eax_10.b
        eax_10 = var_18
        
        if (z_3)
            if (var_11_4 == 0)
                edi_1 = 0
                break
            
            eax_10.b = ecx_7[1]
            char temp6_1 = edx_3[1]
            c_2 = eax_10.b u< temp6_1
            bool z_4 = eax_10.b == temp6_1
            char var_11_5 = eax_10.b
            eax_10 = var_18
            
            if (z_4)
                ecx_7 = &ecx_7[2]
                edx_3 = &edx_3[2]
                
                if (var_11_5 != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_44f000(&var_18)
        int32_t temp7_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp7_1 == 1)
            sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    
    if (edi_1 == 0)
        sub_41aff0()
    
    sub_44f240(&var_18, "btnRedo")
    char* const ecx_11 = &data_5559b1
    char* edx_6 = *(arg1 + 4)
    char* const eax_13 = var_18
    
    if (eax_13 != 0)
        ecx_11 = eax_13
    
    int32_t edi_3
    
    while (true)
        eax_13.b = *ecx_11
        char temp8_1 = *edx_6
        bool c_3 = eax_13.b u< temp8_1
        bool z_5 = eax_13.b == temp8_1
        char var_11_6 = eax_13.b
        eax_13 = var_18
        
        if (z_5)
            if (var_11_6 == 0)
                edi_3 = 0
                break
            
            eax_13.b = ecx_11[1]
            char temp9_1 = edx_6[1]
            c_3 = eax_13.b u< temp9_1
            bool z_6 = eax_13.b == temp9_1
            char var_11_7 = eax_13.b
            eax_13 = var_18
            
            if (z_6)
                ecx_11 = &ecx_11[2]
                edx_6 = &edx_6[2]
                
                if (var_11_7 != 0)
                    continue
                
                edi_3 = 0
                break
        
        edi_3 = sbb.d(edi_1, edi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_44f000(&var_18)
        int32_t temp10_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp10_1 == 1)
            sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    
    if (edi_3 == 0)
        sub_41b0e0()
    
    sub_44f240(&var_18, "btnRestart")
    char* const ecx_15 = &data_5559b1
    char* edx_9 = *(arg1 + 4)
    char* const eax_16 = var_18
    
    if (eax_16 != 0)
        ecx_15 = eax_16
    
    int32_t edi_5
    
    while (true)
        eax_16.b = *ecx_15
        char temp11_1 = *edx_9
        bool c_4 = eax_16.b u< temp11_1
        bool z_7 = eax_16.b == temp11_1
        char var_11_8 = eax_16.b
        eax_16 = var_18
        
        if (z_7)
            if (var_11_8 == 0)
                edi_5 = 0
                break
            
            eax_16.b = ecx_15[1]
            char temp12_1 = edx_9[1]
            c_4 = eax_16.b u< temp12_1
            bool z_8 = eax_16.b == temp12_1
            char var_11_9 = eax_16.b
            eax_16 = var_18
            
            if (z_8)
                ecx_15 = &ecx_15[2]
                edx_9 = &edx_9[2]
                
                if (var_11_9 != 0)
                    continue
                
                edi_5 = 0
                break
        
        edi_5 = sbb.d(edi_3, edi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cdf414 != 0 && eax_16 != 0 && *eax_16 != 0)
        char* eax_17 = sub_44f000(&var_18)
        int32_t temp13_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp13_1 == 1)
            sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_8 = 0xffffffff
    
    if (edi_5 == 0)
        sub_417060()
        sub_416f80(result_1)
    
    sub_44f240(&var_18, "btnCopy")
    char* const ecx_20 = &data_5559b1
    char* edx_12 = *(arg1 + 4)
    char* const eax_19 = var_18
    
    if (eax_19 != 0)
        ecx_20 = eax_19
    
    int32_t edi_7
    
    while (true)
        eax_19.b = *ecx_20
        char temp14_1 = *edx_12
        bool c_5 = eax_19.b u< temp14_1
        bool z_9 = eax_19.b == temp14_1
        char var_11_10 = eax_19.b
        eax_19 = var_18
        
        if (z_9)
            if (var_11_10 == 0)
                edi_7 = 0
                break
            
            eax_19.b = ecx_20[1]
            char temp15_1 = edx_12[1]
            c_5 = eax_19.b u< temp15_1
            bool z_10 = eax_19.b == temp15_1
            char var_11_11 = eax_19.b
            eax_19 = var_18
            
            if (z_10)
                ecx_20 = &ecx_20[2]
                edx_12 = &edx_12[2]
                
                if (var_11_11 != 0)
                    continue
                
                edi_7 = 0
                break
        
        edi_7 = sbb.d(edi_5, edi_5, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_cdf414 != 0 && eax_19 != 0 && *eax_19 != 0)
        char* eax_20 = sub_44f000(&var_18)
        int32_t temp16_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp16_1 == 1)
            sub_45d050(eax_20, *(eax_20 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_10 = 0xffffffff
    
    if (edi_7 == 0)
        char* result_3 = result_1
        sub_44f980(&var_18, &data_5828f8)
        char* const eax_21 = var_18
        char* const ecx_23 = &data_5559b1
        
        if (eax_21 != 0)
            ecx_23 = eax_21
        
        sub_44eee0(ecx_23)
        int32_t var_8_11 = 5
        
        if (data_cdf414 != edi_7)
            char* const eax_22 = var_18
            
            if (eax_22 != 0 && *eax_22 != 0)
                char* eax_23 = sub_44f000(&var_18)
                int32_t temp19_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp19_1 == 1)
                    sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
                    var_18 = &data_5559b1
        
        int32_t var_8_12 = 0xffffffff
    
    sub_44f240(&var_18, "btnPaste")
    char* const ecx_27 = &data_5559b1
    char* edx_17 = *(arg1 + 4)
    char* const eax_25 = var_18
    
    if (eax_25 != 0)
        ecx_27 = eax_25
    
    int32_t edi_9
    
    while (true)
        eax_25.b = *ecx_27
        char temp17_1 = *edx_17
        bool c_6 = eax_25.b u< temp17_1
        bool z_11 = eax_25.b == temp17_1
        char var_11_12 = eax_25.b
        eax_25 = var_18
        
        if (z_11)
            if (var_11_12 == 0)
                edi_9 = 0
                break
            
            eax_25.b = ecx_27[1]
            char temp18_1 = edx_17[1]
            c_6 = eax_25.b u< temp18_1
            bool z_12 = eax_25.b == temp18_1
            char var_11_13 = eax_25.b
            eax_25 = var_18
            
            if (z_12)
                ecx_27 = &ecx_27[2]
                edx_17 = &edx_17[2]
                
                if (var_11_13 != 0)
                    continue
                
                edi_9 = 0
                break
        
        edi_9 = sbb.d(edi_7, edi_7, c_6) | 1
        break
    
    int32_t var_8_13 = 6
    
    if (data_cdf414 != 0 && eax_25 != 0 && *eax_25 != 0)
        char* eax_26 = sub_44f000(&var_18)
        int32_t temp20_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_14 = 0xffffffff
    
    if (edi_9 == 0)
        var_18 = &data_5559b1
        int32_t var_8_15 = 7
        sub_44ef40(&var_18)
        char* const eax_27 = &data_5559b1
        char* const esi = var_18
        
        if (esi != 0)
            eax_27 = esi
        
        edi_9 = __atoi64(eax_27)
        *(sub_41ad20() + 0xf0) = edi_9
        int32_t var_8_16 = 8
        
        if (data_cdf414 != 0 && esi != 0 && *esi != 0)
            char* eax_30 = sub_44f000(&var_18)
            int32_t temp23_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp23_1 == 1)
                sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
                var_18 = &data_5559b1
        
        int32_t var_8_17 = 0xffffffff
        result_2 = &data_5559b1
    
    sub_44f240(&var_18, "btnNextPlayer")
    void* ecx_34 = &data_5559b1
    char* edx_22 = *(arg1 + 4)
    char* const eax_32 = var_18
    
    if (eax_32 != 0)
        ecx_34 = eax_32
    
    int32_t edi_11
    
    while (true)
        eax_32.b = *ecx_34
        char temp21_1 = *edx_22
        bool c_7 = eax_32.b u< temp21_1
        bool z_13 = eax_32.b == temp21_1
        char var_11_14 = eax_32.b
        eax_32 = var_18
        
        if (z_13)
            if (var_11_14 == 0)
                edi_11 = 0
                break
            
            eax_32.b = *(ecx_34 + 1)
            char temp22_1 = edx_22[1]
            c_7 = eax_32.b u< temp22_1
            bool z_14 = eax_32.b == temp22_1
            char var_11_15 = eax_32.b
            eax_32 = var_18
            
            if (z_14)
                ecx_34 += 2
                edx_22 = &edx_22[2]
                
                if (var_11_15 != 0)
                    continue
                
                edi_11 = 0
                break
        
        edi_11 = sbb.d(edi_9, edi_9, c_7) | 1
        break
    
    int32_t var_8_18 = 9
    
    if (data_cdf414 != 0 && eax_32 != 0 && *eax_32 != 0)
        char* eax_33 = sub_44f000(&var_18)
        int32_t temp24_1 = *(eax_33 + 4)
        *(eax_33 + 4) -= 1
        
        if (temp24_1 == 1)
            sub_45d050(eax_33, *(eax_33 + 0xc) + 0x10)
            var_18 = &data_5559b1
    
    int32_t var_8_19 = 0xffffffff
    
    if (edi_11 == 0)
        void* eax_34 = sub_41ad20()
        int32_t edi_13 = *(eax_34 + 0xec)
        int32_t ecx_37 = 0
        result_1 = eax_34 + 8
        
        if (edi_13 s> 0)
            void* edx_25 = eax_34 + 0x24
            
            while (*edx_25 != 0x3e8)
                ecx_37 += 1
                edx_25 += 0x2c
                
                if (ecx_37 s>= edi_13)
                    goto label_428343
        
        if (edi_13 s<= 0 || ecx_37 == 0xffffffff)
        label_428343:
            sub_44e4d0(eax_34 + 8, &data_5559b1, "localPlayer != -1", 
                "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0xb1d, "GameDebugNextPlayer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        char* result_4 = result_1
        void* esi_2 = ecx_37 * 0x2c + result_4
        void* ecx_38 = &result_4[mods.dp.d(sx.q(ecx_37 + 1), edi_13) * 0x2c]
        int128_t xmm1_1 = *(esi_2 + 8)
        int32_t edi_14 = *(esi_2 + 0x30)
        int128_t xmm2_1 = *(esi_2 + 0x18)
        int64_t xmm3_1 = *(esi_2 + 0x28)
        *(esi_2 + 8) = *(ecx_38 + 8)
        *(esi_2 + 0x18) = *(ecx_38 + 0x18)
        *(esi_2 + 0x28) = *(ecx_38 + 0x28)
        *(esi_2 + 0x30) = *(ecx_38 + 0x30)
        *(ecx_38 + 8) = xmm1_1
        *(ecx_38 + 0x18) = xmm2_1
        *(ecx_38 + 0x28) = xmm3_1
        *(ecx_38 + 0x30) = edi_14
        sub_441b80(sub_41ad20(), 0x557e44)
        result_2 = &data_5559b1
    
    sub_44f240(&result_1, "btnEmailBug")
    char* ecx_41 = *(arg1 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_4
    
    while (true)
        char edx_28 = *result_2
        char temp25_1 = *ecx_41
        bool c_8 = edx_28 u< temp25_1
        
        if (edx_28 == temp25_1)
            if (edx_28 == 0)
                esi_4 = 0
                break
            
            edx_28 = result_2[1]
            char temp26_1 = ecx_41[1]
            c_8 = edx_28 u< temp26_1
            
            if (edx_28 == temp26_1)
                result_2 = &result_2[2]
                ecx_41 = &ecx_41[2]
                
                if (edx_28 != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(result_2, result_2, c_8) | 1
        break
    
    int32_t var_8_20 = 0xa
    
    if (data_cdf414 != 0 && result != 0 && *result != 0)
        result = sub_44f000(&result_1)
        int32_t temp27_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp27_1 == 1)
            result = sub_45d050(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_21 = 0xffffffff
    
    if (esi_4 == 0)
        result = sub_4278f0()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
