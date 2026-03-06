// 函数名称: sub_46bab0
// 虚拟地址: 0x46bab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_46bab0()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    BOOL i = __security_cookie ^ &__saved_ebp
    BOOL i_2 = i
    int32_t esi
    int32_t var_ec = esi
    
    if (data_64f848 != 0)
        if ((*(data_cdf450 + 0xc) & 1) == 0 || *(data_65ae04 + 0x18) == 0)
            i.b = data_64f868
            
            if (i.b == 0 && data_64f869 == i.b)
                i = sub_469590()
            else if (data_64f84c != 1 && i.b == 1)
                i = sub_469210(i.b)
            
            data_64f848 = 0
        else
            if (data_64f868 != 0)
                goto label_46bb62
            
            float var_78
            i = sub_44edc0(&var_78)
            float xmm0_2 = data_64f850 - var_78
            float i_1
            float xmm1_2 = data_64f854 - i_1
            
            if (not(50f > xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2))
                data_64f868 = 1
            label_46bb62:
                
                if (data_5cea34.b == 0 && data_5cea34:1.b == 0)
                    if (data_5cea36 == 0 || data_64f864 == 0xffffffff)
                        goto label_46c83d
                    
                    goto label_46bb7e
                
                int32_t var_f8
                int128_t var_30
                int32_t eax_45
                
                if (data_64f864 == 0xffffffff)
                label_46c83d:
                    sub_44edc0(&var_78)
                    
                    if (sub_468d70() == 0)
                        float xmm1_69 = var_78
                        float i_10 = i_1
                        eax_45 = data_64f84c
                        data_64f860 = 0
                        float xmm1_70 = xmm1_69 f- data_64f858
                        float xmm2_57 = i_10 f- data_64f85c
                        
                        if (eax_45 != 0)
                            if (eax_45 == 2)
                                char const* const var_f4_18 = "UI2DraggingUpdate"
                                var_f8 = 0x1d88
                            label_46cbe1:
                                sub_44e4d0(eax_45, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 
                                    var_f8, "UI2DraggingUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            float xmm0_126 = 1f f/ data_5cda1c
                            data_5cda20 = data_5cda20 - xmm1_70 * xmm0_126
                            data_5cda24 = data_5cda24 - xmm2_57 * xmm0_126
                            data_64f858 = var_78
                            data_64f85c = i_1
                        else
                            float xmm0_125 = 1f f/ data_5cda1c
                            var_30:8.d = xmm1_70 * xmm0_125
                            var_30:0xc.d = xmm2_57 * xmm0_125
                            sub_46b290(esi)
                            data_64f858 = var_78
                            data_64f85c = i_1
                    else
                        float xmm5_21 = data_64f850
                        float xmm6_22 = data_64f854
                        float xmm2_55 = var_78 - xmm5_21
                        int32_t eax_44 = data_64f860
                        float xmm3_25 = i_1 - xmm6_22
                        float xmm4_43 = xmm5_21 f- data_64f858
                        float xmm7_14 = xmm6_22 f- data_64f85c
                        float var_90_4 = xmm2_55
                        float var_88_5 = xmm3_25
                        
                        if (eax_44 == 0)
                            int32_t xmm0_116 = sub_41b760(xmm2_55)
                            
                            if (sub_41b760(xmm3_25) f<= xmm0_116)
                                xmm3_25 = (zx.o(0)).d
                                data_64f860 = 1
                                var_88_5 = 0f
                            else
                                data_64f860 = 2
                                xmm2_55 = (zx.o(0)).d
                                var_90_4 = 0f
                        else if (eax_44 == 1)
                            xmm3_25 = (zx.o(0)).d
                            var_88_5 = 0f
                        else if (eax_44 == 2)
                            xmm2_55 = (zx.o(0)).d
                            var_90_4 = 0f
                        
                        eax_45 = data_64f84c
                        float xmm1_66 = xmm2_55 + xmm4_43
                        float xmm4_45 = xmm3_25 + xmm7_14
                        
                        if (eax_45 != 0)
                            if (eax_45 == 2)
                                char const* const var_f4_13 = "UI2DraggingUpdate"
                                var_f8 = 0x1d75
                                goto label_46cbe1
                            
                            float xmm0_120 = 1f f/ data_5cda1c
                            data_5cda20 = data_5cda20 - xmm1_66 * xmm0_120
                            data_5cda24 = data_5cda24 - xmm4_45 * xmm0_120
                            data_64f858 = xmm2_55 + xmm5_21
                            data_64f85c = xmm3_25 + xmm6_22
                        else
                            float xmm0_119 = 1f f/ data_5cda1c
                            var_78 = xmm1_66 * xmm0_119
                            i_1 = xmm4_45 * xmm0_119
                            sub_46b290(esi)
                            xmm6_22 = data_64f854
                            data_64f858 = var_90_4 + data_64f850
                            data_64f85c = var_88_5 + xmm6_22
                else
                label_46bb7e:
                    char eax_1 = sub_46ba70()
                    
                    if (eax_1 != 0)
                        goto label_46c83d
                    
                    var_30 = data_64f86c
                    
                    if (data_5cea36 != eax_1 && sub_468df0() != 0)
                        var_30 = data_64f87c
                    
                    eax_45 = data_64f864
                    
                    if (eax_45 u> 7)
                        char const* const var_f4_12 = "UI2DraggingUpdate"
                        var_f8 = 0x1dc0
                        goto label_46cbe1
                    
                    int32_t xmm1_5 = 0x3f800000
                    float i_3
                    float var_7c_1
                    int32_t xmm0_8
                    
                    switch (eax_45)
                        case 0
                            float eax_3
                            float i_4
                            eax_3, i_4 = sub_47be40(&var_30)
                            var_78 = eax_3
                            var_7c_1 = var_78
                            i_1 = i_4
                            i_3 = i_1
                            xmm0_8 = 0xbf800000
                            xmm1_5 = -0x40800000
                        case 1
                            float eax_4
                            float i_5
                            eax_4, i_5 = sub_47be40(&var_30)
                            xmm1_5 = 0x80000000
                            var_78 = eax_4
                            var_7c_1 = var_78
                            i_1 = i_5
                            i_3 = i_1
                            xmm0_8 = 0xbf800000
                        case 2
                            var_7c_1 = var_30:8.d
                            i_3 = var_30:4.d
                            xmm0_8 = 0xbf800000
                        case 3
                            float eax_5
                            float i_6
                            eax_5, i_6 = sub_47be40(&var_30)
                            xmm1_5 = 0xbf800000
                            var_78 = eax_5
                            var_7c_1 = var_78
                            i_1 = i_6
                            i_3 = i_1
                            xmm0_8 = 0x80000000
                        case 4
                            float eax_6
                            float i_7
                            eax_6, i_7 = sub_41b6f0(&var_30)
                            xmm1_5 = 0x3f800000
                            var_78 = eax_6
                            var_7c_1 = var_78
                            i_1 = i_7
                            i_3 = i_1
                            xmm0_8 = (zx.o(0)).d
                        case 5
                            var_7c_1 = var_30.d
                            i_3 = var_30:0xc.d
                            xmm0_8 = 0x3f800000
                            xmm1_5 = 0xbf800000
                        case 6
                            float eax_7
                            float i_8
                            eax_7, i_8 = sub_41b6f0(&var_30)
                            var_78 = eax_7
                            xmm1_5 = (zx.o(0)).d
                            var_7c_1 = var_78
                            i_1 = i_8
                            i_3 = i_1
                            xmm0_8 = 0x3f800000
                        case 7
                            float eax_8
                            float i_9
                            eax_8, i_9 = sub_41b6f0(&var_30)
                            xmm1_5 = 0x3f800000
                            var_78 = eax_8
                            var_7c_1 = var_78
                            i_1 = i_9
                            i_3 = i_1
                            xmm0_8 = 0x3f800000
                    
                    float var_84_1 = xmm1_5
                    float var_80_1 = xmm0_8
                    float var_94_1 = xmm1_5
                    
                    if (sub_468db0() != 0)
                        float xmm0_23 = xmm0_8
                        var_80_1 = xmm0_23 + xmm0_23
                        var_7c_1 = (var_30.d f+ var_30:8.d) * 0.5f
                        var_84_1 = var_94_1 + var_94_1
                        i_3 = (var_30:0xc.d f+ var_30:4.d) * 0.5f
                    
                    sub_44edc0(&var_78)
                    char eax_10
                    int32_t edx_1
                    eax_10, edx_1 = sub_468d70()
                    int32_t eax_11
                    
                    if (eax_10 != 0)
                        eax_11 = data_64f864
                    
                    float var_b0[0x4]
                    float var_90_1
                    float xmm1_19
                    
                    if (eax_10 != 0 && (eax_11 == 0 || eax_11 == 2 || eax_11 == 5 || eax_11 == 7))
                        float xmm3_3 = (var_7c_1 f- data_5cda20) f* data_5cda1c
                        float xmm4_3 = (i_3 f- data_5cda24) f* data_5cda1c
                        float xmm1_13 = data_64f850 - xmm3_3
                        float xmm2_2 = var_78 - xmm3_3
                        float xmm0_28 = i_1 - xmm4_3
                        float xmm1_15 = data_64f854 - xmm4_3
                        xmm1_19 = sub_412d90(xmm0_28 * xmm0_28 + xmm2_2 * xmm2_2)
                            / sub_412d90(xmm1_15 * xmm1_15 + xmm1_13 * xmm1_13)
                        var_90_1 = xmm1_19
                    else
                        float xmm0_37 = var_78 f- data_64f850
                        float xmm0_39 = i_1 f- data_64f854
                        float xmm1_20[0x4] = *sub_46b9a0(&var_b0, edx_1, &var_30, &var_b0)
                        xmm1_19 =
                            xmm0_37 / (_mm_shuffle_ps(xmm1_20, xmm1_20, 0xaa) f- xmm1_20) * var_80_1
                            + 1f
                        var_90_1 = xmm0_39 / (_mm_shuffle_ps(xmm1_20, xmm1_20, 0xff)
                            - _mm_shuffle_ps(xmm1_20, xmm1_20, 0x55)) * var_84_1 + 1f
                    
                    eax_45 = data_64f84c
                    
                    if (eax_45 != 0)
                        if (eax_45 == 2)
                            char const* const var_f4_11 = "UI2DraggingUpdate"
                            var_f8 = 0x1e76
                            goto label_46cbe1
                        
                        data_64f858 = var_78
                        data_64f85c = i_1
                    else
                        float var_50
                        float var_40
                        
                        if (data_5cea36 == eax_45.b)
                        label_46c362:
                            int32_t eax_31 = 0
                            int32_t var_94_6 = 0
                            
                            if (data_5cea2c s> 0)
                                int32_t* edi_1 = &data_64f890
                                int32_t* var_98_6 = &data_64f890
                                
                                while (true)
                                    char* eax_32
                                    int32_t edx_6
                                    eax_32, edx_6 = sub_469160((&data_5cda2c)[eax_31])
                                    float xmm7_8 = *edi_1 - i_3
                                    float xmm4_26 = edi_1[2] f- i_3
                                    float xmm6_9 = (edi_1[-1] f- var_7c_1) * xmm1_19
                                    float xmm3_16 = (edi_1[1] f- var_7c_1) * xmm1_19
                                    var_30 = *(*(eax_32 + 0x63c) * 0x208 + eax_32 + 0x14)
                                    float xmm7_9 = xmm7_8 * var_90_1
                                    float xmm4_27 = xmm4_26 * var_90_1
                                    float xmm0_89
                                    
                                    if (xmm3_16 + var_7c_1 <= xmm6_9 + var_7c_1)
                                        xmm0_89 = xmm3_16
                                        xmm3_16 = xmm6_9
                                    else
                                        xmm0_89 = xmm6_9
                                    
                                    float xmm1_41
                                    
                                    if (xmm4_27 + i_3 <= xmm7_9 + i_3)
                                        xmm1_41 = xmm4_27
                                        xmm4_27 = xmm7_9
                                    else
                                        xmm1_41 = xmm7_9
                                    
                                    var_50 = xmm0_89 + var_7c_1
                                    float var_48_2 = xmm3_16 + var_7c_1
                                    float var_4c_2 = xmm1_41 + i_3
                                    float var_44_2 = xmm4_27 + i_3
                                    void var_e0
                                    int128_t* eax_34 = sub_47bc00(&var_e0, edx_6, &var_50, &var_e0)
                                    bool cond:4_1 = *(eax_32 + 0x69c) != 6
                                    float xmm0_91[0x4] = *eax_34
                                    var_b0 = xmm0_91
                                    float xmm1_44 = _mm_shuffle_ps(xmm0_91, xmm0_91, 0x55)
                                    float xmm2_33 = xmm0_91[0] f- var_30.d
                                    float xmm1_45 = xmm1_44 f- var_30:4.d
                                    float var_c0_1[0x4] = xmm0_91
                                    float var_9c_1 = xmm2_33
                                    var_30:0xc.d = xmm1_45
                                    int32_t* eax_40
                                    
                                    if (cond:4_1)
                                        int32_t eax_41 = *(eax_32 + 0x63c) * 0x208
                                        float xmm6_18 = var_c0_1[2]
                                        float xmm3_22 = *(eax_41 + eax_32 + 0xd4)
                                        float xmm7_12 = *(eax_41 + eax_32 + 0xcc)
                                        float xmm5_19 = *(eax_41 + eax_32 + 0xd8)
                                        float xmm6_19 = xmm6_18 - var_b0[0]
                                        float xmm3_23 = *(eax_41 + eax_32 + 0xd0)
                                        float var_70
                                        eax_40 = &var_70
                                        var_30:0xc.d = (xmm3_22 f* xmm0_91 - xmm6_18 * xmm7_12)
                                            / ((1f - xmm7_12) * xmm3_22 - (1f - xmm3_22) * xmm7_12)
                                        float xmm2_50 = var_c0_1[3]
                                        float xmm0_114 = var_30:0xc.d
                                        float xmm4_41 = (xmm5_19 * xmm1_44 - xmm2_50 * xmm3_23)
                                            / ((1f - xmm3_23) * xmm5_19 - (1f - xmm5_19) * xmm3_23)
                                        var_70 = xmm0_114
                                        float var_6c_1 = xmm4_41
                                        float var_64_1 =
                                            (xmm2_50 - xmm1_44) / (xmm5_19 - xmm3_23) + xmm4_41
                                        float var_68_1 = xmm6_19 / (xmm3_22 - xmm7_12) + xmm0_114
                                    else
                                        int32_t var_84_3 = 0
                                        
                                        if (*(eax_32 + 0x7f4) s> 0)
                                            void* eax_35 = &eax_32[0x7f8]
                                            void* var_80_3 = eax_35
                                            
                                            while (true)
                                                int32_t ecx_22 = *eax_35
                                                int32_t var_f8_1
                                                char* ecx_32
                                                
                                                if (ecx_22 == 0)
                                                    char const* const var_f4_17 =
                                                        "DataArray<struct UI2>::DataArrayGet"
                                                    var_f8_1 = 0x6c
                                                    ecx_32 = "id != DATAID_NULL"
                                                else
                                                    uint32_t edx_7 = zx.d(ecx_22.w)
                                                    
                                                    if (edx_7 u< data_5c99a4)
                                                        int32_t edi_2 = data_5c99a0
                                                        eax_35 = edx_7 * 0x1008
                                                        
                                                        if (*(eax_35 + edi_2 + 0x1004) == ecx_22)
                                                            char* ecx_24 = edx_7 * 0x1008 + edi_2
                                                            float xmm7_10[0x4] = *(
                                                                *(ecx_24 + 0x63c) * 0x208 + ecx_24
                                                                + 0x14)
                                                            float xmm6_11 = xmm7_10[0] - xmm2_33
                                                            float xmm3_19 =
                                                                _mm_shuffle_ps(xmm7_10, xmm7_10, 0x55)
                                                            float xmm2_35 = xmm3_19 - xmm1_45
                                                            float xmm5_16 =
                                                                _mm_shuffle_ps(xmm7_10, xmm7_10, 0xaa)
                                                            float xmm1_47 =
                                                                _mm_shuffle_ps(xmm7_10, xmm7_10, 0xff)
                                                            var_40 = xmm6_11 f- xmm7_10 f+ xmm7_10
                                                            float var_3c_4 = xmm2_35 - xmm3_19 + xmm3_19
                                                            float var_38_4 = xmm5_16 f- xmm7_10
                                                                + xmm6_11 - xmm5_16 + xmm5_16
                                                            float var_34_4 = xmm1_47 - xmm3_19 + xmm2_35
                                                                - xmm1_47 + xmm1_47
                                                            sub_46b230(&var_40, 0x71, ecx_24, &var_40)
                                                            int32_t edx_9 = var_84_3 + 1
                                                            xmm2_33 = var_9c_1
                                                            eax_35 = var_80_3 + 4
                                                            xmm1_45 = var_30:0xc.d
                                                            var_84_3 = edx_9
                                                            var_80_3 = eax_35
                                                            
                                                            if (edx_9 s< *(eax_32 + 0x7f4))
                                                                continue
                                                            
                                                            xmm0_91 = var_b0
                                                            edi_1 = var_98_6
                                                            break
                                                    
                                                    char const* const var_f4_16 =
                                                        "DataArray<struct UI2>::DataArrayGet"
                                                    var_f8_1 = 0x6d
                                                    ecx_32 = "DataArrayTryToGet(id) != NULL"
                                                
                                                sub_44e4d0(eax_35, &data_5559b1, ecx_32, 
                                                    "c:\ax2017\engine\dataarray.h", var_f8_1, 
                                                    "DataArray<struct UI2>::DataArrayGet")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_44e680()
                                                noreturn
                                        
                                        int32_t eax_39 = *(eax_32 + 0x63c) * 0x208
                                        float xmm6_14 = var_c0_1[2]
                                        float xmm3_20 = *(eax_39 + eax_32 + 0xd4)
                                        float xmm7_11 = *(eax_39 + eax_32 + 0xcc)
                                        float xmm5_17 = *(eax_39 + eax_32 + 0xd8)
                                        float xmm6_15 = xmm6_14 - var_b0[0]
                                        float xmm3_21 = *(eax_39 + eax_32 + 0xd0)
                                        float var_60
                                        eax_40 = &var_60
                                        var_30:0xc.d = (xmm3_20 f* xmm0_91 - xmm6_14 * xmm7_11)
                                            / ((1f - xmm7_11) * xmm3_20 - (1f - xmm3_20) * xmm7_11)
                                        float xmm2_42 = var_c0_1[3]
                                        float xmm0_105 = var_30:0xc.d
                                        float xmm4_37 = (xmm5_17 * xmm1_44 - xmm2_42 * xmm3_21)
                                            / ((1f - xmm3_21) * xmm5_17 - (1f - xmm5_17) * xmm3_21)
                                        var_60 = xmm0_105
                                        float var_5c_1 = xmm4_37
                                        float var_54_1 =
                                            (xmm2_42 - xmm1_44) / (xmm5_17 - xmm3_21) + xmm4_37
                                        float var_58_1 = xmm6_15 / (xmm3_20 - xmm7_11) + xmm0_105
                                    
                                    sub_46b230(eax_40, 0x71, eax_32, eax_40)
                                    edi_1 = &edi_1[4]
                                    eax_31 = var_94_6 + 1
                                    var_98_6 = edi_1
                                    var_94_6 = eax_31
                                    
                                    if (eax_31 s>= data_5cea2c)
                                        break
                        else
                            HWND eax_14 = sub_468df0()
                            int128_t* eax_21
                            
                            if (eax_14.b != 0)
                                if (data_5cea36 == 0)
                                    goto label_46c362
                                
                                HWND eax_22 = sub_468df0()
                                
                                if (eax_22.b == 0)
                                    goto label_46c362
                                
                                if (data_5cea2c != 1)
                                    sub_44e4d0(eax_22, &data_5559b1, 
                                        "gUI2Editor.s.activeSetCount == 1", "c:\ax2017\engine\ui2.cpp", 
                                        0x1df5, "UI2DraggingUpdate")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                char* eax_23
                                int32_t edx_3
                                eax_23, edx_3 = sub_469160(data_5cda2c)
                                float xmm6_6 = (data_64f87c:4 f- i_3) * var_90_1
                                float xmm5_10 = (data_64f87c:0xc f- i_3) * var_90_1
                                float xmm7_6 = (data_64f87c.d - var_7c_1) * xmm1_19
                                float xmm4_11 = (data_64f87c:8 f- var_7c_1) * xmm1_19
                                float xmm0_69
                                
                                if (var_7c_1 + xmm4_11 <= var_7c_1 + xmm7_6)
                                    xmm0_69 = xmm4_11
                                    xmm4_11 = xmm7_6
                                else
                                    xmm0_69 = xmm7_6
                                
                                float xmm4_12
                                
                                if (i_3 + xmm5_10 <= i_3 + xmm6_6)
                                    xmm4_12 = xmm5_10
                                    xmm5_10 = xmm6_6
                                else
                                    xmm4_12 = xmm6_6
                                
                                var_40 = var_7c_1 + xmm0_69
                                float var_38_2 = var_7c_1 + xmm4_11
                                float var_3c_2 = i_3 + xmm4_12
                                float var_34_2 = i_3 + xmm5_10
                                var_30 = *sub_47bc00(&var_b0, edx_3, &var_40, &var_b0)
                                int32_t eax_26 = *(eax_23 + 0x63c) * 0x208
                                float xmm1_35 = *(eax_26 + eax_23 + 0x14)
                                float xmm0_75 = *(eax_26 + eax_23 + 0x1c) - xmm1_35
                                float xmm4_15 = *(eax_26 + eax_23 + 0xd4) * xmm0_75 + xmm1_35
                                float xmm2_25 = xmm0_75 f* *(eax_26 + eax_23 + 0xcc) + xmm1_35
                                float xmm1_36 = *(eax_26 + eax_23 + 0x18)
                                float xmm0_77 = *(eax_26 + eax_23 + 0x20) - xmm1_36
                                float xmm5_12 = *(eax_26 + eax_23 + 0xd8) * xmm0_77
                                float xmm3_11 = *(eax_26 + eax_23 + 0xd0) * xmm0_77 + xmm1_36
                                var_40 = xmm2_25
                                float var_38_3 = xmm4_15
                                float xmm5_13 = xmm5_12 + xmm1_36
                                float var_3c_3 = xmm3_11
                                float var_34_3 = xmm5_13
                                var_b0 = *sub_45c120(&var_b0, &var_40, &var_30, &var_b0)
                                
                                if (sub_414540(&var_b0, &var_30) != 0)
                                    sub_46b230(&var_30, 0x71, eax_23, &var_30)
                                
                                float xmm0_79 = var_30.d
                                eax_21 = &var_50
                                float xmm2_27 = var_30:8.d - xmm0_79
                                float xmm1_37 = var_30:4.d
                                float xmm3_13 = var_30:0xc.d - xmm1_37
                                var_50 = (xmm2_25 - xmm0_79) / xmm2_27
                                float var_4c_1 = (xmm3_11 - xmm1_37) / xmm3_13
                                float var_48_1 = (xmm4_15 - xmm0_79) / xmm2_27
                                float var_44_1 = (xmm5_13 - xmm1_37) / xmm3_13
                                sub_46b230(eax_21, 0x79, eax_23, eax_21)
                            else
                                if (data_5cea2c != 1)
                                    sub_44e4d0(eax_14, &data_5559b1, 
                                        "gUI2Editor.s.activeSetCount == 1", "c:\ax2017\engine\ui2.cpp", 
                                        0x1deb, "UI2DraggingUpdate")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_44e680()
                                    noreturn
                                
                                char* eax_15
                                int32_t edx_2
                                eax_15, edx_2 = sub_469160(data_5cda2c)
                                float xmm6_3 = (data_64f890 - i_3) * var_90_1
                                float xmm5_3 = (data_64f898 - i_3) * var_90_1
                                float xmm7_3 = (data_64f88c - var_7c_1) * xmm1_19
                                float xmm4_6 = (data_64f894 - var_7c_1) * xmm1_19
                                float xmm0_48
                                
                                if (xmm4_6 + var_7c_1 <= xmm7_3 + var_7c_1)
                                    xmm0_48 = xmm4_6
                                    xmm4_6 = xmm7_3
                                else
                                    xmm0_48 = xmm7_3
                                
                                float xmm4_7
                                
                                if (xmm5_3 + i_3 <= xmm6_3 + i_3)
                                    xmm4_7 = xmm5_3
                                    xmm5_3 = xmm6_3
                                else
                                    xmm4_7 = xmm6_3
                                
                                var_40 = var_7c_1 + xmm0_48
                                float var_38_1 = var_7c_1 + xmm4_6
                                float var_3c_1 = i_3 + xmm4_7
                                float var_34_1 = i_3 + xmm5_3
                                float xmm5_4[0x4] = *sub_47bc00(&var_b0, edx_2, &var_40, &var_b0)
                                int32_t eax_18 = *(eax_15 + 0x63c) * 0x208
                                float xmm3_6 = *(eax_18 + eax_15 + 0x14)
                                float xmm1_30 = *(eax_18 + eax_15 + 0x1c) - xmm3_6
                                float xmm4_8 = *(eax_18 + eax_15 + 0x18)
                                float xmm2_17 = *(eax_18 + eax_15 + 0x20) - xmm4_8
                                var_30.d = (xmm5_4[0] - xmm3_6) / xmm1_30
                                var_30:4.d = (_mm_shuffle_ps(xmm5_4, xmm5_4, 0x55) - xmm4_8) / xmm2_17
                                float xmm0_60 = _mm_shuffle_ps(xmm5_4, xmm5_4, 0xaa)
                                float xmm5_7 = (_mm_shuffle_ps(xmm5_4, xmm5_4, 0xff) - xmm4_8) / xmm2_17
                                var_30:8.d = (xmm0_60 - xmm3_6) / xmm1_30
                                var_30:0xc.d = xmm5_7
                                eax_21 = &var_30
                                var_30 = *sub_47bd20(&var_b0, &data_571d08, &var_30, &var_b0)
                                sub_46b230(eax_21, 0x79, eax_15, eax_21)
                        data_64f858 = var_78
                        data_64f85c = i_1
                data_64f849 = 1
                var_78 = &data_5c99a0
                i_1 = 0f
                sub_47b8c0(&data_5c99a0, &i_1)
                i = i_1
                
                if (i != 0xffffffff)
                    do
                        float ecx_27 = var_78
                        *(i + 0x654) = 2
                        sub_47b8c0(ecx_27, &i_1)
                        i = i_1
                    while (i != 0xffffffff)
                    
                    @__security_check_cookie@4(i_2 ^ &__saved_ebp)
                    return i
    
    @__security_check_cookie@4(i_2 ^ &__saved_ebp)
    return i
}
