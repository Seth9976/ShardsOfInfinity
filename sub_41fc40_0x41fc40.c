// 函数名称: sub_41fc40
// 虚拟地址: 0x41fc40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_41fc40(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541438
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_28 = ebx
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14
    sub_44f240(&var_14, "BtnBack")
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
            var_14 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_5 = 4
        
        if (data_5bb2b8 == 1)
            eax_5 = 0xe
        
        data_5bb240 = eax_5
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    sub_44f240(&var_14, "btnPrev")
    char* eax_6 = var_14
    char* const ecx_9 = &data_5559b1
    char* edx_3 = *(arg1 + 4)
    
    if (eax_6 != 0)
        ecx_9 = eax_6
    
    int32_t esi
    
    while (true)
        ebx.b = *ecx_9
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi = 0
                break
            
            ebx.b = ecx_9[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_9 = &ecx_9[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(&data_5559b1, &data_5559b1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && eax_6 != 0 && *eax_6 != 0)
        eax_6 = sub_44f000(&var_14)
        int32_t temp5_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp5_1 == 1)
            eax_6 = sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi == 0)
        data_5bb2bc -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    sub_44f240(&var_14, "btnNext")
    char* eax_7 = var_14
    char* const ecx_15 = &data_5559b1
    char* edx_6 = *(arg1 + 4)
    
    if (eax_7 != 0)
        ecx_15 = eax_7
    
    int32_t esi_2
    
    while (true)
        ebx.b = *ecx_15
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_2 = 0
                break
            
            ebx.b = ecx_15[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                ecx_15 = &ecx_15[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && eax_7 != 0 && *eax_7 != 0)
        eax_7 = sub_44f000(&var_14)
        int32_t temp8_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp8_1 == 1)
            eax_7 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_2 == 0)
        data_5bb2bc += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    sub_44f240(&var_14, "btnFriend")
    ebx.b = sub_44f450(&var_14, *(arg1 + 4))
    int32_t var_8_7 = 3
    
    if (data_cdf414 != 0)
        char* ecx_22 = var_14
        
        if (ecx_22 != 0 && *ecx_22 != 0)
            char* eax_9 = sub_44f000(&var_14)
            int32_t temp9_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
                var_14 = &data_5559b1
    
    int32_t var_8_8 = 0xffffffff
    char* eax_10
    int32_t var_24
    
    if (ebx.b == 0)
        sub_44f240(&var_14, "btnTrash")
        eax_10 = sub_44f450(&var_14, *(arg1 + 4))
        ebx.b = eax_10.b
        int32_t var_8_9 = 4
        
        if (data_cdf414 != 0)
            char* ecx_33 = var_14
            
            if (ecx_33 != 0 && *ecx_33 != 0)
                eax_10 = sub_44f000(&var_14)
                int32_t temp10_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp10_1 == 1)
                    eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
        
        int32_t var_8_10 = 0xffffffff
        
        if (ebx.b != 0)
            void* esi_9 = data_5bb2bc * 6 + 0xffffffff + *(arg1 + 8)
            data_5bb2c4 = esi_9
            int32_t esi_11 = *(sub_411690() + esi_9 * 0x10 + 0x2c)
            var_24 = esi_11
            
            if (esi_11 != 0 && *esi_11 != 0)
                char* eax_19 = sub_44f000(&var_24)
                *(eax_19 + 4) += 1
            
            int32_t ebx_7 = &data_5559b1
            int32_t var_8_11 = 5
            char* var_20
            sub_44f240(&var_20, &data_5559b1)
            var_8_11.b = 6
            char* var_1c
            sub_44f240(&var_1c, &data_5559b1)
            var_8_11.b = 7
            sub_44f240(&var_14, "REMOVE FRIEND")
            var_8_11.b = 8
            
            if (esi_11 != 0)
                ebx_7 = esi_11
            
            int32_t var_38_1 = ebx_7
            char* var_18
            int32_t* eax_20 =
                sub_44f980(&var_18, "Are you sure you want to remove %s from your friend list?")
            var_8_11.b = 9
            eax_10 = sub_428fd0(eax_20, eax_20, &var_14, 0x1b, &var_1c, &var_20, sub_420200, 0)
            var_8_11.b = 0xa
            
            if (data_cdf414 != 0)
                eax_10 = var_18
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_44f000(&var_18)
                    int32_t temp11_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_18 = &data_5559b1
            
            var_8_11.b = 0xb
            
            if (data_cdf414 != 0)
                eax_10 = var_14
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_44f000(&var_14)
                    int32_t temp12_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            
            var_8_11.b = 0xc
            
            if (data_cdf414 != 0)
                eax_10 = var_1c
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_44f000(&var_1c)
                    int32_t temp13_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            
            var_8_11.b = 0xd
            
            if (data_cdf414 != 0)
                eax_10 = var_20
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_44f000(&var_20)
                    int32_t temp14_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            
            int32_t var_8_12 = 0xe
            
            if (data_cdf414 != 0 && esi_11 != 0 && *esi_11 != 0)
                eax_10 = sub_44f000(&var_24)
                int32_t temp15_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp15_1 == 1)
                    eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
    else
        eax_10 = data_5bb2bc
        
        if (eax_10 == 0 && *(arg1 + 8) == eax_10)
            char** eax_11 = sub_44f590(&data_5bb2c0, &data_5559b1)
            data_5bb260 = 9
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
        
        if (data_5bb2b8 == 1)
            int32_t ebx_5 = data_65aabc
            void* esi_5 = eax_10 * 6 + 0xffffffff + *(arg1 + 8)
            
            if (ebx_5 == 0)
                sub_44e4d0(eax_10, &data_5559b1, "gClient", 
                    "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_12 = sub_41b9a0()
            char* const ecx_28 = &data_5559b1
            int32_t esi_6 = esi_5 << 4
            void* edi_2 = data_65ac20 * 0x2c + eax_12
            var_24 = esi_6
            *(edi_2 + 0x18) = *(esi_6 + ebx_5 + 0x30)
            char* eax_14 = *(esi_6 + ebx_5 + 0x2c)
            
            if (eax_14 != 0)
                ecx_28 = eax_14
            
            _strncpy(edi_2 + 8, ecx_28, 0x10)
            int32_t eax_15 = var_24
            *(edi_2 + 0x17) = 0
            *(edi_2 + 0x1c) = 1
            int32_t eax_16 = *(eax_15 + ebx_5 + 0x28)
            *(edi_2 + 0x20) = eax_16
            data_5bb240 = 0xe
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_16
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_10
}
