// 函数名称: sub_50a640
// 虚拟地址: 0x50a640
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_50a640(int32_t arg1, int32_t arg2, void* arg3, void* arg4, int32_t* arg5, void* arg6, void* arg7, int32_t arg8)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t xmm4 = (zx.o(0)).d
    void* esi = arg7
    int32_t eax_3 = *(arg3 + 0x48)
    int32_t i_10 = arg2
    void* var_b8 = esi
    int32_t var_9c = eax_3
    int32_t* edi = arg5
    int32_t* var_c0 = edi
    int32_t i_12
    void* j_12
    
    if ((eax_3.b & 1) != 0)
        j_12 = arg6
        i_12 = i_10
    else
        i_12 = arg2
        j_12 = arg6
        
        if (i_12 s> 0)
            int32_t* eax_4 = &edi[esi]
            void* var_a4_1 = 3
            int32_t* var_b4_1 = edi
            int32_t* var_a0_1 = eax_4
            int32_t i_9 = i_12
            int32_t i
            
            do
                float xmm0_1 = *eax_4
                xmm0_1 f- 0
                eax_4:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
                    | (xmm0_1 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                float xmm1_1
                
                if (not(p_2))
                    xmm1_1 = (zx.o(0)).d
                else
                    xmm1_1 = 1f / xmm0_1
                
                int32_t j = 0
                
                if (j_12 s>= 4)
                    int32_t* esi_1 = var_b4_1
                    
                    do
                        if (j != var_b8)
                            *esi_1 = *esi_1 * xmm1_1
                        
                        if (j + 1 != var_b8)
                            esi_1[1] = esi_1[1] f* xmm1_1
                        
                        int32_t eax_7 = j + 2
                        
                        if (eax_7 != var_b8)
                            void* eax_9 = var_a4_1 + j
                            edi[eax_9 - 1] = xmm1_1 f* edi[eax_9 - 1]
                            eax_7 = j + 2
                        
                        if (eax_7 + 1 != var_b8)
                            void* eax_12 = var_a4_1 + j
                            edi[eax_12] = xmm1_1 f* edi[eax_12]
                        
                        j += 4
                        esi_1 = &esi_1[4]
                    while (j s< j_12 - 3)
                    
                    j_12 = arg6
                    esi = var_b8
                
                if (j s< j_12)
                    void* eax_16 = &edi[var_a4_1 - 3 + j]
                    
                    do
                        if (j != esi)
                            *eax_16 = *eax_16 * xmm1_1
                        
                        j += 1
                        eax_16 += 4
                    while (j s< j_12)
                
                var_a4_1 += j_12
                eax_4 = &var_a0_1[j_12]
                var_b4_1 = &var_b4_1[j_12]
                i = i_9
                i_9 -= 1
                var_a0_1 = eax_4
            while (i != 1)
            eax_3 = var_9c
            i_12 = i_10
    
    int32_t esi_2 = 0
    int32_t var_a4_2 = 0
    int32_t var_b4_3
    int16_t var_98[0x42]
    
    if (j_12 s<= 0)
        var_b4_3 = eax_3 & 2
    else
        int32_t edi_1 = 0
        
        do
            int32_t temp0_1
            
            if (edi_1 == var_b8)
                temp0_1 = var_9c & 2
                var_b4_3 = temp0_1
            
            if (edi_1 != var_b8 || temp0_1 != 0)
                var_98[esi_2] = edi_1.w
                esi_2 += 1
                var_b4_3 = var_9c & 2
            
            edi_1 += 1
        while (edi_1 s< j_12)
        
        edi = var_c0
        i_12 = i_10
        var_a4_2 = esi_2
    
    int16_t x87control
    uint64_t xmm6[0x2]
    
    switch (arg8)
        case 0
            if (i_12 s> 0)
                void* eax_21 = nullptr
                void* var_a4_3 = nullptr
                int32_t* var_9c_1 = edi
                int32_t i_1
                
                do
                    int32_t j_1 = 0
                    
                    if (j_12 s> 0)
                        if (j_12 u>= 4)
                            void* ecx_4 = arg4 + 2 + var_a4_3
                            
                            if (ecx_4 - 2 u> &edi[var_a4_3 - 1 + j_12]
                                    || eax_21 - 1 + j_12 + arg4 u< var_9c_1)
                                void* eax_32 = j_12 & 0x80000003
                                
                                if (eax_32 s< 0)
                                    eax_32 = ((eax_32 - 1) | 0xfffffffc) + 1
                                
                                void* edx_2 = &var_9c_1[2]
                                
                                do
                                    uint128_t xmm1_2 = zx.o(*(edx_2 - 8))
                                    int64_t xmm7_1 = (data_59e490).q
                                    uint32_t xmm3_2[0x4] = _mm_cmpeq_ps(xmm1_2, zx.o(0), 1)
                                    int64_t xmm7_2 = (data_59e490).q
                                    float xmm0_13[0x4] = _mm_min_ps(xmm7_1, xmm1_2)
                                    int64_t xmm1_3 = (data_59e510).q
                                    uint32_t xmm2_2[0x4] = _mm_andnot_ps(xmm3_2, xmm0_13)
                                    uint128_t xmm1_4 = zx.o(*edx_2)
                                    edx_2 += 0x10
                                    int16_t xmm0_21[0x8] = _mm_shuffle_epi32(
                                        _mm_shufflehi_epi16(
                                            _mm_shufflelo_epi16(
                                                _mm_cvttpd_epi32(__addpd_xmmpd_mempd(
                                                    _mm_cvtps_pd(_mm_mul_ps(xmm2_2, xmm1_3)), 
                                                    data_59e4b0)), 
                                                0xd8), 
                                            0xd8), 
                                        0xd8) & data_59e2c0
                                    int16_t xmm0_22 = _mm_packus_epi16(xmm0_21, xmm0_21)
                                    uint32_t xmm3_4[0x4] = _mm_cmpeq_ps(xmm1_4, zx.o(0), 1)
                                    *(ecx_4 + j_1 - 2) = xmm0_22
                                    int16_t xmm0_32[0x8] = _mm_shuffle_epi32(
                                        _mm_shufflehi_epi16(
                                            _mm_shufflelo_epi16(
                                                _mm_cvttpd_epi32(__addpd_xmmpd_mempd(
                                                    _mm_cvtps_pd(_mm_mul_ps(
                                                        _mm_andnot_ps(xmm3_4, 
                                                            _mm_min_ps(xmm7_2, xmm1_4)), 
                                                        (data_59e510).q)), 
                                                    data_59e4b0)), 
                                                0xd8), 
                                            0xd8), 
                                        0xd8) & data_59e2c0
                                    *(ecx_4 + j_1) = _mm_packus_epi16(xmm0_32, xmm0_32)
                                    j_1 += 4
                                while (j_1 s< j_12 - eax_32)
                                
                                edi = var_c0
                                j_12 = arg6
                            
                            eax_21 = var_a4_3
                            i_12 = i_10
                        
                        if (j_1 s< j_12)
                            void* ecx_8 = &edi[eax_21 + j_1]
                            
                            do
                                int32_t xmm1_6 = *ecx_8
                                int32_t xmm0_34
                                
                                if (0 f<= xmm1_6)
                                    xmm0_34 = _mm_min_ss(0x3f800000, xmm1_6)
                                else
                                    xmm0_34 = (zx.o(0)).d
                                
                                ecx_8 += 4
                                *(arg4 + var_a4_3 + j_1) = (int.d(fconvert.d(xmm0_34 f* 255f) + 0.5)).b
                                j_1 += 1
                                edi = var_c0
                            while (j_1 s< j_12)
                            
                            i_12 = i_10
                            eax_21 = var_a4_3
                    
                    eax_21 += j_12
                    var_9c_1 = &var_9c_1[j_12]
                    i_1 = i_12
                    i_12 -= 1
                    var_a4_3 = eax_21
                    i_10 = i_12
                while (i_1 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 
        case 1
            if (i_12 s> 0)
                void* ecx_11 = nullptr
                void* var_c0_1 = nullptr
                int32_t i_2
                
                do
                    int32_t eax_41 = 0
                    int32_t var_a0_4 = 0
                    
                    if (esi_2 s> 0)
                        do
                            void* esi_5 = zx.d(var_98[eax_41]) + ecx_11
                            int32_t xmm0_38 = _mm_min_ss(0x3f7fffff, _mm_max_ss(edi[esi_5], 0x39000000))
                            int32_t edx_3 = *(((xmm0_38 - 0x39000000) u>> 0x14 << 2) + u"\rs\rz\r")
                            *(arg4 + esi_5) = ((zx.d((xmm0_38 u>> 0xc).b) * zx.d(edx_3.w)
                                + (edx_3 u>> 7 & 0x1fffe00)) u>> 0x10).b
                            esi_2 = var_a4_2
                            eax_41 = var_a0_4 + 1
                            ecx_11 = var_c0_1
                            var_a0_4 = eax_41
                        while (eax_41 s< esi_2)
                        
                        j_12 = arg6
                    
                    if ((var_9c & 2) == 0)
                        int32_t xmm1_9 = edi[var_b8 + ecx_11]
                        int32_t xmm0_39
                        
                        if (0 f<= xmm1_9)
                            xmm0_39 = _mm_min_ss(0x3f800000, xmm1_9)
                        else
                            xmm0_39 = (zx.o(0)).d
                        
                        *(var_b8 + arg4 + var_c0_1) = (int.d(fconvert.d(xmm0_39 f* 255f) + 0.5)).b
                        esi_2 = var_a4_2
                        ecx_11 = var_c0_1
                    
                    ecx_11 += j_12
                    i_2 = i_10
                    i_10 -= 1
                    var_c0_1 = ecx_11
                while (i_2 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 
        case 2
            if (i_12 s> 0)
                void* var_ac_3 = j_12 * 2
                void* ecx_22 = arg4
                void* var_a0_5 = j_12 << 2
                int32_t i_11 = i_10
                void* var_bc_2 = nullptr
                int32_t* var_b8_1 = edi
                void* var_a4_4 = ecx_22
                int32_t i_3
                
                do
                    int32_t j_2 = 0
                    int32_t j_8 = 0
                    
                    if (j_12 s> 0)
                        if (j_12 u>= 4)
                            j_8 = 0
                            
                            if (var_a4_4 u> var_a0_5 - 4 + edi || var_ac_3 - 2 + ecx_22 u< var_b8_1)
                                void* eax_59 = j_12 & 0x80000003
                                
                                if (eax_59 s< 0)
                                    eax_59 = ((eax_59 - 1) | 0xfffffffc) + 1
                                
                                void* eax_63 = var_a4_4 + 4
                                edi = var_c0
                                void* ecx_25 = &var_b8_1[2]
                                
                                do
                                    uint128_t xmm2_7 = zx.o(*(ecx_25 - 8))
                                    int64_t xmm5_1 = (data_59e490).q
                                    uint32_t xmm1_11[0x4] = _mm_cmpeq_ps(xmm2_7, zx.o(0), 1)
                                    j_2 += 4
                                    int64_t xmm5_2 = (data_59e490).q
                                    float xmm0_44[0x4] = _mm_min_ps(xmm5_1, xmm2_7)
                                    uint128_t xmm2_8 = zx.o(*ecx_25)
                                    uint32_t xmm3_6[0x4] = _mm_andnot_ps(xmm1_11, xmm0_44)
                                    ecx_25 += 0x10
                                    _mm_and_ps(zx.o(0), xmm1_11)
                                    *(eax_63 - 4) = _mm_shuffle_epi32(
                                        _mm_shufflehi_epi16(
                                            _mm_shufflelo_epi16(
                                                _mm_cvttpd_epi32(__addpd_xmmpd_mempd(
                                                    _mm_cvtps_pd(_mm_mul_ps(xmm3_6, (data_59e570).q)), 
                                                    data_59e4b0)), 
                                                0xd8), 
                                            0xd8), 
                                        0xd8)
                                    uint32_t xmm1_14[0x4] = _mm_cmpeq_ps(xmm2_8, zx.o(0), 1)
                                    uint32_t xmm3_9[0x4] =
                                        _mm_andnot_ps(xmm1_14, _mm_min_ps(xmm5_2, xmm2_8))
                                    _mm_and_ps(zx.o(0), xmm1_14)
                                    *eax_63 = _mm_shuffle_epi32(
                                        _mm_shufflehi_epi16(
                                            _mm_shufflelo_epi16(
                                                _mm_cvttpd_epi32(__addpd_xmmpd_mempd(
                                                    _mm_cvtps_pd(_mm_mul_ps(xmm3_9, (data_59e570).q)), 
                                                    data_59e4b0)), 
                                                0xd8), 
                                            0xd8), 
                                        0xd8)
                                    eax_63 += 8
                                while (j_2 s< j_12 - eax_59)
                                
                                ecx_22 = arg4
                                j_8 = j_2
                        
                        if (j_2 s< j_12)
                            void* eax_65 = var_bc_2 + j_2
                            void* var_b4_6 = ecx_22 + (eax_65 << 1)
                            void* esi_8 = &edi[eax_65]
                            void* j_9 = j_12 - j_8
                            void* j_3
                            
                            do
                                int32_t xmm1_16 = *esi_8
                                int32_t xmm0_63
                                
                                if (0 f<= xmm1_16)
                                    xmm0_63 = _mm_min_ss(0x3f800000, xmm1_16)
                                else
                                    xmm0_63 = (zx.o(0)).d
                                
                                void* ecx_26 = var_b4_6
                                esi_8 += 4
                                var_b4_6 += 2
                                j_3 = j_9
                                j_9 -= 1
                                *ecx_26 = (int.d(fconvert.d(xmm0_63 f* 65535f) + 0.5)).w
                            while (j_3 != 1)
                            ecx_22 = arg4
                        
                        i_11 = i_10
                    
                    var_bc_2 += j_12
                    int32_t esi_9 = j_12 * 2
                    var_a4_4 += esi_9
                    var_ac_3 += esi_9
                    var_a0_5 += j_12 << 2
                    var_b8_1 = &var_b8_1[j_12]
                    i_3 = i_11
                    i_11 -= 1
                    i_10 = i_11
                while (i_3 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 
        case 3
            if (i_12 s> 0)
                double xmm1_17 = 0.5
                void* var_9c_4 = nullptr
                int32_t i_4
                
                do
                    int32_t eax_73 = 0
                    int32_t var_a0_6 = 0
                    
                    if (esi_2 s> 0)
                        void* edx_6 = arg4
                        
                        do
                            void* eax_70 = zx.d(var_98[eax_73]) + var_9c_4
                            int32_t xmm1_18 = edi[eax_70]
                            float xmm0_67
                            
                            if (0 f<= xmm1_18)
                                float xmm0_68 = _mm_min_ss(0x3f800000, xmm1_18)
                                
                                if (0.00313080009f < xmm0_68)
                                    edx_6 = arg4
                                    xmm0_67 = fconvert.s(
                                        sub_414580(xmm0_68, 0x3ed55555) * fconvert.t(1.05499995f)
                                        - fconvert.t(0.0549999997f))
                                else
                                    xmm0_67 = xmm0_68 * 12.9200001f
                            else
                                xmm0_67 = 0f * 12.9200001f
                            
                            xmm1_17 = 0.5
                            *(edx_6 + (eax_70 << 1)) = (int.d(fconvert.d(xmm0_67 * 65535f) + xmm1_17)).w
                            eax_73 = var_a0_6 + 1
                            var_a0_6 = eax_73
                        while (eax_73 s< esi_2)
                        
                        j_12 = arg6
                        i_12 = i_10
                    
                    if (var_b4_3 == 0)
                        void* eax_75 = var_b8 + var_9c_4
                        int32_t xmm5_3 = edi[eax_75]
                        float xmm0_72
                        
                        if (0 f<= xmm5_3)
                            xmm0_72 = _mm_min_ss(0x3f800000, xmm5_3)
                        else
                            xmm0_72 = (zx.o(0)).d
                        
                        *(arg4 + (eax_75 << 1)) = (int.d(fconvert.d(xmm0_72 * 65535f) + xmm1_17)).w
                        esi_2 = var_a4_2
                        i_12 = i_10
                    
                    var_9c_4 += j_12
                    i_4 = i_12
                    i_12 -= 1
                    i_10 = i_12
                while (i_4 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 
        case 4
            if (i_12 s> 0)
                int32_t eax_77 = j_12 << 2
                void* eax_78 = arg4
                void* esi_12 = eax_78
                void* var_ac_5 = eax_78
                int32_t i_5
                
                do
                    if (j_12 s> 0)
                        int32_t* var_a0_8 = edi
                        void* j_7 = j_12
                        void* j_4
                        
                        do
                            int32_t xmm0_76 = *(edi - eax_78 + esi_12)
                            
                            if (not(0 f> xmm0_76))
                                xmm4 = _mm_min_ss(0x3f800000, xmm0_76)
                            
                            int32_t eax_79
                            int80_t st0_2
                            st0_2, eax_79, x87control, xmm6 =
                                sub_53c3d1(x87control, fconvert.d(xmm4) * 4294967295.0 + 0.5, xmm6)
                            xmm4 = (zx.o(0)).d
                            *esi_12 = eax_79
                            esi_12 += 4
                            j_4 = j_7
                            j_7 -= 1
                        while (j_4 != 1)
                        edi = var_c0
                        j_12 = arg6
                        eax_78 = arg4
                        i_12 = i_10
                        esi_12 = var_ac_5
                    
                    esi_12 += eax_77
                    xmm4 = (zx.o(0)).d
                    i_5 = i_12
                    i_12 -= 1
                    var_ac_5 = esi_12
                    i_10 = i_12
                while (i_5 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 
        case 5
            if (i_12 s> 0)
                double xmm1_19 = 0.5
                double xmm3_11 = 4294967295.0
                void* var_9c_5 = nullptr
                int32_t i_6
                
                do
                    int32_t eax_84 = 0
                    int32_t var_a0_9 = 0
                    
                    if (esi_2 s> 0)
                        do
                            void* eax_81 = zx.d(var_98[eax_84]) + var_9c_5
                            int32_t xmm0_80 = edi[eax_81]
                            
                            if (not(0 f> xmm0_80))
                                xmm4 = _mm_min_ss(0x3f800000, xmm0_80)
                            
                            float xmm4_1
                            
                            if (not(0 f> xmm0_80) && 0.00313080009f f< xmm4)
                                long double st0_3
                                st0_3, x87control, xmm6 = sub_414580(xmm4, 0x3ed55555)
                                xmm1_19 = 0.5
                                xmm3_11 = 4294967295.0
                                xmm4_1 = fconvert.s(st0_3 * fconvert.t(1.05499995f)
                                    - fconvert.t(0.0549999997f))
                            else
                                xmm4_1 = xmm4 f* 12.9200001f
                            
                            int32_t eax_82
                            int80_t st0_4
                            st0_4, eax_82, x87control, xmm6 =
                                sub_53c3d1(x87control, fconvert.d(xmm4_1) * xmm3_11 + xmm1_19, xmm6)
                            xmm4 = (zx.o(0)).d
                            xmm1_19 = 0.5
                            xmm3_11 = 4294967295.0
                            *(arg4 + (eax_81 << 2)) = eax_82
                            eax_84 = var_a0_9 + 1
                            var_a0_9 = eax_84
                        while (eax_84 s< esi_2)
                        
                        j_12 = arg6
                        i_12 = i_10
                    
                    xmm4 = (zx.o(0)).d
                    
                    if (var_b4_3 == 0)
                        int32_t* eax_87 = (var_b8 + var_9c_5) << 2
                        int32_t xmm5_4 = *(eax_87 + edi)
                        float xmm0_84
                        
                        if (0 f<= xmm5_4)
                            xmm0_84 = _mm_min_ss(0x3f800000, xmm5_4)
                        else
                            xmm0_84 = (zx.o(0)).d
                        
                        *(eax_87 + arg4) = int.d(fconvert.d(xmm0_84) * xmm3_11 + xmm1_19)
                        esi_2 = var_a4_2
                        i_12 = i_10
                    
                    var_9c_5 += j_12
                    i_6 = i_12
                    i_12 -= 1
                    i_10 = i_12
                while (i_6 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 
        case 6
            if (i_12 s> 0)
                void* esi_14 = arg4
                void* var_ac_7 = nullptr
                void* var_9c_6 = esi_14 + 4
                void* var_bc_6 = &edi[2]
                int32_t i_7
                
                do
                    int32_t eax_99 = 0
                    int32_t var_a0_11 = 0
                    
                    if (j_12 s>= 4)
                        void* edi_7 = edi - arg4
                        void* esi_15 = var_bc_6
                        void* ecx_39 = var_9c_6
                        void* var_b8_2 = edi_7
                        int32_t var_a4_5 = ((j_12 - 4) u>> 2) + 1
                        int32_t j_10 = ((j_12 - 4) u>> 2) + 1
                        var_a0_11 = (((j_12 - 4) u>> 2) + 1) << 2
                        int32_t j_5
                        
                        do
                            ecx_39 += 0x10
                            *(ecx_39 - 0x14) = *(esi_15 - 8)
                            esi_15 += 0x10
                            *(ecx_39 - 0x10) = *(edi_7 + ecx_39 - 0x10)
                            *(ecx_39 - 0xc) = *(esi_15 - 0x10)
                            *(ecx_39 - 8) = *(esi_15 - 0xc)
                            j_5 = j_10
                            j_10 -= 1
                        while (j_5 != 1)
                        edi = var_c0
                        j_12 = arg6
                        esi_14 = arg4
                        i_12 = i_10
                        eax_99 = var_a0_11
                    
                    if (eax_99 s< j_12)
                        void* ecx_40 = esi_14 + ((eax_99 + var_ac_7) << 2)
                        void* eax_102 = edi - esi_14
                        void* j_11 = j_12 - var_a0_11
                        void* var_a4_6 = eax_102
                        void* j_6
                        
                        do
                            int32_t eax_103 = *(eax_102 + ecx_40)
                            ecx_40 += 4
                            *(ecx_40 - 4) = eax_103
                            j_6 = j_11
                            j_11 -= 1
                        while (j_6 != 1)
                        j_12 = arg6
                        esi_14 = arg4
                        i_12 = i_10
                    
                    var_ac_7 += j_12
                    int32_t eax_104 = j_12 << 2
                    var_bc_6 += eax_104
                    var_9c_6 += eax_104
                    i_7 = i_12
                    i_12 -= 1
                    i_10 = i_12
                while (i_7 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 
        case 7
            if (i_12 s> 0)
                void* var_9c_7 = nullptr
                int32_t i_8
                
                do
                    int32_t eax_105 = 0
                    int32_t var_a0_12 = 0
                    
                    if (esi_2 s> 0)
                        void* ecx_43 = arg4
                        void* edx_9 = var_9c_7
                        
                        do
                            void* esi_18 = zx.d(var_98[eax_105]) + edx_9
                            float xmm0_88 = edi[esi_18]
                            float xmm0_89
                            
                            if (0.00313080009f < xmm0_88)
                                eax_105 = var_a0_12
                                ecx_43 = arg4
                                edx_9 = var_9c_7
                                xmm0_89 = fconvert.s(
                                    sub_414580(xmm0_88, 0x3ed55555) * fconvert.t(1.05499995f)
                                    - fconvert.t(0.0549999997f))
                            else
                                xmm0_89 = xmm0_88 * 12.9200001f
                            
                            eax_105 += 1
                            *(ecx_43 + (esi_18 << 2)) = xmm0_89
                            esi_2 = var_a4_2
                            var_a0_12 = eax_105
                        while (eax_105 s< esi_2)
                        
                        j_12 = arg6
                        i_12 = i_10
                    
                    if (var_b4_3 == 0)
                        void* ecx_45 = var_9c_7 + var_b8
                        *(arg4 + (ecx_45 << 2)) = edi[ecx_45]
                        esi_2 = var_a4_2
                        i_12 = i_10
                    
                    var_9c_7 += j_12
                    i_8 = i_12
                    i_12 -= 1
                    i_10 = i_12
                while (i_8 != 1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
}
