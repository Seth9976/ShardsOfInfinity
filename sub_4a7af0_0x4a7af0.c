// 函数名称: sub_4a7af0
// 虚拟地址: 0x4a7af0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4a7af0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_54425f
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_15c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_ce189c != 0)
        if (data_e49a50 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e49a50)
            
            if (data_e49a50 == 0xffffffff)
                int32_t var_8_1 = 0
                data_e49a54 = sub_48d5b0("sys/DebugFont.font", 0x12)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_e49a50)
        
        void* eax_6 = data_ce189c
        char* const result_10 = 0x40000000
        float var_88 = 0f
        int32_t var_84_1 = 0
        int32_t var_80_1 = 0x43c80000
        char* result_14 = result_10
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0x5e206a4) + 1))
        char* const result_9 = result_14
        float var_7c_1 = xmm0_2 * 15f
        sub_47d680(&var_88, &result_9)
        sub_4a7540()
        void* ecx_3 = data_ce189c
        float xmm1_1 = 15f
        int32_t esi_1 = *(ecx_3 + 0x5e206ac)
        int32_t eax_9 = *(ecx_3 + 0x5e206a4)
        
        if (esi_1 s>= eax_9)
            esi_1 = eax_9
        
        int32_t ebx_1 = 0
        struct _EXCEPTION_REGISTRATION_RECORD** result_4
        
        if (esi_1 s> 0)
            var_88 = 0f
            int32_t var_80_2 = 0x43c80000
            
            do
                float xmm0_5 = xmm1_1 + 15f
                float var_84_2 = xmm1_1
                float var_7c_2 = xmm0_5
                char* const result_5
                
                if (*(ecx_3 + 0x5e2069c) == *(ecx_3 + 0x5e206a8) + ebx_1)
                    result_10 = 0x400000ff
                    result_5 = result_10
                label_4a7c64:
                    result_9 = result_5
                    sub_47d680(&var_88, &result_9)
                    ecx_3 = data_ce189c
                else if ((ebx_1.b & 1) != 0)
                    result_4 = 0x3fffffff
                    result_5 = result_4
                    goto label_4a7c64
                ebx_1 += 1
                xmm1_1 = xmm0_5
            while (ebx_1 s< esi_1)
        
        float var_24_1 = 15f
        result = sub_4a7710()
        char* const var_a0_1 = &data_5559b1
        void* result_15 = nullptr
        int32_t var_8_3 = 1
        result_9 = nullptr
        
        if (esi_1 s> 0)
            while (true)
                void* ebx_2 = data_ce189c
                void* eax_12 = *(ebx_2 + 0x5e206a8)
                void* eax_13 = eax_12 + result_15
                
                if (eax_12 + result_15 s< 0 || eax_13 s>= *(ebx_2 + 0x5e206ac))
                    sub_44e4d0(eax_13, &data_5559b1, 
                        "sortIndex >= 0 && sortIndex < gProfilerGlobals->mCalculatedFunctionCount", 
                        "c:\ax2017\engine\perfevent.cpp", 0x357, "ProfilerDraw")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_44e680()
                        noreturn
                    
                    breakpoint
                
                int32_t esi_2 = *(ebx_2 + (eax_13 << 2) + 0x5e1c804)
                int32_t ecx_5 = *(ebx_2 + 0x5e20698)
                int32_t eax_15 = esi_2 * 7
                float var_8c_1
                float var_34_1
                float var_1c_2
                float xmm1_4[0x2]
                
                if (ecx_5 != 0x28)
                    void* ecx_8 =
                        mods.dp.d(sx.q(*(ebx_2 + 0x5e01280) + ecx_5 + 1), 0x28) * 0x259a10 + ebx_2
                    int32_t eax_20 = esi_2 * 2
                    var_1c_2 = *(ecx_8 + (eax_20 << 3) + 0x24a00c)
                    var_8c_1 = *(ecx_8 + (eax_20 << 3) + 0x24a010)
                    float xmm0_10 = *(ecx_8 + (eax_20 << 3) + 0x24a018)
                    xmm1_4 = _mm_cvtepi32_ps(zx.o(*(ecx_8 + (eax_20 << 3) + 0x24a014)))
                    var_34_1 = xmm0_10
                else
                    float xmm2_1 = *(ebx_2 + (eax_15 << 2) + 0x5e0128c)
                    float xmm0_7 = _mm_cvtepi32_ps(zx.o(*(ebx_2 + 0x5e20688)))
                    var_1c_2 = xmm2_1 / xmm0_7
                    xmm1_4 = _mm_cvtepi32_ps(zx.o(*(ebx_2 + (eax_15 << 2) + 0x5e01294))) / xmm0_7
                    var_8c_1 = *(ebx_2 + (eax_15 << 2) + 0x5e01290) / xmm0_7
                    var_34_1 = *(ebx_2 + (eax_15 << 2) + 0x5e01298) / xmm0_7
                
                result_4 = &data_5559b1
                char* const result_2 = &data_5559b1
                char* const result_3 = &data_5559b1
                result_10 = &data_5559b1
                var_8_3.b = 5
                int32_t var_164
                var_164.q = _mm_cvtps_pd(xmm1_4)
                
                if (10f f<= xmm1_4)
                    var_8_3.b = 8
                    char* var_60
                    sub_44f510(&result_4, sub_44f980(&var_60, "%0.0f"))
                    var_8_3.b = 9
                    
                    if (data_cdf414 != 0)
                        char* eax_25 = var_60
                        
                        if (eax_25 != 0 && *eax_25 != 0)
                            char* eax_26 = sub_44f000(&var_60)
                            int32_t temp3_1 = *(eax_26 + 4)
                            *(eax_26 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_45d050(eax_26, *(eax_26 + 0xc) + 0x10)
                                var_60 = &data_5559b1
                else
                    var_8_3.b = 6
                    char* var_5c
                    sub_44f510(&result_4, sub_44f980(&var_5c, "%0.1f"))
                    var_8_3.b = 7
                    
                    if (data_cdf414 != 0)
                        char* eax_22 = var_5c
                        
                        if (eax_22 != 0 && *eax_22 != 0)
                            char* eax_23 = sub_44f000(&var_5c)
                            int32_t temp4_1 = *(eax_23 + 4)
                            *(eax_23 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_45d050(eax_23, *(eax_23 + 0xc) + 0x10)
                                var_5c = &data_5559b1
                
                float xmm0_12[0x2] = var_1c_2
                var_8_3.b = 5
                var_164.q = _mm_cvtps_pd(xmm0_12)
                
                if (100f f<= xmm0_12)
                    var_8_3.b = 0xc
                    char* var_68
                    sub_44f510(&result_2, sub_44f980(&var_68, "%0.1f"))
                    var_8_3.b = 0xd
                    
                    if (data_cdf414 != 0)
                        char* eax_31 = var_68
                        
                        if (eax_31 != 0 && *eax_31 != 0)
                            char* eax_32 = sub_44f000(&var_68)
                            int32_t temp5_1 = *(eax_32 + 4)
                            *(eax_32 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_45d050(eax_32, *(eax_32 + 0xc) + 0x10)
                                var_68 = &data_5559b1
                else
                    var_8_3.b = 0xa
                    char* const var_64
                    sub_44f510(&result_2, sub_44f980(&var_64, "%0.2f"))
                    var_8_3.b = 0xb
                    
                    if (data_cdf414 != 0)
                        char* eax_28 = var_64
                        
                        if (eax_28 != 0 && *eax_28 != 0)
                            char* eax_29 = sub_44f000(&var_64)
                            int32_t temp6_1 = *(eax_29 + 4)
                            *(eax_29 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_45d050(eax_29, *(eax_29 + 0xc) + 0x10)
                                var_64 = &data_5559b1
                
                float xmm0_14[0x2] = var_8c_1
                var_8_3.b = 5
                var_164.q = _mm_cvtps_pd(xmm0_14)
                
                if (100f f<= xmm0_14)
                    var_8_3.b = 0x10
                    char* var_70
                    sub_44f510(&result_3, sub_44f980(&var_70, "%0.1f"))
                    var_8_3.b = 0x11
                    
                    if (data_cdf414 != 0)
                        char* eax_37 = var_70
                        
                        if (eax_37 != 0 && *eax_37 != 0)
                            char* eax_38 = sub_44f000(&var_70)
                            int32_t temp7_1 = *(eax_38 + 4)
                            *(eax_38 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_45d050(eax_38, *(eax_38 + 0xc) + 0x10)
                                var_70 = &data_5559b1
                else
                    var_8_3.b = 0xe
                    char* const var_6c
                    sub_44f510(&result_3, sub_44f980(&var_6c, "%0.2f"))
                    var_8_3.b = 0xf
                    
                    if (data_cdf414 != 0)
                        char* eax_34 = var_6c
                        
                        if (eax_34 != 0 && *eax_34 != 0)
                            char* eax_35 = sub_44f000(&var_6c)
                            int32_t temp8_1 = *(eax_35 + 4)
                            *(eax_35 + 4) -= 1
                            
                            if (temp8_1 == 1)
                                sub_45d050(eax_35, *(eax_35 + 0xc) + 0x10)
                                var_6c = &data_5559b1
                
                float xmm0_16[0x2] = var_34_1
                var_8_3.b = 5
                var_164.q = _mm_cvtps_pd(xmm0_16)
                
                if (10f f<= xmm0_16)
                    var_8_3.b = 0x14
                    char* var_78
                    sub_44f510(&result_10, sub_44f980(&var_78, "%0.0f"))
                    var_8_3.b = 0x15
                    
                    if (data_cdf414 != 0)
                        char* eax_43 = var_78
                        
                        if (eax_43 != 0 && *eax_43 != 0)
                            char* eax_44 = sub_44f000(&var_78)
                            int32_t temp9_1 = *(eax_44 + 4)
                            *(eax_44 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_45d050(eax_44, *(eax_44 + 0xc) + 0x10)
                                var_78 = &data_5559b1
                else
                    var_8_3.b = 0x12
                    char* var_74
                    sub_44f510(&result_10, sub_44f980(&var_74, "%0.1f"))
                    var_8_3.b = 0x13
                    
                    if (data_cdf414 != 0)
                        char* eax_40 = var_74
                        
                        if (eax_40 != 0 && *eax_40 != 0)
                            char* eax_41 = sub_44f000(&var_74)
                            int32_t temp10_1 = *(eax_41 + 4)
                            *(eax_41 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                sub_45d050(eax_41, *(eax_41 + 0xc) + 0x10)
                                var_74 = &data_5559b1
                
                var_8_3.b = 5
                void* eax_45 = data_ce189c
                float var_1c_3 = 0f
                int32_t ecx_33 = *(eax_45 + 0x5e206b0)
                
                if (ecx_33 != 1)
                    if (ecx_33 == 2 && *(eax_45 + 0x5e206b4) == esi_2)
                        var_1c_3 = 10f
                else if (*(eax_45 + 0x5e206b4) != esi_2)
                    var_1c_3 = 10f
                
                struct _EXCEPTION_REGISTRATION_RECORD** result_6 = result_4
                struct _EXCEPTION_REGISTRATION_RECORD** result_11 = &data_5559b1
                
                if (result_6 != 0)
                    result_11 = result_6
                
                int32_t var_58 = 0x3f800000
                int32_t var_4c_1 = 0
                int32_t var_40_1 = 0
                int32_t var_54_1 = 0
                int32_t var_48_1 = 0x3f800000
                int32_t var_3c_1 = 0
                int32_t var_50_1 = 0x40400000
                float var_44_1 = var_24_1
                int32_t var_38_1 = 0x3f800000
                void var_c4
                void* var_164_1 = &var_c4
                sub_4aded0(sub_412bf0(&var_58, &data_57251c, &var_c4, &var_58), &var_c4, result_11, 
                    data_e49a54, 0xffffffff, 0xffffffff, 1)
                char* const result_7 = result_2
                char* const result_12 = &data_5559b1
                
                if (result_7 != 0)
                    result_12 = result_7
                
                var_58 = 0x3f800000
                int32_t var_4c_2 = 0
                int32_t var_40_2 = 0
                int32_t var_54_2 = 0
                int32_t var_48_2 = 0x3f800000
                int32_t var_3c_2 = 0
                int32_t var_50_2 = 0x422c0000
                float var_44_2 = var_24_1
                int32_t var_38_2 = 0x3f800000
                sub_4aded0(sub_412bf0(&var_58, &data_57251c, &var_c4, &var_58), &var_c4, result_12, 
                    data_e49a54, 0xffffffff, 0xffffffff, 1)
                char* const result_8 = result_3
                char* const result_13 = &data_5559b1
                
                if (result_8 != 0)
                    result_13 = result_8
                
                var_58 = 0x3f800000
                int32_t var_4c_3 = 0
                int32_t var_40_3 = 0
                int32_t var_54_3 = 0
                int32_t var_48_3 = 0x3f800000
                int32_t var_3c_3 = 0
                int32_t var_50_3 = 0x42a60000
                float var_44_3 = var_24_1
                int32_t var_38_3 = 0x3f800000
                sub_4aded0(sub_412bf0(&var_58, &data_57251c, &var_c4, &var_58), &var_c4, result_13, 
                    data_e49a54, 0xffffffff, 0xffffffff, 1)
                char* const result_16 = result_10
                char* const result_17 = &data_5559b1
                var_58 = 0x3f800000
                int32_t var_4c_4 = 0
                
                if (result_16 != 0)
                    result_17 = result_16
                
                int32_t var_40_4 = 0
                int32_t var_54_4 = 0
                int32_t var_48_4 = 0x3f800000
                int32_t var_3c_4 = 0
                int32_t var_50_4 = 0x42f60000
                float var_44_4 = var_24_1
                int32_t var_38_4 = 0x3f800000
                sub_4aded0(sub_412bf0(&var_58, &data_57251c, &var_c4, &var_58), &var_c4, result_17, 
                    data_e49a54, 0xffffffff, 0xffffffff, 1)
                float xmm0_23 = var_24_1 + 15f
                int32_t var_178_4 = *(ebx_2 + (eax_15 << 2) + 0x5e01288)
                int32_t var_17c_1 = *(ebx_2 + (eax_15 << 2) + 0x5e01284)
                float var_84_3 = var_24_1
                var_88 = var_1c_3 + 163f
                int32_t var_80_3 = 0x43c80000
                float var_7c_3 = xmm0_23
                struct _EXCEPTION_REGISTRATION_RECORD* result_1
                sub_44f980(&result_1, "%s%s")
                var_8_3.b = 0x16
                int32_t var_98 = data_e49a54
                int32_t var_134_1 = 0
                uint32_t var_12c[0x6][0x4]
                _memset(&var_12c, 0, 0x68)
                struct _EXCEPTION_REGISTRATION_RECORD* var_14c = "NORMAL"
                int32_t var_13c_1 = 1
                int32_t* var_148_1 = &var_98
                var_164 = 0xffffffff
                int32_t var_138_1 = 0xffffffff
                int32_t var_144_1 = 0
                int32_t var_140_1 = 0
                int32_t var_130_1 = 0x3f800000
                result =
                    sub_4afc40(&var_88, &data_57251c, &result_1, &var_88, &var_14c, 0xffffffff, nullptr)
                var_24_1 = xmm0_23
                var_8_3.b = 0x17
                
                if (data_cdf414 != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_1)
                        int32_t temp11_1 = result[1]
                        result[1] -= 1
                        
                        if (temp11_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_1 = &data_5559b1
                
                var_8_3.b = 0x18
                
                if (data_cdf414 != 0 && result_16 != 0 && *result_16 != 0)
                    result = sub_44f000(&result_10)
                    int32_t temp12_1 = result[1]
                    result[1] -= 1
                    
                    if (temp12_1 == 1)
                        result = sub_45d050(result, &result[3][2])
                        result_10 = &data_5559b1
                
                var_8_3.b = 0x19
                
                if (data_cdf414 != 0)
                    result = result_3
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_3)
                        int32_t temp13_1 = result[1]
                        result[1] -= 1
                        
                        if (temp13_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_3 = &data_5559b1
                
                var_8_3.b = 0x1a
                
                if (data_cdf414 != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_2)
                        int32_t temp14_1 = result[1]
                        result[1] -= 1
                        
                        if (temp14_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_2 = &data_5559b1
                
                var_8_3.b = 0x1b
                
                if (data_cdf414 != 0)
                    result = result_4
                    
                    if (result != 0 && *result != 0)
                        result = sub_44f000(&result_4)
                        int32_t temp15_1 = result[1]
                        result[1] -= 1
                        
                        if (temp15_1 == 1)
                            result = sub_45d050(result, &result[3][2])
                            result_4 = &data_5559b1
                
                var_8_3.b = 1
                result_15 = &result_9[1]
                result_9 = result_15
                
                if (result_15 s>= esi_1)
                    break
                
                continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
