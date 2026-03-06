// 函数名称: sub_420a00
// 虚拟地址: 0x420a00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __convention("regparm")sub_420a00(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541500
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_44f240(&var_14, "BtnBack")
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
    
    if (ebx.b != 0)
        sub_45e9a0(&data_5bb270:4)
        int64_t xmm0 = data_5bb264.q
        data_5bb278 = data_5bb26c
        int32_t eax_6 = data_5bb27c
        data_5bb26c = eax_6
        data_5bb270 = xmm0
        data_5bb268 = 0
        data_5bb264 = 0
        data_5bb27c = eax_6 + 1
        data_5bb260 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6 + 1
    
    sub_44f240(&var_14, "BtnPaste")
    char* eax_8 = var_14
    char* const ecx_9 = &data_5559b1
    char* edx_3 = *(arg4 + 4)
    
    if (eax_8 != 0)
        ecx_9 = eax_8
    
    int32_t edi_1
    
    while (true)
        ebx.b = *ecx_9
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                edi_1 = 0
                break
            
            ebx.b = ecx_9[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_9 = &ecx_9[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                edi_1 = 0
                break
        
        edi_1 = sbb.d(arg4, arg4, c_2) | 1
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
        BOOL eax_10 = sub_44ef40(&data_5bb2c0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10
    
    sub_44f240(&var_14, "BtnOK")
    char* ecx_15 = *(arg4 + 4)
    char* eax_12 = var_14
    
    if (eax_12 != 0)
        esi = eax_12
    
    int32_t esi_2
    
    while (true)
        char edx_6 = *esi
        char temp6_1 = *ecx_15
        bool c_3 = edx_6 u< temp6_1
        
        if (edx_6 == temp6_1)
            if (edx_6 == 0)
                esi_2 = 0
                break
            
            edx_6 = esi[1]
            char temp7_1 = ecx_15[1]
            c_3 = edx_6 u< temp7_1
            
            if (edx_6 == temp7_1)
                esi = &esi[2]
                ecx_15 = &ecx_15[2]
                
                if (edx_6 != 0)
                    continue
                
                esi_2 = 0
                break
        
        esi_2 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cdf414 != 0 && eax_12 != 0 && *eax_12 != 0)
        eax_12 = sub_44f000(&var_14)
        int32_t temp8_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp8_1 == 1)
            eax_12 = sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_2 == 0)
        eax_12 = sub_420940()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_12
}
