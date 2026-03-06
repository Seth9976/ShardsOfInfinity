// 函数名称: sub_531519
// 虚拟地址: 0x531519
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_531519(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, char* arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t edi
    int32_t var_10 = edi
    *arg4 = 0
    void* edi_2 = &arg4[1]
    *edi_2 = 0
    *(edi_2 + 4) = 0
    char* edi_5 = arg5
    arg4[1] = data_65a67c
    int32_t eax
    
    while (true)
        eax.b = *edi_5
        
        if (eax.b != 0x20)
            break
        
        edi_5 = &edi_5[1]
    
    if (eax.b == 0x61)
        *arg4 = 0x109
    label_53157a:
        arg4[1] = 2
    label_531582:
        void* edi_6 = &edi_5[1]
        var_8:3.b = 0
        int32_t ebx
        ebx.b = 0
        var_8:2.b = 0
        ebx:1.b = 0
        arg3.b = 1
        
        while (true)
            eax.b = *edi_6
            
            if (eax.b == 0)
            label_531675:
                
                if (ebx:1.b != 0)
                    goto label_531679
                
                while (*edi_6 == 0x20)
                label_531679:
                    edi_6 += 1
                
                bool cond:1_1
                
                if (ebx:1.b != 0)
                    if (_strncmp(edi_6, "ccs", 3) == 0)
                        void* edi_7 = edi_6 + 3
                        int32_t eax_16
                        
                        while (true)
                            eax_16.b = *edi_7
                            
                            if (eax_16.b != 0x20)
                                break
                            
                            edi_7 += 1
                        
                        if (eax_16.b == 0x3d)
                            do
                                edi_7 += 1
                            while (*edi_7 == 0x20)
                            
                            int32_t ebx_1 = 5
                            
                            if (__strnicmp(edi_7, "UTF-8", 5) == 0)
                                *arg4 |= 0x40000
                            label_53171c:
                                void* ecx_1 = edi_7 + ebx_1
                                uint32_t eax_17
                                
                                while (true)
                                    eax_17.b = *ecx_1
                                    
                                    if (eax_17.b != 0x20)
                                        break
                                    
                                    ecx_1 += 1
                                
                                cond:1_1 = eax_17.b != 0
                                goto label_531685
                            
                            ebx_1 = 8
                            
                            if (__strnicmp(edi_7, "UTF-16LEUNICODE", 8) == 0)
                                *arg4 |= 0x20000
                                goto label_53171c
                            
                            ebx_1 = 7
                            
                            if (__strnicmp(edi_7, "UNICODE", 7) == 0)
                                *arg4 |= 0x10000
                                goto label_53171c
                else
                    cond:1_1 = *edi_6 != ebx:1.b
                label_531685:
                    
                    if (not(cond:1_1))
                        arg4[2].b = 1
                        break
            else
                int32_t eax_2 = sx.d(eax.b)
                char eax_9
                
                if (eax_2 s<= 0x53)
                    switch (eax_2)
                        case 0x20
                            goto label_531668
                        case 0x2b
                            eax_9 = __acrt_stdio_parse_mode_plus(arg4, &var_8:2)
                            goto label_531662
                        case 0x2c
                            ebx:1.b = 1
                            arg3.b = 0
                            goto label_531668
                        case 0x44
                            eax_9 = __acrt_stdio_parse_mode_D(arg4)
                            goto label_531662
                        case 0x4e
                            *arg4 |= 0x80
                            arg3.b = 1
                            goto label_531668
                        case 0x52
                            if (ebx.b != 0)
                                arg3.b = 0
                                goto label_531668
                            
                            *arg4 |= 0x10
                            goto label_531603
                        case 0x53
                            if (ebx.b != 0)
                                arg3.b = 0
                                goto label_531668
                            
                            *arg4 |= 0x20
                        label_531603:
                            ebx.b = 1
                            arg3.b = 1
                            goto label_531668
                else if (eax_2 == 0x54)
                    eax_9 = __acrt_stdio_parse_mode_T(arg4)
                label_531662:
                    arg3.b = eax_9
                label_531668:
                    eax.b = arg3.b != 0
                    edi_6 += eax
                    
                    if (arg3.b == 0)
                        goto label_531675
                    
                    continue
                else
                    if (eax_2 == 0x62)
                        eax_9 = __acrt_stdio_parse_mode_b(arg4)
                        goto label_531662
                    
                    if (eax_2 == 0x63)
                        eax_9 = __acrt_stdio_parse_mode_c(arg4, &var_8:3)
                        goto label_531662
                    
                    if (eax_2 == 0x6e)
                        eax_9 = __acrt_stdio_parse_mode_n(arg4, &var_8:3)
                        goto label_531662
                    
                    if (eax_2 == 0x74)
                        eax_9 = __acrt_stdio_parse_mode_t(arg4)
                        goto label_531662
                    
                    if (eax_2 == 0x78)
                        eax_9 = __acrt_stdio_parse_mode_x(arg4)
                        goto label_531662
            
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            break
    else
        if (eax.b == 0x72)
            *arg4 = 0
            arg4[1] = 1
            goto label_531582
        
        if (eax.b == 0x77)
            *arg4 = 0x301
            goto label_53157a
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    return arg4
}
