// 函数名称: sub_4de7d0
// 虚拟地址: 0x4de7d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4de7d0(int32_t arg1, void* arg2, char* arg3, int32_t* arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545a90
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_50 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t var_40
    __builtin_memset(&var_40, 0, 0x14)
    char eax_3 = sub_4deb20(&var_40, arg5)
    
    if (eax_3 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    int32_t eax_4 = var_40.d
    
    if (eax_4 != 0)
        _aligned_free_base(eax_4)
    
    int32_t var_8_1 = 0
    char* const edi_1 = &data_5559b1
    char* const var_20
    char* eax_6 = *sub_4a93d0(&var_20, arg3)
    char* ecx_4 = &data_5559b1
    
    if (eax_6 != 0)
        ecx_4 = eax_6
    
    char* var_54_2 = ecx_4
    char* var_14
    sub_44f980(&var_14, "%s.astc")
    var_8_1.b = 3
    
    if (data_cdf414 != 0)
        char* eax_7 = var_20
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_44f000(&var_20)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                var_20 = &data_5559b1
    
    int32_t var_54_3 = 0xce1798
    var_8_1.b = 2
    char* var_1c
    sub_44f980(&var_1c, "%s/ExternalCode/astc/astcenc.exe")
    var_8_1.b = 4
    char* const ecx_7 = &data_5559b1
    char* eax_9 = var_14
    
    if (eax_9 != 0)
        ecx_7 = eax_9
    
    char* const var_60 = ecx_7
    sub_52b50d()
    char* eax_10 = var_14
    char* const ecx_8 = &data_5559b1
    
    if (eax_10 != 0)
        ecx_8 = eax_10
    
    sub_48c200(ecx_8)
    char* var_64 = arg5
    sub_44e260("compressing to astc: %s")
    char* eax_11 = var_14
    char* const edx_4 = &data_5559b1
    char* const ecx_9 = &data_5559b1
    
    if (eax_11 != 0)
        edx_4 = eax_11
    
    char* eax_12 = var_1c
    char* const var_6c = edx_4
    char* var_70 = arg5
    
    if (eax_12 != 0)
        ecx_9 = eax_12
    
    char* const var_74 = ecx_9
    char* var_18
    sub_44f980(&var_18, ""%s" -c "%s" "%s" 4x4 -medium -alphablend")
    var_8_1.b = 5
    char* const ecx_10 = &data_5559b1
    char* eax_13 = var_18
    
    if (eax_13 != 0)
        ecx_10 = eax_13
    
    sub_48c7f0(ecx_10)
    char* eax_14 = var_14
    char* const ecx_11 = &data_5559b1
    
    if (eax_14 != 0)
        ecx_11 = eax_14
    
    int32_t* eax_15 = _fopen(ecx_11, "rb")
    int32_t* ebx
    
    if (eax_15 != 0)
        _fseek(eax_15, 0, 2)
        int32_t* var_60_1 = eax_15
        uint32_t eax_17 = sub_52b118()
        _fseek(eax_15, 0, 0)
        
        if (eax_17 != 0)
            uint32_t (* eax_19)[0x4] = sub_45cd70(eax_17)
            uint32_t eax_20 = _fread(eax_19, 1, eax_17, eax_15)
            _fclose(eax_15)
            char* ecx_13 = var_14
            
            if (ecx_13 != 0)
                edi_1 = ecx_13
            
            char* const var_68_1 = edi_1
            sub_52b50d()
            
            if (eax_20 == eax_17)
                *arg4 = var_40:4.d
                arg4[1] = var_40:8.d
                arg4[3] = 1
                arg4[0xd] = 1
                uint32_t* eax_23 = sub_45cd70(8)
                ebx.b = 1
                *eax_23 = 0
                arg4[0xf] = eax_23
                arg4[4] = 9
                arg4[5] = 0x15
                arg4[6] = 0
                *eax_23 = eax_17
                *(arg4[0xf] + 4) = eax_19
                arg4[7] = *(arg2 + 8)
                arg4[8] = *(arg2 + 0xc)
            else
                char* var_54_7 = arg5
                sub_44e260("failed to read: %s")
                
                if (eax_19 != 0)
                    _aligned_free_base(eax_19)
                
                ebx.b = 0
        else
            _fclose(eax_15)
            char* eax_18 = var_14
            
            if (eax_18 != 0)
                edi_1 = eax_18
            
            char* const var_58_1 = edi_1
            sub_52b50d()
            ebx.b = 0
    else
        char* var_54_4 = arg5
        sub_44e260("failed to convert to astc: %s")
        ebx.b = 0
    
    var_8_1.b = 0xf
    char* eax_16
    
    if (data_cdf414 != 0)
        eax_16 = var_18
        
        if (eax_16 != 0 && *eax_16 != 0)
            eax_16 = sub_44f000(&var_18)
            int32_t temp1_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                var_18 = &data_5559b1
    
    var_8_1.b = 0x10
    
    if (data_cdf414 != 0)
        eax_16 = var_1c
        
        if (eax_16 != 0 && *eax_16 != 0)
            eax_16 = sub_44f000(&var_1c)
            int32_t temp2_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
                var_1c = &data_5559b1
    
    int32_t var_8_2 = 0x11
    
    if (data_cdf414 != 0)
        eax_16 = var_14
        
        if (eax_16 != 0 && *eax_16 != 0)
            eax_16 = sub_44f000(&var_14)
            int32_t temp3_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
    
    eax_16.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_16
}
