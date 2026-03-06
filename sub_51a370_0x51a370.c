// 函数名称: sub_51a370
// 虚拟地址: 0x51a370
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __convention("regparm")sub_51a370(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = arg3
    int32_t ebx = 0
    void* var_43c = esi
    int32_t* var_414 = arg5
    void var_40c
    void* edi = sub_51a110(arg3, &var_40c)
    char const* const edx_1 = "#?RADIANCE"
    char* ecx = edi
    int32_t eax_6
    
    while (true)
        void* eax_4
        eax_4.b = *ecx
        char const temp0_1 = *edx_1
        bool c_1 = eax_4.b u< temp0_1
        
        if (eax_4.b == temp0_1)
            if (eax_4.b == 0)
                eax_6 = 0
                break
            
            eax_4.b = ecx[1]
            char temp1_1 = edx_1[1]
            c_1 = eax_4.b u< temp1_1
            
            if (eax_4.b == temp1_1)
                ecx = &ecx[2]
                edx_1 = &edx_1[2]
                
                if (eax_4.b != 0)
                    continue
                
                eax_6 = 0
                break
        
        eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
        break
    
    int32_t eax_9
    
    if (eax_6 != 0)
        char const* const eax_7 = "#?RGBE"
        
        while (true)
            ecx.b = *edi
            char const temp2_1 = *eax_7
            bool c_2 = ecx.b u< temp2_1
            
            if (ecx.b == temp2_1)
                if (ecx.b == 0)
                    eax_9 = 0
                    break
                
                ecx.b = *(edi + 1)
                char temp4_1 = eax_7[1]
                c_2 = ecx.b u< temp4_1
                
                if (ecx.b == temp4_1)
                    edi += 2
                    eax_7 = &eax_7[2]
                    
                    if (ecx.b != 0)
                        continue
                    
                    eax_9 = 0
                    break
            
            eax_9 = sbb.d(eax_7, eax_7, c_2) | 1
            break
    
    if (eax_6 == 0 || eax_9 == 0)
        char* eax_10 = sub_51a110(esi, &var_40c)
        char* var_418 = eax_10
        
        if (*eax_10 != 0)
            while (true)
                char const* const ecx_2 = "FORMAT=32-bit_rle_rgbe"
                int32_t eax_12
                
                while (true)
                    char edx_3 = *eax_10
                    char const temp3_1 = *ecx_2
                    bool c_3 = edx_3 u< temp3_1
                    
                    if (edx_3 == temp3_1)
                        if (edx_3 == 0)
                            eax_12 = 0
                            break
                        
                        edx_3 = eax_10[1]
                        char temp5_1 = ecx_2[1]
                        c_3 = edx_3 u< temp5_1
                        
                        if (edx_3 == temp5_1)
                            eax_10 = &eax_10[2]
                            ecx_2 = &ecx_2[2]
                            
                            if (edx_3 != 0)
                                continue
                            
                            eax_12 = 0
                            break
                    
                    eax_12 = sbb.d(eax_10, eax_10, c_3) | 1
                    break
                
                if (eax_12 == 0)
                    ebx = 1
                
                eax_10 = sub_51a110(esi, &var_40c)
                var_418 = eax_10
                
                if (*eax_10 == 0)
                    break
            
            if (ebx != 0)
                char* eax_13 = sub_51a110(esi, &var_40c)
                var_418 = eax_13
                int32_t eax_14
                int32_t edx_6
                eax_14, edx_6 = _strncmp(eax_13, "-Y ", 3)
                
                if (eax_14 == 0)
                    void* eax_16 = &var_418[3]
                    var_418 = eax_16
                    int32_t eax_17 = _strtol(eax_16, edx_6, &var_418, eax_16, &var_418, 0xa)
                    char* ecx_6 = var_418
                    int32_t edi_1 = eax_17
                    int32_t var_434_1 = edi_1
                    
                    while (*ecx_6 == 0x20)
                        ecx_6 = &ecx_6[1]
                        var_418 = ecx_6
                    
                    int32_t eax_18
                    int32_t* ecx_7
                    int32_t edx_7
                    eax_18, ecx_7, edx_7 = _strncmp(ecx_6, "+X ", 3)
                    
                    if (eax_18 == 0)
                        void* eax_20 = &var_418[3]
                        var_418 = eax_20
                        int32_t i_6 = _strtol(eax_20, edx_7, ecx_7, eax_20, nullptr, 0xa)
                        int32_t* eax_21 = var_414
                        *arg2 = i_6
                        *arg4 = edi_1
                        
                        if (eax_21 != 0)
                            *eax_21 = 3
                        
                        int32_t eax_22 = sub_50dc40(eax_21, edi_1, i_6, 3)
                        
                        if (eax_22 != 0)
                            float* result
                            int32_t edx_10
                            result, edx_10 = sub_50dca0(eax_22, edi_1, i_6, 3)
                            
                            if (result != 0)
                                int32_t i_7
                                int32_t ebx_4
                                int32_t edi_8
                                
                                if (i_6 - 8 u> 0x7ff7)
                                    i_7 = i_6
                                    ebx_4 = 0
                                label_51aa14:
                                    
                                    if (ebx_4 s>= edi_1)
                                        goto label_51a97a
                                    
                                    edi_8 = 0
                                    goto label_51aa1e
                                
                                float* result_5 = nullptr
                                float* result_3 = nullptr
                                int32_t var_430_1 = 0
                                
                                if (var_434_1 s<= 0)
                                label_51a97a:
                                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                    return result
                                
                                int32_t var_438 = i_6 * 0xc
                                float* result_2 = result
                            label_51a5e0:
                                char* eax_26 = *(esi + 0xa8)
                                int32_t ecx_14 = *(esi + 0xac)
                                char var_40e_1
                                
                                if (eax_26 u< ecx_14)
                                    edx_10.b = *eax_26
                                    eax_26 = &eax_26[1]
                                    var_40e_1 = edx_10.b
                                    *(esi + 0xa8) = eax_26
                                else if (*(esi + 0x20) == 0)
                                    var_40e_1 = 0
                                else
                                    sub_50ebb0(esi)
                                    char* eax_27 = *(esi + 0xa8)
                                    ecx_14 = *(esi + 0xac)
                                    edx_10.b = *eax_27
                                    eax_26 = &eax_27[1]
                                    var_40e_1 = edx_10.b
                                    *(esi + 0xa8) = eax_26
                                
                                char var_40d_1
                                
                                if (eax_26 u< ecx_14)
                                    edx_10.b = *eax_26
                                    eax_26 = &eax_26[1]
                                    var_40d_1 = edx_10.b
                                    *(esi + 0xa8) = eax_26
                                else if (*(esi + 0x20) == 0)
                                    var_40d_1 = 0
                                else
                                    sub_50ebb0(esi)
                                    char* eax_28 = *(esi + 0xa8)
                                    ecx_14 = *(esi + 0xac)
                                    edx_10.b = *eax_28
                                    eax_26 = &eax_28[1]
                                    var_40d_1 = edx_10.b
                                    *(esi + 0xa8) = eax_26
                                
                                if (eax_26 u< ecx_14)
                                    ecx_14.b = *eax_26
                                    eax_26 = &eax_26[1]
                                    *(esi + 0xa8) = eax_26
                                else if (*(esi + 0x20) == 0)
                                    ecx_14.b = 0
                                else
                                    ecx_14, edx_10 = sub_50ebb0(esi)
                                    char* eax_29 = *(esi + 0xa8)
                                    ecx_14.b = *eax_29
                                    eax_26 = &eax_29[1]
                                    *(esi + 0xa8) = eax_26
                                
                                ecx_14:1.b = var_40e_1
                                edx_10.b = var_40d_1
                                uint32_t ebx_2 = zx.d(ecx_14.b)
                                
                                if (ecx_14:1.b != 2 || edx_10.b != ecx_14:1.b || ebx_2.b s< 0)
                                    var_414.b = ecx_14:1.b
                                    var_414:1.b = edx_10.b
                                    var_414:2.b = ecx_14.b
                                    
                                    if (eax_26 u< *(esi + 0xac))
                                        ecx_14.b = *eax_26
                                        eax_26 = &eax_26[1]
                                        *(esi + 0xa8) = eax_26
                                    else if (*(esi + 0x20) == 0)
                                        ecx_14.b = 0
                                    else
                                        sub_50ebb0(esi)
                                        char* eax_43 = *(esi + 0xa8)
                                        ecx_14.b = *eax_43
                                        eax_26 = &eax_43[1]
                                        *(esi + 0xa8) = eax_26
                                    
                                    var_414:3.b = ecx_14.b
                                    sub_51a230(eax_26.b, &var_414, result, 3)
                                    edi_8 = 1
                                    ebx_4 = 0
                                    i_7 = _free(result_3)
                                    
                                    do
                                        sub_50ec50(i_7, &var_438, esi, 4)
                                        int32_t eax_47 = (ebx_4 * i_6 + edi_8) * 3
                                        sub_51a230(eax_47.b, &var_438, &result[eax_47], 3)
                                        i_7 = i_6
                                        edi_8 += 1
                                    label_51aa1e:
                                    while (edi_8 s< i_7)
                                    
                                    edi_1 = var_434_1
                                    ebx_4 += 1
                                    goto label_51aa14
                                
                                if (eax_26 u< *(esi + 0xac))
                                    ecx_14.b = *eax_26
                                    *(esi + 0xa8) = &eax_26[1]
                                else if (*(esi + 0x20) == 0)
                                    ecx_14.b = 0
                                else
                                    sub_50ebb0(esi)
                                    char* eax_31 = *(esi + 0xa8)
                                    ecx_14.b = *eax_31
                                    *(esi + 0xa8) = &eax_31[1]
                                
                                void* result_6 = zx.d(ecx_14.b) | ebx_2 << 8
                                int32_t i_8 = i_6
                                float* result_1
                                
                                if (result_6 != i_8)
                                    _free(result)
                                    result_1 = result_5
                                else
                                    if (result_5 == 0 && i_8 s>= 0 && i_8 s<= 0x1fffffff)
                                        int32_t var_450_1 = i_8 << 2
                                        result_6 = _malloc()
                                        result_3 = result_6
                                    
                                    if (result_5 == 0
                                            && (i_8 s< 0 || i_8 s> 0x1fffffff || result_6 == 0))
                                        result_1 = result
                                    else
                                        int32_t* edx_11 = nullptr
                                        var_414 = nullptr
                                        
                                        while (true)
                                            int32_t ecx_19 = 0
                                            int32_t i_9 = i_8
                                            int32_t var_420_1 = 0
                                            
                                            if (i_8 s> 0)
                                                while (true)
                                                    result_6 = *(esi + 0xa8)
                                                    
                                                    if (result_6 u< *(esi + 0xac))
                                                        goto label_51a7a3
                                                    
                                                    if (*(esi + 0x20) == 0)
                                                        i_8.b = 0
                                                    label_51a825:
                                                        uint32_t i_4 = zx.d(i_8.b)
                                                        
                                                        if (i_4 s> i_9)
                                                        label_51a949:
                                                            _free(result)
                                                            result_1 = result_3
                                                            break
                                                        
                                                        if (i_4 != 0)
                                                            void* edi_6 = &edx_11[ecx_19] + result_3
                                                            var_420_1 = ecx_19 + i_4
                                                            uint32_t i
                                                            
                                                            do
                                                                result_6 = *(esi + 0xa8)
                                                                int32_t ecx_22
                                                                
                                                                if (result_6 u< *(esi + 0xac))
                                                                    ecx_22.b = *result_6
                                                                    result_6 += 1
                                                                    *(esi + 0xa8) = result_6
                                                                else if (*(esi + 0x20) == 0)
                                                                    ecx_22.b = 0
                                                                else
                                                                    sub_50ebb0(esi)
                                                                    char* eax_38 = *(esi + 0xa8)
                                                                    ecx_22.b = *eax_38
                                                                    result_6 = &eax_38[1]
                                                                    *(esi + 0xa8) = result_6
                                                                
                                                                *edi_6 = ecx_22.b
                                                                edi_6 += 4
                                                                i = i_4
                                                                i_4 -= 1
                                                            while (i != 1)
                                                            ecx_19 = var_420_1
                                                    else
                                                        sub_50ebb0(esi)
                                                        result_6 = *(esi + 0xa8)
                                                        ecx_19 = var_420_1
                                                        edx_11 = var_414
                                                    label_51a7a3:
                                                        i_8.b = *result_6
                                                        result_6 += 1
                                                        *(esi + 0xa8) = result_6
                                                        
                                                        if (i_8.b u<= 0x80)
                                                            goto label_51a825
                                                        
                                                        if (result_6 u< *(esi + 0xac))
                                                            edx_11.b = *result_6
                                                            result_6 += 1
                                                            *(esi + 0xa8) = result_6
                                                        else if (*(esi + 0x20) == 0)
                                                            edx_11.b = 0
                                                        else
                                                            sub_50ebb0(esi)
                                                            char* eax_35 = *(esi + 0xa8)
                                                            edx_11.b = *eax_35
                                                            result_6 = &eax_35[1]
                                                            *(esi + 0xa8) = result_6
                                                        
                                                        i_8.b -= 0x80
                                                        uint32_t i_3 = zx.d(i_8.b)
                                                        
                                                        if (i_3 s> i_9)
                                                            goto label_51a949
                                                        
                                                        if (i_8.b != 0)
                                                            result_6 = &var_414[var_420_1] + result_3
                                                            var_420_1 += i_3
                                                            uint32_t i_1
                                                            
                                                            do
                                                                *result_6 = edx_11.b
                                                                result_6 += 4
                                                                i_1 = i_3
                                                                i_3 -= 1
                                                            while (i_1 != 1)
                                                        
                                                        ecx_19 = var_420_1
                                                    
                                                    i_8 = i_6
                                                    edx_11 = var_414
                                                    i_9 = i_8 - ecx_19
                                                    
                                                    if (i_9 s<= 0)
                                                        goto label_51a8b1
                                                
                                                break
                                            
                                        label_51a8b1:
                                            edx_11 += 1
                                            var_414 = edx_11
                                            
                                            if (edx_11 s>= 4)
                                                if (i_8 s> 0)
                                                    float* result_7 = result_3
                                                    float* result_4 = result_2
                                                    int32_t i_5 = i_6
                                                    int32_t i_2
                                                    
                                                    do
                                                        result_6 = sub_51a230(result_6.b, result_7, 
                                                            result_4, 3)
                                                        result_4 = &result_4[3]
                                                        result_7 = &result_7[1]
                                                        i_2 = i_5
                                                        i_5 -= 1
                                                    while (i_2 != 1)
                                                    esi = var_43c
                                                
                                                edx_10 = var_430_1 + 1
                                                result_2 = &result_2[i_6 * 3]
                                                var_430_1 = edx_10
                                                
                                                if (edx_10 s< var_434_1)
                                                    result_5 = result_3
                                                    goto label_51a5e0
                                                
                                                if (result_3 != 0)
                                                    _free(result_3)
                                                
                                                goto label_51a97a
                                
                                _free(result_1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
