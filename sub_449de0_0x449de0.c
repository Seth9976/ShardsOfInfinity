// 函数名称: sub_449de0
// 虚拟地址: 0x449de0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_449de0(int32_t arg1, uint32_t arg2, void* arg3, int32_t arg4, uint32_t arg5, uint32_t arg6, int32_t* arg7, char arg8)
{
    // 第一条实际指令: char var_9 = 1
    char var_9 = 1
    uint32_t i_5 = arg6
    
    if ((arg5 & 0x8000000) == 0)
        goto label_449e59
    
    int32_t var_80_2
    char const* const var_7c_2
    uint32_t i_4
    char* ecx_6
    int32_t eax_2
    int32_t edx
    
    if ((arg5 & 0x44000) != 0x44000)
        if ((arg5 & 0x81000) == 0x81000)
            edx = 4
            eax_2 = 9
            goto label_449e56
        
        i_4 = arg5 & 0x22000
        
        if (i_4 == 0x22000)
            edx = 1
            eax_2 = 0xa
            goto label_449e56
        
        var_7c_2 = "ExecPower"
        var_80_2 = 0x92a
        ecx_6 = "Halt"
    else
        edx = 3
        eax_2 = 6
    label_449e56:
        i_5 *= sub_446540(eax_2, edx, arg3, eax_2, arg2)
    label_449e59:
        int32_t ecx_2 = arg4
        i_4 = *arg7
        arg6 = i_4
        int32_t var_7c_7
        int128_t var_58
        int64_t var_48
        uint128_t var_40
        void var_30
        int32_t var_2c
        uint128_t var_20
        
        if (ecx_2 u> 0x15)
            var_7c_2 = "ExecPower"
            var_80_2 = 0x9bd
            ecx_6 = "Halt"
        else
            switch (ecx_2)
                case 0
                    var_7c_2 = "ExecPower"
                    var_80_2 = 0x935
                    ecx_6 = "Halt"
                case 1
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    i_4 = sub_445b50(arg3, arg2)
                    uint32_t i_7 = i_5
                    int32_t var_80_3 = *i_4
                    char const* const var_84_1 = "%s gains %d money."
                    void* var_88_1 = arg3
                    int32_t ecx_4 = *(arg3 + 0x2168)
                    
                    if (ecx_4 != 2 && ecx_4 != 3)
                        uint32_t (* eax_7)[0x4] = sub_44d360(arg3, arg2)
                        (*eax_7)[5] = 1
                        (*eax_7)[6] = 0
                        (*eax_7)[7] = i_5
                    
                    int32_t temp0_1 = *(i_4 + 0x10)
                    *(i_4 + 0x10) += i_5
                    
                    if (temp0_1 + i_5 s>= 0)
                        sub_445a20(i_4, 0x10, arg3, arg2, arg6, i_5, i_5, 0)
                        void* eax_8
                        eax_8.b = var_9
                        return eax_8
                    
                    var_7c_2 = "ExecGainMoney"
                    var_80_2 = 0x6fa
                    ecx_6 = "player.money >= 0"
                case 2
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    sub_448bb0(i_4, arg2, arg3, i_4, i_5)
                    int32_t eax_9
                    eax_9.b = var_9
                    return eax_9
                case 3
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    uint32_t eax_10 = sub_445b50(arg3, arg2)
                    uint32_t i_8 = i_5
                    arg5 = eax_10
                    int32_t var_80_6 = *eax_10
                    char const* const var_84_3 = "%s gains %d mastery."
                    void* var_88_3 = arg3
                    int32_t ecx_10 = *(arg3 + 0x2168)
                    
                    if (ecx_10 != 2 && ecx_10 != 3)
                        uint32_t (* eax_11)[0x4] = sub_44d360(arg3, arg2)
                        (*eax_11)[5] = 1
                        (*eax_11)[6] = 2
                        (*eax_11)[7] = i_5
                        eax_10 = arg5
                    
                    int32_t ecx_12 = *(eax_10 + 0xc)
                    uint32_t i_11 = i_5
                    
                    if (i_5 s>= 0x1e - ecx_12)
                        i_11 = 0x1e - ecx_12
                    
                    int32_t eax_13 = ecx_12 + i_11
                    *(arg5 + 0xc) = eax_13
                    sub_445a20(eax_13, 0x12, arg3, arg2, arg6, i_5, i_11, 0)
                    i_4 = arg5
                    
                    if (*(i_4 + 0xc) s>= 0)
                        i_4.b = var_9
                        return i_4
                    
                    var_7c_2 = "ExecGainMastery"
                    var_80_2 = 0x72a
                    ecx_6 = "player.mastery >= 0"
                case 4
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    sub_448d90(i_4, arg2, arg3, i_4, i_5)
                    void* eax_14
                    eax_14.b = var_9
                    return eax_14
                case 5
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    sub_448bb0(sub_448d90(i_4, arg2, arg3, i_4, i_5), arg2, arg3, arg6, i_5)
                    int32_t eax_20
                    eax_20.b = var_9
                    return eax_20
                case 6
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    uint32_t eax_15 = sub_445b50(arg3, arg2)
                    uint32_t i_9 = i_5
                    uint32_t i_6 = i_5
                    int32_t var_84_5 = *eax_15
                    char const* const var_88_5 =
                        "%s uses focus ability and spends %d crystal for %d mastery."
                    void* var_8c_3 = arg3
                    int32_t ecx_17 = *(arg3 + 0x2168)
                    
                    if (ecx_17 != 2 && ecx_17 != 3)
                        uint32_t (* eax_16)[0x4] = sub_44d360(arg3, arg2)
                        (*eax_16)[5] = 1
                        (*eax_16)[6] = 2
                        (*eax_16)[7] = 1
                    
                    *(eax_15 + 0xc) += 1
                    *(eax_15 + 0x10) -= 1
                    sub_445a20(sub_445a20(eax_15, 0x20, arg3, arg2, arg6, 1, 0, 0), 0x12, arg3, arg2, 
                        arg6, 1, 1, 0)
                    void* eax_18
                    eax_18.b = var_9
                    return eax_18
                case 7
                    if (arg8 != 0)
                        uint32_t i_10 = i_5
                        int32_t var_80_10 = *sub_445b50(arg3, arg2)
                        char const* const var_84_7 = "%s draws %d cards"
                        void* var_88_9 = arg3
                        i_4 = *(arg3 + 0x2168)
                        
                        if (i_4 != 2 && i_4 != 3)
                            i_4 = sub_44d360(arg3, arg2)
                            *(i_4 + 0x14) = 2
                            *(i_4 + 0x1c) = i_5
                        
                        if (i_5 s> 0)
                            uint32_t i
                            
                            do
                                sub_446fe0(arg3, arg2)
                                i = i_5
                                i_5 -= 1
                            while (i != 1)
                            void* eax_22
                            eax_22.b = var_9
                            return eax_22
                    
                    i_4.b = var_9
                    return i_4
                case 8
                    return sub_447b40(i_4, arg2, arg3, arg7, 0)
                case 9
                    return sub_447b40(i_4, arg2, arg3, arg7, 1)
                case 0xa
                    uint32_t ebx_1 = 0
                    uint32_t i_1 = 0
                    arg5 = 0
                    
                    if (*(arg3 + 0x2164) s<= 0)
                        return sub_447e90(i_4, arg2, arg3, arg7)
                    
                    i_4 = arg2
                    
                    do
                        if (i_1 != i_4)
                            sub_445fb0(&var_40, arg3, 0xa, i_1)
                            uint128_t xmm1_1 = var_40
                            var_20 = xmm1_1
                            sub_4460c0(&var_30)
                            i_4 = _mm_bsrli_si128(xmm1_1, 4)
                            
                            if (i_4 != var_2c)
                                uint32_t* edi_5 = var_20:4.d
                                
                                while (true)
                                    if (edi_5 == 0)
                                        goto label_44a2c8
                                    
                                    i_4 = *edi_5
                                    
                                    if (i_4 != var_20:8.d)
                                        goto label_44a2b4
                                    
                                    if (*(edi_5[4] + 0x28) == 2)
                                        int32_t edx_19 = edi_5[1]
                                        
                                        if (edx_19 != arg2)
                                            i_4 = sub_445af0(arg3, edx_19)
                                            
                                            if (*(i_4 + 8) s> 0)
                                                if (ebx_1 != 0)
                                                    break
                                                
                                                int32_t ebx_2 = edi_5[6]
                                                int32_t eax_31 = (edi_5 - arg3 - 4) s>> 5
                                                
                                                if (ebx_2 == 0)
                                                    ebx_1 = eax_31
                                                else
                                                    ebx_1 = ebx_2 << 0x10 | eax_31
                                    
                                    i_4 = sub_445ed0(&var_20)
                                    edi_5 = var_20:4.d
                                    
                                    if (edi_5 == var_2c)
                                        i_1 = arg5
                                        goto label_44a27c
                                
                                goto label_44a2dc
                            
                        label_44a27c:
                            i_4 = arg2
                        
                        i_1 += 1
                        arg5 = i_1
                    while (i_1 s< *(arg3 + 0x2164))
                    
                    if (ebx_1 == 0)
                    label_44a2dc:
                        return sub_447e90(i_4, arg2, arg3, arg7)
                    
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    sub_447d30(i_4, i_4, arg3, ebx_1)
                    void* eax_32
                    eax_32.b = var_9
                    return eax_32
                case 0xb
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    uint32_t edi_6 = 0
                    arg5 = 0
                    
                    if (*(arg3 + 0x2164) s<= 0)
                        i_4.b = var_9
                        return i_4
                    
                    while (true)
                        if (edi_6 != arg2)
                            sub_445fb0(&var_40, arg3, 0xa, edi_6)
                            uint128_t xmm1_3 = var_40
                            var_20 = xmm1_3
                            sub_4460c0(&var_30)
                            i_4 = _mm_bsrli_si128(xmm1_3, 4)
                            
                            if (i_4 != var_2c)
                                break
                        
                    label_44a3b0:
                        edi_6 += 1
                        arg5 = edi_6
                        
                        if (edi_6 s>= *(arg3 + 0x2164))
                            i_4.b = var_9
                            return i_4
                    
                    uint32_t* edi_7 = var_20:4.d
                    
                    while (true)
                        if (edi_7 == 0)
                            goto label_44a2c8
                        
                        i_4 = *edi_7
                        
                        if (i_4 != var_20:8.d)
                            break
                        
                        if (*(edi_7[4] + 0x28) == 2)
                            int32_t edx_23 = edi_7[1]
                            
                            if (edx_23 != arg2 && *(sub_445af0(arg3, edx_23) + 8) s> 0)
                                int32_t ecx_38 = edi_7[6]
                                int32_t eax_39 = (edi_7 - arg3 - 4) s>> 5
                                uint32_t ecx_40
                                
                                if (ecx_38 == 0)
                                    ecx_40 = eax_39
                                else
                                    ecx_40 = ecx_38 << 0x10 | eax_39
                                
                                sub_447d30(eax_39, arg2, arg3, ecx_40)
                        
                        i_4 = sub_445ed0(&var_20)
                        edi_7 = var_20:4.d
                        
                        if (edi_7 == var_2c)
                            edi_6 = arg5
                            goto label_44a3b0
                    
                label_44a2b4:
                    var_7c_2 = "Cards::CardIt::operator *"
                    var_80_2 = 0x133
                    ecx_6 = "c->where == where"
                case 0xc, 0x11
                    var_7c_2 = "ExecPower"
                    var_80_2 = 0x9bb
                    ecx_6 = "Halt"
                case 0xd
                    return sub_447760(i_4, arg2, arg3, arg7)
                case 0xe
                    return sub_447910(i_4, arg2, arg3, arg7)
                case 0xf
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    i_4 = sub_445b50(arg3, arg2)
                    int32_t var_7c_6 = *i_4
                    char const* const var_80_11 = "%s's next champion will go directly into play."
                    void* var_84_8 = arg3
                    var_7c_7 = 1
                label_44a855:
                    sub_448e60(i_4, arg2, arg3, arg6, arg7, var_7c_7)
                    i_4.b = var_9
                    return i_4
                case 0x10
                    i_4 = *(sub_445b50(arg3, arg2) + 0x14)
                    
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    sub_448bb0(i_4, arg2, arg3, arg6, i_4)
                    int32_t eax_24
                    eax_24.b = var_9
                    return eax_24
                case 0x12
                    i_4 = 0xffffffff
                    uint32_t i_2 = 0
                    arg5 = 0xffffffff
                    
                    if (*(arg3 + 0x2164) s> 0)
                        do
                            if (i_2 != arg2)
                                void* eax_42
                                eax_42, ecx_2 = sub_445b50(arg3, i_2)
                                void* eax_43
                                
                                if (*(eax_42 + 8) != 0)
                                    eax_43, ecx_2 = sub_445b50(arg3, i_2)
                                
                                if (*(eax_42 + 8) == 0 || *(eax_43 + 0xc) == 0)
                                    i_4 = arg5
                                else
                                    if (arg5 != 0xffffffff)
                                        goto label_44a466
                                    
                                    i_4 = i_2
                                    arg5 = i_4
                            
                            i_2 += 1
                        while (i_2 s< *(arg3 + 0x2164))
                    
                    if (*(arg3 + 0x2164) s> 0 && i_4 != 0xffffffff)
                        if (arg8 == 0)
                            i_4.b = var_9
                            return i_4
                        
                        int32_t var_7c_18 = ecx_2
                        sub_449d50(i_4, arg2, arg3, i_4)
                        void* eax_44
                        eax_44.b = var_9
                        return eax_44
                    
                label_44a466:
                    void* eax_45 = sub_4476a0(arg3)
                    uint32_t i_3 = 0
                    arg5 = 0
                    *eax_45 = 7
                    int32_t var_64_1 = *arg7
                    i_4 = eax_45 + 8
                    int32_t var_60_1 = arg7[1]
                    *(eax_45 + 4) = arg2
                    *(eax_45 + 0x328) = 0
                    *(eax_45 + 0x358) = 1.o
                    *(eax_45 + 0x32c) = 1
                    *(eax_45 + 0x334) = 0
                    *(eax_45 + 0x330) = i_4
                    *(eax_45 + 0x368) = var_58
                    *(eax_45 + 0x378) = var_48
                    
                    if (*(arg3 + 0x2164) s> 0)
                        do
                            if (i_3 != arg2)
                                void* eax_47 = sub_445b50(arg3, i_3)
                                i_3 = arg5
                                
                                if (*(eax_47 + 8) != 0)
                                    void* eax_48 = sub_445b50(arg3, i_3)
                                    i_3 = arg5
                                    
                                    if (*(eax_48 + 0xc) != 0)
                                        *(*(eax_45 + 0x330) + (*(eax_45 + 0x328) << 2)) = i_3
                                        *(eax_45 + 0x328) += 1
                                        *(eax_45 + 0x334) += 1
                            
                            i_4 = *(eax_45 + 0x328)
                            i_3 += 1
                            arg5 = i_3
                        while (i_3 s< *(arg3 + 0x2164))
                    
                    if (*(arg3 + 0x2164) s> 0 && i_4 != 0)
                        i_4.b = 1
                        return i_4
                    
                    if (*(arg3 + 0x1a04) == 1)
                        *(arg3 + 0x1a04) = 0
                        i_4.b = 0
                        return i_4
                    
                    var_7c_2 = "ShYieldPop"
                    var_80_2 = 0x485
                    ecx_6 = "g.numYlds == 1"
                case 0x13
                    i_4 = sub_446390(i_4, 6, arg3, arg2)
                    
                    if (i_4 != 1)
                        void* eax_53 = sub_4476a0(arg3)
                        *eax_53 = 9
                        int32_t var_64_2 = *arg7
                        int32_t var_60_2 = arg7[1]
                        *(eax_53 + 4) = arg2
                        *(eax_53 + 0x358) = 1.o
                        *(eax_53 + 0x328) = 0
                        *(eax_53 + 0x32c) = 1
                        *(eax_53 + 0x334) = 0
                        *(eax_53 + 0x368) = var_58
                        *(eax_53 + 0x330) = eax_53 + 8
                        *(eax_53 + 0x378) = var_48
                        sub_445fb0(&var_40, arg3, 6, arg2)
                        uint128_t xmm1_5 = var_40
                        var_20 = xmm1_5
                        sub_4460c0(&var_30)
                        i_4 = _mm_bsrli_si128(xmm1_5, 4)
                        
                        if (i_4 != var_2c)
                            uint32_t* ecx_62 = var_20:4.d
                            
                            do
                                if (ecx_62 == 0)
                                    goto label_44a2c8
                                
                                i_4 = *ecx_62
                                
                                if (i_4 != var_20:8.d)
                                    goto label_44a2b4
                                
                                if (ecx_62[6] == 0)
                                    *(eax_53 + (*(eax_53 + 0x328) << 2) + 8) = (ecx_62 - arg3 - 4) s>> 5
                                    *(eax_53 + 0x328) += 1
                                    *(eax_53 + 0x334) += 1
                                
                                i_4 = sub_445ed0(&var_20)
                                ecx_62 = var_20:4.d
                            while (ecx_62 != var_2c)
                        
                        char var_9_1
                        
                        if (*(eax_53 + 0x328) != 0)
                            var_9_1 = 1
                        label_44a70a:
                            *(sub_445b50(arg3, arg2) + 0x24) = 0
                            void* eax_57
                            eax_57.b = var_9_1
                            return eax_57
                        
                        if (*(arg3 + 0x1a04) == 1)
                            *(arg3 + 0x1a04) = 0
                            var_9_1 = 0
                            goto label_44a70a
                        
                        var_7c_2 = "ShYieldPop"
                        var_80_2 = 0x485
                        ecx_6 = "g.numYlds == 1"
                    else
                        if (arg2 s>= 0)
                            uint32_t edi_9 = *(sub_445b50(arg3, arg2) + 0x30)
                            
                            if (arg8 == 0)
                                i_4.b = var_9
                                return i_4
                            
                            void* eax_51 = sub_445b50(arg3, arg2)
                            *(eax_51 + 0x24) = edi_9
                            sub_449c10(eax_51, arg2, arg3, edi_9, arg7)
                            void* eax_52
                            eax_52.b = var_9
                            return eax_52
                        
                        var_7c_2 = "GetPileHead"
                        var_80_2 = 0xb4
                        ecx_6 = "who >= 0"
                case 0x14
                    int32_t ecx_68 = *(arg3 + 0x1e54)
                    
                    if (arg8 == 0)
                        if (ecx_68 == 0)
                            void* eax_61
                            eax_61.b = *(sub_445b50(arg3, arg2) + 0xc) s>= 0x14
                            return eax_61
                        
                        i_4.b = 1
                        return i_4
                    
                    if (ecx_68 != 0)
                        sub_449980(i_4, arg2, arg3, i_4, arg7[1])
                        int32_t eax_58
                        eax_58.b = var_9
                        return eax_58
                    
                    i_4 = sub_445b50(arg3, arg2)
                    
                    if (*(i_4 + 0xc) s>= 0x14)
                        i_4 = *(sub_445b50(arg3, arg2) + 0x24)
                        
                        if (i_4 == 0)
                            i_4.b = var_9
                            return i_4
                        
                        sub_449c10(i_4, arg2, arg3, i_4, arg7)
                        void* eax_60
                        eax_60.b = var_9
                        return eax_60
                    
                    var_7c_2 = "ExecPower"
                    var_80_2 = 0x99d
                    ecx_6 = "p.mastery >= 20"
                case 0x15
                    if (arg8 == 0)
                        i_4.b = var_9
                        return i_4
                    
                    sub_445fb0(&var_40, arg3, 6, arg2)
                    uint128_t xmm1_7 = var_40
                    var_20 = xmm1_7
                    sub_4460c0(&var_30)
                    i_4 = _mm_bsrli_si128(xmm1_7, 4)
                    
                    if (i_4 == var_2c)
                    label_44a848:
                        var_7c_7 = 0
                        goto label_44a855
                    
                    uint32_t* ecx_74 = var_20:4.d
                    
                    while (true)
                        if (ecx_74 == 0)
                        label_44a2c8:
                            var_7c_2 = "Cards::CardIt::operator *"
                            var_80_2 = 0x132
                            ecx_6 = &data_580cbc
                            goto label_44a88c
                        
                        i_4 = *ecx_74
                        
                        if (i_4 != var_20:8.d)
                            break
                        
                        if (sub_448f50(ecx_74, arg5) != 0)
                            int32_t ecx_75 = ecx_74[6]
                            int32_t eax_66 = (ecx_74 - arg3 - 4) s>> 5
                            int32_t ecx_77
                            
                            if (ecx_75 == 0)
                                ecx_77 = eax_66
                            else
                                ecx_77 = ecx_75 << 0x10 | eax_66
                            
                            sub_449c10(eax_66, arg2, arg3, ecx_77, arg7)
                        
                        i_4 = sub_445ed0(&var_20)
                        ecx_74 = var_20:4.d
                        
                        if (ecx_74 == var_2c)
                            goto label_44a848
                    
                    goto label_44a2b4
    label_44a88c:
    sub_44e4d0(i_4, &data_5559b1, ecx_6, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_80_2, 
        var_7c_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
