// 函数名称: sub_4537f0
// 虚拟地址: 0x4537f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*sub_4537f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542430
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t __saved_ebp
    (*(*data_65ae00 + 4))(__security_cookie ^ &__saved_ebp)
    
    if (*(data_65ae04 + 0x2c) != 0)
        sub_47f7e0()
    
    void* ecx_1 = DeleteCriticalSection(data_cdf440 + 0x268)
    int32_t eax_7 = data_cdf440
    
    if (eax_7 != 0)
        int32_t var_8_1 = 0
        `eh vector vbase constructor iterator'(eax_7, 0x4c, 8, sub_417870)
        int32_t var_8_2 = 0xffffffff
        ecx_1 = sub_45d050(data_cdf440, 0x280)
        data_cdf440 = 0
    
    sub_450600(ecx_1)
    sub_48cf60(data_cdf450)
    int32_t* ecx_4 = data_cdf450
    
    if (ecx_4 != 0)
        int32_t var_8_3 = 1
        sub_48cf60(ecx_4)
        int32_t var_8_4 = 0xffffffff
        sub_45d050(data_cdf450, 0x1c)
        data_cdf450 = 0
    
    int32_t* ecx_6 = data_cdf45c
    
    while (ecx_6[2] != 0)
        int32_t* edi_1 = *ecx_6
        void* eax_8 = edi_1[1]
        *ecx_6 = eax_8
        
        if (eax_8 == 0)
            ecx_6[1] = 0
        else
            *(eax_8 + 8) = 0
        
        void* esi_1 = *edi_1
        ecx_6[2] -= 1
        sub_45d050(edi_1, 0xc)
        ecx_6 = data_cdf45c
        *(esi_1 + 0x1c) -= 1
    
    sub_429100(ecx_6)
    int32_t* ecx_8 = data_cdf45c
    
    if (ecx_8 != 0)
        int32_t var_8_5 = 2
        sub_429100(ecx_8)
        int32_t var_8_6 = 0xffffffff
        sub_45d050(data_cdf45c, 0xc)
        data_cdf45c = 0
    
    int32_t* i_3 = data_ce1adc:4
    
    if (i_3 != 0)
        int32_t* i
        
        do
            i = *i_3
            _aligned_free_base(i_3)
            i_3 = i
        while (i != 0)
    
    data_ce1adc:4 = 0
    data_ce1adc:0xc = 0
    sub_4abf10()
    int32_t* ecx_10 = data_ce19c8
    
    if (ecx_10 != 0)
        (*(*ecx_10 + 8))()
        int32_t* ecx_11 = data_ce19c8
        
        if (ecx_11 != 0)
            (**ecx_11)(0)
            int32_t eax_11 = data_ce19c8
            
            if (eax_11 != 0)
                _aligned_free_base(eax_11)
        
        data_ce19c8 = 0
        data_ce19f0 = 0
    
    int32_t* ecx_12 = data_ce1aec
    
    if (ecx_12 != 0)
        (*(*ecx_12 + 0xc))()
        int32_t* ecx_13 = data_ce1aec
        
        if (ecx_13 != 0)
            (**ecx_13)(1)
        
        data_ce1aec = 0
    
    sub_48aa50(&data_654e9c)
    sub_48ab10(&data_654eb8)
    sub_47b800(&data_5c99a0)
    sub_47b920(&data_5c99bc)
    int32_t ecx_14 = sub_4b3a60()
    int32_t* esi_2 = data_ce1794
    
    if (esi_2 != 0)
        int32_t var_8_7 = 3
        
        if (data_cdf414 != 0)
            char* eax_14 = *esi_2
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_44f000(esi_2)
                int32_t temp0_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                    *esi_2 = &data_5559b1
                
                esi_2 = data_ce1794
        
        int32_t var_8_8 = 0xffffffff
        ecx_14 = sub_45d050(esi_2, 4)
        data_ce1794 = 0
    
    sub_4a89b0(ecx_14)
    int32_t* ecx_18 = data_cdf444
    
    if (ecx_18 != 0)
        (*(*ecx_18 + 4))()
        int32_t var_24_3 = 4
        operator new(data_cdf444)
        int32_t* ecx_19 = data_cdf448
        data_cdf444 = 0
        sub_482860(ecx_19)
        int32_t* ecx_20 = data_cdf448
        
        if (ecx_20 != 0)
            int32_t var_8_9 = 4
            sub_482860(ecx_20)
            int32_t var_8_10 = 0xffffffff
            sub_45d050(data_cdf448, 0x28)
            data_cdf448 = 0
    
    char* ecx_22 = data_cdf458
    
    if (*ecx_22 != 0)
        HANDLE hSemaphore = *(ecx_22 + 0x20)
        ecx_22[1] = 1
        ReleaseSemaphore(hSemaphore, 1, nullptr)
        WaitForSingleObject(*(data_cdf458 + 0x1c), 0xffffffff)
        DeleteCriticalSection(data_cdf458 + 4)
        CloseHandle(*(data_cdf458 + 0x20))
        CloseHandle(*(data_cdf458 + 0x1c))
        ecx_22 = data_cdf458
        *ecx_22 = 0
    
    sub_45d050(ecx_22, 0x74)
    int32_t* ecx_23 = data_ce19b4
    data_cdf458 = 0
    
    if (ecx_23 != 0)
        (*(*ecx_23 + 4))()
    
    int32_t* i_4 = data_ce19a4:4
    
    if (i_4 != 0)
        int32_t* i_1
        
        do
            i_1 = *i_4
            _aligned_free_base(i_4)
            i_4 = i_1
        while (i_1 != 0)
    
    int32_t* ecx_24 = data_65ae04
    data_ce19a4:4 = 0
    data_ce19a4:0xc = 0
    
    if (ecx_24 != 0)
        sub_45d050(ecx_24, 0x30)
        data_65ae04 = 0
    
    void* ecx_25 = data_cdf414
    
    for (int32_t i_2 = 0; i_2 s< 0xa0; )
        int32_t* j_1 = *(ecx_25 + i_2 + 4)
        void* ebx_1 = ecx_25 + i_2
        
        if (j_1 != 0)
            int32_t* j
            
            do
                j = *j_1
                _aligned_free_base(j_1)
                j_1 = j
            while (j != 0)
            ecx_25 = data_cdf414
        
        i_2 += 0x14
        *(ebx_1 + 4) = 0
    
    if (ecx_25 != 0)
        _aligned_free_base(ecx_25)
    
    int32_t* result = data_65ac4c
    data_cdf414 = 0
    
    if (result != 0)
        result = _fclose(result)
        data_65ac4c = 0
    
    data_65ae00 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
