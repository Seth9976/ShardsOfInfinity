// 函数名称: sub_47f7e0
// 虚拟地址: 0x47f7e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_47f7e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542ef0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_cdf428 == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.cpp", 0x47, 
            "GameDispose")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t __saved_ebp
    int32_t eax_5 = (*(*data_65ae00 + 0x10))(__security_cookie ^ &__saved_ebp)
    void* edi = data_cdf428
    
    if (edi == 0)
        sub_44e4d0(eax_5, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* edi_1 = *(edi + 0xc)
    void* esi = nullptr
    void* eax_7
    
    while (true)
        void* ecx_1
        
        if (esi != 0)
            ecx_1 = *edi_1
            esi += 0x94
        else
            esi = *edi_1
            ecx_1 = esi
        
        eax_7 = edi_1[1] * 0x94 + ecx_1
        
        if (esi u>= eax_7)
            break
        
        while ((*(esi + 0x90) & 0xffff0000) == 0)
            esi += 0x94
            
            if (esi u>= eax_7)
                goto label_47f866
        
        sub_4c0fc0(esi)
    
    label_47f866:
    void* esi_1 = data_cdf428
    
    if (esi_1 == 0)
        sub_44e4d0(eax_7, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_8 = sub_4c45c0(*(esi_1 + 0xc))
    int32_t* ecx_4 = *(esi_1 + 0xc)
    
    if (ecx_4 != 0)
        int32_t var_8_1 = 0
        sub_4c45c0(ecx_4)
        int32_t var_8_2 = 0xffffffff
        eax_8 = sub_45d050(*(esi_1 + 0xc), 0x1c)
        *(esi_1 + 0xc) = 0
    
    void* edi_2 = data_cdf428
    
    if (edi_2 == 0)
        sub_44e4d0(eax_8, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* edi_3 = *(edi_2 + 0x14)
    void* esi_2 = nullptr
    void* eax_10
    
    while (true)
        void* ecx_6
        
        if (esi_2 != 0)
            ecx_6 = *edi_3
            esi_2 += 0x34
        else
            esi_2 = *edi_3
            ecx_6 = esi_2
        
        eax_10 = edi_3[1] * 0x34 + ecx_6
        
        if (esi_2 u>= eax_10)
            break
        
        while ((*(esi_2 + 0x30) & 0xffff0000) == 0)
            esi_2 += 0x34
            
            if (esi_2 u>= eax_10)
                goto label_47f8f1
        
        sub_4d5bc0(esi_2)
    
    label_47f8f1:
    void* esi_3 = data_cdf428
    
    if (esi_3 == 0)
        sub_44e4d0(eax_10, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_11 = sub_4d5cc0(*(esi_3 + 0x14))
    int32_t* ecx_9 = *(esi_3 + 0x14)
    
    if (ecx_9 != 0)
        int32_t var_8_3 = 1
        sub_4d5cc0(ecx_9)
        int32_t var_8_4 = 0xffffffff
        eax_11 = sub_45d050(*(esi_3 + 0x14), 0x1c)
        *(esi_3 + 0x14) = 0
    
    void* edi_4 = data_cdf428
    
    if (edi_4 == 0)
        sub_44e4d0(eax_11, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* edi_5 = *(edi_4 + 0x10)
    void* esi_4 = nullptr
    void* eax_13
    
    while (true)
        void* ecx_11
        
        if (esi_4 != 0)
            ecx_11 = *edi_5
            esi_4 += 0x7c
        else
            esi_4 = *edi_5
            ecx_11 = esi_4
        
        eax_13 = edi_5[1] * 0x7c + ecx_11
        
        if (esi_4 u>= eax_13)
            break
        
        while ((*(esi_4 + 0x78) & 0xffff0000) == 0)
            esi_4 += 0x7c
            
            if (esi_4 u>= eax_13)
                goto label_47f980
        
        sub_4954d0(esi_4)
    
    label_47f980:
    void* esi_5 = data_cdf428
    
    if (esi_5 == 0)
        sub_44e4d0(eax_13, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    struct _EXCEPTION_REGISTRATION_RECORD** eax_14 = sub_49faa0(*(esi_5 + 0x10))
    int32_t* ecx_14 = *(esi_5 + 0x10)
    
    if (ecx_14 != 0)
        int32_t var_8_5 = 2
        sub_49faa0(ecx_14)
        int32_t var_8_6 = 0xffffffff
        eax_14 = sub_45d050(*(esi_5 + 0x10), 0x30)
        *(esi_5 + 0x10) = 0
    
    int32_t* edi_6 = data_cdf428
    
    if (edi_6 == 0)
        sub_44e4d0(eax_14, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* ebx = *edi_6
    void* i = nullptr
    label_47f9e1:
    void* i_5
    
    if (i != 0)
        i_5 = *ebx
        i += 0x6c
    else
        i = *ebx
        i_5 = i
    
    void* eax_16
    
    for (eax_16 = ebx[1] * 0x6c + i_5; i u< eax_16; i += 0x6c)
        if ((*(i + 0x68) & 0xffff0000) != 0)
            int32_t* eax_17 = sub_4b5660()
            int32_t* ecx_17 = *(i + 0x2c)
            
            if (ecx_17 != 0)
                eax_17 = sub_4b90e0(ecx_17)
            
            void** ecx_18 = data_cdf428
            
            if (ecx_18 != 0)
                sub_4b6e20(*ecx_18, i)
                edi_6 = data_cdf428
                goto label_47f9e1
            
            sub_44e4d0(eax_17, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                "GetGameData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    if (edi_6 == 0)
        sub_44e4d0(eax_16, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_18 = sub_4b6d80(*edi_6)
    int32_t* ecx_21 = *edi_6
    
    if (ecx_21 != 0)
        int32_t var_8_7 = 3
        sub_4b6d80(ecx_21)
        int32_t var_8_8 = 0xffffffff
        eax_18 = sub_45d050(*edi_6, 0x1c)
        *edi_6 = 0
    
    void* edi_7 = data_cdf428
    
    if (edi_7 == 0)
        sub_44e4d0(eax_18, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* edi_8 = *(edi_7 + 4)
    int32_t* i_3 = edi_8[1]
    
    if (i_3 != 0)
        int32_t* i_1
        
        do
            i_1 = *i_3
            _aligned_free_base(i_3)
            i_3 = i_1
        while (i_1 != 0)
    
    edi_8[1] = 0
    edi_8[3] = 0
    int32_t* i_4 = edi_8[5]
    
    if (i_4 != 0)
        int32_t* i_2
        
        do
            i_2 = *i_4
            _aligned_free_base(i_4)
            i_4 = i_2
        while (i_2 != 0)
    
    edi_8[5] = 0
    edi_8[7] = 0
    int32_t result = sub_45d050(edi_8, 0x20)
    int32_t* edi_9 = data_cdf444
    
    if (edi_9 != 0)
        void* esi_6 = nullptr
        int32_t* ecx_24
        
        while (true)
            ecx_24 = data_cdf448
            void* edx_1
            
            if (esi_6 != 0)
                edx_1 = *ecx_24
                esi_6 += 0x64
            else
                esi_6 = *ecx_24
                edx_1 = esi_6
            
            void* eax_20 = ecx_24[1] * 0x64 + edx_1
            
            if (esi_6 u>= eax_20)
                break
            
            while ((*(esi_6 + 0x60) & 0xffff0000) == 0)
                esi_6 += 0x64
                
                if (esi_6 u>= eax_20)
                    goto label_47fb30
            
            (*(*edi_9 + 0x24))(esi_6)
            edi_9 = data_cdf444
            *(esi_6 + 0x5a) = 0
        
    label_47fb30:
        void* esi_7 = nullptr
        
        while (true)
            void* edx_2
            
            if (esi_7 != 0)
                edx_2 = *ecx_24
                esi_7 += 0x64
            else
                esi_7 = *ecx_24
                edx_2 = esi_7
            
            result = ecx_24[1] * 0x64 + edx_2
            
            if (esi_7 u>= result)
                break
            
            while ((*(esi_7 + 0x60) & 0xffff0000) == 0)
                esi_7 += 0x64
                
                if (esi_7 u>= result)
                    goto label_47fb70
            
            sub_481d10(esi_7)
            ecx_24 = data_cdf448
    
    label_47fb70:
    int32_t* ecx_26 = data_cdf428
    
    if (ecx_26 != 0)
        result = sub_45d050(ecx_26, 0x38)
        data_cdf428 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
