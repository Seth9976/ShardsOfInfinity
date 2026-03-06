// 函数名称: sub_487dc0
// 虚拟地址: 0x487dc0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_487dc0(int32_t arg1 @ esi, int128_t* arg2, int32_t* arg3, char arg4, float arg5, int32_t* arg6, void* arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t ecx
    int128_t* edx
    ecx, edx = __alloca_probe(0x17d0)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* eax_2
    eax_2.b = arg4
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    char var_16f8 = eax_2.b
    int32_t* eax_4 = arg8
    int32_t var_16e0 = ecx
    float var_1700 = arg5
    int32_t* var_16ec = eax_4
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    
    if (ecx != 0)
        uint32_t ecx_1 = zx.d(ecx.w)
        int32_t edx_1
        
        if (ecx_1 u< data_654ebc)
            edx_1 = data_654eb8
            eax_4 = ecx_1 * 0x438
        
        if (ecx_1 u>= data_654ebc || *(eax_4 + edx_1 + 0x434) != ecx)
            char const* const var_14_22 = "DataArray<struct UIState>::DataArrayGet"
            int32_t var_18_22 = 0x6d
            char const* const var_1c_14 = "c:\ax2017\engine\dataarray.h"
            sub_44e4d0(eax_4, &data_5559b1, "DataArrayTryToGet(id) != NULL")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* ebx_2 = ecx_1 * 0x438 + edx_1
        void* var_16e4_1 = ebx_2
        bool cond:0_1 = *(ebx_2 + 8) != 0
        *(ebx_2 + 0x1c) = 1
        
        if (not(cond:0_1))
            int32_t* edi = sub_485450(*(ebx_2 + 4))
            int32_t var_14 = 0x1604
            int32_t var_18 = 0
            void var_16c8
            void* var_1c = &var_16c8
            int32_t* var_16f0 = edi
            _memset()
            int32_t var_c8
            int32_t ecx_3 = var_c8 * 0x58
            uint32_t (* edx_2)[0x4] = nullptr
            int32_t eax_6 = edx[5].d
            uint32_t var_c8_1 = 1
            char var_16cd = 0
            uint32_t (* var_16e8)[0x4] = nullptr
            void* var_1708 = nullptr
            uint32_t (* var_1704)[0x4] = nullptr
            *(&var_16c8 + ecx_3) = *edx
            var_1674
            *(&var_1674 + ecx_3) = 0xffffffff
            int128_t xmm0_2 = edx[1]
            uint32_t (* var_16d4)[0x4] = nullptr
            void var_16b8
            *(&var_16b8 + ecx_3) = xmm0_2
            void var_16a8
            *(&var_16a8 + ecx_3) = edx[2]
            void var_1698
            *(&var_1698 + ecx_3) = edx[3]
            uint32_t (* esi_1)[0x4] = nullptr
            uint32_t (* var_16cc)[0x4] = nullptr
            void var_1688
            *(&var_1688 + ecx_3) = edx[4]
            int32_t var_1678[0x56c]
            var_1678[var_c8 * 0x16] = eax_6
            int128_t var_171c = data_571f08
            
            if (edi[1] s> 0)
                uint32_t (* eax_7)[0x4] = nullptr
                int128_t var_28_1
                uint32_t ecx_7
                
                while (true)
                    int32_t esi_2 = var_16f8.d
                    void* edi_2 = *edi + eax_7 * 0x118
                    uint32_t (* eax_8)[0x4] = sub_486810(eax_7, edx_2, ebx_2, *(edi_2 + 8))
                    int32_t edx_3 = *(edi_2 + 4)
                    void var_17d0
                    int32_t var_1720
                    void var_16d0
                    int128_t var_c0
                    
                    if (edx_3 != 6)
                        uint32_t eax_15 = var_c8_1
                        char const* const ecx_37
                        
                        if (eax_15 s<= 0)
                            char const* const var_14_21 = "Peek"
                            int32_t var_18_21 = 0x67d
                            ecx_37 = "stack.numEntries > 0"
                        label_4889ea:
                            char const* const var_1c_13 = "c:\ax2017\engine\uidef.cpp"
                            sub_44e4d0(eax_15, &data_5559b1, ecx_37)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        int32_t ecx_8 = eax_15 * 0x58
                        int32_t eax_16 = *(&var_16d0 + ecx_8)
                        int32_t var_18_3 = eax_16
                        int128_t var_68_2 = *(&var_1720 + ecx_8)
                        int32_t var_70_2 = eax_16
                        int128_t var_58_2 = *(&var_171c:0xc + ecx_8)
                        int128_t var_48_2 = *(&var_1700 + ecx_8)
                        int128_t var_38_2 = *(&var_16f0 + ecx_8)
                        var_28_1 = *(&var_16e0 + ecx_8)
                        var_c0 = *(&var_1720 + ecx_8)
                        int128_t var_b0_2 = *(&var_171c:0xc + ecx_8)
                        int128_t var_a0_2 = *(&var_1700 + ecx_8)
                        int128_t var_90_2 = *(&var_16f0 + ecx_8)
                        int128_t var_80_2 = *(&var_16e0 + ecx_8)
                        uint32_t xmm0_39 = eax_8[1][0]
                        xmm0_39 f- 0f
                        eax_16:1.b = (xmm0_39 f== 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_39, 0f) ? 1 : 0) << 2 | (xmm0_39 f< 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        uint32_t eax_17
                        
                        if (not(p_2))
                            if ((*eax_8)[2] s<= *eax_8)
                                eax_17.b = *(edi_2 + 0x30)
                            else
                                eax_17.b = (*eax_8)[3].b
                        
                        if (not(p_2) && eax_17.b != 0)
                            esi_1 = var_16cc
                            ecx_7 = sub_487160(&var_16c8)
                        else
                            int32_t var_16d8
                            
                            if (edx_3 - 2 u> 7)
                            label_488713:
                                esi_1 = var_16cc
                            else
                                switch (edx_3)
                                    case 2
                                        uint32_t eax_19 = eax_8[0x12][0]
                                        uint32_t temp1_1 = *eax_8
                                        uint32_t var_16fc_1
                                        uint32_t var_16f4_1
                                        uint32_t ecx_10
                                        uint32_t edx_7
                                        
                                        if (eax_19 s<= temp1_1)
                                            edx_7 = *(edi_2 + 0x8c)
                                            ecx_10 = *(edi_2 + 0x88)
                                            var_16fc_1 = edx_7
                                            var_16f4_1 = ecx_10
                                        else
                                            var_16fc_1 = (*eax_8)[0x4b]
                                            edx_7 = *(edi_2 + 0x8c)
                                            var_16f4_1 = eax_8[0x13][0]
                                            ecx_10 = *(edi_2 + 0x88)
                                        
                                        uint32_t esi_4
                                        
                                        if (eax_19 s<= temp1_1)
                                            eax_15 = edx_7
                                            esi_4 = ecx_10
                                        else
                                            eax_15 = (*eax_8)[0x49]
                                            esi_4 = (*eax_8)[0x4a]
                                        
                                        uint32_t var_1740 = eax_15
                                        uint32_t var_173c_1 = esi_4
                                        
                                        if (ecx_10 * edx_7 s> 0x1e)
                                            char const* const var_14_14 = "UIStateUpdate"
                                            int32_t var_18_14 = 0x85d
                                            ecx_37 = "el.rows * el.cols <= 30"
                                            goto label_4889ea
                                        
                                        uint32_t esi_5 = var_16fc_1
                                        eax_15 = esi_5 * var_16f4_1
                                        
                                        if (eax_15 s> 0x1e)
                                            char const* const var_14_13 = "UIStateUpdate"
                                            int32_t var_18_13 = 0x85e
                                            ecx_37 = "dimsUpdate.x * dimsUpdate.y <= 30"
                                            goto label_4889ea
                                        
                                        uint32_t ecx_13 = var_16f4_1
                                        void var_1760
                                        int128_t xmm0_40 = *sub_48a130(&var_1760, var_16d4, var_16e0, 
                                            &var_1760, &var_c0)
                                        int32_t eax_23 = 0
                                        var_16d8 = 0
                                        int128_t var_1750 = xmm0_40
                                        
                                        if (ecx_13 s> 0)
                                            do
                                                int32_t edi_5 = 0
                                                
                                                if (esi_5 s> 0)
                                                    do
                                                        var_1720 = eax_23
                                                        int32_t var_1724
                                                        int32_t* var_14_4 = &var_1724
                                                        var_1724 = edi_5
                                                        uint32_t eax_25
                                                        int32_t ecx_15
                                                        eax_25, ecx_15 = sub_487340(&var_1724, eax_8, 
                                                            edi_2, var_14_4)
                                                        
                                                        if (*(eax_25 + 0x20) != 0)
                                                            var_1724 = *(eax_25 + 0x24)
                                                            ecx_15 = *(eax_25 + 0x28)
                                                            var_1720 = ecx_15
                                                        
                                                        int32_t var_14_5 = ecx_15
                                                        uint32_t* var_18_5 = &var_1740
                                                        int32_t* var_1c_1 = &var_1724
                                                        var_28_1:8.d = &var_c0
                                                        var_28_1:4.d = &var_17d0
                                                        int128_t* eax_27 =
                                                            sub_485aa0(&var_17d0, eax_8, edi_2)
                                                        int32_t* ecx_18 = arg3
                                                        int64_t xmm1_7 = (*eax_27).q
                                                        float xmm1_8 = xmm1_7 f+ (*eax_8)[0x55]
                                                        int128_t var_58_3 = eax_27[1]
                                                        int128_t var_48_3 = eax_27[2]
                                                        int128_t var_38_3 = eax_27[3]
                                                        var_28_1 = eax_27[4]
                                                        float xmm0_46 = (*eax_8)[0x56] f+ xmm1_7:4.d
                                                        int32_t var_18_6 = eax_27[5].d
                                                        int32_t var_1734 = *ecx_18
                                                        int32_t var_1730_1 = ecx_18[1]
                                                        int64_t var_68_3
                                                        var_68_3.d = xmm1_8
                                                        var_68_3:4.d = xmm0_46
                                                        
                                                        if (*(edi_2 + 0xae) != 0)
                                                            int32_t* edx_11 = ecx_18
                                                            ecx_18 = &var_1750
                                                            
                                                            if (sub_4144c0(ecx_18, edx_11) == 0)
                                                                var_1734 = 0xc61c4000
                                                                int32_t var_1730_2 = 0xc61c4000
                                                        
                                                        int32_t* var_14_6 = &var_1724
                                                        uint32_t (* var_18_7)[0x4] = eax_8
                                                        uint32_t (** var_1c_2)[0x4] = &var_16d4
                                                        var_28_1:8.d = ecx_18
                                                        *(eax_25 + 0x434)
                                                        var_28_1:8.d = var_1700
                                                        var_28_1:4.d = var_16f8.d
                                                        var_28_1.d = &var_1734
                                                        void var_1778
                                                        var_38_3:0xc.d = &var_1778
                                                        int128_t* eax_33 = sub_487dc0()
                                                        int128_t xmm0_48 = *eax_33
                                                        uint32_t (* ecx_20)[0x4] = eax_33[1].d
                                                        
                                                        if (*(eax_25 + 0x1c) == 2)
                                                            *(var_16e4_1 + 0x1c) = 2
                                                        
                                                        if (xmm0_48 != 0)
                                                            var_171c = xmm0_48
                                                            var_16cc = ecx_20
                                                        
                                                        esi_5 = var_16fc_1
                                                        edi_5 += 1
                                                        eax_23 = var_16d8
                                                    while (edi_5 s< esi_5)
                                                    
                                                    ecx_13 = var_16f4_1
                                                
                                                eax_23 += 1
                                                var_16d8 = eax_23
                                            while (eax_23 s< ecx_13)
                                        
                                        goto label_488713
                                    case 3
                                        if ((*eax_8)[0x57].b != 0)
                                            sub_4c50b0(&eax_8[0x16], 0, &data_571d90)
                                        
                                        goto label_488713
                                    case 4, 7
                                        goto label_488713
                                    case 5
                                        char eax_43
                                        int32_t ecx_29
                                        eax_43, ecx_29 = sub_486dc0(edx_3 - 2, &var_c0, edi_2, arg3)
                                        
                                        if (eax_43 != 0 && *(eax_8 + 0x21) == 0)
                                            if (var_16cd != 0)
                                                int32_t var_14_9 = ecx_29
                                                int32_t var_18_9 = esi_2
                                                int32_t var_1c_3 = 0
                                                var_28_1:8.d = &(*var_1704)[0xa]
                                                sub_486f60(&(*var_1704)[0xa], &var_1704[2], var_1708)
                                            
                                            var_16cd = 1
                                            var_16e8 = var_16d4
                                            var_1708 = edi_2
                                            var_1704 = eax_8
                                            goto label_488713
                                        
                                        int32_t var_14_10 = ecx_29
                                        int32_t var_18_10 = esi_2
                                        int32_t var_1c_4 = eax_43.d
                                        var_28_1:8.d = &(*eax_8)[0xa]
                                        
                                        if (sub_486f60(&(*eax_8)[0xa], &eax_8[2], edi_2) != 1)
                                            goto label_488713
                                        
                                        int32_t eax_49 = *(var_16e4_1 + 0x2c)
                                        
                                        if (eax_49 == 0)
                                            int32_t eax_52
                                            
                                            if (arg7 != 0)
                                                eax_52 = *(arg7 + 0x11c)
                                            
                                            if (arg7 == 0 || eax_52 == 0)
                                                var_16cc = var_16d4
                                                var_171c.d = 2
                                                
                                                if (arg6 != 0)
                                                    var_171c:4.d = *arg6
                                                    var_171c:8.d = *var_16ec
                                                    var_171c:0xc.d = var_16ec[1]
                                                
                                                goto label_488713
                                            
                                            var_16d8 = 0
                                            
                                            if (var_16ec == 0)
                                                char const* const var_14_19 = "UIStateUpdate"
                                                int32_t var_18_19 = 0x8c3
                                                char const* const var_1c_11 =
                                                    "c:\ax2017\engine\uidef.cpp"
                                                sub_44e4d0(eax_52, &data_5559b1, "parentTableSlot")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_44e680()
                                                noreturn
                                            
                                            var_171c.d = 3
                                            int32_t* var_14_12 = &var_16d8
                                            uint32_t (* var_18_12)[0x4] = var_16d4
                                            int32_t* var_1c_6 = var_16ec
                                            var_28_1:8.d = var_16e0
                                            esi_1 = eax_52()
                                            var_16cc = esi_1
                                        else
                                            var_171c.d = 3
                                            int32_t* var_14_11 = &var_16d8
                                            uint32_t (* var_18_11)[0x4] = var_16d4
                                            var_16d8 = 0
                                            int32_t var_1c_5 = var_16e0
                                            esi_1 = eax_49()
                                            var_16cc = esi_1
                                    case 8
                                        int32_t* eax_36 = sub_4c0f50((*eax_8)[0x27])
                                        
                                        if (eax_36 != 0)
                                            sub_4c1040(eax_36, var_1700)
                                        
                                        goto label_488713
                                    case 9
                                        void* ecx_24 = sub_495430(eax_8[0xa][0])
                                        int32_t* eax_38 = *(edi_2 + 0x44)
                                        
                                        if (eax_38 != 0)
                                            if (ecx_24 == 0)
                                                ecx_24 = sub_4953d0(eax_38, &data_571d90)
                                                uint32_t eax_40 = *(ecx_24 + 0x78)
                                                *(ecx_24 + 0x20) = 1
                                                eax_8[0xa][0] = eax_40
                                                eax_38 = *(edi_2 + 0x44)
                                            
                                            if (*ecx_24 != eax_38)
                                                sub_4954d0(ecx_24)
                                                ecx_24 = sub_4953d0(*(edi_2 + 0x44), &data_571d90)
                                                uint32_t eax_42 = *(ecx_24 + 0x78)
                                                *(ecx_24 + 0x20) = 1
                                                eax_8[0xa][0] = eax_42
                                            
                                            sub_49a150(ecx_24, data_5b0f3c)
                                        else if (ecx_24 != 0)
                                            sub_4954d0(ecx_24)
                                            eax_8[0xa][0] = 0
                                        
                                        goto label_488713
                            void* eax_59 = sub_495430(eax_8[0xa][0])
                            
                            if (eax_59 != 0 && *(edi_2 + 4) != 9)
                                sub_4954d0(eax_59)
                                eax_8[0xa][0] = 0
                            
                            ecx_7 = sub_487160(&var_16c8)
                    else
                        if (var_c8_1 s<= 0)
                            char const* const var_14_18 = "Peek"
                            int32_t var_18_18 = 0x67d
                            char const* const var_1c_10 = "c:\ax2017\engine\uidef.cpp"
                            sub_44e4d0(eax_8, &data_5559b1, "stack.numEntries > 0")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        int32_t esi_3 = var_c8_1 * 0x58
                        int32_t eax_9 = *(&var_16d0 + esi_3)
                        int32_t var_18_1 = eax_9
                        int128_t var_68_1 = *(&var_1720 + esi_3)
                        int32_t var_70_1 = eax_9
                        int128_t* var_14_2 = &var_c0
                        int128_t var_58_1 = *(&var_171c:0xc + esi_3)
                        int128_t* var_18_2 = &var_17d0
                        int128_t var_48_1 = *(&var_1700 + esi_3)
                        int128_t var_38_1 = *(&var_16f0 + esi_3)
                        var_28_1 = *(&var_16e0 + esi_3)
                        var_c0 = *(&var_1720 + esi_3)
                        int128_t var_b0_1 = *(&var_171c:0xc + esi_3)
                        int128_t var_a0_1 = *(&var_1700 + esi_3)
                        int128_t var_90_1 = *(&var_16f0 + esi_3)
                        int128_t var_80_1 = *(&var_16e0 + esi_3)
                        int128_t* eax_11 = sub_487b30(&var_17d0, eax_8, edi_2, var_18_2, var_14_2)
                        ecx_7 = *eax_8
                        var_c8_1 += 1
                        *(&var_16c8 + esi_3) = *eax_11
                        *(&var_16b8 + esi_3) = eax_11[1]
                        *(&var_16a8 + esi_3) = eax_11[2]
                        *(&var_1698 + esi_3) = eax_11[3]
                        int32_t eax_12 = eax_11[5].d
                        *(&var_1688 + esi_3) = eax_11[4]
                        var_1678[var_c8_1 * 0x16] = eax_12
                        *(&var_1674 + esi_3) = *(edi_2 + 0x48)
                        int32_t eax_13
                        
                        if ((*eax_8)[2] s<= ecx_7)
                            eax_13.b = *(edi_2 + 0x30)
                        else
                            eax_13.b = (*eax_8)[3].b
                        
                        float xmm1_1
                        
                        xmm1_1 = eax_13.b != 0 ? -1f : 1f
                        
                        bool cond:1_1 = (*eax_8)[0x17] == 0
                        float xmm0_24 = var_1700 * xmm1_1 f+ (*eax_8)[5]
                        (*eax_8)[5] = xmm0_24
                        float xmm2_1
                        
                        if (cond:1_1)
                            xmm2_1 = _mm_cvtepi32_ps(zx.o(*(edi_2 + 0x50)))
                        else
                            xmm2_1 = eax_8[6][0]
                        
                        uint32_t eax_14
                        
                        if ((*eax_8)[0x4d] s<= ecx_7)
                            eax_14 = *(edi_2 + 0x4c)
                        else
                            eax_14 = (*eax_8)[0x4e]
                        
                        float xmm1_4 = _mm_cvtepi32_ps(zx.o(eax_14)) + xmm2_1
                        
                        if (not(0f <= xmm0_24))
                            (*eax_8)[5] = 0
                            xmm0_24 = (zx.o(0)).d
                        
                        float xmm0_27 = (xmm0_24 * 1000f - xmm2_1) / (xmm1_4 - xmm2_1)
                        
                        if (not(0 f< xmm0_27))
                            esi_1 = var_16cc
                            eax_8[1][0] = 0
                        else if (xmm0_27 < 1f)
                            uint32_t xmm0_28
                            ecx_7, xmm0_28 = sub_4145f0(1, xmm0_27, (zx.o(0)).d, 1f)
                            esi_1 = var_16cc
                            eax_8[1][0] = xmm0_28
                        else
                            esi_1 = var_16cc
                            eax_8[1][0] = 0x3f800000
                    edi = var_16f0
                    edx_2 = var_16d4 + 1
                    var_16d4 = edx_2
                    eax_7 = edx_2
                    
                    if (edx_2 s>= edi[1])
                        break
                    
                    ebx_2 = var_16e4_1
                
                if (var_16cd != 0)
                    uint32_t var_14_15 = ecx_7
                    int32_t var_18_15 = var_16f8.d
                    int32_t var_1c_7 = 1
                    var_28_1:8.d = &(*var_1704)[0xa]
                    
                    if (sub_486f60(&(*var_1704)[0xa], &var_1704[2], var_1708) == 1)
                        int32_t eax_63 = *(var_16e4_1 + 0x2c)
                        
                        if (eax_63 == 0)
                            int32_t eax_67
                            
                            if (arg7 != 0)
                                eax_67 = *(arg7 + 0x11c)
                            
                            if (arg7 == 0 || eax_67 == 0)
                                var_171c.d = 2
                                goto label_4888b5
                            
                            if (var_16ec == 0)
                                char const* const var_14_20 = "UIStateUpdate"
                                int32_t var_18_20 = 0x8f8
                                char const* const var_1c_12 = "c:\ax2017\engine\uidef.cpp"
                                sub_44e4d0(eax_67, &data_5559b1, "parentTableSlot")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_44e680()
                                noreturn
                            
                            var_16f0 = nullptr
                            int32_t** var_14_17 = &var_16f0
                            uint32_t (* var_18_17)[0x4] = var_16e8
                            int32_t* var_1c_9 = var_16ec
                            var_28_1:8.d = var_16e0
                            var_171c.d = 3
                            esi_1 = eax_67()
                        else
                            int32_t** var_14_16 = &var_16f0
                            uint32_t (* var_18_16)[0x4] = var_16e8
                            int32_t var_1c_8 = var_16e0
                            var_171c.d = 3
                            var_16f0 = nullptr
                            esi_1 = eax_63()
                    else if (*(var_1704 + 0x21) == 0 && *(var_1704 + 0x23) == 0
                            && *(var_1704 + 0x22) == 0)
                        var_171c.d = 1
                        *(var_16e4_1 + 0x1c) = 2
                    label_4888b5:
                        
                        if (arg6 != 0)
                            var_171c:4.d = *arg6
                            var_171c:8.d = *var_16ec
                            var_171c:0xc.d = var_16ec[1]
                        
                        esi_1 = var_16e8
            
            *arg2 = var_171c
            arg2[1].d = esi_1
            @__security_check_cookie@4(arg1 ^ &__saved_ebp)
            return arg2
    
    __builtin_memset(arg2, 0, 0x14)
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return arg2
}
