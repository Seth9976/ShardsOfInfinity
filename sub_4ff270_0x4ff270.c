// 函数名称: sub_4ff270
// 虚拟地址: 0x4ff270
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __fastcallsub_4ff270(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_546830
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_7c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    BOOL result = *arg1
    float var_40
    int128_t var_38
    
    if (result == 3)
        int32_t eax_3 = GetKeyState(0x20)
        float var_3c
        
        if ((0x8000 & eax_3.w) != 0)
            data_df8488 = 1
            data_df848c = 1
            result = sub_44edc0(&var_40)
            float xmm1_1 = var_40
            data_df8490 = xmm1_1
            data_df8494 = var_3c
            data_df84a0 = 0
            data_df8498 = xmm1_1
            data_df849c = var_3c
        else if (data_d77c70.b != 0 || data_d77c72 != 0)
            result = sub_4fecf0(1)
        else if (data_d77c70:1.b == 0)
            int32_t* ecx_6 = data_d76c60
            
            if (ecx_6[1] != 0x1e)
                sub_44e4d0(eax_3, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
                    "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            void* eax_7 = sub_4459f0(ecx_6)
            sub_44edc0(&var_40)
            float xmm0_5 = 1f f/ data_df847c
            int32_t edx_2 = *(eax_7 + 4)
            int32_t edx_3 = edx_2 - 1
            float xmm7_3 = var_40 * xmm0_5 f+ data_df8480
            float xmm6_3 = var_3c * xmm0_5 f+ data_df8484
            
            if (edx_2 - 1 s< 0)
            label_4ff4ea:
                data_d77c6c = 0
                result = sub_5012b0()
            else
                int32_t* ecx_9 = edx_3 * 0x118 + *eax_7
                float* eax_8 = &ecx_9[0x1f]
                
                while (true)
                    int32_t esi_2 = edx_3
                    
                    if (eax_8[-0x13].b == 0 && *(eax_8 - 0x4b) == 0)
                        float xmm2_1 = eax_8[-0x1c]
                        float xmm3_2 = eax_8[-0x1a] - xmm2_1
                        float xmm1_3 = eax_8[-0x1b]
                        float xmm0_7 = eax_8[-0x19] - xmm1_3
                        float xmm5_3 = eax_8[-2] * xmm3_2 + xmm2_1
                        float xmm3_4 = xmm3_2 * *eax_8 + xmm2_1
                        float xmm4_3 = eax_8[-1] * xmm0_7 + xmm1_3
                        float xmm2_4 = eax_8[1] * xmm0_7 + xmm1_3
                        
                        if (xmm3_4 < xmm5_3 || xmm2_4 < xmm4_3)
                            sub_44e4d0(eax_8, &data_5559b1, "RectIsNormalized(r)", 
                                "c:\ax2017\engine\rect.cpp", 0xa4, "RectContains")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        if (not(xmm7_3 < xmm5_3) && not(xmm6_3 < xmm4_3) && not(xmm3_4 < xmm7_3)
                                && xmm2_4 >= xmm6_3)
                            int32_t i = *ecx_9
                            char eax_9 = 1
                            
                            if (data_d77c6c s> 0)
                                eax_9 = 0
                            
                            if ((0x8000 & GetKeyState(0x11)) != 0)
                                int32_t eax_11 = data_d77c6c
                                int32_t ecx_10 = 0
                                
                                if (eax_11 s<= 0)
                                label_4ff53e:
                                    (&data_d76c6c)[eax_11] = i
                                    data_d77c6c += 1
                                else
                                    while ((&data_d76c6c)[ecx_10] != i)
                                        ecx_10 += 1
                                        
                                        if (ecx_10 s>= eax_11)
                                            goto label_4ff53e
                                    
                                    data_d77c6c = eax_11 - 1
                                    (&data_d76c6c)[ecx_10] = (&data_d76c6c)[eax_11 - 1]
                                
                                goto label_4ff59d
                            
                            result = sub_4fb780(i)
                            
                            if (result.b == 0)
                                if ((0x8000 & GetKeyState(0x12)) == 0 || data_d77c6c s<= 0)
                                    data_d76c6c = i
                                    data_d77c6c = 1
                                label_4ff59d:
                                    result = sub_5012b0()
                                    data_df84a9 = 1
                                    goto label_4ff5a9
                                
                            label_4ff5b8:
                                
                                if ((0x8000 & GetKeyState(0x12)) != 0)
                                    sub_4fef00()
                                
                                result = sub_4fecf0(eax_9)
                            else
                                data_df84a9 = 0
                            label_4ff5a9:
                                
                                if (data_d77c6c s> 0)
                                    goto label_4ff5b8
                            
                            break
                    
                    edx_3 -= 1
                    ecx_9 -= 0x118
                    eax_8 -= 0x118
                    
                    if (esi_2 s<= 0)
                        goto label_4ff4ea
        else
            data_df8488 = 1
            data_df848c = 2
            sub_44edc0(&var_40)
            float xmm1_2 = var_40
            data_df8490 = xmm1_2
            data_df8494 = var_3c
            data_df84a0 = 0
            data_df8498 = xmm1_2
            data_df849c = var_3c
            sub_44edc0(&var_40)
            int32_t eax_4
            int32_t edx_1
            eax_4, edx_1 = sub_4fe3a0(var_40, var_3c)
            data_df84a4 = eax_4
            int128_t* eax_6 = sub_4feab0(&var_38, edx_1, 1, &var_38)
            int32_t* ecx_5 = data_d76c60
            int128_t xmm0_3 = *eax_6
            data_df84a8 = 1
            data_df84ac = xmm0_3
            
            if (ecx_5[1] != 0x1e)
                sub_44e4d0(eax_6, &data_5559b1, "ptr->assetType == ASSET_TYPE_UI", 
                    "c:\ax2017\engine\uidef.cpp", 0x10d, "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            result = sub_4459f0(ecx_5)
            data_df84cc = *(result + 8)
    else
        char* var_48
        char* result_1
        
        if (result == 0x19)
            char* eax_16 = arg1[6]
            char* edx_4 = &data_5559b1
            
            if (eax_16 != 0)
                edx_4 = eax_16
            
            sub_4a8d30(&result_1, edx_4)
            int32_t var_14_1 = 0
            char* const result_5 = &data_5559b1
            char* result_2 = result_1
            
            if (result_2 != 0)
                result_5 = result_2
            
            result = sub_4d26e0(result_5)
            
            if (*(result + 4) == 3)
                char* eax_17 = data_d76c68
                int32_t* ecx_14 = data_d76c60
                var_48 = eax_17
                data_d76c68 = &eax_17[1]
                void* eax_19
                int32_t ecx_15
                eax_19, ecx_15 = sub_485450(ecx_14)
                int32_t esi_3 = *(eax_19 + 4)
                int32_t var_84_2 = ecx_15
                int32_t* eax_20 = sub_48c3c0(data_e46f4c, 0)
                sub_4d2b10(eax_20, eax_20, eax_19, esi_3)
                char** esi_5 = esi_3 * 0x118 + *eax_19
                char* edi_2 = var_48
                char* var_80_3 = edi_2
                *esi_5 = edi_2
                esi_5[1] = 1
                var_14_1.b = 2
                char* eax_22 = *sub_44f980(&var_48, "Rect-%d")
                char* edx_6 = &data_5559b1
                
                if (eax_22 != 0)
                    edx_6 = eax_22
                
                sub_48b620(&esi_5[2], edx_6)
                var_14_1.b = 3
                
                if (data_cdf414 != 0)
                    char* eax_23 = var_48
                    
                    if (eax_23 != 0 && *eax_23 != 0)
                        char* eax_24 = sub_44f000(&var_48)
                        int32_t temp1_1 = *(eax_24 + 4)
                        *(eax_24 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_45d050(eax_24, *(eax_24 + 0xc) + 0x10)
                
                var_14_1.b = 0
                float eax_25
                int32_t edx_9
                eax_25, edx_9 = sub_432570(result)
                float var_30_1 = eax_25
                int32_t var_2c_1 = edx_9
                float var_4c
                sub_44edc0(&var_4c)
                float xmm0_8 = 1f f/ data_df847c
                int32_t* edx_10 = &var_38:8
                float xmm1_6 = var_48 f* xmm0_8 f+ data_df8484
                var_4c = var_4c * xmm0_8 f+ data_df8480
                var_48 = xmm1_6
                void var_60
                var_38 = *sub_45c380(&var_60, edx_10, &var_4c, &var_60)
                void var_70
                int128_t xmm0_10 = *sub_47bc00(&var_70, edx_10, &var_38, &var_70)
                esi_5[0x1a] = result
                *(esi_5 + 0xc) = xmm0_10
                data_d76c6c = edi_2
                data_d77c6c = 1
                sub_5012b0()
                char* ecx_25
                ecx_25.b = 1
                sub_4fb880(ecx_25)
                sub_4cf4c0(data_d76c60)
                result = sub_5012b0()
                int32_t var_14_3 = 4
            else
                int32_t var_14_2 = 1
            
            if (data_cdf414 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_1)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_45d050(result, *(result + 0xc) + 0x10)
        else if (result == 9)
            data_df847c = (_mm_cvtepi32_ps(zx.o(arg1[3])) * 0.00200000009f + 1f) f* data_df847c
        else if (result != 1)
            if (result == 7)
                result = sub_500b00()
        else if (data_d77c70.b == 0 && data_d77c72 == 0)
            if (data_d77c70:1.b == 0 || arg1[1] != 0xd)
                goto label_4ff84e
            
            data_d77c70 = 0
            data_d77c72 = 0
        else if (arg1[1] != 0xd)
        label_4ff84e:
            int32_t ecx_29 = arg1[1]
            
            if (ecx_29 != 8)
                goto label_4ff871
            
            if ((0x8000 & GetKeyState(0x11)) != 0)
                result = sub_4d51d0()
            else
                ecx_29 = arg1[1]
            label_4ff871:
                
                if (ecx_29 != 9)
                label_4ff896:
                    int32_t eax_35 = arg1[1]
                    
                    if (eax_35 != 9)
                        goto label_4ff8ae
                    
                    if ((0x8000 & GetKeyState(0x11)) != 0)
                        result = sub_4d5230()
                    else
                        eax_35 = arg1[1]
                    label_4ff8ae:
                        
                        if (eax_35 != 0x4f)
                            goto label_4ff8c3
                        
                        result = GetKeyState(0x11)
                        
                        if ((0x8000 & result.w) == 0)
                            eax_35 = arg1[1]
                        label_4ff8c3:
                            
                            if (eax_35 != 0xdb)
                            label_4ff930:
                                
                                if (arg1[1] != 0xdd)
                                label_4ff95d:
                                    result = arg1[1]
                                    
                                    if (result != 0xdb)
                                        goto label_4ff977
                                    
                                    if ((0x8000 & GetKeyState(0x11)) != 0)
                                        result = sub_4ff1c0()
                                    else
                                        result = arg1[1]
                                    label_4ff977:
                                        
                                        if (result != 0xdd)
                                            goto label_4ff98e
                                        
                                        if ((0x8000 & GetKeyState(0x11)) != 0)
                                            result = sub_4ff130()
                                        else
                                            result = arg1[1]
                                        label_4ff98e:
                                            
                                            if (result != 0x43)
                                                if (result != 0x48)
                                                    if (result != 0x4a)
                                                        goto label_4ffc82
                                                    
                                                    if ((0x8000 & GetKeyState(0x11)) != 0)
                                                        sub_4fef00()
                                                        char* ecx_41
                                                        ecx_41.b = 1
                                                        result = sub_4fb880(ecx_41)
                                                    else
                                                        result = arg1[1]
                                                    label_4ffc82:
                                                        
                                                        if (result != 0x54)
                                                            goto label_4ffc97
                                                        
                                                        result = GetKeyState(0x11)
                                                        
                                                        if ((0x8000 & result.w) != 0)
                                                            data_d77c70:1.b = 0
                                                            
                                                            if (data_d77c6c s> 0)
                                                                data_d77c70.b = 1
                                                        else
                                                            result = arg1[1]
                                                        label_4ffc97:
                                                            
                                                            if (result != 0x42)
                                                                if (result != 0xbb)
                                                                    goto label_4ffd05
                                                                
                                                                result = GetKeyState(0x11)
                                                                
                                                                if ((0x8000 & result.w) != 0)
                                                                    data_df847c = data_df847c * 1.29999995f
                                                                else
                                                                    result = arg1[1]
                                                                label_4ffd05:
                                                                    
                                                                    if (result != 0xbd)
                                                                        goto label_4ffd20
                                                                    
                                                                    result = GetKeyState(0x11)
                                                                    
                                                                    if ((0x8000 & result.w) != 0)
                                                                        data_df847c = data_df847c / 1.29999995f
                                                                    else
                                                                        result = arg1[1]
                                                                    label_4ffd20:
                                                                        
                                                                        if (result != 0x5a)
                                                                            goto label_4ffd39
                                                                        
                                                                        char* ecx_42
                                                                        result, ecx_42 = GetKeyState(0x11)
                                                                        void* var_84_3
                                                                        int32_t eax_55
                                                                        void* esi_11
                                                                        
                                                                        if ((0x8000 & result.w) == 0)
                                                                            result = arg1[1]
                                                                        label_4ffd39:
                                                                            
                                                                            if (result != 0x59)
                                                                                goto label_4ffd52
                                                                            
                                                                            int16_t eax_52
                                                                            char* ecx_43
                                                                            eax_52, ecx_43 = GetKeyState(0x11)
                                                                            
                                                                            if ((0x8000 & eax_52) != 0)
                                                                                result = data_df8474
                                                                                
                                                                                if (result s< data_df8478)
                                                                                    sub_4c68c0(ecx_43)
                                                                                    eax_55 = data_df8474 + 1
                                                                                    int32_t var_80_7 = 0x100c
                                                                                    esi_11 = &(&data_d76c64)[eax_55 * 0x404]
                                                                                    var_84_3 = esi_11
                                                                                    int32_t* var_88_4 = &data_d76c68
                                                                                    goto label_4ffe4d
                                                                            else
                                                                                result = arg1[1]
                                                                            label_4ffd52:
                                                                                
                                                                                if (result == 0x2e)
                                                                                    int32_t i_1 = 0
                                                                                    int32_t i_7 = 0
                                                                                    
                                                                                    if (data_d77c6c s> 0)
                                                                                        do
                                                                                            int32_t* ecx_44 = data_d76c60
                                                                                            int32_t edi_5 = (&data_d76c6c)[i_1]
                                                                                            
                                                                                            if (ecx_44[1] != 0x1e)
                                                                                                sub_44e4d0(i_1, &data_5559b1, 
                                                                                                    "ptr->assetType == ASSET_TYPE_UI", 
                                                                                                    "c:\ax2017\engine\uidef.cpp", 0x10d, 
                                                                                                    "UIDefGet")
                                                                                                
                                                                                                if (IsDebuggerPresent() == 1)
                                                                                                    breakpoint
                                                                                                
                                                                                                sub_44e680()
                                                                                                noreturn
                                                                                            
                                                                                            int32_t* eax_53 = sub_4459f0(ecx_44)
                                                                                            int32_t ecx_45 = 0
                                                                                            int32_t* esi_9 = eax_53
                                                                                            int32_t* edx_17 = nullptr
                                                                                            
                                                                                            while (true)
                                                                                                if (ecx_45 s>= esi_9[1])
                                                                                                    sub_44e4d0(eax_53, &data_5559b1, 
                                                                                                        "Halt", 
                                                                                                        "c:\ax2017\engine\editor\uieditor.cpp", 
                                                                                                        0x57e, "DeleteElement")
                                                                                                    
                                                                                                    if (IsDebuggerPresent() == 1)
                                                                                                        breakpoint
                                                                                                    
                                                                                                    sub_44e680()
                                                                                                    noreturn
                                                                                                
                                                                                                eax_53 = *esi_9
                                                                                                
                                                                                                if (*(edx_17 + eax_53) == edi_5)
                                                                                                    break
                                                                                                
                                                                                                ecx_45 += 1
                                                                                                edx_17 = &edx_17[0x46]
                                                                                            
                                                                                            int32_t* eax_58 =
                                                                                                sub_48c3c0(data_e46f4c, 0)
                                                                                            sub_4d2d50(eax_58, eax_58, esi_9, 
                                                                                                ecx_45, 0)
                                                                                            i_1 = i_7 + 1
                                                                                            i_7 = i_1
                                                                                        while (i_1 s< data_d77c6c)
                                                                                    
                                                                                    int32_t* ecx_51 = data_d76c60
                                                                                    data_d77c6c = 0
                                                                                    sub_4cf4c0(ecx_51)
                                                                                    sub_5012b0()
                                                                                    char* ecx_52
                                                                                    ecx_52.b = 1
                                                                                    result = sub_4fb880(ecx_52)
                                                                                else if (result != 0x53)
                                                                                label_4fff0c:
                                                                                    int32_t eax_63 = arg1[1]
                                                                                    
                                                                                    if (eax_63 != 0x53)
                                                                                        goto label_4fff27
                                                                                    
                                                                                    int16_t eax_62
                                                                                    char* ecx_54
                                                                                    eax_62, ecx_54 = GetKeyState(0x11)
                                                                                    
                                                                                    if ((0x8000 & eax_62) != 0)
                                                                                        result = sub_4d18b0(ecx_54)
                                                                                    else
                                                                                        eax_63 = arg1[1]
                                                                                    label_4fff27:
                                                                                        int32_t eax_64
                                                                                        
                                                                                        if (eax_63 == 0x41)
                                                                                            eax_64 = GetKeyState(0x11)
                                                                                        
                                                                                        if (eax_63 != 0x41
                                                                                                || (0x8000 & eax_64.w) == 0
                                                                                                || data_d77c70.b != 0)
                                                                                            int16_t eax_72
                                                                                            
                                                                                            if (arg1[1] == 0x44)
                                                                                                eax_72 = GetKeyState(0x11)
                                                                                            
                                                                                            if (arg1[1] == 0x44
                                                                                                    && (0x8000 & eax_72) != 0
                                                                                                    && data_d77c70.b == 0)
                                                                                                goto label_4ff4ea
                                                                                            
                                                                                            result = arg1[1]
                                                                                            float var_3c_8
                                                                                            
                                                                                            if (result == 0x27)
                                                                                                bool cond:6_1 = (arg1[2].b & 1) == 0
                                                                                                var_40 = 1f
                                                                                                int32_t var_3c_3 = 0
                                                                                                
                                                                                                if (cond:6_1)
                                                                                                    result = sub_4fc950(&var_40)
                                                                                                else
                                                                                                    var_40 = 10f
                                                                                                    var_3c_8 = (zx.o(0)).d f* 10f
                                                                                                    result = sub_4fc950(&var_40)
                                                                                            else if (result == 0x25)
                                                                                                bool cond:7_1 = (arg1[2].b & 1) == 0
                                                                                                var_40 = -1f
                                                                                                int32_t var_3c_4 = 0
                                                                                                
                                                                                                if (cond:7_1)
                                                                                                    result = sub_4fc950(&var_40)
                                                                                                else
                                                                                                    var_40 = -10f
                                                                                                    var_3c_8 = (zx.o(0)).d f* 10f
                                                                                                    result = sub_4fc950(&var_40)
                                                                                            else if (result == 0x26)
                                                                                                bool cond:8_1 = (arg1[2].b & 1) == 0
                                                                                                var_40 = 0f
                                                                                                int32_t var_3c_5 = 0xbf800000
                                                                                                
                                                                                                if (not(cond:8_1))
                                                                                                    var_40 = 0f
                                                                                                    float var_3c_6 = -1f * 10f
                                                                                                
                                                                                                result = sub_4fc950(&var_40)
                                                                                            else if (result == 0x28)
                                                                                                bool cond:9_1 = (arg1[2].b & 1) == 0
                                                                                                var_40 = 0f
                                                                                                int32_t var_3c_7 = 0x3f800000
                                                                                                
                                                                                                if (cond:9_1)
                                                                                                    result = sub_4fc950(&var_40)
                                                                                                else
                                                                                                    var_40 = 0f
                                                                                                    var_3c_8 = 0x3f800000 f* 10f
                                                                                                    result = sub_4fc950(&var_40)
                                                                                        else
                                                                                            int32_t* ecx_55 = data_d76c60
                                                                                            
                                                                                            if (ecx_55[1] != 0x1e)
                                                                                                sub_44e4d0(eax_64, &data_5559b1, 
                                                                                                    "ptr->assetType == ASSET_TYPE_UI", 
                                                                                                    "c:\ax2017\engine\uidef.cpp", 0x10d, 
                                                                                                    "UIDefGet")
                                                                                                
                                                                                                if (IsDebuggerPresent() == 1)
                                                                                                    breakpoint
                                                                                                
                                                                                                sub_44e680()
                                                                                                noreturn
                                                                                            
                                                                                            char* result_4 = sub_4459f0(ecx_55)
                                                                                            int32_t* ecx_56 = data_d76c60
                                                                                            char* result_3 = result_4
                                                                                            result_1 = result_3
                                                                                            
                                                                                            if (ecx_56[1] != 0x1e)
                                                                                                sub_44e4d0(result_4, &data_5559b1, 
                                                                                                    "ptr->assetType == ASSET_TYPE_UI", 
                                                                                                    "c:\ax2017\engine\uidef.cpp", 0x10d, 
                                                                                                    "UIDefGet")
                                                                                                
                                                                                                if (IsDebuggerPresent() == 1)
                                                                                                    breakpoint
                                                                                                
                                                                                                sub_44e680()
                                                                                                noreturn
                                                                                            
                                                                                            char* eax_65 = sub_4459f0(ecx_56)
                                                                                            int32_t esi_13 = 0
                                                                                            var_48 = eax_65
                                                                                            int32_t i_8 = 0
                                                                                            
                                                                                            if (*(eax_65 + 4) s> 0)
                                                                                                int32_t* edi_6 = nullptr
                                                                                                int32_t i_2
                                                                                                char* ecx_60
                                                                                                
                                                                                                do
                                                                                                    int32_t eax_66 =
                                                                                                        sub_4fbab0(*(edi_6 + *eax_65), nullptr)
                                                                                                    int32_t ecx_59 = esi_13 + 1
                                                                                                    edi_6 = &edi_6[0x46]
                                                                                                    
                                                                                                    if (*(eax_66 + 0x31) != 0)
                                                                                                        ecx_59 = esi_13
                                                                                                    
                                                                                                    i_2 = i_8 + 1
                                                                                                    esi_13 = ecx_59
                                                                                                    i_8 = i_2
                                                                                                    ecx_60 = var_48
                                                                                                    eax_65 = ecx_60
                                                                                                while (i_2 s< *(ecx_60 + 4))
                                                                                                result_3 = result_1
                                                                                            
                                                                                            bool cond:10_1 = data_d77c6c == esi_13
                                                                                            data_d77c6c = 0
                                                                                            
                                                                                            if (cond:10_1)
                                                                                                result = sub_5012b0()
                                                                                            else
                                                                                                int32_t i_9 = 0
                                                                                                
                                                                                                if (*(result_3 + 4) s> 0)
                                                                                                    int32_t* esi_14 = nullptr
                                                                                                    int32_t i_3
                                                                                                    
                                                                                                    do
                                                                                                        if (*(sub_4fbab0(*(*result_3 + esi_14), 
                                                                                                                nullptr) + 0x31) == 0)
                                                                                                            (&data_d76c6c)[data_d77c6c] =
                                                                                                                *(esi_14 + *result_3)
                                                                                                            data_d77c6c += 1
                                                                                                        
                                                                                                        esi_14 = &esi_14[0x46]
                                                                                                        i_3 = i_9 + 1
                                                                                                        i_9 = i_3
                                                                                                    while (i_3 s< *(result_3 + 4))
                                                                                                
                                                                                                result = sub_5012b0()
                                                                                else
                                                                                    if ((0x8000 & GetKeyState(0x11)) == 0)
                                                                                        goto label_4fff0c
                                                                                    
                                                                                    int16_t eax_61
                                                                                    char* ecx_53
                                                                                    eax_61, ecx_53 = GetKeyState(0x10)
                                                                                    
                                                                                    if ((0x8000 & eax_61) == 0)
                                                                                        goto label_4fff0c
                                                                                    
                                                                                    result = sub_4d1c00(ecx_53)
                                                                        else if (data_df8474 s> 1)
                                                                            sub_4c68c0(ecx_42)
                                                                            eax_55 = data_df8474 - 1
                                                                            int32_t var_80_6 = 0x100c
                                                                            esi_11 = &(&data_d76c64)[eax_55 * 0x404]
                                                                            var_84_3 = esi_11
                                                                            int32_t* var_88_3 = &data_d76c68
                                                                        label_4ffe4d:
                                                                            data_df8474 = eax_55
                                                                            sub_51d5b0(&data_d76c68, var_84_3, 
                                                                                0x100c)
                                                                            int32_t* eax_57 = data_d76c60
                                                                            sub_48ba60(eax_57, **eax_57, 
                                                                                **(esi_11 + 0x100c), data_e46f4c)
                                                                            sub_4cf4c0(data_d76c60)
                                                                            result = sub_5012b0()
                                                            else
                                                                data_d77c6c = 0
                                                                result = sub_5012b0()
                                                                data_d77c70 = 0x100
                                                else
                                                    result.b = data_e477c0 == 0
                                                    data_e477c0 = result.b
                                                    
                                                    if (result.b == 0)
                                                        result = sub_489ff0(data_d76c64, (zx.o(0)).d)
                                                    else
                                                        int32_t ecx_34 = data_d76c64
                                                        int32_t esi_6 = 0
                                                        
                                                        if (ecx_34 == 0)
                                                            sub_44e4d0(result, &data_5559b1, 
                                                                "id != DATAID_NULL", 
                                                                "c:\ax2017\engine\dataarray.h", 0x6c, 
                                                                "DataArray<struct UIState>::DataArrayGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_44e680()
                                                            noreturn
                                                        
                                                        uint32_t edx_14 = zx.d(ecx_34.w)
                                                        int32_t edi_3
                                                        
                                                        if (edx_14 u< data_654ebc)
                                                            edi_3 = data_654eb8
                                                            result = edx_14 * 0x438
                                                        
                                                        if (edx_14 u>= data_654ebc
                                                                || *(result + edi_3 + 0x434) != ecx_34)
                                                            sub_44e4d0(result, &data_5559b1, 
                                                                "DataArrayTryToGet(id) != NULL", 
                                                                "c:\ax2017\engine\dataarray.h", 0x6d, 
                                                                "DataArray<struct UIState>::DataArrayGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_44e680()
                                                            noreturn
                                                        
                                                        int32_t eax_42 = edx_14 * 0x438
                                                        int32_t* ecx_35 = *(eax_42 + edi_3 + 4)
                                                        
                                                        if (ecx_35[1] != 0x1e)
                                                            sub_44e4d0(eax_42, &data_5559b1, 
                                                                "ptr->assetType == ASSET_TYPE_UI", 
                                                                "c:\ax2017\engine\uidef.cpp", 0x10d, 
                                                                "UIDefGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_44e680()
                                                            noreturn
                                                        
                                                        char* eax_43 = sub_4459f0(ecx_35)
                                                        int32_t i_4 = 0
                                                        var_48 = eax_43
                                                        int32_t i_6 = 0
                                                        int32_t edi_4 = *(eax_43 + 4)
                                                        
                                                        if (edi_4 s> 0)
                                                            if (edi_4 u>= 8 && data_65a2f4 s>= 2)
                                                                int32_t eax_45 = edi_4 & 0x80000007
                                                                
                                                                if (eax_45 s< 0)
                                                                    eax_45 = ((eax_45 - 1) | 0xfffffff8) + 1
                                                                
                                                                int32_t xmm6_4[0x4] = zx.o(0)
                                                                int32_t xmm7_4[0x4] = zx.o(0)
                                                                void* ecx_37 = *eax_43 + 0x234
                                                                
                                                                do
                                                                    uint64_t xmm2_8 =
                                                                        zx.q(*(ecx_37 + 0x118))
                                                                    ecx_37 += 0x8c0
                                                                    i_4 += 8
                                                                    uint128_t xmm1_7 =
                                                                        zx.o(*(ecx_37 - 0x9d8))
                                                                    uint128_t xmm4_4 =
                                                                        zx.o(*(ecx_37 - 0xaa8))
                                                                    uint64_t xmm3_5 =
                                                                        zx.q(*(ecx_37 - 0x75c))
                                                                    int32_t xmm5_5[0x4] =
                                                                        _mm_unpacklo_epi32(
                                                                        zx.o(*(ecx_37 - 0xaf0)), 
                                                                        zx.q(*(ecx_37 - 0x8c0)))
                                                                    int64_t xmm0_17 =
                                                                        zx.q(*(ecx_37 - 0x878))
                                                                    int64_t xmm1_8 =
                                                                        _mm_unpacklo_epi32(xmm1_7, xmm2_8)
                                                                    uint64_t xmm2_9 =
                                                                        zx.q(*(ecx_37 - 0x760))
                                                                    int32_t xmm5_6[0x4] =
                                                                        _mm_unpacklo_epi32(xmm5_5, xmm1_8)
                                                                    int32_t xmm1_9[0x4] =
                                                                        zx.o(*(ecx_37 - 0x990))
                                                                    int32_t xmm5_7[0x4] =
                                                                        __pcmpeqd_xmmdq_memdq(xmm5_6, 
                                                                        data_59e190)
                                                                    int32_t xmm4_5[0x4] =
                                                                        _mm_unpacklo_epi32(xmm4_4, xmm0_17)
                                                                    uint64_t xmm0_18 =
                                                                        zx.q(*(ecx_37 - 0x874))
                                                                    int64_t xmm1_10 =
                                                                        _mm_unpacklo_epi32(xmm1_9, xmm2_9)
                                                                    int32_t xmm2_11[0x4] =
                                                                        _mm_unpacklo_epi32(
                                                                        zx.o(*(ecx_37 - 0xaa4)), xmm0_18)
                                                                    int32_t xmm4_6[0x4] =
                                                                        _mm_unpacklo_epi32(xmm4_5, xmm1_10)
                                                                    int32_t xmm2_12[0x4] =
                                                                        _mm_unpacklo_epi32(xmm2_11, 
                                                                        _mm_unpacklo_epi32(
                                                                            zx.o(*(ecx_37 - 0x98c)), xmm3_5))
                                                                    uint128_t xmm1_13 =
                                                                        zx.o(*(ecx_37 - 0x578))
                                                                    int32_t xmm4_7[0x4] =
                                                                        _mm_add_epi32(xmm4_6, xmm2_12)
                                                                    uint64_t xmm3_6 =
                                                                        zx.q(*(ecx_37 - 0x300))
                                                                    int64_t xmm1_14 = _mm_unpacklo_epi32(
                                                                        xmm1_13, zx.q(*(ecx_37 - 0x348)))
                                                                    uint64_t xmm2_14 =
                                                                        zx.q(*(ecx_37 - 0x2fc))
                                                                    int32_t xmm0_20[0x4] =
                                                                        _mm_max_epi32(xmm6_4, xmm4_7)
                                                                    uint128_t xmm4_8 =
                                                                        zx.o(*(ecx_37 - 0x644))
                                                                    xmm6_4 = (xmm0_20 & xmm5_7)
                                                                        | (xmm5_7 & not.o(xmm6_4))
                                                                    int32_t xmm5_10[0x4] =
                                                                        _mm_unpacklo_epi32(
                                                                        zx.o(*(ecx_37 - 0x690)), 
                                                                        zx.q(*(ecx_37 - 0x460)))
                                                                    int64_t xmm0_24 =
                                                                        zx.q(*(ecx_37 - 0x414))
                                                                    int32_t xmm5_11[0x4] =
                                                                        _mm_unpacklo_epi32(xmm5_10, xmm1_14)
                                                                    int32_t xmm1_15[0x4] =
                                                                        zx.o(*(ecx_37 - 0x52c))
                                                                    int32_t xmm5_12[0x4] =
                                                                        __pcmpeqd_xmmdq_memdq(xmm5_11, 
                                                                        data_59e190)
                                                                    xmm7_4 = (_mm_max_epi32(xmm7_4, 
                                                                        _mm_add_epi32(
                                                                            _mm_unpacklo_epi32(
                                                                                _mm_unpacklo_epi32(xmm4_8, xmm0_24), 
                                                                                _mm_unpacklo_epi32(xmm1_15, xmm2_14)), 
                                                                            _mm_unpacklo_epi32(
                                                                            _mm_unpacklo_epi32(
                                                                                zx.o(*(ecx_37 - 0x648)), 
                                                                                zx.q(*(ecx_37 - 0x418))), 
                                                                            _mm_unpacklo_epi32(
                                                                            zx.o(*(ecx_37 - 0x530)), xmm3_6))))
                                                                        & xmm5_12) | (xmm5_12 & not.o(xmm7_4))
                                                                while (i_4 s< edi_4 - eax_45)
                                                                
                                                                eax_43 = var_48
                                                                int32_t xmm6_5[0x4] =
                                                                    _mm_max_epi32(xmm6_4, xmm7_4)
                                                                i_6 = i_4
                                                                int32_t xmm6_6[0x4] = _mm_max_epi32(
                                                                    xmm6_5, _mm_bsrli_si128(xmm6_5, 8))
                                                                esi_6 = _mm_max_epi32(xmm6_6, 
                                                                    _mm_bsrli_si128(xmm6_6, 4))
                                                            
                                                            if (i_4 s< edi_4)
                                                                int32_t* edx_16 =
                                                                    *eax_43 + 0x50 + i_4 * 0x118
                                                                int32_t i_10 = edi_4 - i_6
                                                                int32_t i_5
                                                                
                                                                do
                                                                    if (edx_16[-0x13] == 6)
                                                                        int32_t eax_50 = *edx_16 + edx_16[-1]
                                                                        
                                                                        if (esi_6 s<= eax_50)
                                                                            esi_6 = eax_50
                                                                    
                                                                    edx_16 = &edx_16[0x46]
                                                                    i_5 = i_10
                                                                    i_10 -= 1
                                                                while (i_5 != 1)
                                                        
                                                        float xmm2_19 = _mm_cvtepi32_ps(zx.o(esi_6))
                                                        result =
                                                            sub_489ff0(data_d76c64, xmm2_19 / 1000f)
                                            else if (data_d77c6c == 1)
                                                data_d77c72 = 1
                                else
                                    if ((0x8000 & GetKeyState(0x11)) == 0)
                                        goto label_4ff95d
                                    
                                    if ((0x8000 & GetKeyState(0x10)) == 0)
                                        goto label_4ff95d
                                    
                                    result = sub_4ff0d0()
                            else
                                if ((0x8000 & GetKeyState(0x11)) == 0)
                                    goto label_4ff930
                                
                                if ((0x8000 & GetKeyState(0x10)) == 0)
                                    goto label_4ff930
                                
                                result = sub_4ff100()
                        else if (data_d77c6c == 1)
                            result = sub_4fbab0(data_d76c6c, nullptr)
                            
                            if (*(result + 4) == 2)
                                result = sub_4d52a0(*(result + 0xa0), 0)
                else
                    if ((0x8000 & GetKeyState(0x11)) == 0)
                        goto label_4ff896
                    
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        goto label_4ff896
                    
                    result = sub_4d51d0()
        else
            data_d77c70 = 0
            data_d77c72 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
