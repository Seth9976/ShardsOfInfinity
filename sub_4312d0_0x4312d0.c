// 函数名称: sub_4312d0
// 虚拟地址: 0x4312d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4312d0(int32_t arg1 @ esi, int128_t* arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t* arg6, int32_t* arg7, int32_t arg8, char arg9, int32_t* arg10, int32_t* arg11, int32_t arg12, int32_t* arg13)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t edx
    ecx, edx = __alloca_probe(0x3ba0)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t eax_4
    eax_4.b = arg9
    int32_t ebx = arg5
    char var_3b4c = eax_4.b
    void* esi = arg3
    int32_t* edi = arg4
    void* var_3b2c = esi
    int32_t* var_3b24 = edi
    void var_1810
    int32_t eax_9 = sub_42dff0(&var_1810, esi, *ecx, edi, &var_1810, var_3b4c)
    int32_t ecx_4 = ebx
    int32_t var_3b1c = eax_9
    
    if (ecx_4 != 0xffffffff)
        goto label_4314d0
    
    int32_t var_3b20_1 = 0
    int32_t ecx_17
    
    if (eax_9 s<= 0)
    label_4314ce:
        ecx_4 = ebx
    label_4314d0:
        int32_t esi_3 = 0
        int32_t var_3b20_2 = 0
        int32_t eax_32
        
        if (eax_9 s<= 0)
        label_431684:
            eax_32 = *arg6
        else
            while (true)
                int32_t eax_19 = esi_3
                
                if (ecx_4 != 0xffffffff)
                    eax_19 = ebx
                
                char var_3b18[0x1e60]
                sub_51d5b0(&var_3b18, var_3b2c, 0x2178)
                int32_t eax_20 = edi[1]
                int32_t edi_2 = esi_3 * 0x30
                int32_t* eax_21 = &var_1810 + edi_2
                int32_t var_19b0_1 = 2
                void* eax_22 = sub_44c7d0(eax_21, var_3b24, &var_3b18, eax_21, 2)
                int32_t* eax_23 = arg13
                
                if (eax_23 == 0)
                    goto label_4315b6
                
                int32_t i = sub_42f290(&var_3b18)
                int32_t i_1 = i
                int32_t* eax_25 = *(*arg13 + (((i s>> 4 | i) & arg13[1]) << 2))
                
                if (eax_25 == 0)
                label_431593:
                    float var_3b30
                    int32_t* var_14_5 = &var_3b30
                    var_3b30 = 1.40129846e-45f
                    sub_431fe0(arg13, &i_1, var_14_5)
                    esi_3 = var_3b20_2
                    eax_23 = arg13
                label_4315b6:
                    
                    if (*eax_22 == 0xa)
                        *arg7 = 0x3f800000
                        eax_32 = eax_19
                        *arg6 = eax_32
                        break
                    
                    void var_180c
                    
                    if (*(&var_180c + edi_2) == 5 || arg8 == arg12)
                        int32_t var_14_7 = 5
                        *arg10 += 1
                        int32_t eax_35 = eax_20 * 0x9c
                        var_1cac
                        int32_t ecx_22 = *(&var_1cac + eax_35) - *(eax_35 + edx + 0x1e6c)
                        int32_t var_1cb8[0x94]
                        i_1 = var_1cb8[eax_20 * 0x27] - *(eax_35 + edx + 0x1e60)
                        var_1cb4
                        int32_t ecx_26 = *(&var_1cb4 + eax_35) - *(eax_35 + edx + 0x1e64)
                        int32_t eax_36 = sub_4466c0(eax_35, 0xb, &var_3b18, eax_20, var_14_7)
                        int32_t eax_37 = sub_4466c0(eax_36, 0xb, &var_3b18, eax_20, 6)
                        int32_t eax_38 = sub_4466c0(eax_37, 0xb, &var_3b18, eax_20, 5)
                        int32_t eax_39
                        int32_t* ecx_31
                        eax_39, ecx_31 = sub_4466c0(eax_38, 0xb, &var_3b18, eax_20, 6)
                        var_3b30 = 0f
                        int32_t* var_14_8 = &var_3b30
                        int32_t* var_14_9 = &var_3b30
                        int32_t* var_14_10 = &var_3b30
                        int32_t* var_14_11 = &var_3b30
                        sub_446780(&var_3b30, 6, &var_3b18, eax_20, 
                            sub_446780(&var_3b30, 9, &var_3b18, eax_20, 
                                sub_446780(&var_3b30, 8, &var_3b18, eax_20, 
                                    sub_446780(&var_3b30, 7, &var_3b18, eax_20, ecx_31))))
                        uint128_t i_2 = zx.o(i_1)
                        float xmm0_5 = _mm_cvtepi32_ps(zx.o(ecx_22))
                        float xmm1_6 = _mm_cvtepi32_ps(i_2) * 0.400000006f + xmm0_5 * 0.200000003f
                            + _mm_cvtepi32_ps(zx.o(ecx_26))
                            + _mm_cvtepi32_ps(zx.o(eax_37 - eax_39 - eax_38 + eax_36)) * 1.60000002f
                            + var_3b30
                        
                        if (xmm1_6 f<= *arg7)
                            esi_3 = var_3b20_2
                            ebx = eax_19
                        else
                            ebx = eax_19
                            esi_3 = var_3b20_2
                            *arg7 = xmm1_6
                            *arg6 = ebx
                    else
                        void var_3ba0
                        sub_4312d0(&var_3ba0, &var_3b18, eax_22, eax_19, arg6, arg7, arg8 + 1, 
                            var_3b4c.d, arg10, arg11, &var_1810 + edi_2, arg12, eax_23)
                        ebx = eax_19
                else
                    while (i != *eax_25)
                        eax_25 = eax_25[2]
                        
                        if (eax_25 == 0)
                            goto label_431593
                    
                    if (eax_25 == 0xfffffffc)
                        goto label_431593
                    
                    *arg11 += 1
                    esi_3 = var_3b20_2
                    ebx = eax_19
                
                edi = var_3b24
                esi_3 += 1
                ecx_4 = arg5
                var_3b20_2 = esi_3
                
                if (esi_3 s>= var_3b1c)
                    goto label_431684
        
        ecx_17 = eax_32 * 3
    else
        void var_1808
        void* ebx_1 = &var_1808
        int32_t ecx_5 = eax_9
        
        while (true)
            uint32_t eax_10 = *(ebx_1 - 4)
            uint32_t var_1a68[0xb][0x4]
            bool cond:1_1
            
            if (eax_10 == 0)
                int32_t var_18d8
                __builtin_memcpy(&var_18d8, 
                    sub_42eb10(&var_1a68, edi[1], esi, &var_1a68, (*ebx_1).w, eax_10), 0xc8)
                int32_t var_1818
                
                if (var_1818 == 0)
                label_431640:
                    ecx_17 = var_3b20_1 * 3
                    break
                
                char var_1814
                
                if (var_1814 == 0)
                    int32_t ecx_7 = 0
                    
                    if (var_1818 s> 0)
                        void var_18d4
                        void* eax_13 = &var_18d4
                        
                        do
                            if (*(eax_13 - 4) == 0 && *eax_13 == 0)
                                goto label_431640
                            
                            ecx_7 += 1
                            eax_13 += 0xc
                        while (ecx_7 s< var_1818)
                    
                    if (var_1818 != 1)
                        goto label_431498
                    
                    cond:1_1 = var_18d8 == var_1818
                label_431492:
                    
                    if (cond:1_1)
                        goto label_431640
                    
                    goto label_431498
                
            label_431498:
                ecx_5 = var_3b1c
                esi = var_3b2c
                edi = var_3b24
            else if (eax_10 == 1)
                int32_t var_19a0
                __builtin_memcpy(&var_19a0, 
                    sub_42eb10(&var_1a68, edi[1], esi, &var_1a68, (*ebx_1).w, eax_10), 0xc8)
                int32_t var_18e0
                
                if (var_18e0 == 0)
                    goto label_431640
                
                char var_18dc
                
                if (var_18dc != 0)
                    goto label_431498
                
                int32_t ecx_9 = 0
                
                if (var_18e0 s> 0)
                    void var_199c
                    void* eax_16 = &var_199c
                    
                    do
                        if (*(eax_16 - 4) == 0 && *eax_16 == 0)
                            goto label_431640
                        
                        ecx_9 += 1
                        eax_16 += 0xc
                    while (ecx_9 s< var_18e0)
                
                if (var_18e0 != 1)
                    goto label_431498
                
                cond:1_1 = var_19a0 == var_18e0
                goto label_431492
            ebx_1 += 0x30
            int32_t eax_18 = var_3b20_1 + 1
            var_3b20_1 = eax_18
            
            if (eax_18 s>= ecx_5)
                eax_9 = var_3b1c
                goto label_4314ce
    
    int32_t ecx_18 = ecx_17 * 2
    *arg2 = *(&var_1810 + (ecx_18 << 3))
    void var_1800
    arg2[1] = *(&var_1800 + (ecx_18 << 3))
    int128_t var_17f0[0x17a]
    arg2[2] = *(&var_17f0 + (ecx_18 << 3))
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return arg2
}
