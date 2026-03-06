// 函数名称: sub_41f0e0
// 虚拟地址: 0x41f0e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char*sub_41f0e0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5413c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_24 = ebx
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_20
    sub_44f240(&var_20, "btn_back")
    char* const esi = &data_5559b1
    char* eax_3 = var_20
    char* const ecx_1 = &data_5559b1
    char* edx = *(arg1 + 4)
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    int32_t ecx_3
    
    while (true)
        ebx.b = *edx
        char temp0_1 = *ecx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_3 = 0
                break
            
            ebx.b = edx[1]
            char temp1_1 = ecx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                edx = &edx[2]
                ecx_1 = &ecx_1[2]
                
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
        eax_3 = sub_44f000(&var_20)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            eax_3 = sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        data_5bb240 = 4
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    sub_44f240(&var_20, "btn_trash")
    char* eax_4 = var_20
    char* const ecx_9 = &data_5559b1
    char* edx_3 = *(arg1 + 4)
    
    if (eax_4 != 0)
        ecx_9 = eax_4
    
    int32_t edi_1
    
    while (true)
        ebx.b = *edx_3
        char temp3_1 = *ecx_9
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = edx_3[1]
            char temp4_1 = ecx_9[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                edx_3 = &edx_3[2]
                ecx_9 = &ecx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_cdf414 != 0 && eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_44f000(&var_20)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
    
    int32_t var_8_4 = 0xffffffff
    char** ecx_12 = &var_20
    char* eax_7
    
    if (edi_1 != 0)
        sub_44f240(ecx_12, "btn_profile")
        eax_7 = var_20
        
        if (eax_7 != 0)
            esi = eax_7
        
        char* ecx_26 = *(arg1 + 4)
        int32_t esi_2
        
        while (true)
            char edx_14 = *ecx_26
            char temp6_1 = *esi
            bool c_3 = edx_14 u< temp6_1
            
            if (edx_14 == temp6_1)
                if (edx_14 == 0)
                    esi_2 = 0
                    break
                
                edx_14 = ecx_26[1]
                char temp8_1 = esi[1]
                c_3 = edx_14 u< temp8_1
                
                if (edx_14 == temp8_1)
                    ecx_26 = &ecx_26[2]
                    esi = &esi[2]
                    
                    if (edx_14 != 0)
                        continue
                    
                    esi_2 = 0
                    break
            
            esi_2 = sbb.d(esi, esi, c_3) | 1
            break
        
        int32_t var_8_7 = 0xa
        
        if (data_cdf414 != 0 && eax_7 != 0 && *eax_7 != 0)
            eax_7 = sub_44f000(&var_20)
            int32_t temp12_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp12_1 == 1)
                eax_7 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
        
        int32_t var_8_8 = 0xffffffff
        
        if (esi_2 == 0)
            sub_44f590(&data_5bb704, &data_5559b1)
            data_5bb700 = esi_2
            sub_41f030()
            int32_t ecx_29 = *(arg1 + 8)
            
            if (ecx_29 == *(data_65ac38 + 0xb20))
                void* eax_10 = sub_41f080(esi_2 + 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10
            
            *(data_65ac38 + 0xb24) = *(sub_42aa50(ecx_29) + 0x23c)
            void* eax_13 = sub_42aaa0(*(data_65ac38 + 0xb24))
            
            if (*(eax_13 + 0x244) == 2)
                *(eax_13 + 0x244) = 0
            
            if (*(sub_411690() + 0x18) == 3)
                sub_418140()
            else
                sub_415240()
            
            data_5bb240 = 4
            sub_41f030()
            eax_7 = sub_42a740(data_65ac38)
    else
        data_5bb710 = *(arg1 + 8)
        sub_44f240(ecx_12, &data_5559b1)
        int32_t var_8_5 = 2
        char* var_1c
        sub_44f240(&var_1c, &data_5559b1)
        var_8_5.b = 3
        char* var_18
        sub_44f240(&var_18, "Are you sure you want to delete this profile?")
        var_8_5.b = 4
        char* var_14
        sub_44f240(&var_14, "DELETE PROFILE")
        var_8_5.b = 5
        data_5bb260 = 0x1b
        sub_44f510(&data_5bb2a0, &var_14)
        sub_44f510(&data_5bb2a4, &var_18)
        sub_44f510(&data_5bb2a8, &var_1c)
        eax_7 = sub_44f510(&data_5bb2ac, &var_20)
        data_5bb2b0 = sub_41f520
        data_5bb2b4 = 0
        var_8_5.b = 6
        
        if (data_cdf414 != 0)
            eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_44f000(&var_14)
                int32_t temp7_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp7_1 == 1)
                    eax_7 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
        
        var_8_5.b = 7
        
        if (data_cdf414 != 0)
            eax_7 = var_18
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_44f000(&var_18)
                int32_t temp9_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp9_1 == 1)
                    eax_7 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
        
        var_8_5.b = 8
        
        if (data_cdf414 != 0)
            eax_7 = var_1c
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_44f000(&var_1c)
                int32_t temp10_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp10_1 == 1)
                    eax_7 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
        
        int32_t var_8_6 = 9
        
        if (data_cdf414 != 0)
            eax_7 = var_20
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_44f000(&var_20)
                int32_t temp11_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp11_1 == 1)
                    int32_t eax_8 = sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_8
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7
}
