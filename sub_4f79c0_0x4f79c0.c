// 函数名称: sub_4f79c0
// 虚拟地址: 0x4f79c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4f79c0()
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    float var_258
    int32_t eax_1 = __security_cookie ^ &var_258
    BOOL eax_2 = data_cdf450
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_240
    float Y
    int64_t var_1a0
    
    if ((*(eax_2 + 0xc) & 2) == 0)
    label_4f7b08:
        
        if (data_d76c5a != 0)
            eax_2 = ShowCursor(1)
        
        data_d76c5a = 0
    else
        eax_2 = data_65ae04
        
        if (*(eax_2 + 0x18) == 0)
            goto label_4f7b08
        
        TEB* fsbase
        
        if (data_e49db8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_e49db8)
            
            if (data_e49db8 == 0xffffffff)
                int32_t* var_264_2 = &data_e49db8
                data_e49dbc = 0
                data_e49dc0 = 0
                __Init_thread_footer(var_264_2)
        
        sub_44edc0(&var_240)
        
        if (data_d76c5a == 0)
            ShowCursor(0)
            data_e49dbc = var_240
            data_e49dc0 = Y
        else
            var_1a0.d = var_240 f- data_e49dbc
            var_1a0:4.d = Y f- data_e49dc0
            sub_4fad50(&data_d63bc4:4, &var_1a0)
        
        int32_t eax_5
        float Y_3
        eax_5, Y_3 = sub_4a4e60(data_e49dbc, data_e49dc0)
        var_240 = eax_5
        Y = Y_3
        ClientToScreen(data_ce1790, &var_240)
        eax_2 = SetCursorPos(var_240, Y)
        data_d76c5a = 1
    
    sub_4f6170(eax_2, &data_d63bc4:4, &data_d63bd4:4, &data_d63bc4:4)
    void* eax_6 = data_65ae00
    float var_1b0 = 0f
    int32_t var_1ac = 0
    float xmm2 = data_d63bb4
    float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0x14)))
    int32_t esi = data_d63bd4:0xc
    int32_t var_7c = esi
    int64_t xmm1_3 = data_d63bd4:4.q
    float var_1a8 = xmm0_6
    var_258 = xmm0_6
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0x18)))
    var_1a0 = xmm1_3
    float var_1a4 = xmm0_8
    float var_1a4_1 = xmm2
    int128_t var_a4 = var_1b0.o
    float xmm0_10[0x4] = data_d63bc4:4.o
    int64_t var_84 = xmm1_3
    float var_170[0x4] = xmm0_10
    float var_94[0x4] = xmm0_10
    float xmm0_12 = 1f f/ data_d63bb8 * xmm2
    float xmm3_1 = xmm0_12 ^ (data_59e5c0.o).d
    var_1b0 = xmm3_1
    float xmm3_3 = xmm2 ^ (data_59e5c0.o).d
    float var_1ac_1 = xmm3_3
    float var_1a8_1 = xmm0_12
    int128_t var_b4 = var_1b0.o
    sub_44edc0(&var_240)
    uint128_t var_150
    int64_t* eax_8 = sub_4b7dc0(&var_150, &var_240, &var_b4, &var_150)
    float xmm1_4[0x4] = data_d63bbc
    int32_t edx_3 = data_ce27a0
    uint128_t xmm0_14 = *eax_8
    int32_t ecx_5 = data_d63bec
    float var_78[0x4] = var_170
    int32_t var_60 = esi
    int64_t xmm2_2 = var_1a0
    uint128_t var_190 = xmm0_14
    int64_t xmm0_15 = eax_8[2]
    int64_t xmm1_5 = _mm_unpacklo_ps(xmm1_4, data_d63bc0)
    int64_t var_68 = xmm2_2
    int128_t var_44 = data_5c779c
    int128_t var_5c = var_1b0.o
    int64_t var_4c = xmm1_5
    int128_t var_34 = data_5c77ac
    sub_4b0c80(&var_78, edx_3, ecx_5, &var_78)
    
    if (sub_4f76e0(&var_190) == 0)
        data_d63bf0 = sub_4b34a0(data_d63bec, &var_190)
    else
        data_d63bf0 = 0xffffffff
    
    int128_t* eax_12 = sub_4f5fd0(&var_150)
    float xmm2_4[0x4] = *eax_12
    int64_t xmm0_19 = eax_12[1].q
    float xmm1_7 = xmm2_4[0] + _mm_shuffle_ps(xmm2_4, xmm2_4, 0xff)
    float xmm0_24 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0x55) f+ xmm0_19.d
    float xmm2_7 = (_mm_shuffle_ps(xmm2_4, xmm2_4, 0xaa) f+ xmm0_19:4.d) * 0.5f
    var_1a0 = _mm_unpacklo_ps(xmm1_7 * 0.5f, xmm0_24 * 0.5f)
    float var_198 = xmm2_7
    HWND eax_14
    
    if ((data_cdf450->__offset(0xc).b & 1) != 0 && data_65ae04->__offset(0x18).b != 0)
        eax_14 = GetFocus()
    
    if ((data_cdf450->__offset(0xc).b & 1) == 0 || data_65ae04->__offset(0x18).b == 0
            || data_ce1790 != eax_14)
        eax_14.b = 0
    else
        eax_14.b = 1
    
    int64_t xmm2_8 = xmm0_15:4.d
    float xmm1_10[0x4] = xmm0_15.d
    float xmm3_4 = var_190:0xc.d
    float xmm5 = var_190:8.d
    float xmm7 = var_190:4.d
    float xmm6 = var_190.d
    char var_249 = eax_14.b
    uint128_t var_278
    int32_t ecx_9
    float Y_4
    
    if (data_d76c58 != 0 || eax_14.b == 0)
        Y_4 = data_d76c24
        ecx_9 = data_d76c34
    else
        int32_t* var_27c_1 = &data_d76c48
        var_278 = var_190
        int32_t var_268
        var_268.q = _mm_unpacklo_ps(xmm1_10, xmm2_8)
        int32_t eax_16 = sub_4f6d40(&var_278, &data_d76c38, &var_1a0, &data_d76c48, var_278, var_268)
        int32_t xmm0_29 = var_240
        ecx_9 = eax_16
        Y_4 = Y
        data_d76c34 = ecx_9
        data_d76c20 = xmm0_29
        data_d76c24 = Y_4
        
        if (ecx_9 == 1)
            xmm6 = var_190.d
            xmm7 = var_190:4.d
            xmm5 = var_190:8.d
            xmm1_10 = xmm0_15.d
            xmm2_8 = xmm0_15:4.d
            xmm3_4 = var_190:0xc.d
        else
            if ((0x8000 & GetKeyState(0x12)) != 0)
                sub_4f7580()
            
            sub_4f5670()
            float xmm1_11 = data_d76c4c
            float xmm2_9 = data_d76c48
            float xmm3_5 = data_d76c50
            float xmm4_4 = xmm0_15.d * xmm1_11 + var_190:0xc.d * xmm2_9 + xmm0_15:4.d * xmm3_5
            bool cond:3_1 = 9.99999975e-06f > sub_41b760(xmm4_4)
            xmm7 = var_190:4.d
            xmm6 = var_190.d
            xmm5 = var_190:8.d
            float xmm4_9
            
            if (not(cond:3_1))
                xmm4_9 = xmm7 * xmm1_11 + xmm6 * xmm2_9 + xmm5 * xmm3_5 f+ data_d76c54
            
            float xmm4_11
            
            if (cond:3_1 || 0 f< xmm4_9 * xmm4_4)
                xmm4_11 = var_240
            else
                xmm4_11 = (xmm4_9 / xmm4_4) ^ (data_59e5c0.o).d
            
            xmm2_8 = xmm0_15:4.d
            xmm3_4 = var_190:0xc.d
            xmm1_10 = xmm0_15.d
            data_d76c3c = _mm_unpacklo_ps(xmm6 + var_190:0xc.d * xmm4_11, xmm7 + xmm0_15.d * xmm4_11)
            data_d76c44 = xmm5 + xmm0_15:4.d * xmm4_11
            Y_4 = data_d76c24
            ecx_9 = data_d76c34
    
    float eax_19 = data_d76c1c
    var_1a0 = data_d76c14
    float var_198_1 = eax_19
    char const* const ecx_21
    
    if (ecx_9 u> 0xb)
        char const* const var_264_24 = "FabEditorUpdate"
        int32_t var_268_7 = 0x523
        var_278:0xc.d = "c:\ax2017\engine\editor\fabeditor.cpp"
        ecx_21 = "Halt"
    else
        switch (ecx_9)
            case 0
            label_4f8d61:
                sub_4f5420()
                
                if (data_d76c34 != 0 && var_249 == 0)
                    char* ecx_28
                    ecx_28.b = 1
                    data_d76c34 = 0
                    sub_4fb1e0(ecx_28)
                
                int32_t var_264_21 = data_d63bec
                var_240 = data_5b0f3c
                sub_4b27a0(sub_4b3c10(var_264_21), var_240)
                bool cond:2 = data_d63bf0 != 0xffffffff
                data_d76c58 = var_249
                char result
                
                if (cond:2 || data_d63bf8 != 0xffffffff)
                    result = sub_44edc0(&var_1a0)
                    
                    if (result != 0)
                        result = SetCursor(LoadCursorA(nullptr, 0x7f89))
                else
                    result = sub_44edc0(&var_1a0)
                    
                    if (result != 0)
                        result = SetCursor(LoadCursorA(nullptr, 0x7f00))
                
                @__security_check_cookie@4(eax_1 ^ &var_258)
                return result
            case 1
                int32_t xmm2_13 = var_240
                float xmm0_47 = data_d76c20
                data_d76c28 = xmm2_13
                data_d76c2c = Y
                
                if (xmm2_13 f<= xmm0_47)
                    var_1b0 = xmm2_13
                    float var_1a8_5 = xmm0_47
                else
                    var_1b0 = xmm0_47
                    int32_t var_1a8_4 = xmm2_13
                
                if (Y <= Y_4)
                    float Y_1 = Y
                    float Y_6 = Y_4
                else
                    float Y_5 = Y_4
                    float Y_2 = Y
                
                var_1b0.o = var_1b0.o
                int32_t eax_21
                float edx_5
                eax_21, edx_5 = sub_41b6f0(&var_1b0)
                float xmm2_14 = var_258
                var_240 = eax_21
                float xmm2_15 = xmm2_14 - 0f
                float xmm0_50 = var_240 f- 0f
                var_258 = xmm2_15
                float xmm2_17 = xmm0_8 - 0f
                var_240 = (edx_5 - 0f) / xmm2_17
                int32_t eax_22
                int32_t edx_6
                eax_22, edx_6 = sub_47be40(&var_1b0)
                var_1a0.d = eax_22
                var_1a0:4.d = edx_6
                float xmm3_9 = xmm0_12 - xmm3_1
                float xmm1_16 = var_1a0:4.d - 0f
                float xmm0_57 = (var_1a0.d - 0f) / var_258
                int32_t* ecx_12 = data_ce27a0
                data_d64bfc = 0
                float xmm5_2 = xmm2 - xmm3_3
                float xmm4_17 = (1f f- var_240) * xmm5_2 + xmm3_3
                float var_1a8_6 = xmm3_9 * xmm0_57 + xmm3_1
                float xmm2_21[0x4] = data_d63bbc
                var_1b0 = xmm3_9 * xmm0_50 / xmm2_15 + xmm3_1
                float var_1ac_2 = xmm4_17
                float var_1a4_2 = (1f - xmm1_16 / xmm2_17) * xmm5_2 + xmm3_3
                float xmm1_18[0x4] = var_1b0.o
                int64_t xmm2_22 = _mm_unpacklo_ps(xmm2_21, data_d63bc0)
                var_170 = xmm1_18
                int64_t var_160_1 = xmm2_22
                int32_t eax_23 = sub_4b0040(ecx_12)
                int32_t i = 0
                var_240 = eax_23
                
                if (*(eax_23 + 4) s> 0)
                    float ecx_13 = 0f
                    var_258 = 0f
                    
                    do
                        if (*(ecx_13 i+ *eax_23 + 0x31) == 0)
                            void var_1d8
                            int128_t* eax_26
                            int32_t edx_8
                            eax_26, edx_8 = sub_4b33b0(&var_1d8, i, data_d63bec, &var_1d8)
                            void var_218
                            int128_t* var_264_14 = &var_218
                            uint128_t xmm1_19 = *eax_26
                            int128_t var_120_1 = eax_26[1]
                            int64_t xmm0_63 = eax_26[2].q
                            int64_t var_180_1 = xmm1_19
                            int32_t xmm1_20 = _mm_bsrli_si128(xmm1_19, 8)
                            var_190 = xmm1_19
                            int32_t var_178_1 = xmm1_20
                            int128_t* eax_28 = sub_4b8340(&var_218, edx_8, &var_190, var_264_14)
                            int128_t var_100 = *eax_28
                            int32_t var_e8_1 = *(eax_28 + 0x18)
                            int64_t var_f0_1 = eax_28[1].q
                            void var_1f8
                            int128_t* eax_31 = sub_4b80d0(&var_1f8, &var_100, &var_94, &var_1f8)
                            float xmm1_21 = *(eax_26 + 0x1c)
                            int128_t var_e0 = *eax_31
                            int64_t var_d0_1 = eax_31[1].q
                            float xmm1_22 = xmm1_21 * 0.5f
                            int32_t var_c8_1 = *(eax_31 + 0x18)
                            float xmm4_19 = xmm0_63:4.d * 0.5f
                            float xmm3_13 = xmm0_63.d * 0.5f
                            int64_t xmm6_4 = _mm_unpacklo_ps(xmm1_22 + 0f, xmm3_13 + 0f)
                            int64_t xmm2_24 = _mm_unpacklo_ps(0f - xmm1_22, 0f - xmm3_13)
                            var_190:0xc.q = xmm6_4
                            var_190.q = xmm2_24
                            var_190:8.d = 0f - xmm4_19
                            var_180_1:4.d = xmm4_19 + 0f
                            var_150 = var_190
                            int64_t var_140_1 = var_180_1
                            sub_4b76e0(&var_78, &var_e0, &var_170, &var_78)
                            char eax_36 = sub_4f23f0(&var_78, &var_150)
                            ecx_13 = var_258
                            
                            if (eax_36 != 0)
                                *((data_d64bfc << 2) + &data_d63bfc) = i
                                data_d64bfc += 1
                        
                        eax_23 = var_240
                        i += 1
                        ecx_13 += 0xb8
                        var_258 = ecx_13
                    while (i s< *(eax_23 + 4))
                
                if (var_249 == 0)
                    if ((0x8000 & GetKeyState(0x10)) == 0 || *(data_65ae04 + 0x18) == 0)
                        data_ce37a4 = 0
                        sub_4f4fa0()
                    else
                        HWND eax_40 = GetFocus()
                        
                        if (eax_40 != data_ce1790 && eax_40 != 0)
                            data_ce37a4 = 0
                            sub_4f4fa0()
                    
                    int32_t edi = data_d64bfc
                    int32_t esi_2 = 0
                    
                    if (edi s> 0)
                        int32_t ecx_19 = data_ce37a4
                        
                        do
                            int32_t i_1 = *((esi_2 << 2) + &data_d63bfc)
                            int32_t eax_41 = 0
                            
                            if (ecx_19 s<= 0)
                            label_4f850e:
                                (&data_ce27a4)[ecx_19] = i_1
                                data_ce37a4 += 1
                                sub_4f4fa0()
                                edi = data_d64bfc
                                ecx_19 = data_ce37a4
                            else
                                while ((&data_ce27a4)[eax_41] != i_1)
                                    eax_41 += 1
                                    
                                    if (eax_41 s>= ecx_19)
                                        goto label_4f850e
                            
                            esi_2 += 1
                        while (esi_2 s< edi)
                    
                    data_d64bfc = 0
                    data_d76c34 = 0
                
                goto label_4f8d61
            case 2, 3, 4
                float xmm1_24 = data_d76c4c
                float xmm3_14 = data_d76c48
                var_258 = xmm1_10[0] * xmm1_24 + xmm3_4 * xmm3_14
                float xmm4_23 = data_d76c50
                float xmm2_26 = var_258 + xmm2_8.d * xmm4_23
                var_258 = xmm2_26
                int32_t xmm0_79 = sub_41b760(xmm2_26)
                float xmm2_31
                float xmm3_15
                
                if (not(9.99999975e-06f f> xmm0_79))
                    xmm3_15 = var_258
                    xmm2_31 = xmm7 * xmm1_24 + xmm6 * xmm3_14 + xmm5 * xmm4_23 f+ data_d76c54
                
                float xmm2_33
                
                if (9.99999975e-06f f> xmm0_79 || 0 f< xmm2_31 * xmm3_15)
                    xmm2_33 = var_240
                else
                    xmm2_33 = (xmm2_31 / xmm3_15) ^ (data_59e5c0.o).d
                
                eax_19 = data_d76c38
                float xmm6_7 =
                    xmm6 + var_190:0xc.d * xmm2_33 f- var_1a0.d - (data_d76c3c.d f- var_1a0.d)
                float xmm7_4 =
                    xmm7 + xmm0_15.d * xmm2_33 f- var_1a0:4.d - (data_d76c3c:4 f- var_1a0:4.d)
                float xmm1_29 = xmm5 + xmm0_15:4.d * xmm2_33 - var_198_1 - (data_d76c44 - var_198_1)
                float var_244_2 = xmm6_7
                var_258 = xmm7_4
                float var_248_2 = xmm1_29
                
                if (eax_19 == 1)
                    xmm1_29 = xmm1_29 * 0f
                label_4f86cf:
                    xmm7_4 = xmm7_4 * 0f
                    goto label_4f86d3
                
                if (eax_19 == 2)
                    xmm6_7 = xmm6_7 * 0f
                    xmm1_29 = xmm1_29 * 0f
                label_4f86d3:
                    var_244_2 = xmm6_7
                    var_258 = xmm7_4
                    var_248_2 = xmm1_29
                else if (eax_19 == 3)
                    xmm6_7 = xmm6_7 * 0f
                    goto label_4f86cf
                
                int32_t* ecx_20 = data_ce27a0
                
                if (ecx_20[1] == 0x20)
                    int32_t eax_42 = sub_4459f0(ecx_20)
                    int32_t i_2 = 0
                    var_240 = eax_42
                    
                    if (data_ce37a4 s> 0)
                        void* esi_3 = &data_d6dc08
                        float xmm4_26 = var_258
                        
                        do
                            float xmm2_35[0x4] = *(esi_3 - 8) + var_244_2
                            int64_t xmm1_31 = *(esi_3 - 4) + xmm4_26
                            int32_t edx_12 = (&data_ce27a4)[i_2] * 0xb8
                            float xmm0_89 = *esi_3 + var_248_2
                            int32_t ecx_22 = *eax_42
                            i_2 += 1
                            esi_3 += 0x24
                            *(edx_12 + ecx_22 + 8) = _mm_unpacklo_ps(xmm2_35, xmm1_31)
                            *(edx_12 + ecx_22 + 0x10) = xmm0_89
                            eax_42 = var_240
                        while (i_2 s< data_ce37a4)
                    
                    goto label_4f8d61
                
                char const* const var_264_18 = "FabDefGet"
                int32_t var_268_3 = 0xe7
                var_278:0xc.d = "c:\ax2017\engine\fabdef.cpp"
                ecx_21 = "ptr->assetType == ASSET_TYPE_FAB"
            case 5, 6, 7
                float xmm1_32 = data_d76c4c
                float xmm3_21 = data_d76c48
                var_258 = xmm1_10[0] * xmm1_32 + xmm3_4 * xmm3_21
                float xmm4_30 = data_d76c50
                float xmm2_38 = var_258 + xmm2_8.d * xmm4_30
                var_258 = xmm2_38
                
                if (not(9.99999975e-06f f> sub_41b760(xmm2_38)))
                    float xmm3_22 = var_258
                    float xmm2_43 = xmm7 * xmm1_32 + xmm6 * xmm3_21 + xmm5 * xmm4_30 f+ data_d76c54
                    
                    if (not(0 f< xmm2_43 * xmm3_22))
                        float xmm2_45 = (xmm2_43 / xmm3_22) ^ (data_59e5c0.o).d
                        float xmm2_46 = var_1a0.d
                        float xmm0_105 = data_d76c3c.d - xmm2_46
                        float xmm7_6 = xmm7 + xmm0_15.d * xmm2_45 f- var_1a0:4.d
                        float xmm5_10 = xmm5 + xmm0_15:4.d * xmm2_45 - var_198_1
                        float xmm3_26 = data_d76c44 - var_198_1
                        float xmm0_107 = data_d76c3c:4 f- var_1a0:4.d
                        float xmm6_9 = xmm6 + var_190:0xc.d * xmm2_45 - xmm2_46
                        var_258 = xmm7_6
                        float xmm1_39 = 1f / (
                            sub_412d90(xmm6_9 * xmm6_9 + xmm7_6 * xmm7_6 + xmm5_10 * xmm5_10)
                            + 9.99999975e-06f)
                        float var_198_3 = xmm1_39 * xmm5_10
                        var_1a0 = _mm_unpacklo_ps(xmm1_39 * xmm6_9, xmm1_39 * var_258)
                        int32_t* var_264_19 = &data_d76c48
                        float xmm2_50 = 1f / (
                            sub_412d90(xmm0_105 * xmm0_105 + xmm0_107 * xmm0_107 + xmm3_26 * xmm3_26)
                            + 9.99999975e-06f)
                        float var_238_1 = xmm2_50 * xmm3_26
                        int64_t* var_268_4 = &var_1a0
                        int64_t xmm1_48 = _mm_unpacklo_ps(xmm2_50 * xmm0_105, xmm2_50 * xmm0_107)
                        var_278:0xc.d = &var_190
                        var_240.q = xmm1_48
                        int128_t* eax_47 = sub_413000(&var_190, &data_d76c48, &var_240)
                        float xmm3_27[0x4] = *eax_47
                        float xmm0_125[0x4] = _mm_shuffle_ps(xmm3_27, xmm3_27, 0xff)
                        float xmm2_53 = xmm0_125[0] f* xmm0_125
                        var_170 = xmm0_125
                        float xmm2_54 = xmm2_53 + xmm3_27[0] f* xmm3_27
                        float xmm0_129[0x4] = _mm_shuffle_ps(xmm3_27, xmm3_27, 0x55)
                        var_1a0.o = xmm0_129
                        float xmm2_55 = xmm2_54 + xmm0_129[0] f* xmm0_129
                        float xmm0_131[0x4] = _mm_shuffle_ps(xmm3_27, xmm3_27, 0xaa)
                        var_240.o = xmm0_131
                        float xmm0_134 = sub_412d90(xmm0_131 f* xmm0_131[0] + xmm2_55)
                        float var_1a4_3 = var_170.d f/ xmm0_134
                        var_1b0 = (*eax_47).d f/ xmm0_134
                        float var_1ac_3 = (var_1a0.o).d f/ xmm0_134
                        float var_1a8_11 = (var_240.o).d f/ xmm0_134
                        var_170 = var_1b0.o
                        sub_4f5750(&var_170)
                
                goto label_4f8d61
            case 8, 9, 0xa, 0xb
                float xmm1_60 = data_d76c4c
                float xmm3_28 = data_d76c48
                var_258 = xmm1_10[0] * xmm1_60 + xmm3_4 * xmm3_28
                float xmm4_34 = data_d76c50
                float xmm2_57 = var_258 + xmm2_8.d * xmm4_34
                var_258 = xmm2_57
                int32_t xmm0_141 = sub_41b760(xmm2_57)
                float xmm2_62
                float xmm3_29
                
                if (not(9.99999975e-06f f> xmm0_141))
                    xmm3_29 = var_258
                    xmm2_62 = xmm7 * xmm1_60 + xmm6 * xmm3_28 + xmm5 * xmm4_34 f+ data_d76c54
                
                float xmm2_64
                
                if (9.99999975e-06f f> xmm0_141 || 0 f< xmm3_29 * xmm2_62)
                    xmm2_64 = var_240
                else
                    xmm2_64 = (xmm2_62 / xmm3_29) ^ (data_59e5c0.o).d
                
                float xmm7_8 = xmm7 + xmm0_15.d * xmm2_64 f- var_1a0:4.d
                float xmm3_33 = data_d76c44 - var_198_1
                float xmm6_11 = xmm6 + var_190:0xc.d * xmm2_64 f- var_1a0.d
                var_240 = data_d76c3c.d f- var_1a0.d
                float xmm5_12 = xmm5 + xmm0_15:4.d * xmm2_64 - var_198_1
                float xmm0_153 = data_d76c3c:4 f- var_1a0:4.d
                float xmm0_155 = sub_412d90(xmm6_11 * xmm6_11 + xmm7_8 * xmm7_8 + xmm5_12 * xmm5_12)
                float xmm1_63 = var_240
                var_258 = xmm0_155
                float xmm0_161
                eax_19, xmm0_161 =
                    sub_412d90(xmm3_33 * xmm3_33 + xmm1_63 * xmm1_63 + xmm0_153 * xmm0_153)
                int32_t* ecx_25 = data_ce27a0
                bool cond:4_1 = ecx_25[1] == 0x20
                var_258 = var_258 / xmm0_161
                
                if (cond:4_1)
                    int32_t eax_48 = sub_4459f0(ecx_25)
                    int32_t i_3 = 0
                    
                    if (data_ce37a4 s> 0)
                        float xmm7_10 = var_258
                        void* edx_14 = &data_d6dc08
                        
                        do
                            int32_t ecx_26 = (&data_ce27a4)[i_3] * 0xb8
                            i_3 += 1
                            void* ecx_27 = ecx_26 + *eax_48
                            float xmm1_72 = xmm7_10 * (*edx_14 f- data_d76c1c) f+ data_d76c1c
                            *(ecx_27 + 8) = _mm_unpacklo_ps(
                                xmm7_10 * (*(edx_14 - 8) f- data_d76c14.d) f+ data_d76c14.d, 
                                xmm7_10 * (*(edx_14 - 4) f- data_d76c14:4) f+ data_d76c14:4)
                            *(ecx_27 + 0x10) = xmm1_72
                            float xmm2_70 = *(edx_14 + 0x10)
                            float xmm1_73 = *(edx_14 + 0x14)
                            float xmm0_164 = *(edx_14 + 0x18)
                            edx_14 += 0x24
                            *(ecx_27 + 0x20) = _mm_unpacklo_ps(xmm2_70 * xmm7_10, xmm1_73 * xmm7_10)
                            *(ecx_27 + 0x28) = xmm0_164 * xmm7_10
                        while (i_3 s< data_ce37a4)
                    
                    goto label_4f8d61
                
                char const* const var_264_20 = "FabDefGet"
                int32_t var_268_5 = 0xe7
                var_278:0xc.d = "c:\ax2017\engine\fabdef.cpp"
                ecx_21 = "ptr->assetType == ASSET_TYPE_FAB"
    
    sub_44e4d0(eax_19, &data_5559b1, ecx_21)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
