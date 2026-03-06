// 函数名称: sub_4ec890
// 虚拟地址: 0x4ec890
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_4ec890(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t edx = arg3
    int32_t edx = arg3
    int32_t var_54 = edx
    int32_t* ecx = arg4[3]
    int32_t* var_6c = nullptr
    uint128_t var_30_1
    __builtin_memset(&var_30_1, 0, 0x18)
    int32_t var_58 = 0
    
    if (ecx != 0)
        int64_t var_20
        arg1 = var_20:4.d
        int32_t var_68_1 = arg1
        
        while (true)
            if (ecx != 0)
                int32_t* ecx_1 = ecx[2]
                int32_t ecx_2 = *ecx
                int32_t edx_1 = edx + ecx_2
                int32_t eax_1 = ecx[1]
                int32_t ecx_4 = arg2 + eax_1
                arg1 = arg4[0x10]
                int32_t* edx_4
                
                if (edx_1 s> arg1 || ecx_4 s> arg1)
                label_4ec9e0:
                    edx_4 = var_6c
                else
                    int32_t edi_1 = 0
                    
                    if (edx_1 s> arg4[9] || ecx_4 s> arg4[0xa])
                        edi_1 = ecx_4 * edx_1
                    
                    if (var_6c == 0)
                    label_4ec955:
                        int32_t eax_2 = arg4[0x14]
                        int32_t edx_2 = edx_1 + eax_2
                        int32_t eax_3 = eax_2 + ecx_4
                        int32_t var_38_1 = edx_2
                        int128_t* i = *arg4
                        int32_t var_3c_1 = eax_1
                        int32_t var_34_1 = eax_3
                        
                        while (i != 0)
                            int128_t xmm0_1 = *i
                            i = i[1].d
                            
                            if (xmm0_1 s< edx_2 && xmm0_1:4.d s< eax_3)
                                arg1 = ecx_2
                                
                                if (xmm0_1:8.d s> arg1 && xmm0_1:0xc.d s> eax_1)
                                    goto label_4ec9e0_2
                        
                        uint128_t xmm0_2 = ecx_2.o
                        edx_4 = ecx
                        arg1 = xmm0_2.q:4.d
                        var_6c = edx_4
                        var_30_1 = xmm0_2
                        var_58 = edi_1
                        var_68_1 = arg1
                    else
                        arg1 = var_58
                        
                        if (arg1 s< edi_1)
                        label_4ec9e0_1:
                            edx_4 = var_6c
                        else
                            if (arg1 != edi_1)
                                goto label_4ec955
                            
                            arg1 = var_68_1
                            
                            if (arg1 s> eax_1)
                                goto label_4ec955
                            
                        label_4ec9e0_2:
                            edx_4 = var_6c
                
                ecx = ecx_1
                
                if (ecx != 0)
                    edx = var_54
                    continue
                else
                    if (edx_4 == 0)
                        break
                    
                    void* ecx_7 = edx_4[3]
                    int32_t eax_6 = edx_4[2]
                    
                    if (ecx_7 == 0)
                        arg4[3] = eax_6
                    else
                        *(ecx_7 + 8) = eax_6
                    
                    void* ecx_8 = edx_4[2]
                    int32_t eax_7 = edx_4[3]
                    
                    if (ecx_8 == 0)
                        arg4[4] = eax_7
                    else
                        *(ecx_8 + 0xc) = eax_7
                    
                    arg4[5] -= 1
                    sub_45d050(var_6c, 0x10)
                    int32_t xmm0_4 = _mm_bsrli_si128(var_30_1, 8)
                    int32_t* eax_8 = sub_45cfa0(0x10)
                    eax_8[3] += 1
                    int32_t* ecx_10 = *eax_8
                    
                    if (ecx_10 == 0)
                        sub_45ce30(eax_8)
                        ecx_10 = *eax_8
                    
                    *eax_8 = *ecx_10
                    ecx_10[3] = 0
                    *ecx_10 = xmm0_4
                    ecx_10[1] = var_68_1
                    ecx_10[2] = 0
                    ecx_10[3] = arg4[4]
                    void* eax_13 = arg4[4]
                    
                    if (eax_13 == 0)
                        arg4[3] = ecx_10
                    else
                        *(eax_13 + 8) = ecx_10
                    
                    uint128_t xmm0_5 = var_30_1
                    arg4[5] += 1
                    int32_t var_58_1 = xmm0_5
                    arg4[4] = ecx_10
                    int32_t xmm0_6 = _mm_bsrli_si128(xmm0_5, 0xc)
                    int32_t* eax_14 = sub_45cfa0(0x10)
                    eax_14[3] += 1
                    int32_t* ecx_12 = *eax_14
                    
                    if (ecx_12 == 0)
                        sub_45ce30(eax_14)
                        ecx_12 = *eax_14
                    
                    *eax_14 = *ecx_12
                    ecx_12[3] = 0
                    *ecx_12 = var_58_1
                    ecx_12[1] = xmm0_6
                    ecx_12[2] = 0
                    ecx_12[3] = arg4[4]
                    void* eax_19 = arg4[4]
                    
                    if (eax_19 == 0)
                        arg4[3] = ecx_12
                    else
                        *(eax_19 + 8) = ecx_12
                    
                    arg4[5] += 1
                    arg4[4] = ecx_12
                    uint128_t** eax_20 = sub_45cfa0(0x18)
                    eax_20[3] += 1
                    uint128_t* ecx_14 = *eax_20
                    
                    if (ecx_14 == 0)
                        sub_45ce30(eax_20)
                        ecx_14 = *eax_20
                    
                    *eax_20 = *ecx_14
                    *(ecx_14 + 0x14) = 0
                    *ecx_14 = var_30_1
                    ecx_14[1].d = 0
                    *(ecx_14 + 0x14) = arg4[1]
                    void* eax_23 = arg4[1]
                    
                    if (eax_23 == 0)
                        *arg4 = ecx_14
                    else
                        *(eax_23 + 0x10) = ecx_14
                    
                    arg4[2] += 1
                    arg4[1] = ecx_14
                    int32_t eax_24 = arg4[9]
                    int32_t ecx_17 = var_54 + var_58_1
                    
                    if (eax_24 s<= ecx_17)
                        eax_24 = ecx_17
                    
                    arg4[9] = eax_24
                    int32_t ecx_19 = arg2 + var_68_1
                    int32_t eax_25 = arg4[0xa]
                    
                    if (eax_25 s<= ecx_19)
                        eax_25 = ecx_19
                    
                    arg4[0xa] = eax_25
                    *arg5 = var_58_1
                    arg5[1] = var_68_1
                    arg1 = arg4[2] & 0x8000003f
                    bool cond:1_1 = arg1 != 0
                    
                    if (arg1 s< 0)
                        int32_t eax_29 = (arg1 - 1) | 0xffffffc0
                        arg1 = eax_29 + 1
                        cond:1_1 = eax_29 != 0xffffffff
                    
                    int32_t* edi_7
                    
                    if (not(cond:1_1))
                        edi_7 = arg4[3]
                    
                    if (cond:1_1 || edi_7 == 0)
                    label_4ecc6e:
                        arg1.b = 1
                        return arg1
                    
                    while (true)
                        int32_t* var_58_2 = edi_7
                        
                        if (edi_7 == 0)
                            break
                        
                        int32_t* eax_30 = edi_7
                        int32_t* ecx_20 = &edi_7[2]
                        edi_7 = *ecx_20
                        int32_t ecx_21 = eax_30[1]
                        int32_t edx_6 = *eax_30
                        int32_t eax_31 = arg4[0x14]
                        arg1 = eax_31 + ecx_21 + 1
                        int128_t* i_1 = *arg4
                        int32_t var_48_2 = arg1
                        
                        while (i_1 != 0)
                            int128_t xmm0_7 = *i_1
                            i_1 = i_1[1].d
                            arg1 = xmm0_7
                            
                            if (arg1 s< eax_31 + 1 + edx_6)
                                arg1 = var_48_2
                                
                                if (xmm0_7:4.d s< arg1 && xmm0_7:8.d s> edx_6)
                                    arg1 = ecx_21
                                    
                                    if (xmm0_7:0xc.d s> arg1)
                                        void* ecx_26 = var_58_2[3]
                                        int32_t eax_33 = *ecx_20
                                        
                                        if (ecx_26 == 0)
                                            arg4[3] = eax_33
                                        else
                                            *(ecx_26 + 8) = eax_33
                                        
                                        void* ecx_27 = *ecx_20
                                        int32_t eax_35 = var_58_2[3]
                                        
                                        if (ecx_27 == 0)
                                            arg4[4] = eax_35
                                        else
                                            *(ecx_27 + 0xc) = eax_35
                                        
                                        arg4[5] -= 1
                                        arg1 = sub_45d050(var_58_2, 0x10)
                                        break
                        
                        if (edi_7 == 0)
                            goto label_4ecc6e
            
            sub_44e4d0(arg1, &data_5559b1, "iter != NULL", "c:\ax2017\engine\xlist.h", 0x1a1, 
                "XList<struct Vec2I>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    arg1.b = 0
    return arg1
}
