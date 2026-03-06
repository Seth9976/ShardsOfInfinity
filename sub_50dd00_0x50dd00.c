// 函数名称: sub_50dd00
// 虚拟地址: 0x50dd00
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_50dd00(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, uint32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_44 = 0x4818
    int32_t var_44 = 0x4818
    *arg6 = 8
    arg6[2] = 0
    arg6[1] = 0
    int32_t* eax_1 = _malloc()
    *eax_1 = arg3
    sub_5133b0(eax_1)
    eax_1[0x11f9] = 0
    eax_1[0x11fa] = 0xffffffff
    eax_1[0x11f1].b = 0xff
    bool cond:0 = sub_510e20(eax_1) == 0xd8
    arg3[0x2a] = arg3[0x2c]
    int32_t ebx
    ebx.b = cond:0
    arg3[0x2b] = arg3[0x2d]
    _free(eax_1)
    
    if (ebx != 0)
        int32_t var_44_2 = 0x4818
        int32_t* eax_5 = _malloc()
        *eax_5 = arg3
        int32_t eax_6
        int32_t ecx_4
        eax_6, ecx_4 = sub_5133b0(eax_5)
        int32_t var_44_3 = ecx_4
        int32_t eax_7 = sub_513430(eax_6, arg2, eax_5, arg4, arg5)
        _free(eax_5)
        return eax_7
    
    int32_t eax_9 = sub_514b00(arg3)
    char* ecx_7 = arg3[0x2c]
    int32_t edx_1 = arg3[0x2d]
    arg3[0x2a] = ecx_7
    arg3[0x2b] = edx_1
    
    if (eax_9 != 0)
        char* var_44_5 = ecx_7
        int32_t ebx_1 = 0
        int32_t edi_2
        int32_t var_28
        
        if (sub_515d50(eax_1, arg3) == 0)
            edi_2 = var_28
        else
            int32_t var_24
            int32_t eax_11 = var_24
            ebx_1 = var_28
            
            if (eax_11 s< 8)
                eax_11 = 8
            
            edi_2 = 0
            *arg6 = eax_11
            *arg2 = *arg3
            *arg4 = arg3[1]
            
            if (arg5 != 0)
                *arg5 = arg3[2]
        _free(edi_2)
        int32_t var_2c
        _free(var_2c)
        int32_t var_30
        _free(var_30)
        return ebx_1
    
    int32_t ecx_21
    void* eax_16
    
    if (ecx_7 u>= edx_1)
        if (arg3[8] != 0)
            ecx_7, edx_1 = sub_50ebb0(arg3)
            char* eax_17 = arg3[0x2a]
            edx_1.b = *eax_17
            eax_16 = &eax_17[1]
            goto label_50de90
        
        ecx_21 = 0
    else
        edx_1.b = *ecx_7
        eax_16 = &ecx_7[1]
    label_50de90:
        arg3[0x2a] = eax_16
        
        if (edx_1.b != 0x42)
            ecx_21 = 0
        else
            if (eax_16 u< arg3[0x2b])
                goto label_50deba
            
            if (arg3[8] == 0)
                ecx_21 = 0
            else
                sub_50ebb0(arg3)
                eax_16 = arg3[0x2a]
            label_50deba:
                ecx_7.b = *eax_16
                arg3[0x2a] = eax_16 + 1
                
                if (ecx_7.b != 0x4d)
                    ecx_21 = 0
                else
                    sub_50ed90(arg3)
                    sub_50ed90(arg3)
                    sub_50ed90(arg3)
                    sub_50ed90(arg3)
                    sub_50ed90(arg3)
                    sub_50ed90(arg3)
                    uint32_t eax_19 = sub_50ed90(arg3)
                    uint32_t eax_22 = (sub_50ed90(arg3) << 0x10) + eax_19
                    
                    if (eax_22 == 0xc || eax_22 == 0x28 || eax_22 == 0x38 || eax_22 == 0x6c
                            || eax_22 == 0x7c)
                        ecx_21 = 1
                    else
                        ecx_21 = 0
    arg3[0x2a] = arg3[0x2c]
    int32_t eax_24 = arg3[0x2d]
    arg3[0x2b] = eax_24
    
    if (ecx_21 != 0)
        return sub_516c90(eax_24, arg2, arg3, arg4, arg5)
    
    int32_t eax_26 = sub_5191c0(arg3)
    arg3[0x2a] = arg3[0x2c]
    arg3[0x2b] = arg3[0x2d]
    
    if (eax_26 != 0)
        return sub_519f90(arg4, arg5)
    
    uint32_t eax_28 = sub_50ecf0(arg3)
    uint32_t ecx_27 = sub_50ecf0(arg3) + (eax_28 << 0x10)
    arg3[0x2a] = arg3[0x2c]
    int32_t eax_31 = arg3[0x2d]
    arg3[0x2b] = eax_31
    
    if (ecx_27 == 0x38425053)
        uint32_t var_44_9 = ecx_27
        int32_t* var_48_2 = arg6
        return sub_518560(eax_31, arg2, arg3, arg4, arg5, arg6)
    
    int32_t ecx_31
    
    if (sub_5189f0(arg3, 0x59d348) != 0)
        int32_t i_2 = 0x54
        int32_t i
        
        do
            int32_t eax_34 = arg3[0x2a]
            
            if (eax_34 u< arg3[0x2b])
                arg3[0x2a] = eax_34 + 1
            else if (arg3[8] != 0)
                sub_50ebb0(arg3)
                arg3[0x2a] += 1
            
            i = i_2
            i_2 -= 1
        while (i != 1)
        int32_t eax_36 = sub_5189f0(arg3, "PICT")
        int32_t ecx_35 = neg.d(eax_36)
        ecx_31 = neg.d(sbb.d(ecx_35, ecx_35, eax_36 != 0))
    else
        ecx_31 = 0
    
    char* eax_38 = arg3[0x2c]
    int32_t edx_6 = arg3[0x2d]
    arg3[0x2a] = eax_38
    arg3[0x2b] = edx_6
    
    if (ecx_31 != 0)
        return sub_519030(eax_38, arg2, arg3, arg4, arg5)
    
    if (eax_38 u< edx_6)
        ebx.b = *eax_38
        eax_38 = &eax_38[1]
        arg3[0x2a] = eax_38
    else if (arg3[8] == 0)
        ebx.b = 0
    else
        sub_50ebb0(arg3)
        char* eax_39 = arg3[0x2a]
        edx_6 = arg3[0x2b]
        ebx.b = *eax_39
        eax_38 = &eax_39[1]
        arg3[0x2a] = eax_38
    
    if (eax_38 u< edx_6)
        ecx_31.b = *eax_38
        eax_38 = &eax_38[1]
        arg3[0x2a] = eax_38
    else if (arg3[8] == 0)
        ecx_31.b = 0
    else
        sub_50ebb0(arg3)
        char* eax_40 = arg3[0x2a]
        ecx_31.b = *eax_40
        eax_38 = &eax_40[1]
        arg3[0x2a] = eax_38
    
    if (ebx.b != 0x50 || (ecx_31.b != 0x35 && ecx_31.b != 0x36))
        arg3[0x2a] = arg3[0x2c]
        arg3[0x2b] = arg3[0x2d]
        int32_t eax_60 = sub_51a0c0(arg3)
        
        if (eax_60 == 0)
            int32_t eax_77 = sub_517a20(arg3)
            
            if (eax_77 == 0)
                return 0
            
            return sub_517ce0(eax_77, arg2, arg3, arg4, arg5)
        
        int32_t* edi_3 = arg5
        float* eax_61 = sub_51a370(eax_60, arg2, arg3, arg4, edi_3)
        int32_t ebx_4 = *edi_3
        int32_t ecx_49 = *arg4
        arg6 = eax_61
        int32_t var_20_1 = ebx_4
        int32_t edi_4 = *arg2
        
        if (eax_61 != 0)
            if (edi_4 s>= 0 && ecx_49 s>= 0)
                int32_t eax_63
                int32_t edx_21
                
                if (ecx_49 != 0)
                    edx_21:eax_63 = 0x7fffffff
                
                if (ecx_49 == 0 || edi_4 s<= divs.dp.d(edx_21:eax_63, ecx_49))
                    int32_t i_3 = edi_4 * ecx_49
                    int32_t i_4 = i_3
                    
                    if (i_3 s>= 0 && ebx_4 s>= 0)
                        int32_t eax_65
                        int32_t edx_23
                        
                        if (ebx_4 != 0)
                            edx_23:eax_65 = 0x7fffffff
                        
                        if (ebx_4 == 0 || i_3 s<= divs.dp.d(edx_23:eax_65, ebx_4))
                            int32_t var_44_13 = ebx_4 * i_3
                            int32_t esi_10 = _malloc()
                            int32_t var_8_1 = esi_10
                            
                            if (esi_10 != 0)
                                int32_t ecx_50 = ebx_4
                                
                                if ((ebx_4.b & 1) == 0)
                                    ecx_50 = ebx_4 - 1
                                
                                int32_t var_18 = ecx_50
                                
                                if (i_3 s> 0)
                                    int32_t* eax_71 = arg6
                                    void* edx_25 = nullptr
                                    void* var_c_1 = nullptr
                                    int32_t* var_10_1 = eax_71
                                    int32_t i_1
                                    
                                    do
                                        int32_t esi_11 = 0
                                        
                                        if (ecx_50 s> 0)
                                            int32_t* edi_5 = eax_71
                                            
                                            do
                                                long double x87_r7_2 =
                                                    sub_414580(*edi_5, 0x3ee8ba2e) * fconvert.t(255f)
                                                char* eax_72 = var_c_1 + esi_11
                                                edi_5 = &edi_5[1]
                                                esi_11 += 1
                                                eax_72[var_8_1] = (int.d(_mm_min_ss(0x437f0000, 
                                                    __maxss_xmmss_memss(0, 
                                                        fconvert.s(x87_r7_2 + fconvert.t(0.5f)))))).b
                                            while (esi_11 s< var_18)
                                            
                                            ebx_4 = var_20_1
                                            i_3 = i_4
                                            edx_25 = var_c_1
                                            eax_71 = var_10_1
                                        
                                        if (esi_11 s>= ebx_4)
                                            esi_10 = var_8_1
                                        else
                                            void* ecx_52 = edx_25 + esi_11
                                            esi_10 = var_8_1
                                            *(ecx_52 + esi_10) = (int.d(_mm_min_ss(0x437f0000, 
                                                _mm_max_ss(0, arg6[ecx_52] f* 255f + 0.5f)))).b
                                            eax_71 = var_10_1
                                        
                                        edx_25 += ebx_4
                                        eax_71 = &eax_71[ebx_4]
                                        var_c_1 = edx_25
                                        ecx_50 = var_18
                                        i_1 = i_3
                                        i_3 -= 1
                                        var_10_1 = eax_71
                                        i_4 = i_3
                                    while (i_1 != 1)
                                
                                _free(arg6)
                                return esi_10
            
            _free(arg6)
    else if (sub_51ac70(eax_38, arg3, arg3, &arg3[1], &arg3[2]) != 0)
        *arg2 = *arg3
        *arg4 = arg3[1]
        
        if (arg5 != 0)
            *arg5 = arg3[2]
        
        int32_t ecx_43 = arg3[2]
        int32_t esi_7 = arg3[1]
        int32_t ebx_3 = *arg3
        
        if (ecx_43 s>= 0 && ebx_3 s>= 0)
            int32_t eax_45
            int32_t edx_10
            
            if (ebx_3 != 0)
                edx_10:eax_45 = 0x7fffffff
            
            if (ebx_3 == 0 || ecx_43 s<= divs.dp.d(edx_10:eax_45, ebx_3))
                int32_t ecx_44 = ecx_43 * ebx_3
                
                if (ecx_44 s>= 0 && esi_7 s>= 0)
                    int32_t eax_47
                    int32_t edx_12
                    
                    if (esi_7 != 0)
                        edx_12:eax_47 = 0x7fffffff
                    
                    if ((esi_7 == 0 || ecx_44 s<= divs.dp.d(edx_12:eax_47, esi_7)) && arg3[2] s>= 0
                            && ebx_3 s>= 0)
                        int32_t eax_49
                        int32_t edx_14
                        
                        if (ebx_3 != 0)
                            edx_14:eax_49 = 0x7fffffff
                        
                        if ((ebx_3 == 0 || arg3[2] s<= divs.dp.d(edx_14:eax_49, ebx_3)) && ecx_44 s>= 0
                                && esi_7 s>= 0)
                            int32_t eax_51
                            int32_t edx_16
                            
                            if (esi_7 != 0)
                                edx_16:eax_51 = 0x7fffffff
                            
                            if (esi_7 == 0 || ecx_44 s<= divs.dp.d(edx_16:eax_51, esi_7))
                                int32_t var_44_11 = ecx_44 * esi_7
                                char* eax_53 = _malloc()
                                
                                if (eax_53 != 0)
                                    void* eax_56 = *arg3 * arg3[1] * arg3[2]
                                    sub_50ec50(eax_56, eax_53, arg3, eax_56)
                                    return eax_53
    
    return 0
}
