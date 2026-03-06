// 函数名称: sub_49a5f0
// 虚拟地址: 0x49a5f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_49a5f0(int32_t arg1, void* arg2, void* arg3, float* arg4)
{
    // 第一条实际指令: void var_78
    void var_78
    int32_t eax_1 = __security_cookie ^ &var_78
    __builtin_memcpy(arg4, arg2, 0x68)
    void* esi_1 = arg3
    int32_t eax_4 = sub_4459f0(**(esi_1 + 0x2e4))
    void* result_1 = *(esi_1 + 0x2dc) * 0x134 + *eax_4
    int32_t* eax_6 = sub_4459f0(**(esi_1 + 0x2e4))
    void* eax_8
    
    if (*(*(esi_1 + 0x2dc) * 0x134 + *eax_6 + 0xd9) == 0)
        eax_8 = arg2 + 0x68
    else
        eax_8 = esi_1 + 0x2a8
    
    int128_t var_40
    sub_4a0490(eax_8, esi_1 + 0x288, &var_40, eax_8)
    int32_t i = 0
    void* result = result_1
    *(arg4 + 0x68) = var_40
    int32_t i_1 = 0
    int128_t var_30
    *(arg4 + 0x78) = var_30
    
    if (*(result + 0x118) s> 0)
        do
            int32_t edx_1 = *(result + 0x11c)
            int16_t top
            int16_t top_1 = top - 1
            unimplemented  {fld st0, qword [0x59daa8]}
            int32_t eax_10 = *(edx_1 + (i << 3))
            
            if (eax_10 - 0x1f u> 0x34)
            label_49b5aa:
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                top = top_1 + 1
            else
                switch (eax_10 + &jump_table_49b618[0x10]:1)
                    case &lookup_table_49b678
                        int32_t* eax_207 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_57
                        bool p_28
                        
                        if (eax_207[1] == 1)
                            int32_t* eax_208 = *eax_207
                            xmm0_57 = *eax_208
                            float temp14_1 = eax_208[1]
                            xmm0_57 - temp14_1
                            eax_208:1.b = (xmm0_57 == temp14_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_57, temp14_1) ? 1 : 0) << 2
                                | (xmm0_57 < temp14_1 ? 1 : 0)
                            p_28 = unimplemented  {test ah, 0x44}
                        
                        if (eax_207[1] != 1 || p_28)
                            int32_t eax_211 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_104 = (eax_211 << 0xf) + not.d(eax_211)
                            int32_t ecx_105 = (ecx_104 u>> 0xc ^ ecx_104) * 5
                            int32_t eax_219 = (ecx_105 u>> 4 ^ ecx_105) * 0x809
                            xmm0_57 = sub_4e0380(eax_207, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_219 u>> 0x10 ^ eax_219) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[4] = xmm0_57 + arg4[4]
                    case &lookup_table_49b678[1]
                        int32_t* eax_220 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_59
                        bool p_30
                        
                        if (eax_220[1] == 1)
                            int32_t* eax_221 = *eax_220
                            xmm0_59 = *eax_221
                            float temp15_1 = eax_221[1]
                            xmm0_59 - temp15_1
                            eax_221:1.b = (xmm0_59 == temp15_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_59, temp15_1) ? 1 : 0) << 2
                                | (xmm0_59 < temp15_1 ? 1 : 0)
                            p_30 = unimplemented  {test ah, 0x44}
                        
                        if (eax_220[1] != 1 || p_30)
                            int32_t eax_224 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_109 = (eax_224 << 0xf) + not.d(eax_224)
                            int32_t ecx_110 = (ecx_109 u>> 0xc ^ ecx_109) * 5
                            int32_t eax_232 = (ecx_110 u>> 4 ^ ecx_110) * 0x809
                            xmm0_59 = sub_4e0380(eax_220, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_232 u>> 0x10 ^ eax_232) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[5] = xmm0_59 + arg4[5]
                    case &lookup_table_49b678[2]
                        int32_t* eax_233 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_61
                        bool p_32
                        
                        if (eax_233[1] == 1)
                            int32_t* eax_234 = *eax_233
                            xmm0_61 = *eax_234
                            float temp16_1 = eax_234[1]
                            xmm0_61 - temp16_1
                            eax_234:1.b = (xmm0_61 == temp16_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_61, temp16_1) ? 1 : 0) << 2
                                | (xmm0_61 < temp16_1 ? 1 : 0)
                            p_32 = unimplemented  {test ah, 0x44}
                        
                        if (eax_233[1] != 1 || p_32)
                            int32_t eax_237 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_114 = (eax_237 << 0xf) + not.d(eax_237)
                            int32_t ecx_115 = (ecx_114 u>> 0xc ^ ecx_114) * 5
                            int32_t eax_245 = (ecx_115 u>> 4 ^ ecx_115) * 0x809
                            xmm0_61 = sub_4e0380(eax_233, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_245 u>> 0x10 ^ eax_245) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[6] = xmm0_61 + arg4[6]
                    case &lookup_table_49b678[3], &lookup_table_49b678[4], &lookup_table_49b678[5], 
                            &lookup_table_49b678[6], &lookup_table_49b678[7], &lookup_table_49b678[8], 
                            &lookup_table_49b678[9], &lookup_table_49b678[0xa], 
                            &lookup_table_49b678[0xb], &lookup_table_49b678[0xc], 
                            &lookup_table_49b678[0xd], &lookup_table_49b678[0xe], 
                            &lookup_table_49b678[0xf], &lookup_table_49b678[0x10], 
                            &lookup_table_49b678[0x11], &lookup_table_49b678[0x12], 
                            &lookup_table_49b678[0x13], &lookup_table_49b678[0x14], 
                            &lookup_table_49b678[0x15], &lookup_table_49b678[0x16], 
                            &lookup_table_49b678[0x17], &lookup_table_49b678[0x18], 
                            &lookup_table_49b678[0x19], &lookup_table_49b678[0x1d], 
                            &lookup_table_49b678[0x2c], &lookup_table_49b678[0x2d], 
                            &lookup_table_49b678[0x2e], &lookup_table_49b678[0x2f], 
                            &lookup_table_49b678[0x30], &lookup_table_49b678[0x31]
                        goto label_49b5aa
                    case &lookup_table_49b678[0x1a]
                        int32_t* esi_3 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_66 = sub_4e0380(esi_3, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        int32_t xmm0_67 = sub_4e0380(esi_3, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        esi_1 = arg3
                        i = i_1
                        arg4[0x11] = xmm0_66
                        arg4[0x12] = xmm0_67
                    case &lookup_table_49b678[0x1b]
                        int32_t* esi_4 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_68 = sub_4e0380(esi_4, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        int32_t xmm0_69 = sub_4e0380(esi_4, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        esi_1 = arg3
                        i = i_1
                        arg4[0x13] = xmm0_68
                        arg4[0x14] = xmm0_69
                    case &lookup_table_49b678[0x1c]
                        int32_t* esi_5 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_70 = sub_4e0380(esi_5, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        int32_t xmm0_71 = sub_4e0380(esi_5, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        esi_1 = arg3
                        i = i_1
                        arg4[0x15] = xmm0_70
                        arg4[0x16] = xmm0_71
                    case &lookup_table_49b678[0x1e]
                        int32_t* eax_13 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm2_1
                        bool p_2
                        
                        if (eax_13[1] == 1)
                            int32_t* eax_14 = *eax_13
                            xmm2_1 = *eax_14
                            float temp1_1 = eax_14[1]
                            xmm2_1 - temp1_1
                            eax_14:1.b = (xmm2_1 == temp1_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_1, temp1_1) ? 1 : 0) << 2
                                | (xmm2_1 < temp1_1 ? 1 : 0)
                            p_2 = unimplemented  {test ah, 0x44}
                        
                        if (eax_13[1] != 1 || p_2)
                            int32_t eax_17 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_7 = (eax_17 << 0xf) + not.d(eax_17)
                            int32_t ecx_8 = (ecx_7 u>> 0xc ^ ecx_7) * 5
                            int32_t eax_25 = (ecx_8 u>> 4 ^ ecx_8) * 0x809
                            i = i_1
                            xmm2_1 = sub_4e0380(eax_13, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_25 u>> 0x10 ^ eax_25) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        float xmm0_3 = arg4[2] * xmm2_1
                        *arg4 = *arg4 * xmm2_1
                        float xmm1_5 = arg4[1] * xmm2_1
                        arg4[2] = xmm0_3
                        arg4[1] = xmm1_5
                    case &lookup_table_49b678[0x1f]
                        int32_t* eax_26 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_4
                        bool p_4
                        
                        if (eax_26[1] == 1)
                            int32_t* eax_27 = *eax_26
                            xmm0_4 = *eax_27
                            float temp2_1 = eax_27[1]
                            xmm0_4 - temp2_1
                            eax_27:1.b = (xmm0_4 == temp2_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, temp2_1) ? 1 : 0) << 2
                                | (xmm0_4 < temp2_1 ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        if (eax_26[1] != 1 || p_4)
                            int32_t eax_30 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_12 = (eax_30 << 0xf) + not.d(eax_30)
                            int32_t ecx_13 = (ecx_12 u>> 0xc ^ ecx_12) * 5
                            int32_t eax_38 = (ecx_13 u>> 4 ^ ecx_13) * 0x809
                            xmm0_4 = sub_4e0380(eax_26, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_38 u>> 0x10 ^ eax_38) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        *arg4 = *arg4 * xmm0_4
                    case &lookup_table_49b678[0x20]
                        int32_t* eax_39 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_5
                        bool p_6
                        
                        if (eax_39[1] == 1)
                            int32_t* eax_40 = *eax_39
                            xmm0_5 = *eax_40
                            float temp3_1 = eax_40[1]
                            xmm0_5 - temp3_1
                            eax_40:1.b = (xmm0_5 == temp3_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_5, temp3_1) ? 1 : 0) << 2
                                | (xmm0_5 < temp3_1 ? 1 : 0)
                            p_6 = unimplemented  {test ah, 0x44}
                        
                        if (eax_39[1] != 1 || p_6)
                            int32_t eax_43 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_17 = (eax_43 << 0xf) + not.d(eax_43)
                            int32_t ecx_18 = (ecx_17 u>> 0xc ^ ecx_17) * 5
                            int32_t eax_51 = (ecx_18 u>> 4 ^ ecx_18) * 0x809
                            xmm0_5 = sub_4e0380(eax_39, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_51 u>> 0x10 ^ eax_51) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[1] = arg4[1] * xmm0_5
                    case &lookup_table_49b678[0x21]
                        int32_t* eax_52 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_6
                        bool p_8
                        
                        if (eax_52[1] == 1)
                            int32_t* eax_53 = *eax_52
                            xmm0_6 = *eax_53
                            float temp4_1 = eax_53[1]
                            xmm0_6 - temp4_1
                            eax_53:1.b = (xmm0_6 == temp4_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_6, temp4_1) ? 1 : 0) << 2
                                | (xmm0_6 < temp4_1 ? 1 : 0)
                            p_8 = unimplemented  {test ah, 0x44}
                        
                        if (eax_52[1] != 1 || p_8)
                            int32_t eax_56 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_22 = (eax_56 << 0xf) + not.d(eax_56)
                            int32_t ecx_23 = (ecx_22 u>> 0xc ^ ecx_22) * 5
                            int32_t eax_64 = (ecx_23 u>> 4 ^ ecx_23) * 0x809
                            xmm0_6 = sub_4e0380(eax_52, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_64 u>> 0x10 ^ eax_64) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[2] = arg4[2] * xmm0_6
                    case &lookup_table_49b678[0x22]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        int32_t eax_66 = *(esi_1 + 0x2c) + 1
                        int32_t ecx_27 = (eax_66 << 0xf) + not.d(eax_66)
                        int32_t ecx_28 = (ecx_27 u>> 0xc ^ ecx_27) * 5
                        int32_t eax_74 = (ecx_28 u>> 4 ^ ecx_28) * 0x809
                        float xmm0_12 = sub_4145d0(((((eax_74 u>> 0x10 ^ eax_74) & 0x7fffff)
                            | 0x3f800000) - 1f) * 6.28318548f f+ *(esi_1 + 0x28)) + 1.75691366f
                        *arg4 = sub_4145d0(xmm0_12) * *arg4
                        i = i_1
                        arg4[1] = sub_4145b0(xmm0_12) * arg4[1]
                    case &lookup_table_49b678[0x23]
                        float** eax_88 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_20
                        bool p_12
                        
                        if (eax_88[1] == 1)
                            float* eax_89 = *eax_88
                            xmm0_20 = *eax_89
                            float temp6_1 = eax_89[1]
                            xmm0_20 - temp6_1
                            eax_89:1.b = (xmm0_20 == temp6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_20, temp6_1) ? 1 : 0) << 2
                                | (xmm0_20 < temp6_1 ? 1 : 0)
                            p_12 = unimplemented  {test ah, 0x44}
                        
                        if (eax_88[1] != 1 || p_12)
                            int32_t eax_92 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_41 = (eax_92 << 0xf) + not.d(eax_92)
                            int32_t ecx_42 = (ecx_41 u>> 0xc ^ ecx_41) * 5
                            int32_t eax_100 = (ecx_42 u>> 4 ^ ecx_42) * 0x809
                            xmm0_20 = sub_4e0380(eax_88, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_100 u>> 0x10 ^ eax_100) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[9] = xmm0_20 * arg4[9]
                    case &lookup_table_49b678[0x24]
                        float** eax_101 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_22
                        bool p_14
                        
                        if (eax_101[1] == 1)
                            float* eax_102 = *eax_101
                            xmm0_22 = *eax_102
                            float temp7_1 = eax_102[1]
                            xmm0_22 - temp7_1
                            eax_102:1.b = (xmm0_22 == temp7_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_22, temp7_1) ? 1 : 0) << 2
                                | (xmm0_22 < temp7_1 ? 1 : 0)
                            p_14 = unimplemented  {test ah, 0x44}
                        
                        if (eax_101[1] != 1 || p_14)
                            int32_t eax_105 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_46 = (eax_105 << 0xf) + not.d(eax_105)
                            int32_t ecx_47 = (ecx_46 u>> 0xc ^ ecx_46) * 5
                            int32_t eax_113 = (ecx_47 u>> 4 ^ ecx_47) * 0x809
                            xmm0_22 = sub_4e0380(eax_101, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_113 u>> 0x10 ^ eax_113) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[0xa] = xmm0_22 * arg4[0xa]
                    case &lookup_table_49b678[0x25]
                        float** eax_114 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_24
                        bool p_16
                        
                        if (eax_114[1] == 1)
                            float* eax_115 = *eax_114
                            xmm0_24 = *eax_115
                            float temp8_1 = eax_115[1]
                            xmm0_24 - temp8_1
                            eax_115:1.b = (xmm0_24 == temp8_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_24, temp8_1) ? 1 : 0) << 2
                                | (xmm0_24 < temp8_1 ? 1 : 0)
                            p_16 = unimplemented  {test ah, 0x44}
                        
                        if (eax_114[1] != 1 || p_16)
                            int32_t eax_118 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_51 = (eax_118 << 0xf) + not.d(eax_118)
                            int32_t ecx_52 = (ecx_51 u>> 0xc ^ ecx_51) * 5
                            int32_t eax_126 = (ecx_52 u>> 4 ^ ecx_52) * 0x809
                            xmm0_24 = sub_4e0380(eax_114, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_126 u>> 0x10 ^ eax_126) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[0xb] = xmm0_24 * arg4[0xb]
                    case &lookup_table_49b678[0x26]
                        float** eax_127 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_26
                        bool p_18
                        
                        if (eax_127[1] == 1)
                            float* eax_128 = *eax_127
                            xmm0_26 = *eax_128
                            float temp9_1 = eax_128[1]
                            xmm0_26 - temp9_1
                            eax_128:1.b = (xmm0_26 == temp9_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_26, temp9_1) ? 1 : 0) << 2
                                | (xmm0_26 < temp9_1 ? 1 : 0)
                            p_18 = unimplemented  {test ah, 0x44}
                        
                        if (eax_127[1] != 1 || p_18)
                            int32_t eax_131 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_56 = (eax_131 << 0xf) + not.d(eax_131)
                            int32_t ecx_57 = (ecx_56 u>> 0xc ^ ecx_56) * 5
                            int32_t eax_139 = (ecx_57 u>> 4 ^ ecx_57) * 0x809
                            xmm0_26 = sub_4e0380(eax_127, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_139 u>> 0x10 ^ eax_139) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[0xc] = xmm0_26 * arg4[0xc]
                    case &lookup_table_49b678[0x27]
                        float** eax_140 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_28
                        bool p_20
                        
                        if (eax_140[1] == 1)
                            float* eax_141 = *eax_140
                            xmm0_28 = *eax_141
                            float temp10_1 = eax_141[1]
                            xmm0_28 - temp10_1
                            eax_141:1.b = (xmm0_28 == temp10_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_28, temp10_1) ? 1 : 0) << 2
                                | (xmm0_28 < temp10_1 ? 1 : 0)
                            p_20 = unimplemented  {test ah, 0x44}
                        
                        if (eax_140[1] != 1 || p_20)
                            int32_t eax_144 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_61 = (eax_144 << 0xf) + not.d(eax_144)
                            int32_t ecx_62 = (ecx_61 u>> 0xc ^ ecx_61) * 5
                            int32_t eax_152 = (ecx_62 u>> 4 ^ ecx_62) * 0x809
                            xmm0_28 = sub_4e0380(eax_140, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_152 u>> 0x10 ^ eax_152) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[0x10] = xmm0_28 * arg4[0x10]
                    case &lookup_table_49b678[0x28]
                        float** eax_168 = *(edx_1 + (i << 3) + 4)
                        float xmm0_50
                        bool p_22
                        
                        if (eax_168[1] == 1)
                            float* eax_169 = *eax_168
                            xmm0_50 = *eax_169
                            float temp11_1 = eax_169[1]
                            xmm0_50 - temp11_1
                            eax_169:1.b = (xmm0_50 == temp11_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_50, temp11_1) ? 1 : 0) << 2
                                | (xmm0_50 < temp11_1 ? 1 : 0)
                            p_22 = unimplemented  {test ah, 0x44}
                        
                        if (eax_168[1] != 1 || p_22)
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            int32_t eax_172 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_89 = (eax_172 << 0xf) + not.d(eax_172)
                            int32_t ecx_90 = (ecx_89 u>> 0xc ^ ecx_89) * 5
                            int32_t eax_180 = (ecx_90 u>> 4 ^ ecx_90) * 0x809
                            xmm0_50 = sub_4e0380(eax_168, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_180 u>> 0x10 ^ eax_180) & 0x7fffff) | 0x3f800000) - 1f)
                            unimplemented  {fld st0, qword [0x59daa8]}
                        
                        float xmm0_51 = xmm0_50 + arg4[0xd]
                        float** var_68_16
                        var_68_16.q = fconvert.d(xmm0_51)
                        unimplemented  {fld st0, qword [esp+0x18]}
                        unimplemented  {fxch st0, st1}
                        unimplemented  {fxch st0, st1}
                        sub_53c580()
                        float var_70_4 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                        unimplemented  {fstp dword [esp+0x10], st0}
                        top = top_1
                        float xmm0_52 = var_70_4
                        
                        if (not(0f <= xmm0_51))
                            xmm0_52 = xmm0_52 + 360f
                        
                        i = i_1
                        arg4[0xd] = xmm0_52
                        arg4[0x19].b = 1
                    case &lookup_table_49b678[0x29]
                        int32_t* eax_181 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_53
                        bool p_24
                        
                        if (eax_181[1] == 1)
                            int32_t* eax_182 = *eax_181
                            xmm0_53 = *eax_182
                            float temp12_1 = eax_182[1]
                            xmm0_53 - temp12_1
                            eax_182:1.b = (xmm0_53 == temp12_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_53, temp12_1) ? 1 : 0) << 2
                                | (xmm0_53 < temp12_1 ? 1 : 0)
                            p_24 = unimplemented  {test ah, 0x44}
                        
                        if (eax_181[1] != 1 || p_24)
                            int32_t eax_185 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_94 = (eax_185 << 0xf) + not.d(eax_185)
                            int32_t ecx_95 = (ecx_94 u>> 0xc ^ ecx_94) * 5
                            int32_t eax_193 = (ecx_95 u>> 4 ^ ecx_95) * 0x809
                            xmm0_53 = sub_4e0380(eax_181, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_193 u>> 0x10 ^ eax_193) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[0x19].b = 1
                        arg4[0xe] = xmm0_53 + arg4[0xe]
                    case &lookup_table_49b678[0x2a]
                        int32_t* eax_194 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_55
                        bool p_26
                        
                        if (eax_194[1] == 1)
                            int32_t* eax_195 = *eax_194
                            xmm0_55 = *eax_195
                            float temp13_1 = eax_195[1]
                            xmm0_55 - temp13_1
                            eax_195:1.b = (xmm0_55 == temp13_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_55, temp13_1) ? 1 : 0) << 2
                                | (xmm0_55 < temp13_1 ? 1 : 0)
                            p_26 = unimplemented  {test ah, 0x44}
                        
                        if (eax_194[1] != 1 || p_26)
                            int32_t eax_198 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_99 = (eax_198 << 0xf) + not.d(eax_198)
                            int32_t ecx_100 = (ecx_99 u>> 0xc ^ ecx_99) * 5
                            int32_t eax_206 = (ecx_100 u>> 4 ^ ecx_100) * 0x809
                            xmm0_55 = sub_4e0380(eax_194, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_206 u>> 0x10 ^ eax_206) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[0x19].b = 1
                        arg4[0xf] = xmm0_55 * arg4[0xf]
                    case &lookup_table_49b678[0x2b]
                        char* eax_153 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        
                        if (eax_153 != 0)
                            int32_t mxcsr_1
                            int16_t x87control_1
                            mxcsr_1, x87control_1 = sub_48e9d0(eax_153, &var_40)
                            float xmm2_2 = *(esi_1 + 0x2e8)
                            int32_t eax_154 = *(edx_1 + (i_1 << 3))
                            int32_t ecx_68 = (*(esi_1 + 0x2c) + eax_154) * eax_154
                            int32_t edx_66 = (ecx_68 << 0xf) + not.d(ecx_68)
                            int32_t ecx_70 = (edx_66 u>> 0xc ^ edx_66) * 5
                            int32_t eax_161 = (ecx_70 u>> 4 ^ ecx_70) * 0x809
                            float xmm1_22 =
                                (((eax_161 u>> 0x10 ^ eax_161) & 0x7fffff) | 0x3f800000) - 1f
                            int32_t var_88_1
                            char const* const ecx_130
                            
                            if (xmm2_2 < 0f || 1f <= xmm2_2)
                                char const* const var_84_2 = "ImageSampleNearestAt"
                                var_88_1 = 0x684
                                ecx_130 = "uv.x >= 0.0 && uv.x < 1.0f"
                            label_49b5fc:
                                sub_44e4d0(eax_161, &data_5559b1, ecx_130, 
                                    "c:\ax2017\engine\particle.cpp", var_88_1, "ImageSampleNearestAt")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            if (xmm1_22 f< 0 || 1f <= xmm1_22)
                                char const* const var_84_1 = "ImageSampleNearestAt"
                                var_88_1 = 0x685
                                ecx_130 = "uv.y >= 0.0 && uv.y < 1.0f"
                                goto label_49b5fc
                            
                            float var_58
                            var_58.q = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(var_40:4.d)) * xmm2_2)
                            unimplemented  {fld st0, qword [esp+0x30]}
                            int32_t var_88
                            var_88.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                            unimplemented  {fstp qword [esp], st0}
                            int16_t x87control_2 = sub_53ea80(mxcsr_1, x87control_1, var_88)
                            unimplemented  {call 0x53ea80}
                            float var_68_14 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                            unimplemented  {fstp dword [esp+0x20], st0}
                            float xmm0_35
                            
                            if (0 f<= var_68_14)
                                xmm0_35 = var_68_14 + 0.5f
                            else
                                xmm0_35 = var_68_14 - 0.5f
                            
                            var_68_14.q = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(var_40:8.d)) * xmm1_22)
                            unimplemented  {fld st0, qword [esp+0x20]}
                            var_88.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                            unimplemented  {fstp qword [esp], st0}
                            sub_53ea80(mxcsr_1, x87control_2, var_88)
                            unimplemented  {call 0x53ea80}
                            float var_68_15 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                            unimplemented  {fstp dword [esp+0x20], st0}
                            float xmm0_41
                            
                            if (0 f<= var_68_15)
                                xmm0_41 = var_68_15 + 0.5f
                            else
                                xmm0_41 = var_68_15 - 0.5f
                            
                            int32_t eax_164 = sub_4dd620(var_30.d) * int.d(xmm0_35)
                            char* eax_166 = sub_4dd8c0(
                                int.d(fconvert.t(xmm0_41)) * var_40:0xc.d + eax_164 + var_40.d, 
                                var_30.d)
                            esi_1 = arg3
                            float xmm3_23 = _mm_cvtepi32_ps(zx.o(eax_166.b)) / 255f
                            float xmm0_44 = _mm_cvtepi32_ps(zx.o((eax_166 u>> 8).b)) / 255f
                            i = i_1
                            float xmm2_5 = _mm_cvtepi32_ps(zx.o((eax_166 u>> 0x10).b)) / 255f
                            float xmm1_24 = _mm_cvtepi32_ps(zx.o(eax_166 u>> 0x18))
                            var_58 = xmm3_23
                            arg4[9] = xmm3_23 * arg4[9]
                            float var_54_1 = xmm0_44
                            arg4[0xa] = xmm0_44 * arg4[0xa]
                            arg4[0xb] = arg4[0xb] * xmm2_5
                            arg4[0xc] = arg4[0xc] * xmm1_24 / 255f
                    case &lookup_table_49b678[0x32]
                        int32_t* esi_2 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_63 = sub_4e0380(esi_2, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        float xmm0_65 =
                            sub_4e0380(esi_2, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f) + arg4[8]
                        esi_1 = arg3
                        i = i_1
                        arg4[7] = arg4[7] + xmm0_63
                        arg4[8] = xmm0_65
                    case &lookup_table_49b678[0x33]
                        int32_t* eax_75 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_18
                        bool p_10
                        
                        if (eax_75[1] == 1)
                            float* eax_76 = *eax_75
                            xmm0_18 = *eax_76
                            float temp5_1 = eax_76[1]
                            xmm0_18 - temp5_1
                            eax_76:1.b = (xmm0_18 == temp5_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_18, temp5_1) ? 1 : 0) << 2
                                | (xmm0_18 < temp5_1 ? 1 : 0)
                            p_10 = unimplemented  {test ah, 0x44}
                        
                        if (eax_75[1] != 1 || p_10)
                            int32_t eax_79 = (*(esi_1 + 0x2c) + eax_10) * eax_10
                            int32_t ecx_36 = (eax_79 << 0xf) + not.d(eax_79)
                            int32_t ecx_37 = (ecx_36 u>> 0xc ^ ecx_36) * 5
                            int32_t eax_87 = (ecx_37 u>> 4 ^ ecx_37) * 0x809
                            xmm0_18 = sub_4e0380(eax_75, *(esi_1 + 0x2f4), *(esi_1 + 0x2e8), 
                                (((eax_87 u>> 0x10 ^ eax_87) & 0x7fffff) | 0x3f800000) - 1f)
                            i = i_1
                        
                        arg4[3] = xmm0_18 + arg4[3]
                    case &lookup_table_49b678[0x34]
                        int32_t* esi_6 = *(edx_1 + (i << 3) + 4)
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_1 + 1
                        float xmm0_72 = sub_4e0380(esi_6, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        int32_t xmm0_73 = sub_4e0380(esi_6, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        esi_1 = arg3
                        i = i_1
                        arg4[0x17] = xmm0_72
                        arg4[0x18] = xmm0_73
            
            result = result_1
            i += 1
            i_1 = i
        while (i s< *(result + 0x118))
    
    @__security_check_cookie@4(eax_1 ^ &var_78)
    return result
}
