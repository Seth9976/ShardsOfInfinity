// 函数名称: sub_413820
// 虚拟地址: 0x413820
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_413820(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_540f0b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_1f0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_120 = arg7
    float var_11c = data_5b0f3c
    int32_t var_1f8 = *(arg3 + 0x400)
    *(arg3 + 0x604) = arg6 + 1
    sub_469bf0(arg6 + 1, &data_5bb17c, arg2, var_1f8, 0xffffffff)
    float xmm4_1 = var_11c * 4f
    float xmm3_1 = *(arg3 + 0x61c) + xmm4_1
    int32_t xmm2
    
    if (0 f<= xmm3_1)
        xmm2 = _mm_min_ss(0x3f800000, xmm3_1)
    else
        xmm2 = (zx.o(0)).d
    
    *(arg3 + 0x61c) = xmm2
    float xmm2_2 = *(arg3 + 0x624) - xmm4_1
    int32_t xmm1
    
    if (0 f<= xmm2_2)
        xmm1 = _mm_min_ss(0x3f800000, xmm2_2)
    else
        xmm1 = (zx.o(0)).d
    
    *(arg3 + 0x624) = xmm1
    int32_t eax_7 = sub_47a160(arg2, arg4)
    int32_t ecx_2 = *(arg3 + 0x400)
    *(arg3 + 0x628) = eax_7
    void* eax_8 = nullptr
    int32_t var_190 = 0x3f800000
    uint32_t (* var_114)[0x4] = nullptr
    
    if (ecx_2 s> 0)
        void* edi_1 = arg3 + 0x404
        
        do
            void var_1e4
            float* eax_9 = sub_47a4c0(&var_1e4, eax_8, ecx_2)
            float xmm1_1[0x4] = *eax_9
            int128_t var_58_1 = *(eax_9 + 0x10)
            int128_t xmm0_2 = *(eax_9 + 0x20)
            float var_68[0x4] = xmm1_1
            int128_t var_48_1 = xmm0_2
            int128_t xmm0_3 = *(eax_9 + 0x30)
            float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff)
            int128_t var_38_1 = xmm0_3
            int32_t var_18_1 = eax_9[0x14]
            int128_t var_28_1 = *(eax_9 + 0x40)
            var_190.o = xmm1_2
            int32_t eax_10
            float xmm0_5
            
            if (*(arg3 + 0x618) == var_114)
                xmm0_5 = *(arg3 + 0x61c)
                eax_10.b = 1
                var_11c = xmm0_5
            else if (*(arg3 + 0x620) != var_114)
                xmm0_5 = var_11c
                eax_10.b = 0
            else
                xmm0_5 = *(arg3 + 0x624)
                xmm0_5 - 0f
                eax_10:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
                    | (xmm0_5 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    xmm0_5 = var_11c
                    eax_10.b = 0
                else
                    var_11c = xmm0_5
                    eax_10.b = 1
            
            if (eax_10.b == 0)
                void* eax_22 = data_65ae00
                uint128_t xmm1_6 = zx.o(*(eax_22 + 0x18))
                int32_t xmm0_21 = _mm_cvtepi32_ps(zx.o(*(eax_22 + 0x14)))
                int32_t var_170 = 0
                int32_t var_16c_1 = 0
                int32_t var_180 = 0
                int32_t* var_208_2 = data_dfcf94
                int32_t xmm1_7 = _mm_cvtepi32_ps(xmm1_6)
                int32_t var_17c_1 = 0
                int32_t var_168_1 = xmm0_21
                int32_t var_164_1 = xmm1_7
                int32_t var_178_1 = xmm0_21
                int32_t var_174_1 = xmm1_7
                sub_462b10(&var_180, edi_1, "cardset card", var_208_2, &var_180, &var_170, arg6 + 1, 
                    var_114, 1)
                sub_469ac0(*edi_1, &var_68)
                void* eax_24 = data_65ac30
                
                if (eax_24 == 0)
                    sub_44e4d0(eax_24, &data_5559b1, "gGameSettings.localSettings", 
                        "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, 
                        "GetLocalSettings")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (*(eax_24 + 0x24) == 1)
                    int32_t var_1f4_4 = 0xffffffff
                    sub_469930(*edi_1)
                
                int32_t var_1f4_5 = 0xffffffff
                *(arg3 + (var_114 << 3))
                sub_469930(*edi_1)
                
                if (arg5 != 0 && *(arg3 + (var_114 << 3) + 4) s> 1)
                    int32_t var_1f4_6 = 0xffffffff
                    sub_469930(*edi_1)
                    int32_t var_1f8_3 = *(arg3 + (var_114 << 3) + 4)
                    char* const var_12c
                    char** eax_28 = sub_44f980(&var_12c, 0x555a54)
                    int32_t var_8_1 = 0
                    sub_469cf0(eax_28, &data_5bb1a4, *edi_1, eax_28, 0xffffffff)
                    int32_t var_8_2 = 1
                    
                    if (data_cdf414 != 0)
                        char* eax_29 = var_12c
                        
                        if (eax_29 != 0 && *eax_29 != 0)
                            char* eax_30 = sub_44f000(&var_12c)
                            int32_t temp1_1 = *(eax_30 + 4)
                            *(eax_30 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_45d050(eax_30, *(eax_30 + 0xc) + 0x10)
                                var_12c = &data_5559b1
                    
                    int32_t var_8_3 = 0xffffffff
            else
                float xmm0_6 = xmm0_5 - 0f
                float var_128_1
                
                if (not(0 f< xmm0_6))
                    var_128_1 = 0f
                else if (xmm0_6 < 1f)
                    var_128_1 = sub_4145f0(4, xmm0_6, (zx.o(0)).d, 1f)
                else
                    var_128_1 = 1f
                
                float* eax_11 = sub_47a4c0(&var_1e4, 0, 1)
                int128_t var_bc = *eax_11
                int128_t var_ac_1 = *(eax_11 + 0x10)
                int128_t var_9c_1 = *(eax_11 + 0x20)
                int128_t var_8c_1 = *(eax_11 + 0x30)
                int32_t var_6c_1 = eax_11[0x14]
                int128_t var_7c_1 = *(eax_11 + 0x40)
                int128_t* eax_14 = sub_419d90(&var_1e4, &var_bc, &var_68, var_128_1, &var_1e4)
                int32_t var_150 = 0
                int128_t xmm0_13 = *eax_14
                int32_t var_14c_1 = 0
                int32_t var_160 = 0
                int128_t var_110 = xmm0_13
                int32_t var_15c_1 = 0
                int128_t var_100_1 = eax_14[1]
                int128_t var_f0_1 = eax_14[2]
                int128_t var_e0_1 = eax_14[3]
                int32_t var_c0_1 = eax_14[5].d
                void* eax_16 = data_65ae00
                int128_t var_d0_1 = eax_14[4]
                uint128_t xmm1_4 = zx.o(*(eax_16 + 0x18))
                int32_t xmm0_19 = _mm_cvtepi32_ps(zx.o(*(eax_16 + 0x14)))
                int32_t eax_17
                eax_17.b = var_128_1 > 0.5f
                int32_t xmm1_5 = _mm_cvtepi32_ps(xmm1_4)
                int32_t var_148_1 = xmm0_19
                int32_t var_144_1 = xmm1_5
                int32_t var_158_1 = xmm0_19
                int32_t var_154_1 = xmm1_5
                sub_462b10(&var_160, edi_1, "cardset card", data_dfcf94, &var_160, &var_150, 
                    eax_17 + arg8, var_114, 1)
                sub_469ac0(*edi_1, &var_110)
                void* eax_20 = data_65ac30
                
                if (eax_20 == 0)
                    sub_44e4d0(eax_20, &data_5559b1, "gGameSettings.localSettings", 
                        "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x23d, 
                        "GetLocalSettings")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (*(eax_20 + 0x24) == 1)
                    int32_t var_1f4_2 = 0xffffffff
                    sub_469930(*edi_1)
                
                int32_t var_1f4_3 = 0xffffffff
                *(arg3 + (var_114 << 3))
                sub_469930(*edi_1)
            
            sub_466e80(*edi_1, data_5b0f3c)
            edi_1 += 4
            ecx_2 = *(arg3 + 0x400)
            eax_8 = var_114 + 1
            var_114 = eax_8
        while (eax_8 s< ecx_2)
    
    if (*(arg3 + 0x62c) != 0)
        float eax_32
        float edx_15
        eax_32, edx_15 = sub_479140(*(arg3 + 0x628))
        float var_124 = eax_32
        float var_120_1 = edx_15
        char var_115
        float eax_34
        float edx_17
        eax_34, edx_17 = sub_413750(&var_115, arg3 + 0x630, &var_124, var_190 * 6000f, &var_115)
        var_124 = eax_34
        float xmm0_24 = var_124
        eax_32 - xmm0_24
        float var_140 = xmm0_24
        eax_34:1.b = (eax_32 == xmm0_24 ? 1 : 0) << 6 | (is_unordered.d(eax_32, xmm0_24) ? 1 : 0) << 2
            | (eax_32 < xmm0_24 ? 1 : 0)
        float var_13c_1 = edx_17
        bool p_4 = unimplemented  {test ah, 0x44}
        bool p_6
        
        if (not(p_4))
            edx_15 - edx_17
            eax_34:1.b = (edx_15 == edx_17 ? 1 : 0) << 6 | (is_unordered.d(edx_15, edx_17) ? 1 : 0) << 2
                | (edx_15 < edx_17 ? 1 : 0)
            p_6 = unimplemented  {test ah, 0x44}
        
        if (p_4 || p_6)
            sub_4791c0(*(arg3 + 0x628), &var_140)
        
        if (var_115 != 0)
            *(arg3 + 0x62c) = 0
    
    int32_t eax_35 = sub_47a160(arg2, arg4)
    int32_t ecx_22 = eax_35
    
    if (ecx_22 == 0)
        sub_44e4d0(eax_35, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 0x6c, 
            "DataArray<struct UI2>::DataArrayGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    uint32_t edx_20 = zx.d(ecx_22.w)
    
    if (edx_20 u< data_5c99a4)
        int32_t edi_2 = data_5c99a0
        eax_35 = edx_20 * 0x1008
        
        if (*(eax_35 + edi_2 + 0x1004) == ecx_22)
            int32_t result = edx_20 * 0x1008
            *(arg3 + 0x608) = *(result + edi_2 + 0x6cc)
            fsbase->NtTib.ExceptionList = ExceptionList
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
    
    sub_44e4d0(eax_35, &data_5559b1, "DataArrayTryToGet(id) != NULL", "c:\ax2017\engine\dataarray.h", 
        0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
