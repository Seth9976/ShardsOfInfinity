// 函数名称: sub_516c90
// 虚拟地址: 0x516c90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_516c90(int32_t arg1, uint32_t* arg2, uint32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i_3 = 0
    int32_t var_440 = 0xff
    uint32_t var_45c
    
    if (sub_516980(arg3, &var_45c) != 0)
        int32_t eax_5 = arg3[1]
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = sx.q(eax_5)
        int32_t var_430_1 = var_440
        int32_t edi_3 = (eax_6 ^ edx_1) - edx_1
        arg3[1] = edi_3
        int32_t var_458
        int32_t var_454
        
        if (var_454 != 0xc)
            if (var_45c s< 0x10)
                i_3 = (var_458 - var_454 - 0xe) s>> 2
        else if (var_45c s< 0x18)
            i_3 = (var_458 - 0x26) s/ 3
        
        uint32_t ecx_1 = *arg3
        uint32_t var_444
        int32_t ebx_7
        ebx_7.b = var_444 != 0
        arg3[2] = ebx_7 + 3
        
        if (ecx_1 s>= 0)
            int32_t eax_10
            int32_t edx_3
            
            if (ecx_1 != 0)
                edx_3:eax_10 = 0x7fffffff
            
            if (ecx_1 == 0 || ebx_7 + 3 s<= divs.dp.d(edx_3:eax_10, ecx_1))
                int32_t ebx_10 = ecx_1 * (ebx_7 + 3)
                
                if (ebx_10 s>= 0 && edi_3 s>= 0)
                    int32_t eax_12
                    int32_t edx_5
                    
                    if (edi_3 != 0)
                        edx_5:eax_12 = 0x7fffffff
                    
                    if ((edi_3 == 0 || ebx_10 s<= divs.dp.d(edx_5:eax_12, edi_3)) && ecx_1 s>= 0)
                        int32_t eax_14
                        int32_t edx_7
                        
                        if (ecx_1 != 0)
                            edx_7:eax_14 = 0x7fffffff
                        
                        if ((ecx_1 == 0 || ebx_7 + 3 s<= divs.dp.d(edx_7:eax_14, ecx_1)) && ebx_10 s>= 0
                                && edi_3 s>= 0)
                            int32_t eax_16
                            int32_t edx_9
                            
                            if (edi_3 != 0)
                                edx_9:eax_16 = 0x7fffffff
                            
                            if (edi_3 == 0 || ebx_10 s<= divs.dp.d(edx_9:eax_16, edi_3))
                                int32_t var_4b0_1 = ecx_1 * edi_3 * (ebx_7 + 3)
                                int32_t result_2
                                int32_t edx_11
                                result_2, edx_11 = _malloc()
                                int32_t result = result_2
                                int32_t result_1 = result
                                
                                if (result != 0)
                                    char* edi_4 = nullptr
                                    int32_t var_414
                                    int32_t eax_53
                                    int32_t edx_17
                                    
                                    if (var_45c s>= 0x10)
                                        int32_t var_438_1 = 0
                                        int32_t var_43c_1 = 0
                                        uint32_t var_460_1 = 0
                                        uint32_t var_464_1 = 0
                                        uint32_t var_42c_2
                                        __builtin_memset(&var_42c_2, 0, 0x14)
                                        char* var_410_3 = nullptr
                                        sub_50ec00(arg3, var_458 - var_454 - 0xe)
                                        uint32_t ecx_28 = var_45c
                                        uint32_t eax_72
                                        
                                        if (ecx_28 == 0x18)
                                            eax_72 = *arg3 * 3
                                        else if (ecx_28 != 0x10)
                                            eax_72 = 0
                                        else
                                            eax_72 = *arg3 * 2
                                        
                                        int32_t eax_75 = neg.d(eax_72) & 3
                                        uint32_t var_450
                                        uint32_t var_44c
                                        uint32_t var_448
                                        uint32_t var_428_1
                                        int32_t var_424_2
                                        int32_t var_420_2
                                        int32_t i_8
                                        int32_t i_1
                                        
                                        if (ecx_28 == 0x18)
                                            i_1 = 1
                                            i_8 = 1
                                        label_5174f5:
                                            edx_17 = arg3[1]
                                            eax_53 = edx_17
                                            int32_t var_434_1 = 0
                                            var_414 = eax_53
                                            
                                            if (edx_17 s> 0)
                                                char eax_100 = 8 - var_42c_2.b
                                                int32_t ecx_64
                                                
                                                do
                                                    uint32_t eax_101 = *arg3
                                                    
                                                    if (i_1 == 0)
                                                        int32_t i_5 = 0
                                                        
                                                        if (eax_101 s> 0)
                                                            int32_t i
                                                            
                                                            do
                                                                uint32_t edi_6 = sub_50ed90(arg3)
                                                                uint32_t var_414_1 = edi_6
                                                                
                                                                if (var_45c != 0x10)
                                                                    edi_6 += sub_50ed90(arg3) << 0x10
                                                                    var_414_1 = edi_6
                                                                
                                                                uint32_t edx_31 = edi_6 & var_450
                                                                int32_t edx_32 =
                                                                    edx_31 << (neg.d(var_438_1)).b
                                                                
                                                                if (var_438_1 s>= 0)
                                                                    edx_32 = edx_31 s>> var_438_1.b
                                                                
                                                                var_410_3[result] = (((edx_32
                                                                    s>> (8 - var_460_1.b)) *
                                                                    *((var_460_1 << 2) + &data_59d41c)) s>>
                                                                    (*((var_460_1 << 2) + &data_59d3f8)).b)
                                                                    .b
                                                                uint32_t edx_37 = edi_6 & var_44c
                                                                int32_t edx_38 =
                                                                    edx_37 << (neg.d(var_43c_1)).b
                                                                
                                                                if (var_43c_1 s>= 0)
                                                                    edx_38 = edx_37 s>> var_43c_1.b
                                                                
                                                                var_410_3[1 + result] = (((edx_38
                                                                    s>> (8 - var_464_1.b)) *
                                                                    *((var_464_1 << 2) + &data_59d41c)) s>>
                                                                    (*((var_464_1 << 2) + &data_59d3f8)).b)
                                                                    .b
                                                                uint32_t edx_43 = edi_6 & var_448
                                                                int32_t edx_44 =
                                                                    edx_43 << (neg.d(var_424_2)).b
                                                                
                                                                if (var_424_2 s>= 0)
                                                                    edx_44 = edx_43 s>> var_424_2.b
                                                                
                                                                var_410_3[2 + result] = (((edx_44
                                                                    s>> (8 - var_428_1.b)) *
                                                                    *((var_428_1 << 2) + &data_59d41c)) s>>
                                                                    (*((var_428_1 << 2) + &data_59d3f8)).b)
                                                                    .b
                                                                edi_4 = &var_410_3[3]
                                                                var_410_3 = edi_4
                                                                int32_t edx_53
                                                                
                                                                if (var_444 == 0)
                                                                    edx_53 = 0xff
                                                                else
                                                                    uint32_t edx_49 = var_414_1 & var_444
                                                                    int32_t edx_50 =
                                                                        edx_49 << (neg.d(var_420_2)).b
                                                                    
                                                                    if (var_420_2 s>= 0)
                                                                        edx_50 = edx_49 s>> var_420_2.b
                                                                    
                                                                    uint32_t eax_138 = var_42c_2
                                                                    edx_53 = ((edx_50 s>> eax_100) *
                                                                        *((eax_138 << 2) + &data_59d41c)) s>>
                                                                        (*((eax_138 << 2) + &data_59d3f8)).b
                                                                
                                                                var_430_1 |= edx_53
                                                                
                                                                if (ebx_7 == 1)
                                                                    edi_4[result] = edx_53.b
                                                                    edi_4 = &edi_4[1]
                                                                    var_410_3 = edi_4
                                                                
                                                                i = i_5 + 1
                                                                i_5 = i
                                                            while (i s< *arg3)
                                                    else
                                                        int32_t i_9 = 0
                                                        
                                                        if (eax_101 s> 0)
                                                            do
                                                                char* eax_102 = arg3[0x2a]
                                                                
                                                                if (eax_102 u< arg3[0x2b])
                                                                    i_1.b = *eax_102
                                                                    arg3[0x2a] = &eax_102[1]
                                                                else if (arg3[8] == 0)
                                                                    i_1.b = 0
                                                                else
                                                                    sub_50ebb0(arg3)
                                                                    char* eax_104 = arg3[0x2a]
                                                                    i_1.b = *eax_104
                                                                    arg3[0x2a] = &eax_104[1]
                                                                
                                                                edi_4[result + 2] = i_1.b
                                                                char* eax_106 = arg3[0x2a]
                                                                
                                                                if (eax_106 u< arg3[0x2b])
                                                                    i_1.b = *eax_106
                                                                    arg3[0x2a] = &eax_106[1]
                                                                else if (arg3[8] == 0)
                                                                    i_1.b = 0
                                                                else
                                                                    sub_50ebb0(arg3)
                                                                    char* eax_108 = arg3[0x2a]
                                                                    i_1.b = *eax_108
                                                                    arg3[0x2a] = &eax_108[1]
                                                                
                                                                edi_4[result + 1] = i_1.b
                                                                char* eax_110 = arg3[0x2a]
                                                                
                                                                if (eax_110 u< arg3[0x2b])
                                                                    i_1.b = *eax_110
                                                                    arg3[0x2a] = &eax_110[1]
                                                                else if (arg3[8] == 0)
                                                                    i_1.b = 0
                                                                else
                                                                    sub_50ebb0(arg3)
                                                                    char* eax_112 = arg3[0x2a]
                                                                    i_1.b = *eax_112
                                                                    arg3[0x2a] = &eax_112[1]
                                                                
                                                                edi_4[result] = i_1.b
                                                                edi_4 = &edi_4[3]
                                                                
                                                                if (i_8 != 2)
                                                                    i_1.b = 0xff
                                                                else
                                                                    char* eax_114 = arg3[0x2a]
                                                                    
                                                                    if (eax_114 u< arg3[0x2b])
                                                                        i_1.b = *eax_114
                                                                        arg3[0x2a] = &eax_114[1]
                                                                    else if (arg3[8] == 0)
                                                                        i_1.b = 0
                                                                    else
                                                                        sub_50ebb0(arg3)
                                                                        char* eax_116 = arg3[0x2a]
                                                                        i_1.b = *eax_116
                                                                        arg3[0x2a] = &eax_116[1]
                                                                
                                                                var_430_1 |= zx.d(i_1.b)
                                                                
                                                                if (ebx_7 == 1)
                                                                    edi_4[result] = i_1.b
                                                                    edi_4 = &edi_4[1]
                                                                
                                                                i_1 = i_9 + 1
                                                                i_9 = i_1
                                                            while (i_1 s< *arg3)
                                                            
                                                            var_410_3 = edi_4
                                                    
                                                    int32_t eax_140
                                                    int32_t ecx_62
                                                    
                                                    if (arg3[4] != 0)
                                                        eax_140 = arg3[0x2b]
                                                        ecx_62 = eax_140 - arg3[0x2a]
                                                    
                                                    if (arg3[4] == 0 || ecx_62 s>= eax_75)
                                                        arg3[0x2a] += eax_75
                                                    else
                                                        arg3[0x2a] = eax_140
                                                        arg3[5](arg3[7], eax_75 - ecx_62)
                                                    
                                                    edx_17 = arg3[1]
                                                    ecx_64 = var_434_1 + 1
                                                    eax_53 = edx_17
                                                    var_434_1 = ecx_64
                                                    var_414 = eax_53
                                                    i_1 = i_8
                                                while (ecx_64 s< edx_17)
                                            
                                        label_517901:
                                            int32_t ecx_65 = eax_53
                                            
                                            if (ebx_7 == 1 && var_430_1 == 0)
                                                ecx_65 = var_414
                                                void* eax_144 = ((*arg3 * edx_17) << 2) + 0xffffffff
                                                
                                                if (eax_144 s>= 0)
                                                    void* temp6_1
                                                    
                                                    do
                                                        *(eax_144 + result) = 0xff
                                                        temp6_1 = eax_144
                                                        eax_144 -= 4
                                                    while (temp6_1 - 4 s>= 0)
                                                    ecx_65 = arg3[1]
                                            
                                            if (eax_5 s> 0)
                                                int32_t i_2 = 0
                                                int32_t i_6 = 0
                                                
                                                if ((ecx_65 & 0xfffffffe) s> 0)
                                                    do
                                                        uint32_t eax_145 = *arg3
                                                        int32_t j = 0
                                                        void* ecx_69 =
                                                            (ecx_65 - i_2 - 1) * eax_145 * (ebx_7 + 3)
                                                        char* edx_59 = ecx_69 + result
                                                        
                                                        if (eax_145 * (ebx_7 + 3) s> 0)
                                                            void* ebx_13 =
                                                                eax_145 * i_2 * (ebx_7 + 3) - ecx_69
                                                            
                                                            do
                                                                int32_t eax_146
                                                                eax_146.b = *edx_59
                                                                edx_59 = &edx_59[1]
                                                                ecx_69.b = *(ebx_13 + edx_59 - 1)
                                                                j += 1
                                                                *(ebx_13 + edx_59 - 1) = eax_146.b
                                                                edx_59[0xffffffff] = ecx_69.b
                                                            while (j s< *arg3 * (ebx_7 + 3))
                                                            
                                                            result = result_1
                                                        
                                                        ecx_65 = arg3[1]
                                                        i_2 = i_6 + 1
                                                        i_6 = i_2
                                                    while (i_2 s< ecx_65 s>> 1)
                                            
                                            *arg2 = *arg3
                                            *arg4 = arg3[1]
                                            
                                            if (arg5 != 0)
                                                *arg5 = arg3[2]
                                            
                                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                            return result
                                        
                                        if (ecx_28 == 0x20 && var_448 == 0xff && var_44c == 0xff00
                                                && var_450 == 0xff0000)
                                            if (var_444 != 0xff000000)
                                                goto label_517473
                                            
                                            i_1 = 2
                                            i_8 = 2
                                            goto label_5174f5
                                        
                                        if (var_450 != 0 && var_44c != 0 && var_448 != 0)
                                        label_517473:
                                            var_438_1 = sub_5168d0(var_450, var_44c) - 7
                                            uint32_t eax_79
                                            int32_t edx_27
                                            eax_79, edx_27 = sub_516930(var_450)
                                            var_460_1 = eax_79
                                            var_43c_1 = sub_5168d0(var_44c, edx_27) - 7
                                            uint32_t eax_82
                                            int32_t edx_28
                                            eax_82, edx_28 = sub_516930(var_44c)
                                            var_464_1 = eax_82
                                            var_424_2 = sub_5168d0(var_448, edx_28) - 7
                                            uint32_t eax_85
                                            int32_t edx_29
                                            eax_85, edx_29 = sub_516930(var_448)
                                            var_428_1 = eax_85
                                            var_420_2 = sub_5168d0(var_444, edx_29) - 7
                                            var_42c_2 = sub_516930(var_444)
                                            i_1 = 0
                                            goto label_5174f5
                                        
                                        _free(result)
                                    else if (i_3 == 0 || i_3 s> 0x100)
                                        _free(result)
                                    else
                                        int32_t var_410_1 = 0
                                        char var_40c[0x404]
                                        var_40b
                                        var_40a
                                        
                                        if (i_3 s> 0)
                                            char* eax_19 = arg3[0x2a]
                                            int32_t edx_12
                                            
                                            do
                                                int32_t ecx_5 = arg3[0x2b]
                                                
                                                if (eax_19 u< ecx_5)
                                                    edx_11.b = *eax_19
                                                    eax_19 = &eax_19[1]
                                                    arg3[0x2a] = eax_19
                                                else if (arg3[8] == 0)
                                                    edx_11.b = 0
                                                else
                                                    sub_50ebb0(arg3)
                                                    char* eax_20 = arg3[0x2a]
                                                    ecx_5 = arg3[0x2b]
                                                    edx_11.b = *eax_20
                                                    eax_19 = &eax_20[1]
                                                    arg3[0x2a] = eax_19
                                                
                                                *(&var_40a + (var_410_1 << 2)) = edx_11.b
                                                
                                                if (eax_19 u< ecx_5)
                                                    edx_11.b = *eax_19
                                                    eax_19 = &eax_19[1]
                                                    arg3[0x2a] = eax_19
                                                else if (arg3[8] == 0)
                                                    edx_11.b = 0
                                                else
                                                    sub_50ebb0(arg3)
                                                    char* eax_21 = arg3[0x2a]
                                                    ecx_5 = arg3[0x2b]
                                                    edx_11.b = *eax_21
                                                    eax_19 = &eax_21[1]
                                                    arg3[0x2a] = eax_19
                                                
                                                *(&var_40b + (var_410_1 << 2)) = edx_11.b
                                                
                                                if (eax_19 u< ecx_5)
                                                    ecx_5.b = *eax_19
                                                    eax_19 = &eax_19[1]
                                                    arg3[0x2a] = eax_19
                                                else if (arg3[8] == 0)
                                                    ecx_5.b = 0
                                                else
                                                    sub_50ebb0(arg3)
                                                    char* eax_22 = arg3[0x2a]
                                                    ecx_5.b = *eax_22
                                                    eax_19 = &eax_22[1]
                                                    arg3[0x2a] = eax_19
                                                
                                                edx_12 = var_410_1
                                                var_40c[edx_12 << 2] = ecx_5.b
                                                
                                                if (var_454 != 0xc)
                                                    if (eax_19 u< arg3[0x2b])
                                                        eax_19 = &eax_19[1]
                                                        arg3[0x2a] = eax_19
                                                    else if (arg3[8] != 0)
                                                        sub_50ebb0(arg3)
                                                        arg3[0x2a] += 1
                                                        eax_19 = arg3[0x2a]
                                                        edx_12 = var_410_1
                                                
                                                var_409
                                                *(&var_409 + (edx_12 << 2)) = 0xff
                                                var_410_1 = edx_12 + 1
                                            while (edx_12 + 1 s< i_3)
                                            result = result_1
                                            edi_4 = nullptr
                                        
                                        int32_t eax_23
                                        eax_23.b = var_454 != 0xc
                                        sub_50ec00(arg3, var_458 - (eax_23 + 3) * i_3 - var_454 - 0xe)
                                        uint32_t ecx_10 = var_45c
                                        uint32_t eax_28
                                        
                                        if (ecx_10 == 1)
                                            eax_28 = (*arg3 + 7) u>> 3
                                        label_516fc2:
                                            edx_17 = arg3[1]
                                            int32_t eax_32 = neg.d(eax_28) & 3
                                            int32_t var_410_2 = eax_32
                                            
                                            if (ecx_10 != 1)
                                                int32_t var_420_1 = 0
                                                var_414 = edx_17
                                                
                                                if (edx_17 s> 0)
                                                    do
                                                        int32_t var_41c_3 = 0
                                                        
                                                        if (*arg3 s> 0)
                                                            int32_t ecx_23
                                                            
                                                            do
                                                                char* eax_54 = arg3[0x2a]
                                                                int32_t ecx_20
                                                                
                                                                if (eax_54 u< arg3[0x2b])
                                                                    ecx_20.b = *eax_54
                                                                    arg3[0x2a] = &eax_54[1]
                                                                else if (arg3[8] == 0)
                                                                    ecx_20.b = 0
                                                                else
                                                                    sub_50ebb0(arg3)
                                                                    char* eax_56 = arg3[0x2a]
                                                                    ecx_20.b = *eax_56
                                                                    arg3[0x2a] = &eax_56[1]
                                                                
                                                                uint32_t edx_21 = 0
                                                                uint32_t ecx_22 = zx.d(ecx_20.b)
                                                                
                                                                if (var_45c == 4)
                                                                    edx_21 = ecx_22 & 0xf
                                                                    ecx_22 u>>= 4
                                                                
                                                                edi_4[result] = var_40c[ecx_22 << 2]
                                                                edi_4[result + 1] =
                                                                    *(&var_40b + (ecx_22 << 2))
                                                                edi_4[result + 2] =
                                                                    *(&var_40a + (ecx_22 << 2))
                                                                edi_4 = &edi_4[3]
                                                                
                                                                if (ebx_7 == 1)
                                                                    edi_4[result] = 0xff
                                                                    edi_4 = &edi_4[1]
                                                                
                                                                ecx_23 = var_41c_3
                                                                
                                                                if (ecx_23 + 1 == *arg3)
                                                                    break
                                                                
                                                                if (var_45c == 8)
                                                                    char* eax_62 = arg3[0x2a]
                                                                    
                                                                    if (eax_62 u< arg3[0x2b])
                                                                        ecx_23.b = *eax_62
                                                                        arg3[0x2a] = &eax_62[1]
                                                                    else if (arg3[8] == 0)
                                                                        ecx_23.b = 0
                                                                    else
                                                                        sub_50ebb0(arg3)
                                                                        char* eax_64 = arg3[0x2a]
                                                                        ecx_23.b = *eax_64
                                                                        arg3[0x2a] = &eax_64[1]
                                                                    
                                                                    edx_21 = zx.d(ecx_23.b)
                                                                    ecx_23 = var_41c_3
                                                                
                                                                edi_4[result] = var_40c[edx_21 << 2]
                                                                edi_4[result + 1] =
                                                                    *(&var_40b + (edx_21 << 2))
                                                                edi_4[result + 2] =
                                                                    *(&var_40a + (edx_21 << 2))
                                                                edi_4 = &edi_4[3]
                                                                
                                                                if (ebx_7 == 1)
                                                                    edi_4[result] = 0xff
                                                                    edi_4 = &edi_4[1]
                                                                
                                                                var_41c_3 = ecx_23 + 2
                                                            while (ecx_23 + 2 s< *arg3)
                                                            eax_32 = var_410_2
                                                        
                                                        int32_t ecx_26
                                                        int32_t edx_22
                                                        
                                                        if (arg3[4] != 0)
                                                            edx_22 = arg3[0x2b]
                                                            ecx_26 = edx_22 - arg3[0x2a]
                                                        
                                                        if (arg3[4] == 0 || ecx_26 s>= eax_32)
                                                            arg3[0x2a] += eax_32
                                                        else
                                                            arg3[0x2a] = edx_22
                                                            arg3[5](arg3[7], eax_32 - ecx_26)
                                                            eax_32 = var_410_2
                                                        
                                                        var_420_1 += 1
                                                        edx_17 = arg3[1]
                                                        var_414 = edx_17
                                                    while (var_420_1 s< edx_17)
                                                
                                                eax_53 = var_414
                                            else
                                                int32_t var_424_1 = 0
                                                var_414 = edx_17
                                                
                                                if (edx_17 s<= 0)
                                                    eax_53 = var_414
                                                else
                                                    int32_t eax_52
                                                    
                                                    do
                                                        char* eax_33 = arg3[0x2a]
                                                        int32_t edx_18 = 7
                                                        int32_t var_41c_1 = 7
                                                        int32_t ecx_11
                                                        
                                                        if (eax_33 u< arg3[0x2b])
                                                            ecx_11.b = *eax_33
                                                            arg3[0x2a] = &eax_33[1]
                                                        else if (arg3[8] == 0)
                                                            ecx_11.b = 0
                                                        else
                                                            sub_50ebb0(arg3)
                                                            char* eax_35 = arg3[0x2a]
                                                            edx_18 = var_41c_1
                                                            ecx_11.b = *eax_35
                                                            arg3[0x2a] = &eax_35[1]
                                                        
                                                        uint32_t ecx_13 = zx.d(ecx_11.b)
                                                        uint32_t var_42c_1 = ecx_13
                                                        int32_t i_7 = 0
                                                        
                                                        if (*arg3 s> 0)
                                                            int32_t i_4
                                                            
                                                            do
                                                                int32_t ecx_15 =
                                                                    (ecx_13 s>> edx_18.b & 1) << 2
                                                                edi_4[result] = var_40c[ecx_15]
                                                                edi_4[result + 1] = *(&var_40b + ecx_15)
                                                                edi_4[result + 2] = *(&var_40a + ecx_15)
                                                                edi_4 = &edi_4[3]
                                                                int32_t temp7_1 = edx_18
                                                                edx_18 -= 1
                                                                
                                                                if (temp7_1 - 1 s>= 0)
                                                                    ecx_13 = var_42c_1
                                                                else
                                                                    char* eax_43 = arg3[0x2a]
                                                                    edx_18 = 7
                                                                    int32_t var_41c_2 = 7
                                                                    
                                                                    if (eax_43 u< arg3[0x2b])
                                                                        ecx_15.b = *eax_43
                                                                        ecx_13 = zx.d(ecx_15.b)
                                                                        arg3[0x2a] = &eax_43[1]
                                                                        var_42c_1 = ecx_13
                                                                    else if (arg3[8] == 0)
                                                                        ecx_13 = 0
                                                                        var_42c_1 = 0
                                                                    else
                                                                        sub_50ebb0(arg3)
                                                                        char* eax_45 = arg3[0x2a]
                                                                        edx_18 = var_41c_2
                                                                        ecx_13 = zx.d(*eax_45)
                                                                        arg3[0x2a] = &eax_45[1]
                                                                        var_42c_1 = ecx_13
                                                                
                                                                i_4 = i_7 + 1
                                                                i_7 = i_4
                                                            while (i_4 s< *arg3)
                                                        
                                                        int32_t ecx_19
                                                        int32_t edx_19
                                                        
                                                        if (arg3[4] != 0)
                                                            edx_19 = arg3[0x2b]
                                                            ecx_19 = edx_19 - arg3[0x2a]
                                                        
                                                        if (arg3[4] == 0 || ecx_19 s>= var_410_2)
                                                            arg3[0x2a] += var_410_2
                                                        else
                                                            arg3[0x2a] = edx_19
                                                            arg3[5](arg3[7], var_410_2 - ecx_19)
                                                        
                                                        edx_17 = arg3[1]
                                                        eax_52 = var_424_1 + 1
                                                        var_424_1 = eax_52
                                                        var_414 = edx_17
                                                    while (eax_52 s< edx_17)
                                                    eax_53 = edx_17
                                            
                                            goto label_517901
                                        
                                        if (ecx_10 == 4)
                                            eax_28 = (*arg3 + 1) u>> 1
                                            goto label_516fc2
                                        
                                        if (ecx_10 == 8)
                                            eax_28 = *arg3
                                            goto label_516fc2
                                        
                                        _free(result)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
