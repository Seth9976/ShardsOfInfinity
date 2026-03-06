// 函数名称: sub_41e8f0
// 虚拟地址: 0x41e8f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_41e8f0(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ esi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541378
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_1c = arg4
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44f240(&var_14, "btnResend")
    char* const ecx_1 = &data_5559b1
    char* eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    char* edx = *(arg5 + 4)
    int32_t esi
    
    while (true)
        ebx.b = *edx
        char temp0_1 = *ecx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                esi = 0
                break
            
            ebx.b = edx[1]
            char temp1_1 = ecx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                edx = &edx[2]
                ecx_1 = &ecx_1[2]
                
                if (ebx.b != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg4, arg4, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_cdf414 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_44f000(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_45d050(eax_4, *(eax_4 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_2 = 0xffffffff
    
    if (esi == 0)
        char* const ecx_6 = &data_5559b1
        char* eax_6 = *(sub_42aaa0(*(data_65ac38 + 0xb24)) + 4)
        
        if (eax_6 != 0)
            ecx_6 = eax_6
        
        void* eax_7 = sub_41a860(ecx_6)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    sub_44f240(&var_14, "btnEnterCode")
    char* eax_8 = var_14
    char* const ecx_10 = &data_5559b1
    char* edx_3 = *(arg5 + 4)
    
    if (eax_8 != 0)
        ecx_10 = eax_8
    
    int32_t esi_3
    
    while (true)
        ebx.b = *edx_3
        char temp3_1 = *ecx_10
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi_3 = 0
                break
            
            ebx.b = edx_3[1]
            char temp4_1 = ecx_10[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                edx_3 = &edx_3[2]
                ecx_10 = &ecx_10[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi, esi, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_44f000(&var_14)
        int32_t temp5_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
            var_14 = &data_5559b1
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_3 != 0)
        sub_44f240(&var_14, "btnEdit")
        char* eax_10 = var_14
        char* const ecx_14 = &data_5559b1
        char* edx_6 = *(arg5 + 4)
        
        if (eax_10 != 0)
            ecx_14 = eax_10
        
        int32_t esi_5
        
        while (true)
            ebx.b = *edx_6
            char temp6_1 = *ecx_14
            bool c_3 = ebx.b u< temp6_1
            
            if (ebx.b == temp6_1)
                if (ebx.b == 0)
                    esi_5 = 0
                    break
                
                ebx.b = edx_6[1]
                char temp7_1 = ecx_14[1]
                c_3 = ebx.b u< temp7_1
                
                if (ebx.b == temp7_1)
                    edx_6 = &edx_6[2]
                    ecx_14 = &ecx_14[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    esi_5 = 0
                    break
            
            esi_5 = sbb.d(esi_3, esi_3, c_3) | 1
            break
        
        int32_t var_8_5 = 2
        
        if (data_cdf414 != 0 && eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_44f000(&var_14)
            int32_t temp8_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
                var_14 = &data_5559b1
        
        int32_t var_8_6 = 0xffffffff
        
        if (esi_5 == 0)
            sub_44f590(&data_5bb708, &data_5559b1)
            sub_44f590(&data_5bb704, &data_5559b1)
            void* ecx_17 = data_65ac38
            data_5bb70c = esi_5
            data_5bb700 = esi_5
            sub_44f590(sub_42aaa0(*(ecx_17 + 0xb24)) + 4, &data_5559b1)
            char* eax_13 = sub_42a740(data_65ac38)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        
        sub_44f240(&var_14, "btnInputBack")
        char* eax_14 = sub_44f4d0(*(arg5 + 4), &var_14)
        ebx.b = eax_14.b
        int32_t var_8_7 = 3
        
        if (data_cdf414 != 0)
            char* ecx_25 = var_14
            
            if (ecx_25 != 0 && *ecx_25 != 0)
                eax_14 = sub_44f000(&var_14)
                int32_t temp9_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp9_1 == 1)
                    eax_14 = sub_45d050(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_8 = 0xffffffff
        
        if (ebx.b != 0)
            if (data_5bb700 == 1)
                data_5bb700 = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_14
            
            if (data_5bb70c == 1)
                data_5bb70c = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_14
            
            sub_44e4d0(eax_14, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x85c, "GameProfileAccountClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_44f240(&var_14, "btnAddEmail")
        ebx.b = sub_44f4d0(*(arg5 + 4), &var_14)
        int32_t var_8_9 = 4
        
        if (data_cdf414 != 0)
            char* ecx_34 = var_14
            
            if (ecx_34 != 0 && *ecx_34 != 0)
                char* eax_16 = sub_44f000(&var_14)
                int32_t temp10_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                    var_14 = &data_5559b1
        
        int32_t var_8_10 = 0xffffffff
        
        if (ebx.b == 0)
            sub_44f240(&var_14, "btnInputPaste")
            ebx.b = sub_44f4d0(*(arg5 + 4), &var_14)
            int32_t var_8_11 = 5
            
            if (data_cdf414 != 0)
                char* ecx_48 = var_14
                
                if (ecx_48 != 0 && *ecx_48 != 0)
                    char* eax_21 = sub_44f000(&var_14)
                    int32_t temp11_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_45d050(eax_21, *(eax_21 + 0xc) + 0x10)
                        var_14 = &data_5559b1
            
            int32_t var_8_12 = 0xffffffff
            char* eax_22
            
            if (ebx.b == 0)
                sub_44f240(&var_14, "btnBack")
                char* eax_26 = sub_44f4d0(*(arg5 + 4), &var_14)
                
                if (eax_26.b != 0 || *(arg5 + 0x18) == 2)
                    ebx.b = 1
                else
                    ebx.b = 0
                
                int32_t var_8_15 = 8
                
                if (data_cdf414 != 0)
                    eax_26 = var_14
                    
                    if (eax_26 != 0 && *eax_26 != 0)
                        eax_26 = sub_44f000(&var_14)
                        int32_t temp13_1 = *(eax_26 + 4)
                        *(eax_26 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            eax_26 = sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
                
                int32_t var_8_16 = 0xffffffff
                
                if (ebx.b != 0)
                    data_5bb240 = 4
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_26
                
                sub_44f240(&var_14, "btnPrivacy")
                char* eax_27 = sub_44f4d0(*(arg5 + 4), &var_14)
                ebx.b = eax_27.b
                int32_t var_8_17 = 9
                
                if (data_cdf414 != 0)
                    char* ecx_69 = var_14
                    
                    if (ecx_69 != 0 && *ecx_69 != 0)
                        eax_27 = sub_44f000(&var_14)
                        int32_t temp14_1 = *(eax_27 + 4)
                        *(eax_27 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            eax_27 = sub_45d050(eax_27, *(eax_27 + 0xc) + 0x10)
                
                int32_t var_8_18 = 0xffffffff
                
                if (ebx.b != 0)
                    data_5bb240 = 0x1a
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_27
                
                sub_44f240(&var_14, "btnInputOk")
                eax_22 = sub_44f4d0(*(arg5 + 4), &var_14)
                ebx.b = eax_22.b
                int32_t var_8_19 = 0xa
                
                if (data_cdf414 != 0)
                    char* ecx_76 = var_14
                    
                    if (ecx_76 != 0 && *ecx_76 != 0)
                        eax_22 = sub_44f000(&var_14)
                        int32_t temp15_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp15_1 == 1)
                            eax_22 = sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                
                int32_t var_8_20 = 0xffffffff
                
                if (ebx.b != 0)
                    eax_22 = sub_41e6f0()
            else
                var_14 = &data_5559b1
                int32_t var_8_13 = 6
                eax_22 = sub_44ef40(&var_14)
                
                if (eax_22.b != 0)
                    int32_t* var_28_1
                    int32_t* ecx_54
                    
                    if (data_5bb700 != 1)
                        if (data_5bb70c != 1)
                            sub_44e4d0(eax_22, &data_5559b1, "Halt", 
                                "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x881, 
                                "GameProfileAccountClick")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        if (sub_44f8a0(&var_14) s> 9)
                            sub_44f740(&var_14, 9, 0)
                        
                        ecx_54 = &data_5bb708
                        var_28_1 = &var_14
                    else
                        if (sub_44f8a0(&var_14) s> 0x40)
                            sub_44f740(&var_14, 0x40, 0)
                        
                        ecx_54 = &data_5bb704
                        var_28_1 = &var_14
                    
                    eax_22 = sub_44f510(ecx_54, var_28_1)
                
                int32_t var_8_14 = 7
                
                if (data_cdf414 != 0)
                    eax_22 = var_14
                    
                    if (eax_22 != 0 && *eax_22 != 0)
                        eax_22 = sub_44f000(&var_14)
                        int32_t temp12_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp12_1 == 1)
                            int32_t eax_24 = sub_45d050(eax_22, *(eax_22 + 0xc) + 0x10)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_24
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_22
        
        sub_44f590(sub_42aaa0(*(data_65ac38 + 0xb24)) + 4, &data_5559b1)
        sub_44f590(&data_5bb704, &data_5559b1)
        data_5bb700 = 1
    else
        sub_44f590(&data_5bb708, &data_5559b1)
        data_5bb70c = 1
    
    if (data_5bb244.d == 6)
        int32_t eax_18 = sub_47b380(data_5bb244:4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_18
    
    int32_t ecx_43 = 0
    
    if (data_5bb250.d == 6)
        ecx_43 = data_5bb250:4
    
    int32_t eax_19 = sub_47b380(ecx_43)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_19
}
