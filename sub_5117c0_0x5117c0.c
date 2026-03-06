// 函数名称: sub_5117c0
// 虚拟地址: 0x5117c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5117c0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg2 - 0xc4 u> 0x3b)
    label_511bb1:
        
        if ((arg2 s< 0xe0 || arg2 s> 0xef) && arg2 != 0xfe)
            goto label_511e24
        
        uint32_t eax_56
        int32_t ecx_37
        eax_56, ecx_37 = sub_50ecf0(*arg1)
        
        if (eax_56 s< 2)
            goto label_511e24
        
        int32_t edi_5 = eax_56 - 2
        
        if (arg2 != 0xe0)
            if (arg2 == 0xee && edi_5 s>= 0xc)
                int32_t i = 0
                int32_t var_4c_5 = 1
                int32_t i_7 = 0
                int32_t eax_66
                
                do
                    void* esi_8 = *arg1
                    char* eax_62 = *(esi_8 + 0xa8)
                    
                    if (eax_62 u< *(esi_8 + 0xac))
                        ecx_37.b = *eax_62
                        *(esi_8 + 0xa8) = &eax_62[1]
                    else if (*(esi_8 + 0x20) == 0)
                        ecx_37.b = 0
                    else
                        sub_50ebb0(esi_8)
                        char* eax_64 = *(esi_8 + 0xa8)
                        i = i_7
                        ecx_37.b = *eax_64
                        *(esi_8 + 0xa8) = &eax_64[1]
                    
                    eax_66 = 0
                    
                    if (ecx_37.b == (*"Adobe")[i])
                        eax_66 = var_4c_5
                    
                    i += 1
                    i_7 = i
                    var_4c_5 = eax_66
                while (i s< 6)
                
                edi_5 -= 6
                
                if (eax_66 != 0)
                    void* esi_9 = *arg1
                    int32_t eax_67 = *(esi_9 + 0xa8)
                    
                    if (eax_67 u< *(esi_9 + 0xac))
                        *(esi_9 + 0xa8) = eax_67 + 1
                    else if (*(esi_9 + 0x20) != 0)
                        sub_50ebb0(esi_9)
                        *(esi_9 + 0xa8) += 1
                    
                    sub_50ecf0(*arg1)
                    sub_50ecf0(*arg1)
                    void* esi_10 = *arg1
                    char* eax_69 = *(esi_10 + 0xa8)
                    char ecx_43
                    
                    if (eax_69 u< *(esi_10 + 0xac))
                        ecx_43 = *eax_69
                        *(esi_10 + 0xa8) = &eax_69[1]
                    else if (*(esi_10 + 0x20) == 0)
                        ecx_43 = 0
                    else
                        sub_50ebb0(esi_10)
                        char* eax_71 = *(esi_10 + 0xa8)
                        ecx_43 = *eax_71
                        *(esi_10 + 0xa8) = &eax_71[1]
                    
                    edi_5 -= 6
                    arg1[0x11fa] = zx.d(ecx_43)
        else if (edi_5 s>= 5)
            int32_t i_1 = 0
            int32_t var_4c_4 = 1
            int32_t i_6 = 0
            int32_t eax_61
            
            do
                void* esi_7 = *arg1
                char* eax_57 = *(esi_7 + 0xa8)
                
                if (eax_57 u< *(esi_7 + 0xac))
                    ecx_37.b = *eax_57
                    *(esi_7 + 0xa8) = &eax_57[1]
                else if (*(esi_7 + 0x20) == 0)
                    ecx_37.b = 0
                else
                    sub_50ebb0(esi_7)
                    char* eax_59 = *(esi_7 + 0xa8)
                    i_1 = i_6
                    ecx_37.b = *eax_59
                    *(esi_7 + 0xa8) = &eax_59[1]
                
                eax_61 = 0
                
                if (ecx_37.b == (*"JFIF")[i_1])
                    eax_61 = var_4c_4
                
                i_1 += 1
                i_6 = i_1
                var_4c_4 = eax_61
            while (i_1 s< 5)
            
            edi_5 -= 5
            
            if (eax_61 != 0)
                arg1[0x11f9] = 1
        
        void* ecx_45 = *arg1
        
        if (edi_5 s< 0)
            *(ecx_45 + 0xa8) = *(ecx_45 + 0xac)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 1
        
        if (*(ecx_45 + 0x10) != 0)
            int32_t edx_6 = *(ecx_45 + 0xac)
            int32_t eax_77 = edx_6 - *(ecx_45 + 0xa8)
            
            if (eax_77 s< edi_5)
                *(ecx_45 + 0xa8) = edx_6
                (*(ecx_45 + 0x14))(*(ecx_45 + 0x1c), edi_5 - eax_77)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 1
        
        *(ecx_45 + 0xa8) += edi_5
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 1
    
    int32_t i_4
    
    switch (arg2)
        case 0xc4
            i_4 = sub_50ecf0(*arg1) - 2
            int32_t i_5 = i_4
            
            if (i_4 s<= 0)
            label_511934:
                int32_t eax_23
                eax_23.b = i_4 == 0
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_23
            
            while (true)
                void* esi_3 = *arg1
                int32_t var_5c_1 = 0
                char* eax_25 = *(esi_3 + 0xa8)
                
                if (eax_25 u< *(esi_3 + 0xac))
                    i_4.b = *eax_25
                    *(esi_3 + 0xa8) = &eax_25[1]
                else if (*(esi_3 + 0x20) == 0)
                    i_4.b = 0
                else
                    sub_50ebb0(esi_3)
                    char* eax_27 = *(esi_3 + 0xa8)
                    i_4.b = *eax_27
                    *(esi_3 + 0xa8) = &eax_27[1]
                
                uint32_t eax_29 = zx.d(i_4.b)
                int32_t eax_30 = eax_29 & 0xf
                uint32_t ecx_17 = eax_29 u>> 4
                uint32_t var_50_1 = ecx_17
                
                if (ecx_17 u> 1)
                    break
                
                if (eax_30 u> 3)
                    break
                
                int32_t var_48[0x10]
                
                for (int32_t i_2 = 0; i_2 s< 0x10; i_2 += 1)
                    void* esi_4 = *arg1
                    char* eax_31 = *(esi_4 + 0xa8)
                    
                    if (eax_31 u< *(esi_4 + 0xac))
                        ecx_17.b = *eax_31
                        *(esi_4 + 0xa8) = &eax_31[1]
                    else if (*(esi_4 + 0x20) == 0)
                        ecx_17.b = 0
                    else
                        sub_50ebb0(esi_4)
                        char* eax_33 = *(esi_4 + 0xa8)
                        ecx_17.b = *eax_33
                        *(esi_4 + 0xa8) = &eax_33[1]
                    
                    uint32_t eax_35 = zx.d(ecx_17.b)
                    var_5c_1 += eax_35
                    var_48[i_2] = eax_35
                
                void* eax_36 = eax_30 * 0x690
                int32_t (* edx)[0x10] = &var_48
                void* esi_5 = eax_36 + arg1
                void* const eax_38
                
                if (var_50_1 != 0)
                    if (sub_50f1f0(esi_5 + 0x1a44, edx) == 0)
                        break
                    
                    eax_38 = 0x1e44
                else
                    if (sub_50f1f0(esi_5 + 4, edx) == 0)
                        break
                    
                    eax_38 = 0x404
                
                int32_t edi_1 = 0
                
                if (var_5c_1 s> 0)
                    do
                        void* esi_6 = *arg1
                        char* eax_41 = *(esi_6 + 0xa8)
                        char ecx_20
                        
                        if (eax_41 u< *(esi_6 + 0xac))
                            ecx_20 = *eax_41
                            *(esi_6 + 0xa8) = &eax_41[1]
                        else if (*(esi_6 + 0x20) == 0)
                            ecx_20 = 0
                        else
                            sub_50ebb0(esi_6)
                            char* eax_43 = *(esi_6 + 0xa8)
                            ecx_20 = *eax_43
                            *(esi_6 + 0xa8) = &eax_43[1]
                        
                        *(eax_38 + esi_5 + edi_1) = ecx_20
                        edi_1 += 1
                    while (edi_1 s< var_5c_1)
                
                if (var_50_1 != 0)
                    void* edx_3 = eax_36 + 0x1a44 + arg1
                    void* ecx_24 = &arg1[0xda1 + eax_30 * 0x100]
                    void* var_4c_3 = edx_3
                    void* var_50_2 = ecx_24
                    
                    for (char* i_3 = nullptr; i_3 s< 0x200; i_3 = &i_3[1])
                        int32_t eax_47
                        eax_47.b = *(i_3 + edx_3)
                        *(ecx_24 + (i_3 << 1)) = 0
                        
                        if (eax_47.b u< 0xff)
                            eax_47 = zx.d(eax_47.b)
                            uint32_t edi_2 = zx.d(*(eax_47 + edx_3 + 0x400))
                            uint32_t ecx_27 = zx.d(*(eax_47 + edx_3 + 0x500))
                            int32_t edi_3 = edi_2 & 0xf
                            
                            if (edi_3 == 0 || ecx_27 + edi_3 u> 9)
                                ecx_24 = var_50_2
                            else
                                eax_47 = (i_3 << ecx_27.b & 0x1ff) s>> (9 - edi_3.b)
                                
                                if (eax_47 s< 1 << (edi_3.b - 1))
                                    eax_47 += 1 - (1 << edi_3.b)
                                
                                edx_3 = var_4c_3
                                ecx_24 = var_50_2
                                
                                if (eax_47 + 0x80 u<= 0xff)
                                    *(ecx_24 + (i_3 << 1)) =
                                        ((((eax_47 << 4) + (edi_2 u>> 4)) << 4) + edi_3 + ecx_27).w
                
                i_4 = i_5 - 0x11 - var_5c_1
                i_5 = i_4
                
                if (i_4 s<= 0)
                    int32_t eax_55
                    eax_55.b = i_4 == 0
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_55
            
            goto label_511e24
        case 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 
                0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdc, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 
                0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 
                0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe
            goto label_511bb1
        case 0xdb
            i_4 = sub_50ecf0(*arg1) - 2
            int32_t i_8 = i_4
            
            while (i_4 s> 0)
                void* esi_1 = *arg1
                char* eax_8 = *(esi_1 + 0xa8)
                
                if (eax_8 u< *(esi_1 + 0xac))
                    i_4.b = *eax_8
                    *(esi_1 + 0xa8) = &eax_8[1]
                else if (*(esi_1 + 0x20) == 0)
                    i_4.b = 0
                else
                    sub_50ebb0(esi_1)
                    char* eax_10 = *(esi_1 + 0xa8)
                    i_4.b = *eax_10
                    *(esi_1 + 0xa8) = &eax_10[1]
                
                uint32_t eax_12 = zx.d(i_4.b)
                int32_t eax_13 = eax_12 & 0xf
                uint32_t ecx_7 = eax_12 u>> 4
                uint32_t var_58_1 = ecx_7
                
                if (ecx_7 != 0 && ecx_7 != 1)
                    goto label_511e24
                
                if (eax_13 u> 3)
                    goto label_511e24
                
                for (void* j = nullptr; j s< 0x40; )
                    void* esi_2 = *arg1
                    uint16_t ecx_9
                    
                    if (ecx_7 == 0)
                        char* eax_16 = *(esi_2 + 0xa8)
                        
                        if (eax_16 u< *(esi_2 + 0xac))
                            ecx_7.b = *eax_16
                            *(esi_2 + 0xa8) = &eax_16[1]
                        else if (*(esi_2 + 0x20) == 0)
                            ecx_7.b = 0
                        else
                            sub_50ebb0(esi_2)
                            char* eax_18 = *(esi_2 + 0xa8)
                            ecx_7.b = *eax_18
                            *(esi_2 + 0xa8) = &eax_18[1]
                        
                        ecx_9 = zx.w(ecx_7.b)
                    else
                        ecx_9 = sub_50ecf0(esi_2)
                    
                    uint32_t eax_20 = zx.d(*(j + 0x573110))
                    j += 1
                    *(arg1 + ((eax_20 + (eax_13 << 6)) << 1) + 0x3484) = ecx_9
                    ecx_7 = var_58_1
                
                int32_t eax_22 = 0x41
                
                if (ecx_7 != 0)
                    eax_22 = 0x81
                
                i_4 = i_8 - eax_22
                i_8 = i_4
            
            goto label_511934
        case 0xdd
            if (sub_50ecf0(*arg1) != 4)
                goto label_511e24
            
            arg1[0x1201] = sub_50ecf0(*arg1)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 1
        case 0xff
        label_511e24:
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 0
}
