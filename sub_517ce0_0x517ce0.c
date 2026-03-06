// 函数名称: sub_517ce0
// 虚拟地址: 0x517ce0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_517ce0(int32_t arg1, uint32_t* arg2, void* arg3, uint32_t* arg4, uint32_t* arg5)
{
    // 第一条实际指令: uint32_t* edi = arg2
    uint32_t* edi = arg2
    char* eax = *(arg3 + 0xa8)
    int32_t ecx = *(arg3 + 0xac)
    
    if (eax u< ecx)
        arg2.b = *eax
        eax = &eax[1]
        *(arg3 + 0xa8) = eax
    else if (*(arg3 + 0x20) == 0)
        arg2.b = 0
    else
        sub_50ebb0(arg3)
        char* eax_1 = *(arg3 + 0xa8)
        ecx = *(arg3 + 0xac)
        arg2.b = *eax_1
        eax = &eax_1[1]
        *(arg3 + 0xa8) = eax
    
    char var_5
    
    if (eax u< ecx)
        uint32_t edx
        edx.b = *eax
        eax = &eax[1]
        var_5 = edx.b
        *(arg3 + 0xa8) = eax
    else if (*(arg3 + 0x20) == 0)
        var_5 = 0
    else
        sub_50ebb0(arg3)
        char* eax_2 = *(arg3 + 0xa8)
        ecx = *(arg3 + 0xac)
        eax = &eax_2[1]
        var_5 = *eax_2
        *(arg3 + 0xa8) = eax
    
    if (eax u< ecx)
        ecx.b = *eax
        *(arg3 + 0xa8) = &eax[1]
    else if (*(arg3 + 0x20) == 0)
        ecx.b = 0
    else
        sub_50ebb0(arg3)
        char* eax_4 = *(arg3 + 0xa8)
        ecx.b = *eax_4
        *(arg3 + 0xa8) = &eax_4[1]
    
    uint32_t eax_6 = zx.d(ecx.b)
    uint32_t eax_7 = sub_50ed90(arg3)
    uint32_t i_14 = sub_50ed90(arg3)
    char* ecx_6 = *(arg3 + 0xa8)
    char edx_2
    
    if (ecx_6 u< *(arg3 + 0xac))
        edx_2 = *ecx_6
        *(arg3 + 0xa8) = &ecx_6[1]
    else if (*(arg3 + 0x20) == 0)
        edx_2 = 0
    else
        sub_50ebb0(arg3)
        char* eax_8 = *(arg3 + 0xa8)
        edx_2 = *eax_8
        *(arg3 + 0xa8) = &eax_8[1]
    
    uint32_t ebx = zx.d(edx_2)
    sub_50ed90(arg3)
    sub_50ed90(arg3)
    uint32_t eax_10 = sub_50ed90(arg3)
    uint32_t i_15 = sub_50ed90(arg3)
    int32_t ecx_13 = *(arg3 + 0xac)
    uint32_t i_7 = i_15
    char* eax_11 = *(arg3 + 0xa8)
    char edx_3
    
    if (eax_11 u< ecx_13)
        edx_3 = *eax_11
        eax_11 = &eax_11[1]
        *(arg3 + 0xa8) = eax_11
    else if (*(arg3 + 0x20) == 0)
        edx_3 = 0
    else
        sub_50ebb0(arg3)
        char* eax_12 = *(arg3 + 0xa8)
        ecx_13 = *(arg3 + 0xac)
        edx_3 = *eax_12
        eax_11 = &eax_12[1]
        *(arg3 + 0xa8) = eax_11
    
    uint32_t edx_4 = zx.d(edx_3)
    uint32_t var_44 = edx_4
    
    if (eax_11 u< ecx_13)
        ecx_13.b = *eax_11
        *(arg3 + 0xa8) = &eax_11[1]
    else if (*(arg3 + 0x20) == 0)
        ecx_13.b = 0
    else
        sub_50ebb0(arg3)
        char* eax_14 = *(arg3 + 0xa8)
        edx_4 = var_44
        ecx_13.b = *eax_14
        *(arg3 + 0xa8) = &eax_14[1]
    
    uint32_t ecx_17 = eax_6 - 8
    char* var_2c = nullptr
    
    if (eax_6 u< 8)
        ecx_17 = eax_6
    
    int32_t var_24 = 0
    int32_t var_38 = 0
    uint32_t var_40 = 0
    int32_t var_48 = 1
    
    if (var_5 == 0)
        uint32_t var_14_1
        int32_t var_c_1
        uint32_t ebx_1
        
        if (edx_4 - 8 u<= 0x18)
            switch (edx_4 + &jump_table_5183c4[3])
                case &lookup_table_5183d8
                label_517ef5:
                    ebx_1 = 1
                    var_c_1 = 0
                    var_14_1 = 1
                label_517f61:
                    uint32_t i_17 = i_7
                    *edi = eax_10
                    *arg4 = i_17
                    
                    if (arg5 != 0)
                        *arg5 = ebx_1
                    
                    if (eax_10 s>= 0 && i_17 s>= 0)
                        if (i_17 == 0)
                            goto label_517fa5
                        
                        int32_t ecx_18
                        ecx_18.b = eax_10 s<= divs.dp.d(0x7fffffff, i_17)
                        
                        if (ecx_18 != 0)
                            i_17 = i_7
                        label_517fa5:
                            uint32_t i_16 = i_17 * eax_10
                            
                            if (i_16 s>= 0)
                                uint32_t temp0_2 = divu.dp.d(0:0x7fffffff, ebx_1)
                                uint32_t i_18 = i_16
                                
                                if (i_18 s<= temp0_2)
                                    uint32_t edx_10
                                    
                                    if (i_17 == 0)
                                        edx_10 = eax_10
                                    label_517fe8:
                                        
                                        if (i_18 s>= 0 && i_18 s<= temp0_2)
                                            int32_t var_5c_1 = ebx_1 * i_17 * edx_10
                                            void* result = _malloc()
                                            
                                            if (result != 0)
                                                sub_50ec00(arg3, zx.d(arg2.b))
                                                uint32_t edx_12
                                                
                                                if (var_5 == 0)
                                                    edx_12 = eax_6
                                                    int32_t eax_36
                                                    uint32_t i_8
                                                    
                                                    if (edx_12 u< 8)
                                                        eax_36 = var_c_1
                                                        
                                                        if (eax_36 != 0)
                                                            goto label_518104
                                                        
                                                        if (i_7 s<= 0)
                                                            goto label_51835d
                                                        
                                                        uint32_t eax_37 = var_14_1
                                                        void* ebx_3 = eax_10 * eax_37
                                                        
                                                        if (1 - (zx.d(ecx_13.b) u>> 5 & 1) == 0)
                                                            void* result_3 = result
                                                            uint32_t i
                                                            
                                                            do
                                                                eax_37, i_8 = sub_50ec50(eax_37, 
                                                                    result_3, arg3, ebx_3)
                                                                result_3 += ebx_3
                                                                i = i_7
                                                                i_7 -= 1
                                                            while (i != 1)
                                                            ebx_1 = var_14_1
                                                        else
                                                            void* edi_6 =
                                                                (i_7 - 1) * eax_37 * eax_10 + result
                                                            uint32_t i_1
                                                            
                                                            do
                                                                eax_37, i_8 =
                                                                    sub_50ec50(eax_37, edi_6, arg3, ebx_3)
                                                                edi_6 -= ebx_3
                                                                i_1 = i_7
                                                                i_7 -= 1
                                                            while (i_1 != 1)
                                                            ebx_1 = var_14_1
                                                        
                                                        goto label_518350
                                                    
                                                label_518104:
                                                    i_8 = i_16
                                                    
                                                    if (i_8 s> 0)
                                                        void* result_1 = result
                                                        int32_t edi_10 = 0
                                                        void* result_4 = result_1
                                                        uint32_t i_13 = i_8
                                                        uint32_t i_2
                                                        
                                                        do
                                                            if (edx_12 u< 8)
                                                            label_5181bb:
                                                                
                                                                if (var_5 != 0)
                                                                    uint32_t eax_51
                                                                    
                                                                    if (var_44 != 8)
                                                                        eax_51 = sub_50ed90(arg3)
                                                                    else
                                                                        char* eax_49 = *(arg3 + 0xa8)
                                                                        
                                                                        if (eax_49 u< *(arg3 + 0xac))
                                                                            i_8.b = *eax_49
                                                                            *(arg3 + 0xa8) = &eax_49[1]
                                                                            eax_51 = zx.d(i_8.b)
                                                                        else if (*(arg3 + 0x20) == 0)
                                                                            eax_51 = 0
                                                                        else
                                                                            sub_50ebb0(arg3)
                                                                            char* eax_52 = *(arg3 + 0xa8)
                                                                            char ecx_28 = *eax_52
                                                                            *(arg3 + 0xa8) = &eax_52[1]
                                                                            eax_51 = zx.d(ecx_28)
                                                                    
                                                                    if (eax_51 s>= i_14)
                                                                        eax_51 = 0
                                                                    
                                                                    if (ebx_1 != 0)
                                                                        sub_51d5b0(&var_24, 
                                                                            eax_51 * ebx_1 + var_2c, ebx_1)
                                                                else if (var_c_1 == 0)
                                                                    int32_t edi_14 = 0
                                                                    
                                                                    if (ebx_1 != 0)
                                                                        do
                                                                            char* eax_56 = *(arg3 + 0xa8)
                                                                            
                                                                            if (eax_56 u< *(arg3 + 0xac))
                                                                                i_8.b = *eax_56
                                                                                *(arg3 + 0xa8) = &eax_56[1]
                                                                            else if (*(arg3 + 0x20) == 0)
                                                                                i_8.b = 0
                                                                            else
                                                                                sub_50ebb0(arg3)
                                                                                char* eax_58 = *(arg3 + 0xa8)
                                                                                i_8.b = *eax_58
                                                                                *(arg3 + 0xa8) = &eax_58[1]
                                                                            
                                                                            *(&var_24 + edi_14) = i_8.b
                                                                            edi_14 += 1
                                                                        while (edi_14 s< ebx_1)
                                                                else
                                                                    sub_517c60(arg3, &var_24)
                                                                
                                                                edi_10 = var_38
                                                                result_1 = result_4
                                                                var_48 = 0
                                                                i_8 = i_13
                                                            else
                                                                if (edi_10 == 0)
                                                                    char* eax_41 = *(arg3 + 0xa8)
                                                                    
                                                                    if (eax_41 u< *(arg3 + 0xac))
                                                                        i_8.b = *eax_41
                                                                        *(arg3 + 0xa8) = &eax_41[1]
                                                                    else if (*(arg3 + 0x20) == 0)
                                                                        i_8.b = 0
                                                                    else
                                                                        sub_50ebb0(arg3)
                                                                        char* eax_45 = *(arg3 + 0xa8)
                                                                        i_8.b = *eax_45
                                                                        *(arg3 + 0xa8) = &eax_45[1]
                                                                    
                                                                    uint32_t eax_47 = zx.d(i_8.b)
                                                                    var_38 = (eax_47 & 0x7f) + 1
                                                                    var_40 = eax_47 u>> 7
                                                                    goto label_5181bb
                                                                
                                                                if (var_40 == 0 || var_48 != 0)
                                                                    goto label_5181bb
                                                            
                                                            if (ebx_1 != 0)
                                                                sub_51d5b0(result_1, &var_24, ebx_1)
                                                                result_1 = result_4
                                                                i_8 = i_13
                                                            
                                                            edx_12 = eax_6
                                                            edi_10 -= 1
                                                            result_1 += ebx_1
                                                            var_38 = edi_10
                                                            i_2 = i_8
                                                            i_8 -= 1
                                                            result_4 = result_1
                                                            i_13 = i_8
                                                        while (i_2 != 1)
                                                    
                                                    if (1 - (zx.d(ecx_13.b) u>> 5 & 1) != 0)
                                                        i_8 = 0
                                                        uint32_t i_12 = 0
                                                        
                                                        if (i_7 s> 0)
                                                            void* eax_60 = nullptr
                                                            uint32_t edx_20 = 0
                                                            void* var_44_1 = nullptr
                                                            int32_t i_9 = ebx_1 * eax_10
                                                            int32_t i_11 = i_9
                                                            
                                                            do
                                                                int32_t i_3 = i_9
                                                                
                                                                if (i_3 s> 0)
                                                                    void* esi_2 = eax_60 + result
                                                                    void* edx_26 =
                                                                        (not.d(edx_20) + i_7) * ebx_1 * eax_10
                                                                        + eax_60 + result
                                                                    
                                                                    do
                                                                        eax_60.b = *edx_26
                                                                        esi_2 += 1
                                                                        void* ecx_32
                                                                        ecx_32.b = *(esi_2 - 1)
                                                                        edx_26 += 1
                                                                        *(esi_2 - 1) = eax_60.b
                                                                        i_3 -= 1
                                                                        *(edx_26 - 1) = ecx_32.b
                                                                    while (i_3 s> 0)
                                                                    
                                                                    eax_60 = var_44_1
                                                                    i_8 = i_12
                                                                    i_9 = i_11
                                                                
                                                                i_8 += 1
                                                                eax_60 += i_9
                                                                i_12 = i_8
                                                                var_44_1 = eax_60
                                                                edx_20 = i_8 * 2
                                                            while (edx_20 s< i_7)
                                                    
                                                    if (var_2c != 0)
                                                        _free(var_2c)
                                                    
                                                label_518350:
                                                    eax_36 = var_c_1
                                                label_51835d:
                                                    
                                                    if (ebx_1 u>= 3 && eax_36 == 0)
                                                        uint32_t i_10 = i_16
                                                        void* result_2 = result
                                                        
                                                        if (i_10 s> 0)
                                                            uint32_t i_4
                                                            
                                                            do
                                                                i_8.b = *result_2
                                                                eax_36.b = *(result_2 + 2)
                                                                *result_2 = eax_36.b
                                                                *(result_2 + 2) = i_8.b
                                                                result_2 += ebx_1
                                                                i_4 = i_10
                                                                i_10 -= 1
                                                            while (i_4 != 1)
                                                    
                                                    return result
                                                
                                                sub_50ec00(arg3, eax_7)
                                                
                                                if (i_14 s< 0)
                                                    _free(result)
                                                else
                                                    int32_t eax_38
                                                    eax_38.b = i_14 s<= temp0_2
                                                    
                                                    if (eax_38 == 0)
                                                        _free(result)
                                                    else
                                                        void* edi_8 = ebx_1 * i_14
                                                        void* var_5c_4 = edi_8
                                                        char* eax_39 = _malloc()
                                                        var_2c = eax_39
                                                        
                                                        if (eax_39 != 0)
                                                            if (var_c_1 == 0)
                                                                if (
                                                                        sub_50ec50(eax_39, eax_39, arg3, edi_8)
                                                                        == 0)
                                                                    _free(result)
                                                                    _free(var_2c)
                                                                    return 0
                                                            else
                                                                char* edi_9 = eax_39
                                                                
                                                                if (i_14 s> 0)
                                                                    uint32_t i_6 = i_14
                                                                    uint32_t i_5
                                                                    
                                                                    do
                                                                        sub_517c60(arg3, edi_9)
                                                                        edi_9 = &edi_9[ebx_1]
                                                                        i_5 = i_6
                                                                        i_6 -= 1
                                                                    while (i_5 != 1)
                                                            
                                                            edx_12 = eax_6
                                                            goto label_518104
                                                        
                                                        _free(result)
                                    else
                                        edx_10 = eax_10
                                        
                                        if (edx_10 s<= divs.dp.d(0x7fffffff, i_17))
                                            i_18 = i_16
                                            goto label_517fe8
                case &lookup_table_5183d8[7]
                label_517f06:
                    ebx_1 = 3
                    var_c_1 = 1
                    var_14_1 = 3
                    goto label_517f61
                case &lookup_table_5183d8[8]
                    if (ecx_17 != 3)
                        goto label_517f06
                    
                    ebx_1 = 2
                    var_c_1 = 0
                    var_14_1 = 2
                    goto label_517f61
                case &lookup_table_5183d8[0x10], &lookup_table_5183d8[0x18]
                    ebx = edx_4
                label_517f49:
                    ebx_1 = ebx u>> 3
                    var_14_1 = ebx_1
                    var_c_1 = 0
                    
                    if (ebx_1 != 0)
                        goto label_517f61
    else if (ebx - 8 u<= 0x18)
        switch (ebx + &jump_table_518398[2])
            case &lookup_table_5183a8
                goto label_517ef5
            case &lookup_table_5183a8[7], &lookup_table_5183a8[8]
                goto label_517f06
            case &lookup_table_5183a8[0x10], &lookup_table_5183a8[0x18]
                goto label_517f49
    
    return 0
}
