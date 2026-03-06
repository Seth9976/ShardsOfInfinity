// 函数名称: sub_41df10
// 虚拟地址: 0x41df10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_41df10(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44f240(&var_14, "btnBack")
    char* const esi = &data_5559b1
    char* eax_3 = var_14
    char* const ecx_1 = &data_5559b1
    char* edx = *(arg4 + 4)
    
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
    
    if (ecx_3 == 0 || *(arg4 + 0x18) == 2)
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
    
    if (ebx.b == 0)
        sub_44f240(&var_14, "btnOK")
        char* eax_5 = var_14
        char* const ecx_7 = &data_5559b1
        char* edx_3 = *(arg4 + 4)
        
        if (eax_5 != 0)
            ecx_7 = eax_5
        
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
            
            edi_1 = sbb.d(arg4, arg4, c_2) | 1
            break
        
        int32_t var_8_3 = 1
        
        if (data_cdf414 != 0 && eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_44f000(&var_14)
            int32_t temp5_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
        
        int32_t var_8_4 = 0xffffffff
        
        if (edi_1 != 0)
            sub_44f240(&var_14, "btnAvatar")
            char* eax_8 = var_14
            
            if (eax_8 != 0)
                esi = eax_8
            
            char* ecx_13 = *(arg4 + 4)
            int32_t esi_2
            
            while (true)
                char edx_6 = *esi
                char temp6_1 = *ecx_13
                bool c_3 = edx_6 u< temp6_1
                
                if (edx_6 == temp6_1)
                    if (edx_6 == 0)
                        esi_2 = 0
                        break
                    
                    edx_6 = esi[1]
                    char temp7_1 = ecx_13[1]
                    c_3 = edx_6 u< temp7_1
                    
                    if (edx_6 == temp7_1)
                        esi = &esi[2]
                        ecx_13 = &ecx_13[2]
                        
                        if (edx_6 != 0)
                            continue
                        
                        esi_2 = 0
                        break
                
                esi_2 = sbb.d(esi, esi, c_3) | 1
                break
            
            int32_t var_8_5 = 2
            
            if (data_cdf414 != 0 && eax_8 != 0 && *eax_8 != 0)
                eax_8 = sub_44f000(&var_14)
                int32_t temp8_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp8_1 == 1)
                    eax_8 = sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
            
            int32_t var_8_6 = 0xffffffff
            
            if (esi_2 == 0)
                data_5bb240 = 5
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_8
            
            sub_44f240(&var_14, "BtnAccount")
            char* eax_9 = sub_44f450(&var_14, *(arg4 + 4))
            ebx.b = eax_9.b
            int32_t var_8_7 = 3
            
            if (data_cdf414 != 0)
                char* ecx_20 = var_14
                
                if (ecx_20 != 0 && *ecx_20 != 0)
                    eax_9 = sub_44f000(&var_14)
                    int32_t temp9_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        eax_9 = sub_45d050(eax_9, *(eax_9 + 0xc) + 0x10)
            
            int32_t var_8_8 = 0xffffffff
            
            if (ebx.b != 0)
                data_5bb700 = 0
                data_5bb240 = 6
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9
            
            sub_44f240(&var_14, "BtnProfiles")
            char* eax_10 = sub_44f450(&var_14, *(arg4 + 4))
            ebx.b = eax_10.b
            int32_t var_8_9 = 4
            
            if (data_cdf414 != 0)
                char* ecx_27 = var_14
                
                if (ecx_27 != 0 && *ecx_27 != 0)
                    eax_10 = sub_44f000(&var_14)
                    int32_t temp10_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        eax_10 = sub_45d050(eax_10, *(eax_10 + 0xc) + 0x10)
            
            int32_t var_8_10 = 0xffffffff
            
            if (ebx.b != 0)
                data_5bb240 = 7
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10
            
            sub_44f240(&var_14, "BtnFriends")
            char* eax_11 = sub_44f450(&var_14, *(arg4 + 4))
            ebx.b = eax_11.b
            int32_t var_8_11 = 5
            
            if (data_cdf414 != 0)
                char* ecx_34 = var_14
                
                if (ecx_34 != 0 && *ecx_34 != 0)
                    eax_11 = sub_44f000(&var_14)
                    int32_t temp11_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        eax_11 = sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
            
            int32_t var_8_12 = 0xffffffff
            
            if (ebx.b != 0)
                data_5bb2b8 = 0
                data_5bb2bc = 0
                data_5bb240 = 8
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_11
            
            sub_44f240(&var_14, "BtnOffline")
            ebx.b = sub_44f450(&var_14, *(arg4 + 4))
            int32_t var_8_13 = 6
            
            if (data_cdf414 != 0)
                char* ecx_41 = var_14
                
                if (ecx_41 != 0 && *ecx_41 != 0)
                    char* eax_13 = sub_44f000(&var_14)
                    int32_t temp12_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
            
            int32_t var_8_14 = 0xffffffff
            
            if (ebx.b != 0)
                void* eax_14 = sub_42aaa0(*(data_65ac38 + 0xb24))
                int32_t ecx_46
                ecx_46.b = *(eax_14 + 0x244) == 0
                *(eax_14 + 0x244) = ecx_46
                sub_42a740(data_65ac38)
                
                if (*(eax_14 + 0x244) == 0)
                    void* eax_16 = sub_415240()
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_16
                
                int32_t ecx_48
                ecx_48.b = 0
                void* eax_15 = sub_415330(ecx_48, 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_15
            
            sub_44f240(&var_14, "BtnStats")
            ebx.b = sub_44f450(&var_14, *(arg4 + 4))
            int32_t var_8_15 = 7
            
            if (data_cdf414 != 0)
                char* ecx_55 = var_14
                
                if (ecx_55 != 0 && *ecx_55 != 0)
                    char* eax_18 = sub_44f000(&var_14)
                    int32_t temp13_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
            
            int32_t eax_19 = data_5bb240
            
            if (ebx.b != 0)
                eax_19 = 0xb
            
            data_5bb240 = eax_19
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_19
    
    data_5bb240 = 3
    char* eax_7 = sub_418140()
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7
}
