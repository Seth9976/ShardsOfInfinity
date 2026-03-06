// 函数名称: sub_4c50b0
// 虚拟地址: 0x4c50b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __thiscallsub_4c50b0(char* const* arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545118
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** i = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void** edi = arg1
    int32_t var_1c = 0
    
    if (edi[0x14].b == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** i_1 = nullptr
        edi[2] = data_5b0f3c f+ edi[2]
    label_4c5100:
        char* edx
        edx.b = arg2
    label_4c5103:
        
        if (i_1 != 0)
            i = i_1[8]
        else
            i = *data_cdf450
        
        while (i != 0)
            i_1 = i
            i = i[8]
            
            if (i_1[7].b == 0)
                int32_t xmm1_1 = i_1[4]
                arg1.b = 0
                int32_t xmm2_1 = i_1[5]
                int32_t var_28_1 = xmm1_1
                int32_t var_24_1 = xmm2_1
                
                if (edx.b != 0)
                    xmm1_1 = *arg3
                    xmm2_1 = arg3[1]
                    var_28_1 = xmm1_1
                    var_24_1 = xmm2_1
                
                float xmm3_1 = edi[4]
                
                if (not(xmm1_1 f< xmm3_1) && not(edi[6] f+ xmm3_1 f<= xmm1_1))
                    float xmm0_5 = edi[5]
                    
                    if (not(xmm2_1 f< xmm0_5))
                        arg1 = nullptr
                        
                        if (xmm0_5 f+ edi[7] f> xmm2_1)
                            arg1 = 1
                
                struct _EXCEPTION_REGISTRATION_RECORD* eax_6 = *i_1
                
                if (eax_6 == 3)
                label_4c54db:
                    
                    if (arg1.b == 0)
                        goto label_4c5103
                    
                label_4c54e3:
                    int32_t var_40_6 = var_24_1
                    *(edi + 0x52) = 1
                    void* eax_21
                    eax_21, arg1, edx = sub_4c46d0(edi, var_28_1)
                    edi[1] = eax_21
                    edi[3] = eax_21
                    edi[2] = 0
                    goto label_4c5100
                
                if (eax_6 == 4)
                    *(edi + 0x52) = 0
                    goto label_4c5103
                
                if (eax_6 == 1)
                    int32_t eax_7 = i_1[1]
                    char* var_20
                    char* const var_14
                    char* const esi_1
                    
                    if (eax_7 == 0x56 && i_1[2] == 2 && *(edi + 0x51) != 0)
                        var_14 = &data_5559b1
                        int32_t var_8_1 = 0
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_8
                        eax_8, arg1, edx = sub_44ef40(&var_14)
                        esi_1 = var_14
                        
                        if (eax_8.b != 0 && esi_1 != 0)
                            arg1.b = *esi_1
                            edx = esi_1
                            char* var_18 = edx
                            
                            while (arg1.b != 0)
                                if (arg1.b u>= 0x80)
                                    eax_8.b = arg1.b
                                    eax_8.b &= 0xe0
                                    
                                    if (eax_8.b != 0xc0)
                                        eax_8.b = arg1.b
                                        eax_8.b &= 0xf0
                                        
                                        if (eax_8.b != 0xe0)
                                            arg1.b &= 0xf8
                                            
                                            if (arg1.b != 0xf0)
                                                sub_44e4d0(eax_8, &data_5559b1, 
                                                    "!Xutf8_is_invalid_lead_char(str)", 
                                                    "c:\ax2017\engine\xutf8.cpp", 0x212, 
                                                    "Xutf8_peek_next")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_44e680()
                                                noreturn
                                
                                var_20 = edx
                                uint32_t eax_9 = sub_4afed0(&var_20)
                                char* ecx_5 = var_18
                                var_20 = eax_9
                                var_18 = ecx_5
                                char edx_1 = *ecx_5
                                
                                if (edx_1 u>= 0x80)
                                    ecx_5.b = edx_1
                                    ecx_5.b &= 0xe0
                                    
                                    if (ecx_5.b != 0xc0)
                                        eax_9.b = edx_1
                                        eax_9.b &= 0xf0
                                        
                                        if (eax_9.b != 0xe0 && (edx_1 & 0xf8) != 0xf0)
                                            sub_44e4d0(eax_9, &data_5559b1, 
                                                "!Xutf8_is_invalid_lead_char(str)", 
                                                "c:\ax2017\engine\xutf8.cpp", 0x218, "Xutf8_next")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                
                                sub_4afed0(&var_18)
                                char* var_40_2 = var_20
                                var_18 = var_18
                                eax_8, arg1 = sub_4c4a10(edi)
                                edx = var_18
                                arg1.b = *edx
                        
                        i_1[7].b = 1
                        int32_t var_8_2 = 1
                    label_4c5356:
                        
                        if (data_cdf414 != 0 && esi_1 != 0 && *esi_1 != 0)
                            char* eax_18 = sub_44f000(&var_14)
                            int32_t temp2_1 = *(eax_18 + 4)
                            *(eax_18 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                arg1, edx = sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                                var_14 = &data_5559b1
                        
                        int32_t var_8_4 = 0xffffffff
                        goto label_4c5100
                    
                    if (eax_7 == 0x43 && i_1[2] == 2)
                        if (*(edi + 0x51) == 0)
                            goto label_4c5103
                        
                        int32_t esi_2 = edi[1]
                        int32_t ecx_9 = edi[3]
                        int32_t eax_12
                        int32_t edx_2
                        edx_2:eax_12 = sx.q(esi_2 - ecx_9)
                        var_20 = (eax_12 ^ edx_2) - edx_2
                        char* const eax_15 = &data_5559b1
                        
                        if (esi_2 s>= ecx_9)
                            esi_2 = ecx_9
                        
                        char* ecx_10 = *edi
                        
                        if (ecx_10 != 0)
                            eax_15 = ecx_10
                        
                        char* eax_16 = &eax_15[esi_2]
                        
                        if (eax_15 == neg.d(esi_2))
                            sub_44e4d0(eax_16, &data_5559b1, "str", "c:\ax2017\engine\xstring.cpp", 
                                0x9a, "XString::XString")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        char* var_40_3 = var_20
                        var_14 = &data_5559b1
                        sub_44f690(&var_14, eax_16, var_40_3)
                        var_1c |= 1
                        char eax_17
                        eax_17, arg1, edx = sub_44f490(&var_14)
                        esi_1 = var_14
                        
                        if (eax_17 != 0)
                            char* const ecx_13 = &data_5559b1
                            
                            if (esi_1 != 0)
                                ecx_13 = esi_1
                            
                            arg1, edx = sub_44eee0(ecx_13)
                        
                        i_1[7].b = 1
                        int32_t var_8_3 = 2
                        goto label_4c5356
                    
                    goto label_4c53c4
                
                if (eax_6 == 0)
                    if (*(edi + 0x51) == eax_6.b)
                        goto label_4c5103
                    
                    if (*(edi + 0x52) != eax_6.b)
                        goto label_4c5103
                    
                    int32_t eax_19 = i_1[2]
                    
                    if (eax_19 != 0 && eax_19 != 1)
                        goto label_4c5103
                    
                    int32_t var_40_4 = i_1[1]
                    arg1, edx = sub_4c4a10(edi)
                    i_1[7].b = 1
                    goto label_4c5100
                
                if (eax_6 == 1)
                label_4c53c4:
                    
                    if (*(edi + 0x51) == 0)
                        goto label_4c5103
                    
                    if (*(edi + 0x52) != 0)
                        goto label_4c5103
                    
                    char eax_20
                    eax_20, arg1, edx = sub_4c4ed0(edi, i_1[1], i_1[2])
                    edx.b = arg2
                    
                    if (eax_20 == 0)
                        goto label_4c5103
                    
                    i_1[7].b = 1
                    goto label_4c5100
                
                bool cond:1_1
                
                if (eax_6 != 0x12)
                    bool cond:3_1
                    
                    if (eax_6 == 0x11)
                        cond:3_1 = i_1[1] != 0x100000
                    label_4c552a:
                        
                        if (cond:3_1)
                            goto label_4c5103
                        
                        *(edi + 0x52) = 0
                        goto label_4c5103
                    
                    if (eax_6 == 0xd)
                        cond:1_1 = i_1[1] != 0x1000
                        goto label_4c54d5
                    
                    if (eax_6 == 0xc)
                    label_4c5523:
                        cond:3_1 = i_1[1] != 0x1000
                        goto label_4c552a
                    
                    if (eax_6 != 0xe)
                        if (eax_6 == 0xf)
                            if (i_1[1] != 0x10)
                                goto label_4c5103
                            
                            *(edi + 0x52) = 0
                            goto label_4c5103
                        
                        if (eax_6 == 0x16)
                            if (i_1[1] == 0x100 && arg1.b != 0)
                                goto label_4c54e3
                            
                        label_4c54b8:
                            cond:1_1 = i_1[1] != 0x1000
                        else if (eax_6 != 0x14)
                            if (eax_6 == 0x15)
                                if (i_1[1] != 0x100)
                                    goto label_4c5523
                                
                                *(edi + 0x52) = 0
                                goto label_4c5103
                            
                            if (eax_6 == 0x13)
                                if (i_1[1] != 1)
                                    goto label_4c5542
                                
                                *(edi + 0x52) = 0
                                goto label_4c5103
                            
                            if (eax_6 == 0x16)
                                goto label_4c54b8
                            
                            if (eax_6 == 0x14)
                                goto label_4c54c6
                            
                            if (eax_6 != 0x18)
                                if (eax_6 == 0x17)
                                    if (i_1[1] != 1)
                                        goto label_4c5103
                                    
                                    *(edi + 0x52) = 0
                                    goto label_4c5103
                                
                                if (eax_6 == 0x15)
                                    goto label_4c5523
                                
                                if (eax_6 != 0x13)
                                    goto label_4c5103
                                
                            label_4c5542:
                                
                                if (i_1[1] != 0x10)
                                    goto label_4c5103
                                
                                *(edi + 0x52) = 0
                                goto label_4c5103
                            
                            cond:1_1 = i_1[1] != 1
                        else
                            if (i_1[1] == 1 && arg1.b != 0)
                                goto label_4c54e3
                            
                        label_4c54c6:
                            cond:1_1 = i_1[1] != 0x10
                    else
                        cond:1_1 = i_1[1] != 0x10
                else
                    cond:1_1 = i_1[1] != 0x100000
                
            label_4c54d5:
                
                if (cond:1_1)
                    goto label_4c5103
                
                goto label_4c54db
        
        if (*(edi + 0x52) != 0 && edx.b != 0)
            int32_t var_40_1 = arg3[1]
            i = sub_4c46d0(edi, *arg3)
            
            if (i != edi[1])
                edi[1] = i
                edi[2] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
