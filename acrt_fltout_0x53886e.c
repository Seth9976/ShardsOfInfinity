// 函数名称: ___acrt_fltout
// 虚拟地址: 0x53886e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___acrt_fltout(int32_t arg1, void* arg2, int32_t* arg3, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_798
    int32_t* __saved_ebx = &var_798
    int32_t edx = _fegetenv(__saved_ebx)
    char var_790
    int32_t mxcsr
    
    if ((var_798.b & 0x1f) != 0x1f)
        mxcsr = _feholdexcept(&var_798, edx, __saved_ebx, &var_798)
        var_790 = 1
    else
        var_790 = 0
    
    int32_t arg_4
    int32_t ebx = arg_4
    int32_t edi
    int32_t var_974 = edi
    int32_t eax_7
    
    if (arg1 s> 0 || (arg1 s>= 0 && ebx u>= 0))
        eax_7 = 0x20
    else
        eax_7 = 0x2d
    
    *arg3 = eax_7
    arg3[2] = arg4
    void* result
    void* ecx_7
    uint32_t edx_2
    
    if ((arg1 & 0x7ff00000) != 0 || (ebx | (arg1 & 0xfffff)) != 0)
        int32_t eax_12 = __acrt_fp_classify(&arg_4)
        
        if (eax_12 != 0)
            arg3[1] = 1
        
        char const* const var_978_21
        
        if (eax_12 == 1)
            var_978_21 = "1#INF"
        label_539b9f:
            result, ecx_7, edx_2 = _strcpy_s(arg4, arg5, var_978_21)
            
            if (result != 0)
                int32_t var_988_4
                __builtin_memset(&var_988_4, 0, 0x14)
                sub_52d729()
                noreturn
        else
            if (eax_12 == 2)
                var_978_21 = "1#QNAN"
                goto label_539b9f
            
            if (eax_12 == 3)
                var_978_21 = "1#SNAN"
                goto label_539b9f
            
            if (eax_12 == 4)
                var_978_21 = "1#IND"
                goto label_539b9f
            
            int32_t var_788_1 = 0
            arg1 &= 0x7fffffff
            arg_4 = ebx
            long double x87_r7_1 = fconvert.t(arg_4.q)
            double var_77c_1 = fconvert.d(x87_r7_1)
            int32_t esi_2 = var_77c_1:4.d
            uint32_t ecx_11 = esi_2 u>> 0x14
            int32_t eax_21 = ecx_11 & 0x7ff
            int32_t edx_3
            int32_t ebx_1
            
            if (eax_21 != 0)
                eax_21 = 0
                edx_3 = 0x100000
                ebx_1 = 0xfffffbcd
            else
                edx_3 = 0
                ebx_1 = 0xfffffbce
            
            int32_t edi_1 = var_77c_1.d
            int32_t esi_4 = adc.d(esi_2 & 0xfffff, edx_3, edi_1 + eax_21 u< edi_1)
            int32_t ecx_13 = (ecx_11 & 0x7ff) + ebx_1
            int32_t ecx_14
            int16_t x87control
            int16_t x87control_1
            int80_t st0_1
            st0_1, ecx_14, x87control_1 = sub_53b3f0(mxcsr, x87control, x87_r7_1)
            int32_t var_978_2 = ecx_14
            int32_t var_97c_1 = ecx_14
            var_97c_1.q = fconvert.d(st0_1)
            int32_t eax_22 = sub_53c130(sub_53b500(mxcsr, x87control_1, var_97c_1))
            int32_t var_76c_1 = eax_22
            
            if (eax_22 == 0x7fffffff || eax_22 == 0x80000000)
                var_76c_1 = 0
            
            int32_t var_1d4 = edi_1 + eax_21
            void* ebx_2
            ebx_2.b = esi_4 != 0
            int32_t var_1d0_1 = esi_4
            char* var_3a8 = nullptr
            void* result_17 = ebx_2 + 1
            void* result_2 = result_17
            int32_t var_574
            uint32_t var_3a4[0x1c][0x4]
            
            if (ecx_13 s< 0)
                if (ecx_13 != 0xfffffc02)
                    var_574 = 0
                    int32_t var_570_4 = 0x100000
                    int32_t var_578_6 = 2
                
                char* eax_60
                
                if (ecx_13 == 0xfffffc02 || esi_4 == 0)
                label_538f5d:
                    var_77c_1:4.d = 0
                    int32_t eflags_4
                    int32_t eax_62
                    eax_62, eflags_4 = _bit_scan_reverse((&result_2)[result_17])
                    void* result_4 = result_17
                    void* result_26 = result_17
                    void* eax_64 = &(&result_2)[result_17]
                    void* var_75c_4 = eax_64
                    void* esi_19 = eax_64
                    
                    while (true)
                        int32_t var_750_4
                        
                        if (result_26 u>= result_17)
                            var_750_4 = 0
                        else
                            var_750_4 = (&var_1d4)[result_26]
                        
                        int32_t edx_12
                        
                        if (result_26 - 1 u>= result_17)
                            edx_12 = 0
                        else
                            edx_12 = *esi_19
                        
                        esi_19 -= 4
                        (&var_1d4)[result_26] = edx_12 u>> 0x1f | (var_750_4 * 2)
                        result_26 -= 1
                        
                        if (result_26 == 0xffffffff)
                            break
                        
                        result_17 = result_2
                    
                    if (0x20 u>= 1)
                        result_2 = result_4
                    else
                        result_2 = result_4 + 1
                    
                    uint32_t ebx_12 = (1 - ecx_13) u>> 5
                    _memset(&var_574, 0, ebx_12 << 2)
                    (&var_574)[ebx_12] = 1 << ((1 - ecx_13).b & 0x1f)
                    eax_60 = ebx_12 + 1
                else
                    int32_t ecx_32 = 0
                    
                    while (true)
                        if (*(&var_574 + ecx_32) != *(&var_1d4 + ecx_32))
                            goto label_538f5d
                        
                        ecx_32 += 4
                        
                        if (ecx_32 == 8)
                            var_77c_1:4.d = 0
                            int32_t eflags_3
                            int32_t eax_52
                            eax_52, eflags_3 = _bit_scan_reverse(esi_4)
                            void* result_3 = result_17
                            void* result_25 = result_17
                            void* eax_54 = &(&result_2)[result_17]
                            void* var_75c_3 = eax_54
                            void* esi_14 = eax_54
                            
                            while (true)
                                int32_t var_750_3
                                
                                if (result_25 u>= result_17)
                                    var_750_3 = 0
                                else
                                    var_750_3 = (&var_1d4)[result_25]
                                
                                int32_t edx_8
                                
                                if (result_25 - 1 u>= result_17)
                                    edx_8 = 0
                                else
                                    edx_8 = *esi_14
                                
                                esi_14 -= 4
                                (&var_1d4)[result_25] = edx_8 u>> 0x1e | var_750_3 << 2
                                result_25 -= 1
                                
                                if (result_25 == 0xffffffff)
                                    break
                                
                                result_17 = result_2
                            
                            if (0x20 u>= 2)
                                result_2 = result_3
                            else
                                result_2 = result_3 + 1
                            
                            uint32_t edi_9 = (2 - ecx_13) u>> 5
                            _memset(&var_574, 0, edi_9 << 2)
                            (&var_574)[edi_9] = 1 << ((2 - ecx_13).b & 0x1f)
                            eax_60 = edi_9 + 1
                            break
                
                char* var_578_7 = eax_60
                var_3a8 = eax_60
                _memcpy_s(&var_3a4, 0x1cc, &var_574, eax_60 << 2)
            else
                var_574 = 0
                int32_t var_570_1 = 0x100000
                int32_t var_578_1 = 2
                
                if (esi_4 == 0)
                label_538c81:
                    int32_t eax_39 = (ecx_13 + 1) & 0x1f
                    uint32_t esi_10 = (ecx_13 + 1) u>> 5
                    int32_t eax_40 = __allshl(1, 0, 0x20 - eax_39.b)
                    var_77c_1:4.d = 0
                    int32_t eflags_2
                    int32_t ecx_27
                    ecx_27, eflags_2 = _bit_scan_reverse((&result_2)[result_17])
                    void* result_16 = result_17 + esi_10
                    int32_t edi_5 = 0x20
                    int32_t var_758_2 = edi_5
                    void* result_21 = result_16
                    
                    if (result_16 != 0x73 || eax_39 u<= edi_5)
                        ecx_27.b = 0
                    else
                        ecx_27.b = 1
                    
                    if (result_16 u> 0x73 || ecx_27.b != 0)
                        int32_t var_578_4 = 0
                        result_2 = nullptr
                        _memcpy_s(&var_1d4, 0x1cc, &var_574, nullptr)
                    else
                        if (result_16 u>= 0x72)
                            result_16 = 0x72
                            result_21 = 0x72
                        
                        void* result_24 = result_16
                        void* result_27 = result_24
                        
                        if (result_16 != 0xffffffff)
                            void* esi_12 = result_16 - esi_10
                            void* edx_6 = &(&var_1d4)[esi_12]
                            
                            while (result_24 u>= esi_10)
                                int32_t eax_44
                                
                                if (esi_12 u>= result_17)
                                    eax_44 = 0
                                else
                                    eax_44 = *edx_6
                                
                                int32_t eax_46
                                
                                if (esi_12 - 1 u>= result_17)
                                    eax_46 = 0
                                else
                                    eax_46 = *(edx_6 - 4)
                                
                                edx_6 -= 4
                                (&var_1d4)[result_27] =
                                    (eax_46 & not.d(eax_40 - 1)) u>> (0x20 - eax_39.b)
                                    | (eax_44 & (eax_40 - 1)) << eax_39.b
                                result_24 = result_27 - 1
                                esi_12 -= 1
                                result_27 = result_24
                                
                                if (result_24 == 0xffffffff)
                                    break
                                
                                result_17 = result_2
                            
                            result_16 = result_21
                            edi_5 = var_758_2
                        
                        if (esi_10 != 0)
                            __builtin_memset(&var_1d4, 0, esi_10 << 2)
                            edi_5 = var_758_2
                        
                        if (eax_39 u<= edi_5)
                            result_2 = result_16
                        else
                            result_2 = result_16 + 1
                    
                    int32_t var_570_3 = 0
                    var_574 = 2
                    int32_t var_578_5 = 1
                    var_3a8 = 1
                    int32_t var_978_4 = 4
                else
                    int32_t ecx_17 = 0
                    
                    while (true)
                        if (*(&var_574 + ecx_17) != *(&var_1d4 + ecx_17))
                            goto label_538c81
                        
                        ecx_17 += 4
                        
                        if (ecx_17 == 8)
                            int32_t eax_26 = (ecx_13 + 2) & 0x1f
                            uint32_t esi_6 = (ecx_13 + 2) u>> 5
                            int32_t eax_27 = __allshl(1, 0, 0x20 - eax_26.b)
                            var_77c_1:4.d = 0
                            int32_t eflags_1
                            int32_t ecx_20
                            ecx_20, eflags_1 = _bit_scan_reverse((&result_2)[result_17])
                            void* result_15 = result_17 + esi_6
                            int32_t edi_3 = 0x20
                            int32_t var_758_1 = edi_3
                            void* result_19 = result_15
                            
                            if (result_15 != 0x73 || eax_26 u<= edi_3)
                                ecx_20.b = 0
                            else
                                ecx_20.b = 1
                            
                            if (result_15 u> 0x73 || ecx_20.b != 0)
                                int32_t var_578_2 = 0
                                result_2 = nullptr
                                _memcpy_s(&var_1d4, 0x1cc, &var_574, nullptr)
                            else
                                if (result_15 u>= 0x72)
                                    result_15 = 0x72
                                    result_19 = 0x72
                                
                                void* result_23 = result_15
                                void* result_28 = result_23
                                
                                if (result_15 != 0xffffffff)
                                    void* esi_8 = result_15 - esi_6
                                    void* edx_5 = &(&var_1d4)[esi_8]
                                    
                                    while (result_23 u>= esi_6)
                                        int32_t eax_31
                                        
                                        if (esi_8 u>= result_17)
                                            eax_31 = 0
                                        else
                                            eax_31 = *edx_5
                                        
                                        int32_t eax_33
                                        
                                        if (esi_8 - 1 u>= result_17)
                                            eax_33 = 0
                                        else
                                            eax_33 = *(edx_5 - 4)
                                        
                                        edx_5 -= 4
                                        (&var_1d4)[result_28] =
                                            (eax_33 & not.d(eax_27 - 1)) u>> (0x20 - eax_26.b)
                                            | (eax_31 & (eax_27 - 1)) << eax_26.b
                                        result_23 = result_28 - 1
                                        esi_8 -= 1
                                        result_28 = result_23
                                        
                                        if (result_23 == 0xffffffff)
                                            break
                                        
                                        result_17 = result_2
                                    
                                    result_15 = result_19
                                    edi_3 = var_758_1
                                
                                if (esi_6 != 0)
                                    __builtin_memset(&var_1d4, 0, esi_6 << 2)
                                    edi_3 = var_758_1
                                
                                if (eax_26 u<= edi_3)
                                    result_2 = result_15
                                else
                                    result_2 = result_15 + 1
                            
                            int32_t var_570_2 = 0
                            var_574 = 4
                            int32_t var_578_3 = 1
                            var_3a8 = 1
                            int32_t var_978_3 = 4
                            break
                
                _memcpy_s(&var_3a4, 0x1cc, &var_574, 4)
            
            int32_t edx_15 = 0
            int32_t var_760_4 = 0xa
            char var_964[0x1cc]
            int32_t var_744[0x73]
            
            if (var_76c_1 s< 0)
                int32_t eax_110 = neg.d(var_76c_1)
                uint32_t eax_111 = divu.dp.d(edx_15:eax_110, 0xa)
                uint32_t var_764_2 = eax_111
                uint32_t ecx_41 = modu.dp.d(edx_15:eax_110, 0xa)
                var_77c_1:4.d = ecx_41
                
                if (eax_111 != 0)
                    while (true)
                        if (eax_111 u> 0x26)
                            eax_111 = 0x26
                        
                        uint32_t ecx_42 = zx.d(*((eax_111 << 2) + &data_54d8f6))
                        uint32_t esi_28 = zx.d(*((eax_111 << 2) + &data_54d8f7))
                        _memset(&var_574, 0, ecx_42 << 2)
                        sub_51d5b0(&(&var_574)[ecx_42], 
                            (zx.d(*((eax_111 << 2) + &data_54d8f4)) << 2) + &data_54cff0, esi_28 << 2)
                        void* result_18 = ecx_42 + esi_28
                        void* result_5
                        int32_t ecx_43
                        
                        if (result_18 u<= 1)
                            int32_t edi_21 = var_574
                            
                            if (edi_21 == 0)
                            label_539565:
                                int32_t var_968_4 = 0
                                result_2 = nullptr
                                _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
                                result_5.b = 1
                            else if (edi_21 == 1 || result_2 == 0)
                                result_5.b = 1
                            else
                                void* result_6 = result_2
                                ecx_43 = 0
                                int32_t esi_29 = 0
                                
                                do
                                    void* eax_121
                                    int32_t edx_29
                                    edx_29:eax_121 = mulu.dp.d(edi_21, (&var_1d4)[esi_29])
                                    (&var_1d4)[esi_29] = eax_121 + ecx_43
                                    esi_29 += 1
                                    ecx_43 = adc.d(edx_29, 0, eax_121 + ecx_43 u< eax_121)
                                while (esi_29 != result_6)
                                
                            label_5395c0:
                                
                                if (ecx_43 == 0)
                                    result_5.b = 1
                                else
                                    result_5 = result_2
                                    
                                    if (result_5 u>= 0x73)
                                    label_5398a2:
                                        int32_t var_968_5 = 0
                                        result_2 = nullptr
                                        _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
                                        result_5.b = 0
                                    else
                                        (&var_1d4)[result_5] = ecx_43
                                        result_2 += 1
                                        result_5.b = 1
                        else if (result_2 u> 1)
                            bool c_11 = result_18 u< result_2
                            int32_t* edx_33 = &var_574
                            result_5.b = c_11
                            
                            if (not(c_11))
                                edx_33 = &var_1d4
                            
                            int32_t* var_754_4 = edx_33
                            int32_t* ecx_44 = &var_1d4
                            
                            if (result_5.b == 0)
                                ecx_44 = &var_574
                            
                            void* result_20
                            void* result_11
                            
                            if (result_5.b == 0)
                                result_11 = result_2
                                result_20 = result_11
                            else
                                result_11 = result_18
                                result_20 = result_18
                            
                            if (result_5.b != 0)
                                result_18 = result_2
                            
                            void* result_8 = nullptr
                            void* i_9 = nullptr
                            void* result_22 = nullptr
                            
                            if (result_11 != 0)
                                do
                                    if (edx_33[i_9] != 0)
                                        int32_t i_1 = 0
                                        void* i = i_9
                                        void* var_758_4 = nullptr
                                        int32_t i_7 = 0
                                        
                                        if (result_18 != 0)
                                            while (i != 0x73)
                                                if (i == result_8)
                                                    var_744[i] = 0
                                                    result_22 = var_758_4 + 1 + i_9
                                                
                                                int32_t eax_131
                                                int32_t edx_36
                                                edx_36:eax_131 =
                                                    mulu.dp.d(ecx_44[var_758_4], var_754_4[i_9])
                                                int32_t eax_132 = eax_131 + i_7
                                                int32_t temp30_1 = var_744[i]
                                                var_744[i] += eax_132
                                                i_1 = adc.d(adc.d(edx_36, 0, eax_131 + i_7 u< eax_131), 
                                                    0, temp30_1 + eax_132 u< temp30_1)
                                                void* eax_134 = var_758_4 + 1
                                                i += 1
                                                var_758_4 = eax_134
                                                i_7 = i_1
                                                result_8 = result_22
                                                int32_t i_5 = i_1
                                                
                                                if (eax_134 == result_18)
                                                    break
                                            
                                            while (i_1 != 0)
                                                if (i == 0x73)
                                                    goto label_5398a2
                                                
                                                if (i == result_8)
                                                    var_744[i] = 0
                                                    result_22 = i + 1
                                                
                                                int32_t temp34_1 = var_744[i]
                                                var_744[i] += i_1
                                                result_8 = result_22
                                                i_1 = adc.d(0, 0, temp34_1 + i_1 u< temp34_1)
                                                i += 1
                                        
                                        if (i == 0x73)
                                            goto label_5398a2
                                        
                                        result_11 = result_20
                                        edx_33 = var_754_4
                                    else if (i_9 == result_8)
                                        var_744[i_9] = 0
                                        result_8 = i_9 + 1
                                        result_22 = result_8
                                    
                                    i_9 += 1
                                while (i_9 != result_11)
                            
                            result_2 = result_8
                            _memcpy_s(&var_1d4, 0x1cc, &var_744, result_8 << 2)
                            result_5.b = 1
                        else
                            int32_t esi_30 = var_1d4
                            result_2 = result_18
                            _memcpy_s(&var_1d4, 0x1cc, &var_574, result_18 << 2)
                            
                            if (esi_30 == 0)
                                goto label_539565
                            
                            if (esi_30 != 1 && result_2 != 0)
                                void* result_7 = result_2
                                ecx_43 = 0
                                int32_t esi_31 = 0
                                
                                do
                                    void* eax_125
                                    int32_t edx_31
                                    edx_31:eax_125 = mulu.dp.d(esi_30, (&var_1d4)[esi_31])
                                    (&var_1d4)[esi_31] = eax_125 + ecx_43
                                    esi_31 += 1
                                    ecx_43 = adc.d(edx_31, 0, eax_125 + ecx_43 u< eax_125)
                                while (esi_31 != result_7)
                                
                                goto label_5395c0
                            
                            result_5.b = 1
                        
                        if (result_5.b == 0)
                            int32_t var_968_6 = 0
                            result_2 = nullptr
                            int32_t var_978_17 = 0
                            goto label_5398f3
                        
                        uint32_t temp20_1 = eax_111
                        eax_111 = var_764_2 - eax_111
                        bool cond:8_1 = var_764_2 != temp20_1
                        var_764_2 = eax_111
                        
                        if (not(cond:8_1))
                            ecx_41 = var_77c_1:4.d
                            break
                
                if (ecx_41 != 0)
                    int32_t eax_139 = *((ecx_41 << 2) + &data_54d98c)
                    var_77c_1:4.d = eax_139
                    
                    if (eax_139 == 0)
                    label_5398e0:
                        int32_t var_978_18 = 0
                        result_2 = nullptr
                        int32_t var_968_7 = 0
                    label_5398f3:
                        _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
                    else if (eax_139 != 1)
                        void* result_12 = result_2
                        
                        if (result_12 != 0)
                            int32_t edi_23 = 0
                            int32_t esi_32 = 0
                            
                            do
                                int32_t eax_140
                                int32_t edx_38
                                edx_38:eax_140 = mulu.dp.d(eax_139, (&var_1d4)[esi_32])
                                (&var_1d4)[esi_32] = eax_140 + edi_23
                                eax_139 = var_77c_1:4.d
                                esi_32 += 1
                                edi_23 = adc.d(edx_38, 0, eax_140 + edi_23 u< eax_140)
                            while (esi_32 != result_12)
                            
                            if (edi_23 != 0)
                                void* result_9 = result_2
                                
                                if (result_9 u>= 0x73)
                                    goto label_5398e0
                                
                                (&var_1d4)[result_9] = edi_23
                                result_2 += 1
            else
                uint32_t eax_72 = divu.dp.d(edx_15:var_76c_1, 0xa)
                uint32_t var_774_3 = eax_72
                uint32_t ecx_35 = modu.dp.d(edx_15:var_76c_1, 0xa)
                
                if (eax_72 != 0)
                    bool cond:9_1
                    
                    do
                        if (eax_72 u> 0x26)
                            eax_72 = 0x26
                        
                        uint32_t ecx_36 = zx.d(*((eax_72 << 2) + &data_54d8f6))
                        uint32_t esi_23 = zx.d(*((eax_72 << 2) + &data_54d8f7))
                        _memset(&var_574, 0, ecx_36 << 2)
                        sub_51d5b0(&(&var_574)[ecx_36], 
                            (zx.d(*((eax_72 << 2) + &data_54d8f4)) << 2) + &data_54cff0, esi_23 << 2)
                        char* edi_15 = ecx_36 + esi_23
                        char* eax_80
                        void* eax_81
                        int32_t ecx_37
                        
                        if (edi_15 u<= 1)
                            int32_t edi_16 = var_574
                            
                            if (edi_16 == 0)
                                eax_81 = nullptr
                                int32_t var_748_1 = 0
                                var_3a8 = nullptr
                            label_5393b2:
                                _memcpy_s(&var_3a4, 0x1cc, &var_744, eax_81)
                                eax_80.b = 1
                            else if (edi_16 == 1 || var_3a8 == 0)
                                eax_80.b = 1
                            else
                                char* eax_82 = var_3a8
                                ecx_37 = 0
                                int32_t esi_24 = 0
                                
                                do
                                    void* eax_84
                                    int32_t edx_17
                                    edx_17:eax_84 = mulu.dp.d(edi_16, var_3a4[0][esi_24])
                                    var_3a4[0][esi_24] = eax_84 + ecx_37
                                    esi_24 += 1
                                    ecx_37 = adc.d(edx_17, 0, eax_84 + ecx_37 u< eax_84)
                                while (esi_24 != eax_82)
                                
                            label_53920e:
                                
                                if (ecx_37 == 0)
                                    eax_80.b = 1
                                else
                                    eax_80 = var_3a8
                                    
                                    if (eax_80 u< 0x73)
                                        var_3a4[0][eax_80] = ecx_37
                                        var_3a8 = &var_3a8[1]
                                        eax_80.b = 1
                                    else
                                        int32_t var_578_10 = 0
                                        var_3a8 = nullptr
                                        int32_t var_978_10 = 0
                                        _memcpy_s(&var_3a4, 0x1cc, &var_574, nullptr)
                                        eax_80.b = 0
                        else if (var_3a8 u> 1)
                            bool c_4 = edi_15 u< var_3a8
                            int32_t* edx_21 = &var_574
                            eax_80.b = c_4
                            
                            if (not(c_4))
                                edx_21 = &var_3a4
                            
                            int32_t* var_74c_4 = edx_21
                            uint32_t (* ecx_38)[0x1c][0x4] = &var_3a4
                            
                            if (eax_80.b == 0)
                                ecx_38 = &var_574
                            
                            char* var_764_1
                            char* ecx_39
                            
                            if (eax_80.b == 0)
                                ecx_39 = var_3a8
                                var_764_1 = ecx_39
                            else
                                ecx_39 = edi_15
                                var_764_1 = edi_15
                            
                            if (eax_80.b != 0)
                                edi_15 = var_3a8
                            
                            char* eax_92 = nullptr
                            void* i_8 = nullptr
                            char* var_748_2 = nullptr
                            
                            if (ecx_39 == 0)
                            label_5393a9:
                                var_3a8 = eax_92
                                eax_81 = eax_92 << 2
                                goto label_5393b2
                            
                            while (true)
                                if (edx_21[i_8] != 0)
                                    int32_t i_3 = 0
                                    void* i_2 = i_8
                                    void* var_758_3 = nullptr
                                    int32_t i_6 = 0
                                    
                                    if (edi_15 != 0)
                                        while (i_2 != 0x73)
                                            if (i_2 == eax_92)
                                                var_744[i_2] = 0
                                                var_748_2 = var_758_3 + 1 + i_8
                                            
                                            int32_t eax_98
                                            int32_t edx_24
                                            edx_24:eax_98 =
                                                mulu.dp.d((*ecx_38)[0][var_758_3], var_74c_4[i_8])
                                            int32_t eax_99 = eax_98 + i_6
                                            int32_t temp33_1 = var_744[i_2]
                                            var_744[i_2] += eax_99
                                            i_3 = adc.d(adc.d(edx_24, 0, eax_98 + i_6 u< eax_98), 0, 
                                                temp33_1 + eax_99 u< temp33_1)
                                            void* eax_101 = var_758_3 + 1
                                            i_2 += 1
                                            var_758_3 = eax_101
                                            i_6 = i_3
                                            eax_92 = var_748_2
                                            var_77c_1:4.d = i_3
                                            
                                            if (eax_101 == edi_15)
                                                break
                                        
                                        while (i_3 != 0)
                                            if (i_2 == 0x73)
                                                goto label_53941a
                                            
                                            if (i_2 == eax_92)
                                                var_744[i_2] = 0
                                                var_748_2 = i_2 + 1
                                            
                                            int32_t temp35_1 = var_744[i_2]
                                            var_744[i_2] += i_3
                                            eax_92 = var_748_2
                                            i_3 = adc.d(0, 0, temp35_1 + i_3 u< temp35_1)
                                            i_2 += 1
                                    
                                    if (i_2 == 0x73)
                                    label_53941a:
                                        int32_t var_968_2 = 0
                                        var_3a8 = nullptr
                                        int32_t var_978_12 = 0
                                        break
                                    
                                    ecx_39 = var_764_1
                                    edx_21 = var_74c_4
                                else if (i_8 == eax_92)
                                    var_744[i_8] = 0
                                    eax_92 = i_8 + 1
                                    var_748_2 = eax_92
                                
                                i_8 += 1
                                
                                if (i_8 == ecx_39)
                                    goto label_5393a9
                            
                            _memcpy_s(&var_3a4, 0x1cc, &var_964, nullptr)
                            eax_80.b = 0
                        else
                            uint32_t esi_25 = var_3a4[0][0]
                            var_3a8 = edi_15
                            _memcpy_s(&var_3a4, 0x1cc, &var_574, edi_15 << 2)
                            
                            if (esi_25 != 0)
                                if (esi_25 != 1 && var_3a8 != 0)
                                    char* eax_88 = var_3a8
                                    ecx_37 = 0
                                    int32_t esi_26 = 0
                                    
                                    do
                                        void* eax_90
                                        int32_t edx_19
                                        edx_19:eax_90 = mulu.dp.d(esi_25, var_3a4[0][esi_26])
                                        var_3a4[0][esi_26] = eax_90 + ecx_37
                                        esi_26 += 1
                                        ecx_37 = adc.d(edx_19, 0, eax_90 + ecx_37 u< eax_90)
                                    while (esi_26 != eax_88)
                                    
                                    goto label_53920e
                                
                                eax_80.b = 1
                            else
                                int32_t var_578_9 = 0
                                var_3a8 = nullptr
                                _memcpy_s(&var_3a4, 0x1cc, &var_574, nullptr)
                                eax_80.b = 1
                        
                        if (eax_80.b == 0)
                            int32_t var_968_3 = 0
                            var_3a8 = nullptr
                            int32_t var_978_13 = 0
                            goto label_539458
                        
                        uint32_t temp23_1 = eax_72
                        eax_72 = var_774_3 - eax_72
                        cond:9_1 = var_774_3 != temp23_1
                        var_774_3 = eax_72
                    while (cond:9_1)
                
                if (ecx_35 != 0)
                    int32_t eax_105 = *((ecx_35 << 2) + &data_54d98c)
                    int32_t var_788_3 = eax_105
                    
                    if (eax_105 == 0)
                    label_539409:
                        int32_t var_968_1 = 0
                        var_3a8 = nullptr
                        int32_t var_978_11 = 0
                    label_539458:
                        _memcpy_s(&var_3a4, 0x1cc, &var_964, nullptr)
                    else if (eax_105 != 1)
                        char* ecx_40 = var_3a8
                        
                        if (ecx_40 != 0)
                            int32_t edi_18 = 0
                            int32_t esi_27 = 0
                            
                            do
                                int32_t eax_107
                                int32_t edx_26
                                edx_26:eax_107 = mulu.dp.d(eax_105, var_3a4[0][esi_27])
                                var_3a4[0][esi_27] = eax_107 + edi_18
                                eax_105 = var_788_3
                                esi_27 += 1
                                edi_18 = adc.d(edx_26, 0, eax_107 + edi_18 u< eax_107)
                            while (esi_27 != ecx_40)
                            
                            if (edi_18 != 0)
                                char* eax_109 = var_3a8
                                
                                if (eax_109 u>= 0x73)
                                    goto label_539409
                                
                                var_3a4[0][eax_109] = edi_18
                                var_3a8 = &var_3a8[1]
            void* edi_25 = arg4
            void* esi_33 = edi_25
            void* result_13 = result_2
            
            if (result_13 != 0)
                int32_t esi_34 = 0
                int32_t edi_24 = 0
                int32_t edx_41
                
                do
                    int32_t eax_143
                    int32_t edx_40
                    edx_40:eax_143 = mulu.dp.d((&var_1d4)[edi_24], 0xa)
                    (&var_1d4)[edi_24] = eax_143 + esi_34
                    edx_41 = adc.d(edx_40, 0, eax_143 + esi_34 u< eax_143)
                    edi_24 += 1
                    esi_34 = edx_41
                while (edi_24 != result_13)
                
                var_77c_1:4.d = esi_34
                
                if (esi_34 != 0)
                    void* result_14 = result_2
                    
                    if (result_14 u>= 0x73)
                        int32_t var_968_8 = 0
                        result_2 = nullptr
                        _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
                    else
                        (&var_1d4)[result_14] = edx_41
                        result_2 += 1
                
                edi_25 = esi_33
            
            uint32_t eax_146
            eax_146, edx_2 = __crt_strtox::divide(&result_2, &var_3a8)
            int32_t eax_153
            
            if (eax_146 == 0xa)
                var_76c_1 += 1
                esi_33 = edi_25 + 1
                char* eax_147 = var_3a8
                *edi_25 = 0x31
                
                if (eax_147 != 0)
                    uint32_t edi_26 = 0
                    int32_t ecx_46 = 0
                    
                    do
                        int32_t eax_149
                        int32_t edx_42
                        edx_42:eax_149 = mulu.dp.d(var_3a4[0][ecx_46], 0xa)
                        var_3a4[0][ecx_46] = eax_149 + edi_26
                        edx_2 = adc.d(edx_42, 0, eax_149 + edi_26 u< eax_149)
                        ecx_46 += 1
                        edi_26 = edx_2
                    while (ecx_46 != eax_147)
                    
                    if (edi_26 != 0)
                        char* eax_151 = var_3a8
                        
                        if (eax_151 u>= 0x73)
                            int32_t var_968_9 = 0
                            var_3a8 = nullptr
                            edx_2 = _memcpy_s(&var_3a4, 0x1cc, &var_964, nullptr)
                        else
                            var_3a4[0][eax_151] = edi_26
                            var_3a8 = &var_3a8[1]
                
                eax_153 = var_76c_1
            else if (eax_146 != 0)
                eax_146.b += 0x30
                esi_33 = edi_25 + 1
                *edi_25 = eax_146.b
                eax_153 = var_76c_1
            else
                eax_153 = var_76c_1 - 1
            
            arg3[1] = eax_153
            ecx_7 = arg2 + 1
            
            if (eax_153 s>= 0 && ecx_7 u<= 0x7fffffff)
                ecx_7 += eax_153
            
            void* eax_155 = arg5 - 1
            
            if (eax_155 u>= ecx_7)
                eax_155 = ecx_7
            
            result = eax_155 + arg4
            void* result_1 = result
            
            if (esi_33 != result)
                do
                    result = result_2
                    
                    if (result == 0)
                        break
                    
                    int32_t edi_27 = 0
                    int32_t ecx_48 = 0
                    
                    do
                        int32_t eax_157
                        int32_t edx_43
                        edx_43:eax_157 = mulu.dp.d((&var_1d4)[ecx_48], 0x3b9aca00)
                        (&var_1d4)[ecx_48] = eax_157 + edi_27
                        ecx_48 += 1
                        edi_27 = adc.d(edx_43, 0, eax_157 + edi_27 u< eax_157)
                    while (ecx_48 != result)
                    
                    if (edi_27 != 0)
                        void* result_10 = result_2
                        
                        if (result_10 u>= 0x73)
                            int32_t var_968_10 = 0
                            result_2 = nullptr
                            _memcpy_s(&var_1d4, 0x1cc, &var_964, nullptr)
                        else
                            (&var_1d4)[result_10] = edi_27
                            result_2 += 1
                    
                    result = __crt_strtox::divide(&result_2, &var_3a8)
                    char* i_4 = 8
                    ecx_7 = result_1 - esi_33
                    
                    do
                        int32_t edx_45 = 0
                        uint32_t temp1_3 = modu.dp.d(edx_45:result, var_760_4)
                        result = divu.dp.d(edx_45:result, var_760_4)
                        edx_2.b = temp1_3.b + 0x30
                        
                        if (ecx_7 u>= i_4)
                            *(i_4 + esi_33) = edx_2.b
                        
                        i_4 -= 1
                    while (i_4 != 0xffffffff)
                    
                    if (ecx_7 u> 9)
                        ecx_7 = 9
                    
                    esi_33 += ecx_7
                while (esi_33 != result_1)
            
            *esi_33 = 0
    else
        arg3[1] = 0
        result, ecx_7, edx_2 = _strcpy_s(arg4, arg5, 0x5514f0)
        
        if (result != 0)
            int32_t var_988_5
            __builtin_memset(&var_988_5, 0, 0x14)
            sub_52d729()
            noreturn
    
    if (var_790 != 0)
        result = _fesetenv(&var_798, edx_2, ecx_7, &var_798)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
