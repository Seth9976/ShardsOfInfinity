// 函数名称: ?convert_decimal_string_to_floating_type_common@__crt_strtox@@YA?AW4SLD_STATUS@@ABUfloating_point_string@1@ABVfloating_point_value@1@@Z
// 虚拟地址: 0x526463
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?convert_decimal_string_to_floating_type_common@__crt_strtox@@YA?AW4SLD_STATUS@@ABUfloating_point_string@1@ABVfloating_point_value@1@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = *arg1
    int32_t eax_2
    eax_2.b = arg2[1].b == 0
    int32_t edi
    int32_t var_b40 = edi
    
    if (ebx s< 0)
        ebx = nullptr
    
    void* eax_6 = arg1[1]
    void* ecx_1 = ebx
    
    if (ebx u>= eax_6)
        ecx_1 = eax_6
    
    void* ebx_1 = ebx - ecx_1
    void* edi_1 = &arg1[2]
    void* var_924 = edi_1
    void* ecx_3 = ecx_1 + 8 + arg1
    void* eax_8 = eax_6 + 8 + arg1
    uint32_t ebx_2 = 0
    int32_t esi = 0
    int32_t eax_9 = eax_8 - ecx_3
    uint32_t var_91c = 0
    int32_t ecx_4 = 0
    uint32_t var_1d8 = 0
    int32_t var_92c = 0
    int32_t var_b34
    char var_b30[0x1cc]
    int32_t var_914
    char var_574[0x1cc]
    int32_t var_1d4
    uint32_t ebx_7
    
    if (edi_1 == ecx_3)
        ebx_7 = 0
    else
        do
            if (ecx_4 == 9)
                if (ebx_2 != 0)
                    int32_t edi_2 = 0
                    int32_t ecx_5 = 0
                    
                    do
                        int32_t eax_11
                        int32_t edx_1
                        edx_1:eax_11 = mulu.dp.d((&var_1d4)[ecx_5], 0x3b9aca00)
                        (&var_1d4)[ecx_5] = eax_11 + edi_2
                        ecx_5 += 1
                        edi_2 = adc.d(edx_1, 0, eax_11 + edi_2 u< eax_11)
                    while (ecx_5 != ebx_2)
                    
                    esi = var_92c
                    
                    if (edi_2 == 0)
                        ebx_2 = var_1d8
                    else
                        uint32_t eax_13 = var_1d8
                        
                        if (eax_13 u>= 0x73)
                            int32_t var_918_1 = 0
                            var_1d8 = 0
                            _memcpy_s(&var_1d4, 0x1cc, &var_914, nullptr)
                            ebx_2 = var_1d8
                        else
                            (&var_1d4)[eax_13] = edi_2
                            ebx_2 = var_1d8 + 1
                            var_1d8 = ebx_2
                    
                    edi_1 = var_924
                
                if (esi != 0)
                    int32_t ecx_6 = 0
                    
                    if (ebx_2 != 0)
                        do
                            int32_t temp5_1 = (&var_1d4)[ecx_6]
                            (&var_1d4)[ecx_6] += esi
                            ebx_2 = var_1d8
                            esi = adc.d(0, 0, temp5_1 + esi u< temp5_1)
                            ecx_6 += 1
                        while (ecx_6 != ebx_2)
                    
                    if (esi != 0)
                        if (ebx_2 u>= 0x73)
                            int32_t var_918_2 = 0
                            var_1d8 = 0
                            _memcpy_s(&var_1d4, 0x1cc, &var_914, nullptr)
                            ebx_2 = var_1d8
                        else
                            (&var_1d4)[ebx_2] = esi
                            ebx_2 = var_1d8 + 1
                            var_1d8 = ebx_2
                
                esi = 0
                ecx_4 = 0
            
            esi = esi * 0xa + zx.d(*edi_1)
            ecx_4 += 1
            edi_1 += 1
            var_92c = esi
            var_924 = edi_1
        while (edi_1 != ecx_3)
        
        var_91c = ebx_2
        
        if (ecx_4 == 0)
            ebx_7 = var_91c
        else
            int32_t edx_3 = 0
            uint32_t eax_17 = divu.dp.d(edx_3:ecx_4, 0xa)
            uint32_t var_934_1 = eax_17
            uint32_t ecx_7 = modu.dp.d(edx_3:ecx_4, 0xa)
            
            if (eax_17 != 0)
                bool cond:4_1
                
                do
                    if (eax_17 u> 0x26)
                        eax_17 = 0x26
                    
                    uint32_t ecx_8 = zx.d(*((eax_17 << 2) + &data_54d8f6))
                    uint32_t esi_2 = zx.d(*((eax_17 << 2) + &data_54d8f7))
                    uint32_t eax_18 = esi_2 + ecx_8
                    _memset(&var_914, 0, ecx_8 << 2)
                    sub_51d5b0(&(&var_914)[ecx_8], 
                        (zx.d(*((eax_17 << 2) + &data_54d8f4)) << 2) + &data_54cff0, esi_2 << 2)
                    uint32_t eax_25
                    char (* var_b48_3)[0x1cc]
                    
                    if (eax_18 u<= 1)
                        int32_t edi_5 = var_914
                        uint32_t ecx_10
                        
                        if (edi_5 == 0)
                            int32_t var_b44_2 = 0
                            int32_t var_578_1 = 0
                            var_1d8 = 0
                            var_b48_3 = &var_574
                            int32_t var_b4c_2 = 0x1cc
                        label_526709:
                            _memcpy_s(&var_1d4, 0x1cc, var_b48_3, nullptr)
                        label_526711:
                            ecx_10 = var_1d8
                        label_526717:
                            eax_25.b = 1
                            var_91c = ecx_10
                            ebx_2 = var_91c
                        else if (edi_5 != 1 && ebx_2 != 0)
                            int32_t esi_3 = 0
                            int32_t ecx_11 = 0
                            
                            do
                                int32_t eax_27
                                int32_t edx_5
                                edx_5:eax_27 = mulu.dp.d(edi_5, (&var_1d4)[ecx_11])
                                (&var_1d4)[ecx_11] = eax_27 + esi_3
                                ecx_11 += 1
                                esi_3 = adc.d(edx_5, 0, eax_27 + esi_3 u< eax_27)
                            while (ecx_11 != ebx_2)
                            
                            if (esi_3 == 0)
                                goto label_526711
                            
                            eax_25 = var_1d8
                            
                            if (eax_25 u< 0x73)
                                (&var_1d4)[eax_25] = esi_3
                            label_526772:
                                ecx_10 = var_1d8 + 1
                                var_1d8 = ecx_10
                                goto label_526717
                            
                        label_52678b:
                            int32_t var_918_4 = 0
                            var_1d8 = 0
                            _memcpy_s(&var_1d4, 0x1cc, &var_914, nullptr)
                            eax_25.b = 0
                            var_91c = var_1d8
                            ebx_2 = var_91c
                        else
                            eax_25.b = 1
                            ebx_2 = var_91c
                    else if (ebx_2 u> 1)
                        bool c_5 = eax_18 u< ebx_2
                        int32_t* esi_5 = &var_914
                        
                        if (not(c_5))
                            esi_5 = &var_1d4
                        
                        int32_t* var_924_1 = esi_5
                        int32_t* edx_9 = &var_1d4
                        
                        if (c_5 == 0)
                            edx_9 = &var_914
                        
                        uint32_t var_91c_1
                        uint32_t edx_10
                        
                        if (c_5 == 0)
                            edx_10 = ebx_2
                            var_91c_1 = ebx_2
                        else
                            edx_10 = eax_18
                            var_91c_1 = edx_10
                        
                        if (c_5 == 0)
                            ebx_2 = eax_18
                        
                        uint32_t eax_31 = 0
                        int32_t i_15 = 0
                        uint32_t var_578_2 = 0
                        
                        if (edx_10 == 0)
                        label_5269b1:
                            var_1d8 = eax_31
                            _memcpy_s(&var_1d4, 0x1cc, &var_574, eax_31 << 2)
                            eax_25.b = 1
                        else
                            while (true)
                                if (esi_5[i_15] != 0)
                                    int32_t i_1 = 0
                                    int32_t ecx_14 = 0
                                    int32_t i_12 = 0
                                    int32_t i = i_15
                                    
                                    if (ebx_2 != 0)
                                        while (i != 0x73)
                                            if (i == eax_31)
                                                *(&var_574 + (i << 2)) = 0
                                                var_578_2 = i_15 + 1 + ecx_14
                                            
                                            int32_t eax_36
                                            int32_t edx_12
                                            edx_12:eax_36 = mulu.dp.d(edx_9[ecx_14], var_924_1[i_15])
                                            int32_t eax_37 = eax_36 + *(&var_574 + (i << 2))
                                            int32_t edx_13 = adc.d(edx_12, 0, 
                                                eax_36 + *(&var_574 + (i << 2)) u< eax_36)
                                            *(&var_574 + (i << 2)) = eax_37 + i_12
                                            eax_31 = var_578_2
                                            i_1 = adc.d(edx_13, 0, eax_37 + i_12 u< eax_37)
                                            ecx_14 += 1
                                            i_12 = i_1
                                            i += 1
                                            int32_t i_8 = i_1
                                            
                                            if (ecx_14 == ebx_2)
                                                break
                                        
                                        while (i_1 != 0)
                                            if (i == 0x73)
                                                goto label_526a65
                                            
                                            if (i == eax_31)
                                                *(&var_574 + (i << 2)) = 0
                                                var_578_2 = i + 1
                                            
                                            int32_t temp41_1 = *(&var_574 + (i << 2))
                                            *(&var_574 + (i << 2)) += i_1
                                            i += 1
                                            i_1 = adc.d(0, 0, temp41_1 + i_1 u< temp41_1)
                                            eax_31 = var_578_2
                                    
                                    if (i == 0x73)
                                    label_526a65:
                                        var_b34 = 0
                                        var_1d8 = 0
                                        _memcpy_s(&var_1d4, 0x1cc, &var_b30, nullptr)
                                        eax_25.b = 0
                                        break
                                    
                                    edx_10 = var_91c_1
                                    esi_5 = var_924_1
                                else if (i_15 == eax_31)
                                    *(&var_574 + (i_15 << 2)) = 0
                                    eax_31 = i_15 + 1
                                    var_578_2 = eax_31
                                
                                i_15 += 1
                                
                                if (i_15 == edx_10)
                                    goto label_5269b1
                        
                        ebx_2 = var_1d8
                        var_91c = ebx_2
                    else
                        int32_t ebx_5 = var_1d4
                        var_1d8 = eax_18
                        _memcpy_s(&var_1d4, 0x1cc, &var_914, eax_18 << 2)
                        
                        if (ebx_5 == 0)
                            int32_t var_b44_4 = 0
                            int32_t var_918_5 = 0
                            var_1d8 = 0
                            var_b48_3 = &var_914
                            int32_t var_b4c_3 = 0x1cc
                            goto label_526709
                        
                        uint32_t ecx_13 = var_1d8
                        eax_25 = 1
                        var_91c = ecx_13
                        
                        if (ebx_5 != 1 && ecx_13 != 0)
                            int32_t edi_6 = 0
                            int32_t esi_4 = 0
                            
                            do
                                int32_t eax_30
                                int32_t edx_7
                                edx_7:eax_30 = mulu.dp.d(ebx_5, (&var_1d4)[esi_4])
                                (&var_1d4)[esi_4] = eax_30 + edi_6
                                esi_4 += 1
                                edi_6 = adc.d(edx_7, 0, eax_30 + edi_6 u< eax_30)
                            while (esi_4 != ecx_13)
                            
                            if (edi_6 == 0)
                                goto label_526711
                            
                            eax_25 = var_1d8
                            
                            if (eax_25 u>= 0x73)
                                goto label_52678b
                            
                            (&var_1d4)[eax_25] = edi_6
                            goto label_526772
                        
                        ebx_2 = var_91c
                    
                    if (eax_25.b == 0)
                        goto label_526a19
                    
                    uint32_t temp17_1 = eax_17
                    eax_17 = var_934_1 - eax_17
                    cond:4_1 = var_934_1 != temp17_1
                    var_934_1 = eax_17
                while (cond:4_1)
            
            uint32_t ecx_17
            
            if (ecx_7 == 0)
                ecx_17 = var_91c
            else
                int32_t edi_7 = *((ecx_7 << 2) + &data_54d98c)
                
                if (edi_7 == 0)
                label_526a19:
                    var_b34 = 0
                    var_1d8 = 0
                    _memcpy_s(&var_1d4, 0x1cc, &var_b30, nullptr)
                    ecx_17 = var_1d8
                    var_91c = ecx_17
                else if (edi_7 == 1 || ebx_2 == 0)
                    ecx_17 = var_91c
                else
                    int32_t esi_6 = 0
                    int32_t ecx_15 = 0
                    
                    do
                        int32_t eax_44
                        int32_t edx_14
                        edx_14:eax_44 = mulu.dp.d(edi_7, (&var_1d4)[ecx_15])
                        (&var_1d4)[ecx_15] = eax_44 + esi_6
                        ecx_15 += 1
                        esi_6 = adc.d(edx_14, 0, eax_44 + esi_6 u< eax_44)
                    while (ecx_15 != ebx_2)
                    
                    if (esi_6 == 0)
                        ecx_17 = var_1d8
                        var_91c = ecx_17
                    else
                        uint32_t eax_46 = var_1d8
                        
                        if (eax_46 u>= 0x73)
                            goto label_526a19
                        
                        (&var_1d4)[eax_46] = esi_6
                        ecx_17 = var_1d8 + 1
                        var_91c = ecx_17
                        var_1d8 = ecx_17
            
            int32_t edx_16 = var_92c
            
            if (edx_16 == 0)
                ebx_7 = var_91c
            else
                int32_t esi_7 = 0
                
                if (ecx_17 != 0)
                    do
                        int32_t temp7_1 = (&var_1d4)[esi_7]
                        (&var_1d4)[esi_7] += edx_16
                        ecx_17 = var_1d8
                        edx_16 = adc.d(0, 0, temp7_1 + edx_16 u< temp7_1)
                        var_91c = ecx_17
                        esi_7 += 1
                    while (esi_7 != ecx_17)
                
                if (edx_16 == 0)
                    ebx_7 = var_91c
                else if (ecx_17 u>= 0x73)
                    var_b34 = 0
                    var_1d8 = 0
                    _memcpy_s(&var_1d4, 0x1cc, &var_b30, nullptr)
                    ebx_7 = var_1d8
                    var_91c = ebx_7
                else
                    (&var_1d4)[ecx_17] = edx_16
                    ebx_7 = var_1d8 + 1
                    var_91c = ebx_7
                    var_1d8 = ebx_7
    
    if (ebx_1 == 0)
        goto label_526f94
    
    int32_t edx_17 = 0
    uint32_t eax_49 = divu.dp.d(edx_17:ebx_1, 0xa)
    uint32_t var_924_2 = eax_49
    uint32_t ecx_18 = modu.dp.d(edx_17:ebx_1, 0xa)
    
    if (eax_49 != 0)
        bool cond:3_1
        
        do
            if (eax_49 u> 0x26)
                eax_49 = 0x26
            
            uint32_t ecx_19 = zx.d(*((eax_49 << 2) + &data_54d8f6))
            uint32_t esi_8 = zx.d(*((eax_49 << 2) + &data_54d8f7))
            uint32_t eax_50 = ecx_19 + esi_8
            _memset(&var_914, 0, ecx_19 << 2)
            sub_51d5b0(&(&var_914)[ecx_19], 
                (zx.d(*((eax_49 << 2) + &data_54d8f4)) << 2) + &data_54cff0, esi_8 << 2)
            uint32_t eax_57
            char* var_b48_10
            
            if (eax_50 u<= 1)
                int32_t edi_10 = var_914
                uint32_t ecx_21
                
                if (edi_10 == 0)
                    int32_t var_b44_7 = 0
                    var_b34 = 0
                    var_1d8 = 0
                    var_b48_10 = &var_b30
                    int32_t var_b4c_5 = 0x1cc
                label_526c4b:
                    _memcpy_s(&var_1d4, 0x1cc, var_b48_10, nullptr)
                label_526c53:
                    ecx_21 = var_1d8
                label_526c59:
                    eax_57.b = 1
                    var_91c = ecx_21
                    ebx_7 = var_91c
                else if (edi_10 != 1 && ebx_7 != 0)
                    int32_t esi_9 = 0
                    int32_t ecx_22 = 0
                    
                    do
                        int32_t eax_59
                        int32_t edx_19
                        edx_19:eax_59 = mulu.dp.d(edi_10, (&var_1d4)[ecx_22])
                        (&var_1d4)[ecx_22] = eax_59 + esi_9
                        ecx_22 += 1
                        esi_9 = adc.d(edx_19, 0, eax_59 + esi_9 u< eax_59)
                    while (ecx_22 != ebx_7)
                    
                    if (esi_9 == 0)
                        goto label_526c53
                    
                    eax_57 = var_1d8
                    
                    if (eax_57 u< 0x73)
                        (&var_1d4)[eax_57] = esi_9
                    label_526cb4:
                        ecx_21 = var_1d8 + 1
                        var_1d8 = ecx_21
                        goto label_526c59
                    
                label_526ccd:
                    var_b34 = 0
                    var_1d8 = 0
                    _memcpy_s(&var_1d4, 0x1cc, &var_b30, nullptr)
                    eax_57.b = 0
                    var_91c = var_1d8
                    ebx_7 = var_91c
                else
                    eax_57.b = 1
                    ebx_7 = var_91c
            else if (ebx_7 u> 1)
                bool c_13 = eax_50 u< ebx_7
                int32_t* edi_12 = &var_914
                
                if (not(c_13))
                    edi_12 = &var_1d4
                
                int32_t* var_92c_1 = edi_12
                int32_t* edx_23 = &var_1d4
                
                if (c_13 == 0)
                    edx_23 = &var_914
                
                uint32_t var_928_1
                uint32_t edx_24
                
                if (c_13 == 0)
                    edx_24 = ebx_7
                    var_928_1 = ebx_7
                else
                    edx_24 = eax_50
                    var_928_1 = edx_24
                
                if (c_13 == 0)
                    ebx_7 = eax_50
                
                uint32_t eax_63 = 0
                int32_t i_13 = 0
                uint32_t var_578_3 = 0
                
                if (edx_24 == 0)
                label_526ef0:
                    var_1d8 = eax_63
                    _memcpy_s(&var_1d4, 0x1cc, &var_574, eax_63 << 2)
                    eax_57.b = 1
                else
                    while (true)
                        if (edi_12[i_13] != 0)
                            int32_t edx_25 = 0
                            int32_t i_3 = 0
                            int32_t var_940_2 = 0
                            int32_t i_2 = i_13
                            
                            if (ebx_7 != 0)
                                while (i_2 != 0x73)
                                    if (i_2 == eax_63)
                                        *(&var_574 + (i_2 << 2)) = 0
                                        var_578_3 = i_13 + 1 + edx_25
                                    
                                    int32_t eax_68
                                    int32_t edx_27
                                    edx_27:eax_68 = mulu.dp.d(edx_23[edx_25], var_92c_1[i_13])
                                    int32_t eax_69 = eax_68 + i_3
                                    int32_t temp27_1 = *(&var_574 + (i_2 << 2))
                                    *(&var_574 + (i_2 << 2)) += eax_69
                                    eax_63 = var_578_3
                                    i_3 = adc.d(adc.d(edx_27, 0, eax_68 + i_3 u< eax_68), 0, 
                                        temp27_1 + eax_69 u< temp27_1)
                                    edx_25 = var_940_2 + 1
                                    int32_t i_9 = i_3
                                    i_2 += 1
                                    var_940_2 = edx_25
                                    
                                    if (edx_25 == ebx_7)
                                        break
                                
                                while (i_3 != 0)
                                    if (i_2 == 0x73)
                                        goto label_526fa4
                                    
                                    if (i_2 == eax_63)
                                        *(&var_574 + (i_2 << 2)) = 0
                                        var_578_3 = i_2 + 1
                                    
                                    int32_t temp40_1 = *(&var_574 + (i_2 << 2))
                                    *(&var_574 + (i_2 << 2)) += i_3
                                    eax_63 = var_578_3
                                    i_3 = adc.d(0, 0, temp40_1 + i_3 u< temp40_1)
                                    i_2 += 1
                            
                            if (i_2 == 0x73)
                            label_526fa4:
                                var_b34 = 0
                                var_1d8 = 0
                                _memcpy_s(&var_1d4, 0x1cc, &var_b30, nullptr)
                                eax_57.b = 0
                                break
                            
                            edx_24 = var_928_1
                            edi_12 = var_92c_1
                        else if (i_13 == eax_63)
                            *(&var_574 + (i_13 << 2)) = 0
                            eax_63 = i_13 + 1
                            var_578_3 = eax_63
                        
                        i_13 += 1
                        
                        if (i_13 == edx_24)
                            goto label_526ef0
                
                ebx_7 = var_1d8
                var_91c = ebx_7
            else
                int32_t ebx_8 = var_1d4
                var_1d8 = eax_50
                _memcpy_s(&var_1d4, 0x1cc, &var_914, eax_50 << 2)
                
                if (ebx_8 == 0)
                    int32_t var_b44_9 = 0
                    var_b34 = 0
                    var_1d8 = 0
                    var_b48_10 = &var_b30
                    int32_t var_b4c_6 = 0x1cc
                    goto label_526c4b
                
                uint32_t ecx_24 = var_1d8
                eax_57 = 1
                var_91c = ecx_24
                
                if (ebx_8 != 1 && ecx_24 != 0)
                    int32_t edi_11 = 0
                    int32_t esi_10 = 0
                    
                    do
                        int32_t eax_62
                        int32_t edx_21
                        edx_21:eax_62 = mulu.dp.d(ebx_8, (&var_1d4)[esi_10])
                        (&var_1d4)[esi_10] = eax_62 + edi_11
                        esi_10 += 1
                        edi_11 = adc.d(edx_21, 0, eax_62 + edi_11 u< eax_62)
                    while (esi_10 != ecx_24)
                    
                    if (edi_11 == 0)
                        goto label_526c53
                    
                    eax_57 = var_1d8
                    
                    if (eax_57 u>= 0x73)
                        goto label_526ccd
                    
                    (&var_1d4)[eax_57] = edi_11
                    goto label_526cb4
                
                ebx_7 = var_91c
            
            if (eax_57.b == 0)
                int32_t var_b34_1 = 0
                var_1d8 = 0
                int32_t var_b44_11 = 0
                goto label_52705b
            
            uint32_t temp12_1 = eax_49
            eax_49 = var_924_2 - eax_49
            cond:3_1 = var_924_2 != temp12_1
            var_924_2 = eax_49
        while (cond:3_1)
    
    if (ecx_18 == 0)
        goto label_526f94
    
    int32_t edi_14 = *((ecx_18 << 2) + &data_54d98c)
    int32_t result
    
    if (edi_14 != 0)
        if (edi_14 == 1)
            goto label_526f94
        
        if (ebx_7 == 0)
            goto label_526f9a
        
        int32_t esi_11 = 0
        int32_t ecx_25 = 0
        
        do
            int32_t eax_75
            int32_t edx_30
            edx_30:eax_75 = mulu.dp.d(edi_14, (&var_1d4)[ecx_25])
            (&var_1d4)[ecx_25] = eax_75 + esi_11
            ecx_25 += 1
            esi_11 = adc.d(edx_30, 0, eax_75 + esi_11 u< eax_75)
        while (ecx_25 != ebx_7)
        
        if (esi_11 == 0)
            goto label_526f86
        
        uint32_t eax_77 = var_1d8
        
        if (eax_77 u< 0x73)
            (&var_1d4)[eax_77] = esi_11
            ebx_7 = var_1d8 + 1
            var_1d8 = ebx_7
            goto label_526f8c
        
        int32_t var_b34_2 = 0
        var_1d8 = 0
        int32_t var_b44_12 = 0
    label_52705b:
        _memcpy_s(&var_1d4, 0x1cc, &var_b30, nullptr)
        __crt_strtox::assemble_floating_point_infinity(arg1[0xc2].b, arg2)
        result = 3
    else
        var_b34 = 0
        var_1d8 = 0
        _memcpy_s(&var_1d4, 0x1cc, &var_b30, nullptr)
    label_526f86:
        ebx_7 = var_1d8
    label_526f8c:
        var_91c = ebx_7
    label_526f94:
        int32_t ecx_29
        
        if (ebx_7 != 0)
            int32_t var_950_1 = 0
            int32_t eflags_1
            int32_t eax_81
            eax_81, eflags_1 = _bit_scan_reverse((&var_1d8)[ebx_7])
            ecx_29 = (ebx_7 - 1) << 5
        else
        label_526f9a:
            ecx_29 = 0
        
        int32_t eax_83
        
        if (ecx_29 u< ((eax_2 - 1) & 0x1d) + 0x19)
            eax_83 = eax_9
        
        if (ecx_29 u>= ((eax_2 - 1) & 0x1d) + 0x19 || eax_83 == 0)
            void* eax_209
            eax_209.b = eax_8 != ecx_3
            result = __crt_strtox::assemble_floating_point_value_from_big_integer(&var_1d8, ecx_29, 
                arg1[0xc2].b, eax_209.b, arg2)
        else
            uint32_t ebx_10 = 0
            void* esi_12 = nullptr
            uint32_t var_3a8 = 0
            int32_t ecx_30 = 0
            void* var_928_2 = nullptr
            void* edi_15 = ecx_3
            void* var_924_3 = ecx_3
            uint32_t var_3a4[0x1c][0x4]
            
            if (ecx_3 != eax_8)
                do
                    if (ecx_30 == 9)
                        if (ebx_10 != 0)
                            int32_t edi_16 = 0
                            int32_t ecx_31 = 0
                            
                            do
                                int32_t eax_85
                                int32_t edx_33
                                edx_33:eax_85 = mulu.dp.d(var_3a4[0][ecx_31], 0x3b9aca00)
                                var_3a4[0][ecx_31] = eax_85 + edi_16
                                ecx_31 += 1
                                edi_16 = adc.d(edx_33, 0, eax_85 + edi_16 u< eax_85)
                            while (ecx_31 != ebx_10)
                            
                            esi_12 = var_928_2
                            
                            if (edi_16 == 0)
                                ebx_10 = var_3a8
                            else
                                uint32_t eax_87 = var_3a8
                                
                                if (eax_87 u>= 0x73)
                                    var_b34 = 0
                                    var_3a8 = 0
                                    _memcpy_s(&var_3a4, 0x1cc, &var_b30, nullptr)
                                    ebx_10 = var_3a8
                                else
                                    var_3a4[0][eax_87] = edi_16
                                    ebx_10 = var_3a8 + 1
                                    var_3a8 = ebx_10
                            
                            edi_15 = var_924_3
                        
                        if (esi_12 != 0)
                            int32_t ecx_32 = 0
                            
                            if (ebx_10 != 0)
                                do
                                    int32_t temp15_1 = var_3a4[0][ecx_32]
                                    var_3a4[0][ecx_32] += esi_12
                                    ebx_10 = var_3a8
                                    esi_12 = adc.d(0, 0, temp15_1 + esi_12 u< temp15_1)
                                    ecx_32 += 1
                                while (ecx_32 != ebx_10)
                            
                            if (esi_12 != 0)
                                if (ebx_10 u>= 0x73)
                                    var_b34 = 0
                                    var_3a8 = 0
                                    _memcpy_s(&var_3a4, 0x1cc, &var_b30, nullptr)
                                    ebx_10 = var_3a8
                                else
                                    var_3a4[0][ebx_10] = esi_12
                                    ebx_10 = var_3a8 + 1
                                    var_3a8 = ebx_10
                        
                        esi_12 = nullptr
                        ecx_30 = 0
                    
                    esi_12 = esi_12 * 0xa + zx.d(*edi_15)
                    ecx_30 += 1
                    edi_15 += 1
                    var_928_2 = esi_12
                    var_924_3 = edi_15
                while (edi_15 != eax_8)
                
                if (ecx_30 != 0)
                    int32_t edx_35 = 0
                    uint32_t eax_91 = divu.dp.d(edx_35:ecx_30, 0xa)
                    uint32_t var_938_3 = eax_91
                    uint32_t ecx_33 = modu.dp.d(edx_35:ecx_30, 0xa)
                    
                    if (eax_91 != 0)
                        bool cond:10_1
                        
                        do
                            if (eax_91 u> 0x26)
                                eax_91 = 0x26
                            
                            uint32_t ecx_34 = zx.d(*((eax_91 << 2) + &data_54d8f6))
                            uint32_t esi_14 = zx.d(*((eax_91 << 2) + &data_54d8f7))
                            uint32_t eax_92 = ecx_34 + esi_14
                            _memset(&var_914, 0, ecx_34 << 2)
                            sub_51d5b0(&(&var_914)[ecx_34], 
                                (zx.d(*((eax_91 << 2) + &data_54d8f4)) << 2) + &data_54cff0, 
                                esi_14 << 2)
                            uint32_t eax_99
                            char (* var_b48_22)[0x1cc]
                            void* var_b44_16
                            char (* eax_100)[0x1cc]
                            int32_t esi_15
                            
                            if (eax_92 u<= 1)
                                int32_t edi_19 = var_914
                                
                                if (edi_19 == 0)
                                    var_b34 = 0
                                    var_3a8 = 0
                                    var_b44_16 = nullptr
                                    eax_100 = &var_b30
                                label_52755c:
                                    var_b48_22 = eax_100
                                    int32_t var_b4c_9 = 0x1cc
                                    goto label_527569
                                
                                if (edi_19 != 1 && ebx_10 != 0)
                                    esi_15 = 0
                                    int32_t ecx_36 = 0
                                    
                                    do
                                        int32_t eax_102
                                        int32_t edx_37
                                        edx_37:eax_102 = mulu.dp.d(edi_19, var_3a4[0][ecx_36])
                                        var_3a4[0][ecx_36] = eax_102 + esi_15
                                        ecx_36 += 1
                                        esi_15 = adc.d(edx_37, 0, eax_102 + esi_15 u< eax_102)
                                    while (ecx_36 != ebx_10)
                                    
                                label_527314:
                                    
                                    if (esi_15 == 0)
                                        ebx_10 = var_3a8
                                        eax_99.b = 1
                                    else
                                        eax_99 = var_3a8
                                        
                                        if (eax_99 u>= 0x73)
                                            var_b34 = 0
                                            var_3a8 = 0
                                            _memcpy_s(&var_3a4, 0x1cc, &var_b30, nullptr)
                                            eax_99.b = 0
                                            ebx_10 = var_3a8
                                        else
                                            var_3a4[0][eax_99] = esi_15
                                            ebx_10 = var_3a8 + 1
                                            var_3a8 = ebx_10
                                            eax_99.b = 1
                                else
                                    eax_99.b = 1
                            else if (ebx_10 u> 1)
                                bool c_22 = eax_92 u< ebx_10
                                int32_t* edi_21 = &var_914
                                
                                if (not(c_22))
                                    edi_21 = &var_3a4
                                
                                int32_t* var_92c_2 = edi_21
                                uint32_t (* edx_41)[0x1c][0x4] = &var_3a4
                                
                                if (c_22 == 0)
                                    edx_41 = &var_914
                                
                                uint32_t var_93c_1
                                uint32_t edx_42
                                
                                if (c_22 == 0)
                                    edx_42 = ebx_10
                                    var_93c_1 = ebx_10
                                else
                                    edx_42 = eax_92
                                    var_93c_1 = edx_42
                                
                                if (c_22 == 0)
                                    ebx_10 = eax_92
                                
                                uint32_t eax_106 = 0
                                int32_t i_14 = 0
                                uint32_t var_578_4 = 0
                                
                                if (edx_42 == 0)
                                label_52754c:
                                    var_3a8 = eax_106
                                    var_b44_16 = eax_106 << 2
                                    eax_100 = &var_574
                                    goto label_52755c
                                
                                while (true)
                                    if (edi_21[i_14] != 0)
                                        int32_t edx_43 = 0
                                        int32_t i_5 = 0
                                        int32_t var_924_4 = 0
                                        int32_t i_4 = i_14
                                        
                                        if (ebx_10 != 0)
                                            while (i_4 != 0x73)
                                                if (i_4 == eax_106)
                                                    *(&var_574 + (i_4 << 2)) = 0
                                                    var_578_4 = i_14 + 1 + edx_43
                                                
                                                int32_t eax_111
                                                int32_t edx_45
                                                edx_45:eax_111 =
                                                    mulu.dp.d((*edx_41)[0][edx_43], var_92c_2[i_14])
                                                int32_t eax_112 = eax_111 + i_5
                                                int32_t temp46_1 = *(&var_574 + (i_4 << 2))
                                                *(&var_574 + (i_4 << 2)) += eax_112
                                                eax_106 = var_578_4
                                                i_5 = adc.d(adc.d(edx_45, 0, eax_111 + i_5 u< eax_111), 
                                                    0, temp46_1 + eax_112 u< temp46_1)
                                                edx_43 = var_924_4 + 1
                                                int32_t i_10 = i_5
                                                i_4 += 1
                                                var_924_4 = edx_43
                                                
                                                if (edx_43 == ebx_10)
                                                    break
                                            
                                            while (i_5 != 0)
                                                if (i_4 == 0x73)
                                                    goto label_527613
                                                
                                                if (i_4 == eax_106)
                                                    *(&var_574 + (i_4 << 2)) = 0
                                                    var_578_4 = i_4 + 1
                                                
                                                int32_t temp48_1 = *(&var_574 + (i_4 << 2))
                                                *(&var_574 + (i_4 << 2)) += i_5
                                                eax_106 = var_578_4
                                                i_5 = adc.d(0, 0, temp48_1 + i_5 u< temp48_1)
                                                i_4 += 1
                                        
                                        if (i_4 == 0x73)
                                        label_527613:
                                            var_b34 = 0
                                            var_3a8 = 0
                                            _memcpy_s(&var_3a4, 0x1cc, &var_b30, nullptr)
                                            eax_99.b = 0
                                            break
                                        
                                        edx_42 = var_93c_1
                                        edi_21 = var_92c_2
                                    else if (i_14 == eax_106)
                                        *(&var_574 + (i_14 << 2)) = 0
                                        eax_106 = i_14 + 1
                                        var_578_4 = eax_106
                                    
                                    i_14 += 1
                                    
                                    if (i_14 == edx_42)
                                        goto label_52754c
                                
                                ebx_10 = var_3a8
                            else
                                uint32_t edi_20 = var_3a4[0][0]
                                var_3a8 = eax_92
                                _memcpy_s(&var_3a4, 0x1cc, &var_914, eax_92 << 2)
                                
                                if (edi_20 != 0)
                                    ebx_10 = var_3a8
                                    eax_99 = 1
                                    
                                    if (edi_20 != 1 && ebx_10 != 0)
                                        esi_15 = 0
                                        int32_t ecx_37 = 0
                                        
                                        do
                                            int32_t eax_105
                                            int32_t edx_39
                                            edx_39:eax_105 = mulu.dp.d(edi_20, var_3a4[0][ecx_37])
                                            var_3a4[0][ecx_37] = eax_105 + esi_15
                                            ecx_37 += 1
                                            esi_15 = adc.d(edx_39, 0, eax_105 + esi_15 u< eax_105)
                                        while (ecx_37 != ebx_10)
                                        
                                        goto label_527314
                                else
                                    var_b44_16 = nullptr
                                    var_b34 = 0
                                    var_3a8 = 0
                                    var_b48_22 = &var_b30
                                    int32_t var_b4c_8 = 0x1cc
                                label_527569:
                                    _memcpy_s(&var_3a4, 0x1cc, var_b48_22, var_b44_16)
                                    eax_99.b = 1
                                    ebx_10 = var_3a8
                            
                            if (eax_99.b == 0)
                                var_b34 = 0
                                var_3a8 = 0
                                int32_t var_b44_18 = 0
                                goto label_527675
                            
                            uint32_t temp32_1 = eax_91
                            eax_91 = var_938_3 - eax_91
                            cond:10_1 = var_938_3 != temp32_1
                            var_938_3 = eax_91
                        while (cond:10_1)
                    
                    if (ecx_33 != 0)
                        int32_t edi_23 = *((ecx_33 << 2) + &data_54d98c)
                        
                        if (edi_23 == 0)
                        label_527655:
                            int32_t var_b44_19 = 0
                            var_3a8 = 0
                            var_b34 = 0
                        label_527675:
                            _memcpy_s(&var_3a4, 0x1cc, &var_b30, nullptr)
                            ebx_10 = var_3a8
                        else if (edi_23 != 1 && ebx_10 != 0)
                            int32_t esi_16 = 0
                            int32_t ecx_38 = 0
                            
                            do
                                int32_t eax_118
                                int32_t edx_48
                                edx_48:eax_118 = mulu.dp.d(edi_23, var_3a4[0][ecx_38])
                                var_3a4[0][ecx_38] = eax_118 + esi_16
                                ecx_38 += 1
                                esi_16 = adc.d(edx_48, 0, eax_118 + esi_16 u< eax_118)
                            while (ecx_38 != ebx_10)
                            
                            if (esi_16 == 0)
                                ebx_10 = var_3a8
                            else
                                uint32_t eax_120 = var_3a8
                                
                                if (eax_120 u>= 0x73)
                                    goto label_527655
                                
                                var_3a4[0][eax_120] = esi_16
                                ebx_10 = var_3a8 + 1
                                var_3a8 = ebx_10
                    
                    void* ecx_39 = var_928_2
                    
                    if (ecx_39 != 0)
                        int32_t edx_50 = 0
                        
                        if (ebx_10 != 0)
                            do
                                int32_t temp22_1 = var_3a4[0][edx_50]
                                var_3a4[0][edx_50] += ecx_39
                                ebx_10 = var_3a8
                                ecx_39 = adc.d(0, 0, temp22_1 + ecx_39 u< temp22_1)
                                edx_50 += 1
                            while (edx_50 != ebx_10)
                        
                        if (ecx_39 != 0)
                            if (ebx_10 u>= 0x73)
                                var_b34 = 0
                                var_3a8 = 0
                                _memcpy_s(&var_3a4, 0x1cc, &var_b30, nullptr)
                                ebx_10 = var_3a8
                            else
                                var_3a4[0][ebx_10] = ecx_39
                                ebx_10 = var_3a8 + 1
                                var_3a8 = ebx_10
                
                eax_83 = eax_9
            
            if (*arg1 s< 0)
                eax_83 -= *arg1
            
            int32_t edx_51 = 0
            int32_t var_740_1 = 0
            uint32_t eax_122 = divu.dp.d(edx_51:eax_83, 0xa)
            uint32_t edx_52 = modu.dp.d(edx_51:eax_83, 0xa)
            uint32_t ecx_41 = 1
            int32_t var_744 = 1
            uint32_t var_920_1 = 1
            uint32_t var_748 = 1
            uint32_t var_930_4 = eax_122
            
            if (eax_122 != 0)
                while (true)
                    uint32_t var_92c_3
                    uint32_t ebx_16
                    
                    if (eax_122 u<= 0x26)
                        ebx_16 = eax_122
                        var_92c_3 = eax_122
                    else
                        ebx_16 = 0x26
                        var_92c_3 = 0x26
                    
                    uint32_t ecx_42 = zx.d(*((ebx_16 << 2) + &data_54d8f6))
                    uint32_t esi_17 = zx.d(*((ebx_16 << 2) + &data_54d8f7))
                    uint32_t eax_123 = ecx_42 + esi_17
                    _memset(&var_914, 0, ecx_42 << 2)
                    sub_51d5b0(&(&var_914)[ecx_42], 
                        (zx.d(*((ebx_16 << 2) + &data_54d8f4)) << 2) + &data_54cff0, esi_17 << 2)
                    uint32_t eax_129
                    char (* var_b48_26)[0x1cc]
                    uint32_t ecx_43
                    int32_t edi_26
                    
                    if (eax_123 u> 1)
                        uint32_t ecx_46 = var_920_1
                        
                        if (ecx_46 u> 1)
                            bool c_30 = eax_123 u< ecx_46
                            void* esi_20 = &var_914
                            
                            if (not(c_30))
                                esi_20 = &var_744
                            
                            var_928_2 = esi_20
                            int32_t* ebx_19 = &var_744
                            
                            if (c_30 == 0)
                                ebx_19 = &var_914
                            
                            uint32_t var_934_4
                            uint32_t ebx_20
                            
                            if (c_30 == 0)
                                ebx_20 = ecx_46
                                var_934_4 = ecx_46
                            else
                                ebx_20 = eax_123
                                var_934_4 = ebx_20
                            
                            if (c_30 == 0)
                                ecx_46 = eax_123
                            
                            uint32_t eax_135 = 0
                            int32_t i_16 = 0
                            uint32_t var_578_5 = 0
                            
                            if (ebx_20 == 0)
                            label_527a89:
                                var_748 = eax_135
                                _memcpy_s(&var_744, 0x1cc, &var_574, eax_135 << 2)
                                eax_129.b = 1
                            else
                                while (true)
                                    if (*(esi_20 + (i_16 << 2)) != 0)
                                        int32_t edx_58 = 0
                                        int32_t i_7 = 0
                                        int32_t var_93c_2 = 0
                                        int32_t i_6 = i_16
                                        
                                        if (ecx_46 != 0)
                                            while (i_6 != 0x73)
                                                if (i_6 == eax_135)
                                                    *(&var_574 + (i_6 << 2)) = 0
                                                    var_578_5 = i_16 + 1 + edx_58
                                                
                                                int32_t eax_140
                                                int32_t edx_60
                                                edx_60:eax_140 = mulu.dp.d(ebx_19[edx_58], 
                                                    *(var_928_2 + (i_16 << 2)))
                                                int32_t eax_141 = eax_140 + i_7
                                                int32_t temp43_1 = *(&var_574 + (i_6 << 2))
                                                *(&var_574 + (i_6 << 2)) += eax_141
                                                eax_135 = var_578_5
                                                i_7 = adc.d(adc.d(edx_60, 0, eax_140 + i_7 u< eax_140), 
                                                    0, temp43_1 + eax_141 u< temp43_1)
                                                edx_58 = var_93c_2 + 1
                                                int32_t i_11 = i_7
                                                i_6 += 1
                                                var_93c_2 = edx_58
                                                
                                                if (edx_58 == ecx_46)
                                                    break
                                            
                                            while (i_7 != 0)
                                                if (i_6 == 0x73)
                                                    goto label_527b44
                                                
                                                if (i_6 == eax_135)
                                                    *(&var_574 + (i_6 << 2)) = 0
                                                    var_578_5 = i_6 + 1
                                                
                                                int32_t temp47_1 = *(&var_574 + (i_6 << 2))
                                                *(&var_574 + (i_6 << 2)) += i_7
                                                eax_135 = var_578_5
                                                i_7 = adc.d(0, 0, temp47_1 + i_7 u< temp47_1)
                                                i_6 += 1
                                        
                                        if (i_6 == 0x73)
                                        label_527b44:
                                            var_b34 = 0
                                            var_748 = 0
                                            _memcpy_s(&var_744, 0x1cc, &var_b30, nullptr)
                                            eax_129.b = 0
                                            break
                                        
                                        ebx_20 = var_934_4
                                        esi_20 = var_928_2
                                    else if (i_16 == eax_135)
                                        *(&var_574 + (i_16 << 2)) = 0
                                        eax_135 = i_16 + 1
                                        var_578_5 = eax_135
                                    
                                    i_16 += 1
                                    
                                    if (i_16 == ebx_20)
                                        goto label_527a89
                            
                            ecx_41 = var_748
                            var_920_1 = ecx_41
                        else
                            int32_t ebx_18 = var_744
                            var_748 = eax_123
                            _memcpy_s(&var_744, 0x1cc, &var_914, eax_123 << 2)
                            
                            if (ebx_18 == 0)
                                int32_t var_b44_23 = 0
                                var_b34 = 0
                                var_748 = 0
                                var_b48_26 = &var_b30
                                int32_t var_b4c_12 = 0x1cc
                                goto label_5277ee
                            
                            uint32_t ecx_47 = var_748
                            eax_129 = 1
                            var_920_1 = ecx_47
                            
                            if (ebx_18 == 1 || ecx_47 == 0)
                                ecx_41 = var_920_1
                            else
                                edi_26 = 0
                                int32_t esi_19 = 0
                                
                                do
                                    int32_t eax_134
                                    int32_t edx_56
                                    edx_56:eax_134 = mulu.dp.d(ebx_18, (&var_744)[esi_19])
                                    (&var_744)[esi_19] = eax_134 + edi_26
                                    esi_19 += 1
                                    edi_26 = adc.d(edx_56, 0, eax_134 + edi_26 u< eax_134)
                                while (esi_19 != ecx_47)
                                
                            label_5278f3:
                                
                                if (edi_26 == 0)
                                    goto label_5277f6
                                
                                eax_129 = var_748
                                
                                if (eax_129 u< 0x73)
                                    (&var_744)[eax_129] = edi_26
                                    ecx_43 = var_748 + 1
                                    var_748 = ecx_43
                                    goto label_5277fc
                                
                                var_b34 = 0
                                var_748 = 0
                                _memcpy_s(&var_744, 0x1cc, &var_b30, nullptr)
                                eax_129.b = 0
                                var_920_1 = var_748
                                ecx_41 = var_920_1
                    else
                        int32_t ebx_17 = var_914
                        
                        if (ebx_17 != 0)
                            if (ebx_17 != 1 && var_920_1 != 0)
                                edi_26 = 0
                                int32_t esi_18 = 0
                                
                                do
                                    int32_t eax_131
                                    int32_t edx_54
                                    edx_54:eax_131 = mulu.dp.d(ebx_17, (&var_744)[esi_18])
                                    (&var_744)[esi_18] = eax_131 + edi_26
                                    esi_18 += 1
                                    edi_26 = adc.d(edx_54, 0, eax_131 + edi_26 u< eax_131)
                                while (esi_18 != var_920_1)
                                
                                goto label_5278f3
                            
                            eax_129.b = 1
                            ecx_41 = var_920_1
                        else
                            int32_t var_b44_21 = 0
                            var_b34 = 0
                            var_748 = 0
                            var_b48_26 = &var_b30
                            int32_t var_b4c_11 = 0x1cc
                        label_5277ee:
                            _memcpy_s(&var_744, 0x1cc, var_b48_26, nullptr)
                        label_5277f6:
                            ecx_43 = var_748
                        label_5277fc:
                            eax_129.b = 1
                            var_920_1 = ecx_43
                            ecx_41 = var_920_1
                    
                    if (eax_129.b == 0)
                        int32_t var_b34_4 = 0
                        var_748 = 0
                        int32_t var_b44_26 = 0
                        goto label_527c0e
                    
                    eax_122 = var_930_4 - var_92c_3
                    bool cond:8_1 = var_930_4 != var_92c_3
                    var_930_4 = eax_122
                    
                    if (not(cond:8_1))
                        ebx_10 = var_3a8
                        break
            
            uint32_t ecx_49
            
            if (edx_52 == 0)
            label_527c38:
                ecx_49 = var_920_1
            label_527c40:
                int32_t esi_22
                
                if (ebx_10 != 0)
                    int32_t var_950_2 = 0
                    int32_t eflags_2
                    int32_t eax_153
                    eax_153, eflags_2 = _bit_scan_reverse((&var_3a8)[ebx_10])
                    esi_22 = (ebx_10 - 1) << 5
                else
                    esi_22 = 0
                
                int32_t edx_65
                
                if (ecx_49 != 0)
                    int32_t var_950_3 = 0
                    int32_t eflags_3
                    int32_t eax_156
                    eax_156, eflags_3 = _bit_scan_reverse((&var_748)[ecx_49])
                    edx_65 = (ecx_49 - 1) << 5
                else
                    edx_65 = 0
                
                int32_t edx_69 = sbb.d(edx_65, edx_65, esi_22 u< edx_65) & (edx_65 - esi_22)
                int32_t var_924_5 = edx_69
                
                if (edx_69 u> 0)
                    int32_t edi_29 = edx_69 & 0x1f
                    uint32_t esi_26 = edx_69 u>> 5
                    int32_t eax_160 = __allshl(1, 0, 0x20 - edi_29.b)
                    int32_t var_950_4 = 0
                    int32_t eflags_4
                    int32_t ecx_53
                    ecx_53, eflags_4 = _bit_scan_reverse((&var_3a8)[ebx_10])
                    uint32_t edx_70 = esi_26 + ebx_10
                    int32_t ecx_54 = 0x20
                    uint32_t var_93c_3 = edx_70
                    int32_t eax_163
                    
                    if (edx_70 != 0x73 || edi_29 u<= ecx_54)
                        eax_163.b = 0
                    else
                        eax_163.b = 1
                    
                    if (edx_70 u> 0x73 || eax_163.b != 0)
                        int32_t var_b34_6 = 0
                        var_3a8 = 0
                        _memcpy_s(&var_3a4, 0x1cc, &var_b30, nullptr)
                        ebx_10 = var_3a8
                        ecx_49 = var_748
                    else
                        if (edx_70 u>= 0x72)
                            edx_70 = 0x72
                            var_93c_3 = 0x72
                        
                        uint32_t ecx_55 = edx_70
                        uint32_t var_938_5 = ecx_55
                        
                        if (edx_70 != 0xffffffff)
                            uint32_t esi_28 = edx_70 - esi_26
                            void* eax_164 = &var_3a4[0][esi_28]
                            var_928_2 = eax_164
                            
                            while (ecx_55 u>= esi_26)
                                int32_t edi_30
                                
                                if (esi_28 u>= ebx_10)
                                    edi_30 = 0
                                else
                                    edi_30 = *eax_164
                                
                                int32_t eax_167
                                
                                if (esi_28 - 1 u>= ebx_10)
                                    eax_167 = 0
                                else
                                    eax_167 = *(var_928_2 - 4)
                                
                                var_3a4[0][var_938_5] =
                                    (eax_167 & not.d(eax_160 - 1)) u>> (0x20 - edi_29.b)
                                    | (edi_30 & (eax_160 - 1)) << edi_29.b
                                ecx_55 = var_938_5 - 1
                                esi_28 -= 1
                                eax_164 = var_928_2 - 4
                                var_938_5 = ecx_55
                                var_928_2 = eax_164
                                
                                if (ecx_55 == 0xffffffff)
                                    break
                                
                                ebx_10 = var_3a8
                            
                            edx_70 = var_93c_3
                        
                        if (esi_26 != 0)
                            __builtin_memset(&var_3a4, 0, esi_26 << 2)
                        
                        ecx_49 = var_920_1
                        
                        if (edi_29 u<= ecx_54)
                            ebx_10 = edx_70
                        else
                            ebx_10 = edx_70 + 1
                        
                        var_3a8 = ebx_10
                    
                    edx_69 = var_924_5
                
                int32_t eax_174 = ((eax_2 - 1) & 0x1d) + 0x19 - ecx_29
                int32_t esi_29 = eax_174
                
                if (ecx_29 == 0)
                    goto label_527ea2
                
                if (edx_69 u<= eax_174)
                    esi_29 = eax_174 - edx_69
                label_527ea2:
                    
                    if (ebx_10 u<= ecx_49)
                        if (ebx_10 u< ecx_49)
                            var_924_5 = edx_69 + 1
                        else
                            int32_t ecx_60 = ebx_10 - 1
                            
                            if (ecx_60 != 0xffffffff)
                                while (var_3a4[0][ecx_60] == (&var_744)[ecx_60])
                                    ecx_60 -= 1
                                    
                                    if (ecx_60 == 0xffffffff)
                                        break
                                
                                if (ecx_60 != 0xffffffff && var_3a4[0][ecx_60] u<= (&var_744)[ecx_60])
                                    var_924_5 = edx_69 + 1
                    
                    int32_t esi_31 = esi_29 & 0x1f
                    uint32_t edi_35 = esi_29 u>> 5
                    int32_t eax_181 = __allshl(1, 0, 0x20 - esi_31.b)
                    int32_t var_938_6 = 0
                    int32_t eflags_5
                    int32_t ecx_63
                    ecx_63, eflags_5 = _bit_scan_reverse((&var_3a8)[ebx_10])
                    uint32_t edx_73 = edi_35 + ebx_10
                    int32_t ecx_64 = 0x20
                    uint32_t var_934_6 = edx_73
                    int32_t eax_184
                    
                    if (edx_73 != 0x73 || esi_31 u<= ecx_64)
                        eax_184.b = 0
                    else
                        eax_184.b = 1
                    
                    if (edx_73 u> 0x73 || eax_184.b != 0)
                        int32_t var_b34_7 = 0
                        var_3a8 = 0
                        _memcpy_s(&var_3a4, 0x1cc, &var_b30, nullptr)
                    else
                        if (edx_73 u>= 0x72)
                            edx_73 = 0x72
                            var_934_6 = 0x72
                        
                        uint32_t ecx_65 = edx_73
                        uint32_t var_93c_4 = ecx_65
                        
                        if (edx_73 != 0xffffffff)
                            uint32_t esi_33 = edx_73 - edi_35
                            void* eax_185 = &var_3a4[0][esi_33]
                            var_928_2 = eax_185
                            
                            while (ecx_65 u>= edi_35)
                                int32_t eax_186
                                
                                if (esi_33 u>= ebx_10)
                                    eax_186 = 0
                                else
                                    eax_186 = *eax_185
                                
                                int32_t eax_189
                                
                                if (esi_33 - 1 u>= ebx_10)
                                    eax_189 = 0
                                else
                                    eax_189 = *(var_928_2 - 4)
                                
                                var_3a4[0][var_93c_4] =
                                    (eax_189 & not.d(eax_181 - 1)) u>> (0x20 - esi_31.b)
                                    | (eax_186 & (eax_181 - 1)) << esi_31.b
                                ecx_65 = var_93c_4 - 1
                                esi_33 -= 1
                                eax_185 = var_928_2 - 4
                                var_93c_4 = ecx_65
                                var_928_2 = eax_185
                                
                                if (ecx_65 == 0xffffffff)
                                    break
                                
                                ebx_10 = var_3a8
                            
                            edx_73 = var_934_6
                        
                        if (edi_35 != 0)
                            __builtin_memset(&var_3a4, 0, edi_35 << 2)
                        
                        if (esi_31 u<= ecx_64)
                            var_3a8 = edx_73
                        else
                            var_3a8 = edx_73 + 1
                    
                    uint32_t eax_195
                    int32_t edx_75
                    eax_195, edx_75 = __crt_strtox::divide(&var_3a8, &var_748)
                    bool cond:16_1 = var_3a8 == 0
                    int32_t ebx_25 = edx_75
                    uint32_t edi_37 = eax_195
                    var_928_2.b = cond:16_1
                    bool cond:14_1 = ebx_25 == 0
                    
                    if (ebx_25 == 0)
                        cond:14_1 = edi_37 == 0xffffffff
                    
                    int32_t esi_34
                    
                    if (ebx_25 != 0 || edi_37 u> 0xffffffff)
                        int32_t eflags_7
                        int32_t eax_197
                        eax_197, eflags_7 = _bit_scan_reverse(ebx_25)
                        int32_t esi_35
                        
                        esi_35 = cond:14_1 ? 0 : eax_197 + 1
                        
                        esi_34 = esi_35 + 0x20
                    else
                        int32_t eflags_6
                        int32_t eax_196
                        eax_196, eflags_6 = _bit_scan_reverse(edi_37)
                        
                        if (edi_37 == 0xffffffff)
                            esi_34 = 0
                        else
                            esi_34 = eax_196 + 1
                    
                    if (esi_34 u> eax_174)
                        esi_34 -= eax_174
                        int32_t eax_199
                        int32_t edx_76
                        
                        if (cond:16_1 != 0)
                            eax_199, edx_76 = __allshl(1, 0, esi_34.b)
                            var_928_2.b = 1
                        
                        if (cond:16_1 == 0 || (((eax_199 - 1) & edi_37)
                                | (adc.d(edx_76, 0xffffffff, eax_199 u>= 1) & ebx_25)) != 0)
                            var_928_2.b = 0
                        
                        uint32_t eax_204
                        eax_204, edx_75 = __aullshr(edi_37, ebx_25, esi_34.b)
                        edi_37 = eax_204
                        ebx_25 = edx_75
                    
                    int32_t esi_37 = sbb.d(esi_34, esi_34, 0 u< var_91c) & var_1d4
                    int32_t var_1d0
                    int32_t eax_206
                    int32_t edx_83
                    eax_206, edx_83 = __allshl(esi_37, 
                        adc.d(sbb.d(edx_75, edx_75, 1 u< var_91c) & var_1d0, 0, esi_37 u< 0), eax_174.b)
                    int32_t ecx_75
                    
                    if (ecx_29 == 0)
                        ecx_75 = not.d(var_924_5)
                    else
                        ecx_75 = ecx_29 - 2
                    
                    result = __crt_strtox::assemble_floating_point_value(eax_206 + edi_37, 
                        adc.d(edx_83, ebx_25, eax_206 + edi_37 u< eax_206), ecx_75, arg1[0xc2].b, 
                        var_928_2.b, arg2)
                else
                    void* eax_175
                    eax_175.b = eax_8 != ecx_3
                    result = __crt_strtox::assemble_floating_point_value_from_big_integer(&var_1d8, 
                        ecx_29, arg1[0xc2].b, eax_175.b, arg2)
            else
                void* eax_146 = *((edx_52 << 2) + &data_54d98c)
                void* var_944_3 = eax_146
                
                if (eax_146 == 0)
                    void* var_b34_3 = var_b34 & eax_146
                    var_748 &= eax_146
                    _memcpy_s(&var_744, 0x1cc, &var_b30, eax_146)
                    ebx_10 = var_3a8
                label_527b33:
                    ecx_49 = var_748
                    var_920_1 = ecx_49
                    goto label_527c40
                
                if (eax_146 == 1 || ecx_41 == 0)
                    goto label_527c38
                
                int32_t edi_27 = 0
                int32_t esi_21 = 0
                
                do
                    int32_t eax_147
                    int32_t edx_63
                    edx_63:eax_147 = mulu.dp.d(eax_146, (&var_744)[esi_21])
                    (&var_744)[esi_21] = eax_147 + edi_27
                    eax_146 = var_944_3
                    esi_21 += 1
                    edi_27 = adc.d(edx_63, 0, eax_147 + edi_27 u< eax_147)
                while (esi_21 != ecx_41)
                
                if (edi_27 == 0)
                    goto label_527b33
                
                uint32_t eax_149 = var_748
                
                if (eax_149 u< 0x73)
                    (&var_744)[eax_149] = edi_27
                    ecx_49 = var_748 + 1
                    var_920_1 = ecx_49
                    var_748 = ecx_49
                    goto label_527c40
                
                int32_t var_b34_5 = 0
                var_748 = 0
                int32_t var_b44_27 = 0
            label_527c0e:
                _memcpy_s(&var_744, 0x1cc, &var_b30, nullptr)
                __crt_strtox::assemble_floating_point_zero(arg1[0xc2].b, arg2)
                result = 2
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
