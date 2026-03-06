// 函数名称: sub_464cc0
// 虚拟地址: 0x464cc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_464cc0(int32_t arg1, int32_t* arg2, uint32_t arg3, int32_t arg4 @ xmm3, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t eax_1
    eax_1.b = arg6
    char var_bd = eax_1.b
    int32_t* esi = arg2
    char var_d8 = eax_1.b
    int32_t eax_2 = *(arg3 + 0x72c)
    int32_t edx = *(arg3 + 0x63c) * 0x208
    int128_t var_bc = *(arg3 + 0x6dc)
    int32_t var_6c = eax_2
    int128_t var_ac = *(arg3 + 0x6ec)
    int32_t* var_c4 = esi
    int128_t var_9c = *(arg3 + 0x6fc)
    int128_t var_8c = *(arg3 + 0x70c)
    int128_t var_7c = *(arg3 + 0x71c)
    void* edi = *(edx + arg3 + 0x17c)
    void* result = *(edx + arg3 + 0x180) * edi
    void* var_c8 = edi
    void* result_2 = *(edx + arg3 + 0x1a8)
    void* result_1 = result
    
    if (result_2 != 0xffffffff)
        if (result s>= result_2)
            result = result_2
        
        result_1 = result
    
    void* edx_1 = *(edx + arg3 + 0x184)
    
    if (edx_1 != 0)
        result += edx_1 - var_c8
        result_1 = result
    
    edx_1.b = var_bd
    
    if (result != *(arg3 + 0x7f4) || edx_1.b != 0 || *(arg3 + 0x654) != 0)
        void* edi_1 = nullptr
        var_c8 = nullptr
        
        if (result s> 0)
            do
                if (edx_1.b == 0 && result == *(arg3 + 0x7f4))
                    goto label_464eb7
                
                void* eax_5 = *(*(arg3 + 0x63c) * 0x208 + arg3 + 0x19c)
                int32_t var_1f4_6
                uint32_t eax_10
                char* ecx_17
                
                if (eax_5 == 0)
                    if (edi_1 == 0)
                        goto label_464eb7
                    
                    void* eax_7 = sub_4627e0(arg3, 0)
                    void* eax_8
                    void* ecx_5
                    eax_8, ecx_5 = sub_45ed30(arg3, edi_1)
                    void* var_1f0_1 = ecx_5
                    int32_t var_1f4_2 = arg5
                    void* eax_9 = var_c8
                    *(eax_8 + 0x788) = 1
                    *(eax_8 + 0x754) = eax_9
                    *(eax_8 + 0x750) = 0x3f800000
                    eax_10 = sub_464220(eax_9, eax_8, ecx_5, eax_7, var_c4)
                    
                    if (*(eax_8 + 0x788) == 1)
                        edi_1 = var_c8
                        goto label_464eb7
                    
                    char const* const var_1f0_7 = "UI2TableUpdate"
                    var_1f4_6 = 0x1226
                    ecx_17 = "child.clone == true"
                label_4655ed:
                    sub_44e4d0(eax_10, &data_5559b1, ecx_17, "c:\ax2017\engine\ui2.cpp", var_1f4_6, 
                        "UI2TableUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (*(eax_5 + 4) == 0x22)
                    void* eax_6 = sub_45ed30(arg3, edi_1)
                    var_c8 = nullptr
                    *(eax_6 + 0x788) = 1
                    *(eax_6 + 0x754) = edi_1
                    sub_464320(eax_6, *(*(arg3 + 0x63c) * 0x208 + arg3 + 0x19c), eax_6, esi, arg5, 
                        &var_c8, 0)
                label_464eb7:
                    eax_10 = sub_4627e0(arg3, edi_1)
                    
                    if (edi_1 != 0 && *(eax_10 + 0x788) != 1)
                        char const* const var_1f0_8 = "UI2TableUpdate"
                        var_1f4_6 = 0x122f
                        ecx_17 = "child.clone == true"
                        goto label_4655ed
                    
                    if (*(eax_10 + 0x784) != arg3)
                        char const* const var_1f0_9 = "UI2TableUpdate"
                        var_1f4_6 = 0x1232
                        ecx_17 = "child.parent == &ui"
                        goto label_4655ed
                    
                    int32_t edx_8 = *(arg3 + 0x63c) * 0x208
                    void** eax_11 = &var_c8
                    int32_t var_1f0_2 = var_d8.d
                    void* ecx_7 = *(edx_8 + arg3 + 0x184)
                    
                    if (ecx_7 == 0)
                        eax_11 = nullptr
                    
                    var_c8 = ecx_7
                    void var_1dc
                    int128_t* eax_13
                    int32_t ecx_9
                    eax_13, ecx_9, edx_1 = sub_463950(&var_1dc, &var_bc, arg3, &var_1dc, 
                        *(edx_8 + arg3 + 0x198), edi_1, nullptr, eax_11, var_c4, arg5, ecx_7.b)
                    float xmm2_1 = *(arg3 + 0x664)
                    xmm2_1 f- 0
                    int128_t xmm1_1 = *eax_13
                    int128_t var_64 = xmm1_1
                    int128_t xmm0_5 = eax_13[1]
                    int128_t xmm0_6 = eax_13[2]
                    int128_t xmm0_7 = eax_13[3]
                    int128_t xmm0_8 = eax_13[4]
                    int32_t var_14_1 = eax_13[5].d
                    int32_t eax_14
                    eax_14:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
                        | (xmm2_1 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    bool p_4
                    
                    if (not(p_2))
                        float xmm0_9 = *(arg3 + 0x668)
                        xmm0_9 f- 0
                        eax_14:1.b = (xmm0_9 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2 | (xmm0_9 < 0f ? 1 : 0)
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_2 || p_4)
                        var_64.d = var_64.d + xmm2_1
                        var_64:4.d = *(arg3 + 0x668) f+ var_64:4.d
                        xmm1_1 = var_64
                    
                    float xmm3 = *(arg3 + 0x750)
                    xmm3 f- 0
                    eax_14:1.b = (xmm3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3, 0f) ? 1 : 0) << 2
                        | (xmm3 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    bool p_8
                    
                    if (not(p_6))
                        float xmm0_14 = *(eax_10 + 0x750)
                        xmm0_14 f- 0
                        eax_14:1.b = (xmm0_14 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_14, 0f) ? 1 : 0) << 2 | (xmm0_14 < 0f ? 1 : 0)
                        p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_6 || p_8)
                        if (*(eax_10 + 0x64c) == 0)
                            goto label_4654bf
                        
                        bool cond:2_1 = *(*(arg3 + 0x63c) * 0x208 + arg3 + 0x19c) == 0
                        *(eax_10 + 0x6dc) = xmm1_1
                        *(eax_10 + 0x6ec) = xmm0_5
                        *(eax_10 + 0x6fc) = xmm0_6
                        *(eax_10 + 0x70c) = xmm0_7
                        *(eax_10 + 0x71c) = xmm0_8
                        *(eax_10 + 0x72c) = var_14_1
                        int128_t xmm0_36
                        
                        if (cond:2_1)
                            int32_t eax_23 = *(eax_10 + 0x63c) * 0x208
                            float xmm2_6 = var_64.d
                            float xmm1_6 = var_64:4.d
                            float var_108_1 = xmm1_6 + 0f
                            float var_104_1 = xmm2_6
                                + (*(eax_23 + eax_10 + 0x1c) f- *(eax_23 + eax_10 + 0x14)) f* var_64
                                :0xc.d
                            float var_100_1 = xmm1_6
                                + (*(eax_23 + eax_10 + 0x20) f- *(eax_23 + eax_10 + 0x18)) f* var_64
                                :0xc.d
                            xmm0_36 = (xmm2_6 + 0f).o
                        else
                            int32_t var_1f0_4 = ecx_9
                            void var_184
                            int128_t* eax_22 = sub_45f1b0(&var_184, nullptr, 
                                *(*(arg3 + 0x63c) * 0x208 + arg3 + 0x19c), &var_184, 0)
                            float xmm2_4 = var_64.d
                            float xmm1_4 = var_64:4.d
                            float xmm0_30[0x4] = *eax_22
                            float xmm4_6 = _mm_shuffle_ps(xmm0_30, xmm0_30, 0xaa)
                            float xmm3_7 = _mm_shuffle_ps(xmm0_30, xmm0_30, 0xff)
                                - _mm_shuffle_ps(xmm0_30, xmm0_30, 0x55)
                            float var_f4_1 = xmm2_4 + (xmm4_6 f- xmm0_30) f* var_64:0xc.d
                            float var_f8_1 = xmm1_4 + 0f
                            float var_f0_1 = xmm1_4 + xmm3_7 f* var_64:0xc.d
                            xmm0_36 = (xmm2_4 + 0f).o
                        
                        float xmm2_10[0x4] = data_59e460
                        char eax_24 = 0
                        *(eax_10 + 0x6cc) = xmm0_36
                        ecx_9 = *(arg3 + 0x63c) * 0x208
                        int96_t var_160_1 = xmm2_10[0].12
                        edx_1 = *(ecx_9 + arg3 + 0xc8)
                        
                        if (edx_1 == 1)
                            float xmm4_12 = *(arg3 + 0x6cc)
                            eax_24 = -1
                            float xmm3_12 = *(arg3 + 0x6d0)
                            float xmm2_9 = *(arg3 + 0x6d4) - xmm4_12
                            float xmm1_9 = *(arg3 + 0x6d8) - xmm3_12
                            float var_118_1 = *(ecx_9 + arg3 + 0xd0) * xmm1_9 + xmm3_12
                            float var_114_1 = *(ecx_9 + arg3 + 0xd4) * xmm2_9 + xmm4_12
                            float var_110_1 = *(ecx_9 + arg3 + 0xd8) * xmm1_9 + xmm3_12
                            xmm2_10 = (xmm2_9 f* *(ecx_9 + arg3 + 0xcc) + xmm4_12).o
                            var_160_1 = xmm2_10[0].12
                        else if (edx_1 == 3)
                            float xmm4_13 = *(arg3 + 0x6cc)
                            eax_24 = edx_1.b + 9
                            float xmm2_12 = *(arg3 + 0x6d4) - xmm4_13
                            float xmm3_13 = *(arg3 + 0x6d0)
                            float xmm1_11 = *(arg3 + 0x6d8) - xmm3_13
                            float var_128_1 = *(ecx_9 + arg3 + 0xd0) * xmm1_11 + xmm3_13
                            float var_124_1 = *(ecx_9 + arg3 + 0xd4) * xmm2_12 + xmm4_13
                            float var_120_1 = *(ecx_9 + arg3 + 0xd8) * xmm1_11 + xmm3_13
                            xmm2_10 = (*(ecx_9 + arg3 + 0xcc) * xmm2_12 + xmm4_13).o
                            var_160_1 = xmm2_10[0].12
                        else if (edx_1 == 4)
                            float xmm4_14 = *(arg3 + 0x6cc)
                            eax_24 = edx_1.b - 1
                            float xmm2_14 = *(arg3 + 0x6d4) - xmm4_14
                            float xmm3_14 = *(arg3 + 0x6d0)
                            float xmm1_13 = *(arg3 + 0x6d8) - xmm3_14
                            float var_138_1 = *(ecx_9 + arg3 + 0xd0) * xmm1_13 + xmm3_14
                            float var_134_1 = *(ecx_9 + arg3 + 0xd4) * xmm2_14 + xmm4_14
                            float var_130_1 = *(ecx_9 + arg3 + 0xd8) * xmm1_13 + xmm3_14
                            xmm2_10 = (*(ecx_9 + arg3 + 0xcc) * xmm2_14 + xmm4_14).o
                            var_160_1 = xmm2_10[0].12
                        else if (edx_1 == 2)
                            xmm2_10 = data_571d08
                            eax_24 = 0
                            var_160_1 = xmm2_10[0].12
                        
                        int128_t xmm0_77 = *(eax_10 + 0x6cc)
                        int32_t xmm0_79
                        
                        if ((eax_24 & 4) != 0)
                            xmm0_79 = _mm_shuffle_ps(xmm2_10, xmm2_10, 0x55)
                        
                        if ((eax_24 & 4) == 0 || not(xmm0_79 f> xmm0_77:0xc.d))
                            int32_t xmm0_81
                            
                            if ((eax_24 & 8) != 0)
                                xmm0_81 = _mm_shuffle_ps(xmm2_10, xmm2_10, 0xff)
                            
                            if (((eax_24 & 8) == 0 || not(xmm0_77:4.d f> xmm0_81))
                                    && ((eax_24 & 2) == 0 || not(xmm2_10 f> xmm0_77:8.d))
                                    && ((eax_24 & 1) == 0 || not(xmm0_77.d f> var_160_1:8.d)))
                                xmm3 = *(arg3 + 0x750)
                            label_4654bf:
                                int32_t var_1f0_5 = *(arg3 + 0x64c)
                                int32_t var_1f4_4 = arg5
                                int32_t var_1fc_4 = ecx_9
                                sub_466a50(&var_64, arg3, eax_10, xmm3, &var_64, edi_1, 
                                    *(arg3 + 0x78c), *(arg3 + 0x790), arg4, var_c4)
                    else
                        *(eax_10 + 0x6dc) = xmm1_1
                        *(eax_10 + 0x6ec) = xmm0_5
                        *(eax_10 + 0x6fc) = xmm0_6
                        *(eax_10 + 0x70c) = xmm0_7
                        *(eax_10 + 0x71c) = xmm0_8
                        *(eax_10 + 0x72c) = var_14_1
                        int32_t* ecx_10 = *(*(arg3 + 0x63c) * 0x208 + arg3 + 0x19c)
                        
                        if (ecx_10 != 0)
                            int32_t* var_1f0_3 = ecx_10
                            void var_174
                            int128_t* eax_18
                            eax_18, edx_1 = sub_45f1b0(&var_174, nullptr, ecx_10, &var_174, 0)
                            float xmm2_2 = var_64.d
                            float xmm1_2 = var_64:4.d
                            float xmm0_19[0x4] = *eax_18
                            float xmm4_2 = _mm_shuffle_ps(xmm0_19, xmm0_19, 0xaa)
                            float xmm3_3 = _mm_shuffle_ps(xmm0_19, xmm0_19, 0xff)
                                - _mm_shuffle_ps(xmm0_19, xmm0_19, 0x55)
                            float var_e4_1 = xmm2_2 + (xmm4_2 f- xmm0_19) f* var_64:0xc.d
                            float var_e8_1 = xmm1_2 + 0f
                            float var_e0_1 = xmm1_2 + xmm3_3 f* var_64:0xc.d
                            *(eax_10 + 0x6cc) = (xmm2_2 + 0f).o
                    
                    edx_1.b = var_bd
                    esi = var_c4
                
                result = result_1
                edi_1 += 1
                var_c8 = edi_1
            while (edi_1 s< result)
        
        int32_t edx_12 = *(arg3 + 0x63c) * 0x208
        
        if (*(edx_12 + arg3 + 0x19c) == 0)
            if (result s< 1)
                result = 1
            
            bool cond:0_1 = *(arg3 + 0xff8) != 0
            *(arg3 + 0x7f4) = result
            
            if (not(cond:0_1))
                *(arg3 + 0x7f4) = 0
                result = nullptr
        else
            *(arg3 + 0x7f4) = result
        
        if (*(edx_12 + arg3 + 0x1a0) != 0)
            sub_464440(result, &var_bc, arg3, arg4, esi, arg5, *(arg3 + 0x64c))
            result = *(arg3 + 0x7f4)
        
        if (*(arg3 + 0xff8) s< result)
            sub_44e4d0(result, &data_5559b1, "ui.numTotalChildren >= ui.numChildren", 
                "c:\ax2017\engine\ui2.cpp", 0x129f, "UI2TableUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return result
}
