// 函数名称: sub_464440
// 虚拟地址: 0x464440
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_464440(int32_t arg1, char* arg2, uint32_t arg3, int32_t arg4 @ xmm2, int32_t* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: void var_d8
    void var_d8
    int32_t eax_1 = __security_cookie ^ &var_d8
    int32_t* eax_2 = arg5
    int32_t* var_c8 = eax_2
    
    if (*(arg3 + 0x7f4) != 0)
        eax_2 = *(arg3 + 0x63c) * 0x208
        
        if (*(eax_2 + arg3 + 0x1a4) != 0)
            float xmm0_1[0x4] = *(arg3 + 0x6cc)
            int96_t var_70_1 = xmm0_1[0].12
            float xmm1_2 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff)
            float xmm0_2[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55)
            float xmm1_3 = xmm1_2 f- xmm0_2
            void* eax_3 = sub_4627e0(arg3, 0)
            int32_t ecx = *(arg3 + 0x63c) * 0x208
            eax_2 = *(ecx + arg3 + 0x1a0)
            float xmm1_6 =
                (*(eax_3 + 0x6d8) f- *(eax_3 + 0x6d0)) * _mm_cvtepi32_ps(zx.o(*(ecx + arg3 + 0x180)))
            
            if (eax_2 != 2)
                if (eax_2 != 1)
                    sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x11db, 
                        "UI2TableUpdateScrollbar")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                xmm1_6 f- 0
                eax_2:1.b = (xmm1_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_6, 0f) ? 1 : 0) << 2
                    | (xmm1_6 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    if (not(xmm1_3 <= xmm1_6))
                        *(arg3 + 0x664) = 0
                        int32_t i_3 = 5
                        *(arg3 + 0x668) = 0
                        void* edi_2 = arg3 + 0xbf8
                        int32_t i
                        
                        do
                            if (*edi_2 != 0)
                                eax_2 = sub_45e9a0(edi_2)
                                *edi_2 = 0
                            
                            edi_2 += 4
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                        @__security_check_cookie@4(eax_1 ^ &var_d8)
                        return eax_2
                    
                    uint32_t eax_5 = *(ecx + arg3 + 0x1a4)
                    int128_t var_80
                    float xmm0_8[0x4] = *sub_45f2e0(&var_80)
                    float xmm0_9 = var_70_1:8.d
                    float var_48 = xmm0_9
                    int128_t xmm2_3 = (_mm_shuffle_ps(xmm0_8, xmm0_8, 0xaa) f- xmm0_8) f* *(arg2 + 0xc)
                    float xmm1_8 = xmm0_9 f- xmm2_3
                    float xmm0_11 = xmm1_2 f- xmm2_3
                    var_80 = xmm2_3
                    float var_50 = xmm1_8
                    float var_44 = xmm0_11
                    float xmm1_10 = xmm2_3.d + xmm0_2[0]
                    float xmm4_1 = xmm0_11 - xmm1_10
                    float var_4c = xmm1_10
                    float xmm1_13 = (xmm1_6 - xmm1_3) ^ (data_59e5c0.o).d
                    float xmm6_2 = _mm_max_ss(xmm2_3.d, xmm1_3 / xmm1_6 * xmm4_1) * 0.5f
                    float xmm0_17 = (*(arg3 + 0x668) - 0f) / (xmm1_13 - 0f)
                    float xmm5_1 = xmm6_2 + 0f
                    float xmm4_2 = xmm4_1 - xmm6_2
                    float var_d0 = xmm5_1
                    
                    if (not(0f >= xmm0_17))
                        if (xmm0_17 < 1f)
                            var_d0 = sub_4145f0(1, xmm0_17, xmm5_1, xmm4_2)
                        else
                            var_d0 = xmm4_2
                    
                    float eax_7
                    float edx_1
                    eax_7, edx_1 = sub_41b6f0(&var_50)
                    float xmm0_20 = var_80.d * 0.5f
                    float xmm0_21 = xmm0_20 + eax_7
                    float xmm0_23 = edx_1 + var_d0
                    float eax_8
                    float edx_2
                    eax_8, edx_2 = sub_4afaf0(2)
                    int32_t xmm5_2 = var_80.d
                    var_50 = eax_8
                    float xmm1_17 = var_70_1:8.d - xmm1_8
                    float xmm0_24 = var_50
                    float xmm3_3 = xmm5_2 f- 0f
                    float xmm2_8 = xmm0_24 * xmm1_17 + xmm1_8 - (xmm0_24 * xmm3_3 + 0f)
                    float xmm1_21 = xmm1_3 * edx_2 + xmm0_2[0] - (edx_2 * xmm3_3 + 0f)
                    float var_9c = xmm1_21
                    float var_98 = xmm5_2 f+ xmm2_8
                    float var_94 = xmm5_2 f+ xmm1_21
                    float eax_9
                    float edx_3
                    eax_9, edx_3 = sub_4afaf0(8)
                    int32_t xmm2_9 = var_80.d
                    var_50 = eax_9
                    float xmm0_34 = var_50
                    float xmm1_25 = xmm0_34 * xmm1_17 + xmm1_8 - (xmm0_34 * xmm3_3 + 0f)
                    float xmm4_6 = xmm1_3 * edx_3 + xmm0_2[0] - (edx_3 * xmm3_3 + 0f)
                    float var_8c = xmm4_6
                    float var_88 = xmm2_9 + xmm1_25
                    float xmm6_4 = xmm6_2 + xmm0_23
                    float var_84 = xmm2_9 f+ xmm4_6
                    float xmm7_1 = xmm0_23 - xmm6_2
                    float var_48_1 = xmm0_20 + xmm0_21
                    float xmm0_44 = var_70_1:8.d
                    var_50 = xmm0_21 - xmm0_20
                    float xmm2_13 = xmm0_44
                    float var_4c_3 = xmm7_1
                    float var_44_1 = xmm6_4
                    float var_d0_2
                    float var_cc_2
                    float var_b8_1
                    float var_b4_1
                    float xmm4_8
                    float xmm5_3
                    
                    if (xmm0_44 <= xmm1_8)
                        var_b4_1 = xmm0_44
                        xmm5_3 = xmm2_13
                        xmm0_44 = xmm1_8
                        var_b8_1 = xmm2_13
                        var_d0_2 = xmm2_13
                        xmm4_8 = xmm2_13
                        var_cc_2 = xmm2_13
                    else
                        var_b4_1 = xmm1_8
                        xmm5_3 = xmm0_44
                        var_b8_1 = xmm0_44
                        xmm4_8 = xmm0_44
                        var_d0_2 = xmm0_44
                        var_cc_2 = xmm0_44
                    
                    float var_40_4
                    
                    if (xmm0_11 <= xmm6_4)
                        xmm2_13 = var_b8_1
                        xmm5_3 = var_d0_2
                        xmm4_8 = var_cc_2
                        var_40_4 = xmm6_4
                        xmm6_4 = xmm0_11
                    else
                        var_40_4 = xmm0_11
                    
                    xmm0_2[2] = xmm0_44
                    xmm0_2[0] = var_b4_1
                    xmm0_2[1] = xmm6_4
                    xmm0_2[3] = var_40_4
                    
                    if (xmm2_13 <= xmm1_8)
                        xmm5_3 = xmm1_8
                    else
                        xmm4_8 = xmm1_8
                    
                    float xmm1_28
                    
                    if (xmm7_1 <= xmm1_10)
                        xmm1_28 = xmm7_1
                        xmm7_1 = xmm1_10
                    else
                        xmm1_28 = xmm1_10
                    
                    float var_3c_1 = xmm1_28
                    float var_38 = xmm5_3
                    float var_34 = xmm7_1
                    uint32_t (* eax_10)[0x4]
                    int32_t ecx_12
                    eax_10, ecx_12 = sub_45eca0(arg3, 0)
                    int32_t edi_3 = arg7
                    int32_t var_e4_3 = edi_3
                    int32_t var_e8_2 = arg6
                    (*eax_10)[0x1a9] = eax_5
                    int32_t var_f0_3 = ecx_12
                    (*eax_10)[0x1aa] = 0
                    sub_466a50(arg3, arg3, eax_10, *(arg3 + 0x750), arg2, 0, *(arg3 + 0x78c), 
                        *(arg3 + 0x790), arg4, var_c8)
                    *(eax_10 + 0x6cc) = xmm2_8.o
                    uint32_t (* eax_13)[0x4]
                    int32_t ecx_15
                    eax_13, ecx_15 = sub_45eca0(arg3, 1)
                    int32_t var_e4_4 = edi_3
                    int32_t var_e8_3 = arg6
                    (*eax_13)[0x1a9] = eax_5
                    int32_t var_f0_5 = ecx_15
                    (*eax_13)[0x1aa] = 1
                    sub_466a50(arg3, arg3, eax_13, *(arg3 + 0x750), arg2, 0, *(arg3 + 0x78c), 
                        *(arg3 + 0x790), arg4, var_c8)
                    *(eax_13 + 0x6cc) = xmm1_25.o
                    uint32_t (* eax_16)[0x4]
                    int32_t ecx_18
                    eax_16, ecx_18 = sub_45eca0(arg3, 2)
                    int32_t var_e4_5 = edi_3
                    int32_t var_e8_4 = arg6
                    (*eax_16)[0x1a9] = eax_5
                    int32_t var_f0_7 = ecx_18
                    (*eax_16)[0x1aa] = 2
                    sub_466a50(arg3, arg3, eax_16, *(arg3 + 0x750), arg2, 0, *(arg3 + 0x78c), 
                        *(arg3 + 0x790), arg4, var_c8)
                    *(eax_16 + 0x6cc) = xmm4_8.o
                    uint32_t eax_19
                    int32_t ecx_21
                    eax_19, ecx_21 = sub_45eca0(arg3, 3)
                    int32_t var_e4_6 = edi_3
                    int32_t var_e8_5 = arg6
                    *(eax_19 + 0x6a4) = eax_5
                    int32_t var_f0_9 = ecx_21
                    *(eax_19 + 0x6a8) = 3
                    sub_466a50(arg3, arg3, eax_19, *(arg3 + 0x750), arg2, 0, *(arg3 + 0x78c), 
                        *(arg3 + 0x790), arg4, var_c8)
                    float* ecx_23 = &var_50
                    int32_t i_2 = 0x10
                    *(eax_19 + 0x6cc) = xmm0_2
                    int32_t i_1
                    
                    do
                        char eax_22 = *ecx_23
                        ecx_23 += 1
                        edi_3 = edi_3 u>> 8 ^ *(((zx.d(eax_22) ^ zx.d(edi_3.b)) << 2) + &data_5720f8)
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    uint32_t (* eax_25)[0x4]
                    int32_t ecx_25
                    eax_25, ecx_25 = sub_45eca0(arg3, 4)
                    int32_t var_e4_7 = edi_3
                    int32_t var_e8_6 = arg6
                    (*eax_25)[0x1a9] = eax_5
                    int32_t var_f0_11 = ecx_25
                    (*eax_25)[0x1aa] = 4
                    int32_t eax_28 = sub_466a50(arg3, arg3, eax_25, *(arg3 + 0x750), arg2, 0, 
                        *(arg3 + 0x78c), *(arg3 + 0x790), arg4, var_c8)
                    *(eax_25 + 0x6cc) = var_50.o
                    @__security_check_cookie@4(eax_1 ^ &var_d8)
                    return eax_28
            else
                uint32_t esi_1 = *(ecx + arg3 + 0x1a4)
                uint32_t (* eax_4)[0x4]
                int32_t ecx_2
                eax_4, ecx_2 = sub_45eca0(arg3, 0)
                int32_t var_e4_1 = arg7
                int32_t var_e8_1 = arg6
                (*eax_4)[0x1a9] = esi_1
                int32_t var_f0_1 = ecx_2
                (*eax_4)[0x1aa] = 0
                eax_2 = sub_466a50(eax_4, arg3, eax_4, *(arg3 + 0x750), arg2, 0, *(arg3 + 0x78c), 
                    *(arg3 + 0x790), arg4, var_c8)
                *(eax_4 + 0x6cc) = *(arg3 + 0x6cc)
    
    @__security_check_cookie@4(eax_1 ^ &var_d8)
    return eax_2
}
