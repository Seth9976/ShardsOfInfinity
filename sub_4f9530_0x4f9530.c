// 函数名称: sub_4f9530
// 虚拟地址: 0x4f9530
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4f9530(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_546760
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = *arg1
    int32_t* result_2
    int64_t var_30
    
    if (result != 1)
        if (result == 0x19)
            char* eax_32 = arg1[6]
            char* edx_10 = &data_5559b1
            
            if (eax_32 != 0)
                edx_10 = eax_32
            
            int32_t* result_1
            sub_4a8d30(&result_1, edx_10)
            int32_t var_14_1 = 0
            int32_t* result_8 = &data_5559b1
            int32_t* result_3 = result_1
            
            if (result_3 != 0)
                result_8 = result_3
            
            int32_t* eax_33 = sub_4d26e0(result_8)
            result = eax_33[1]
            
            if (result == 3 || result == 2 || result == 0x1e || result == 0x19)
                int32_t* result_4 = data_d63bb0
                result_2 = result_4
                data_d63bb0 = result_4 + 1
                void* eax_35 = data_65ae00
                float xmm2_1 = data_d63bb4
                int32_t var_88_1 = 0
                int32_t var_84_1 = 0
                int32_t xmm1_2 = _mm_cvtepi32_ps(zx.o(*(eax_35 + 0x18)))
                uint128_t xmm0_5 = zx.o(*(eax_35 + 0x14))
                int32_t var_7c_1 = xmm1_2
                var_30 = data_d63bd4:4.q
                float eax_36 = data_d63bd4:0xc
                float xmm1_5 = 1f f/ data_d63bb8 * xmm2_1
                int32_t var_80_1 = _mm_cvtepi32_ps(xmm0_5)
                float var_58_1 = xmm1_5
                int128_t var_50_1 = var_88_1.o
                float var_54_1 = xmm2_1
                int128_t var_40_1 = data_d63bc4:4.o
                float var_60 = xmm1_5 ^ (data_59e5c0.o).d
                int32_t var_5c_1 = xmm2_1 ^ (data_59e5c0.o).d
                void var_74
                sub_44edc0(&var_74)
                void var_90
                int64_t* eax_38 = sub_4b7dc0(&var_90, &var_74, &var_60, &var_90)
                float xmm3_1[0x4] = *eax_38
                var_30 = eax_38[2]
                float xmm5_1 = var_30:4.d
                var_40_1 = xmm3_1
                float xmm3_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
                float xmm4_4 = xmm5_1 * 0f + xmm3_2 * 0f + eax_36
                bool cond:1_1 = 9.99999975e-06f > sub_41b760(xmm4_4)
                float xmm7_1 = var_40_1:0xc.d
                float xmm1_10
                
                if (not(cond:1_1))
                    xmm1_10 = var_40_1:8.d * 0f + var_40_1:4.d * 0f + xmm7_1 + -0f
                
                float xmm1_12
                float var_70
                
                if (cond:1_1 || 0 f< xmm1_10 * xmm4_4)
                    xmm1_12 = var_70
                else
                    xmm1_12 = (xmm1_10 / xmm4_4) ^ (data_59e5c0.o).d
                float var_84_2 = xmm5_1 * xmm1_12 f+ var_40_1:8.d
                void* eax_39
                int32_t ecx_32
                eax_39, ecx_32 = sub_4b0040(data_ce27a0)
                int32_t edi_2 = *(eax_39 + 4)
                int32_t var_ac_5 = ecx_32
                int32_t* eax_40 = sub_48c3c0(data_e47020, 0)
                sub_4d2b10(eax_40, eax_40, eax_39, edi_2)
                int32_t* edi_4 = edi_2 * 0xb8 + *eax_39
                int32_t* result_6 = result_2
                int32_t* result_7 = result_6
                var_14_1.b = 2
                char* eax_42 = *sub_44f980(&result_2, "Item-%d")
                char* edx_13 = &data_5559b1
                
                if (eax_42 != 0)
                    edx_13 = eax_42
                
                sub_48b620(&edi_4[1], edx_13)
                var_14_1.b = 3
                
                if (data_cdf414 != 0)
                    int32_t* result_5 = result_2
                    
                    if (result_5 != 0 && *result_5 != 0)
                        char* eax_43 = sub_44f000(&result_2)
                        int32_t temp3_1 = *(eax_43 + 4)
                        *(eax_43 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_45d050(eax_43, *(eax_43 + 0xc) + 0x10)
                            result_2 = &data_5559b1
                
                var_14_1.b = 0
                edi_4[0x2d] = result_6
                int32_t eax_44 = eax_33[1]
                
                if (eax_44 == 3)
                    int32_t* eax_45 = sub_454030(eax_33)
                    edi_4[0xe] = eax_33
                    *(edi_4 + 8) = data_5725d4
                    __builtin_memcpy(&edi_4[6], 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                        0x14)
                    *(edi_4 + 8) = (xmm3_2 * xmm1_12 f+ var_40_1:4.d).q
                    edi_4[4] = eax_36 * xmm1_12 + xmm7_1
                    
                    if (*(*eax_45 + 0x18) != 1)
                        *edi_4 = 1
                    else
                        *edi_4 = 4
                        *(edi_4 + 0x31) = 1
                else if (eax_44 == 2)
                    *edi_4 = 3
                    edi_4[0x16] = eax_33
                else if (eax_44 == 0x1e)
                    *edi_4 = 2
                    edi_4[0x1d] = eax_33
                else if (eax_44 == 0x19)
                    *edi_4 = 8
                    edi_4[0x2c] = eax_33
                
                int32_t** ecx_36
                ecx_36.b = 1
                data_ce27a4 = edi_2
                data_ce37a4 = 1
                sub_4fb1e0(ecx_36)
                sub_4cf180(data_ce27a0)
                sub_4f4fa0()
                int32_t var_14_3 = 4
            else
                int32_t var_14_2 = 1
            
            if (data_cdf414 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_44f000(&result_1)
                    int32_t temp5_1 = result[1]
                    result[1] -= 1
                    
                    if (temp5_1 == 1)
                        sub_45d050(result, result[3] + 0x10)
        else if (result == 5)
            sub_4f9fa0()
        
        result.b = 0
    else
        result = arg1[1]
        
        if (result == 0x2e)
            int32_t eax_3 = sub_4b0040(data_ce27a0)
            int32_t esi_1 = data_ce37a4
            int32_t esi_2 = esi_1 - 1
            
            if (esi_1 - 1 s>= 0)
                int32_t temp1_1
                
                do
                    int32_t var_ac_1 = (&data_ce27a4)[esi_2]
                    int32_t* eax_4 = sub_48c3c0(data_e47020, 0)
                    sub_4d2d50(eax_4, eax_4, eax_3, var_ac_1, 0)
                    temp1_1 = esi_2
                    esi_2 -= 1
                while (temp1_1 - 1 s>= 0)
            
            int32_t* ecx_3 = data_ce27a0
            data_ce37a4 = 0
            sub_4cf180(ecx_3)
            sub_4f4fa0()
            char* ecx_4
            ecx_4.b = 1
            sub_4fb1e0(ecx_4)
            result.b = 0
        else if (result != 0x1b)
            if (result == 0xd)
                data_d76c30 = 0
                result.b = 1
            else if (result != 9)
            label_4f9696:
                result = arg1[1]
                
                if (result != 8)
                    goto label_4f96af
                
                if ((0x8000 & GetKeyState(0x11)) != 0)
                    sub_4d51d0()
                    result.b = 0
                else
                    result = arg1[1]
                label_4f96af:
                    
                    if (result != 9)
                        goto label_4f96c5
                    
                    if ((0x8000 & GetKeyState(0x11)) != 0)
                        sub_4d5230()
                        result.b = 0
                    else
                        result = arg1[1]
                    label_4f96c5:
                        
                        if (result != 0x4f)
                            goto label_4f96db
                        
                        if ((0x8000 & GetKeyState(0x11).w) != 0)
                            if (data_ce37a4 == 1)
                                int32_t* ecx_9 = data_ce27a4 * 0xb8 + *sub_4b0040(data_ce27a0)
                                int32_t eax_13 = *ecx_9
                                
                                if (eax_13 == 2)
                                    sub_4d52a0(ecx_9[0x1d], 0)
                                else if (eax_13 == 5)
                                    if (ecx_9[0x25] s<= 0)
                                        sub_44e4d0(eax_13 - 5, &data_5559b1, "el.numSubFabs > 0", 
                                            "c:\ax2017\engine\editor\fabeditor.cpp", 0x64b, 
                                            "FabEditorInputHandle")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    char** eax_16 = ecx_9[0x24]
                                    char* ecx_11 = *eax_16
                                    
                                    if (ecx_11 == 0)
                                        sub_44e4d0(eax_16, &data_5559b1, "el.subFabs[0].subFab", 
                                            "c:\ax2017\engine\editor\fabeditor.cpp", 0x64c, 
                                            "FabEditorInputHandle")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                    
                                    sub_4d52a0(ecx_11, 0)
                                else if (eax_13 == 8)
                                    sub_4d52a0(ecx_9[0x2c], 0)
                            
                            result.b = 0
                        else
                            result = arg1[1]
                        label_4f96db:
                            
                            if (result != 0x4b)
                                goto label_4f96f5
                            
                            char const* const edx_4
                            
                            if ((0x8000 & GetKeyState(0x11)) != 0)
                                edx_4 = "camera"
                            label_4f97d6:
                                int32_t eax_17
                                int32_t edx_5
                                eax_17, edx_5 = sub_4b3810(data_ce27a0, edx_4)
                                void var_98
                                int128_t* eax_19 =
                                    sub_4b38d0(&var_98, edx_5, data_ce27a0, &var_98, eax_17)
                                int128_t var_50 = *eax_19
                                void* eax_20 = data_65ae00
                                int128_t var_40 = eax_19[1]
                                char ecx_15 = *(eax_20 + 0x39)
                                *(eax_20 + 0x39) = 0
                                sub_4fa1b0(&var_30)
                                *(data_65ae00 + 0x39) = ecx_15
                                result.b = 0
                            else
                                result = arg1[1]
                            label_4f96f5:
                                
                                if (result != 0x4c)
                                label_4f9827:
                                    
                                    if (result != 0x59)
                                        goto label_4f9841
                                    
                                    if ((0x8000 & GetKeyState(0x11)) != 0)
                                        if (data_d63ba8 s< data_d63bac)
                                            sub_4c68c0(0x8000)
                                            int32_t eax_24 = data_d63ba8 + 1
                                            data_d63ba8 = eax_24
                                            sub_51d5b0(&data_ce27a4, &(&data_ce27a0)[eax_24 * 0x402], 
                                                0x1004)
                                            int32_t* eax_25 = data_ce27a0
                                            sub_48ba60(eax_25, **eax_25, 
                                                *(&data_ce37a4)[eax_24 * 0x402], data_e47020)
                                            sub_4cf180(data_ce27a0)
                                            sub_4f4fa0()
                                        
                                        result.b = 0
                                    else
                                        result = arg1[1]
                                    label_4f9841:
                                        
                                        if (result != 0x5a)
                                            goto label_4f985b
                                        
                                        if ((0x8000 & GetKeyState(0x11).w) == 0)
                                            result = arg1[1]
                                        label_4f985b:
                                            
                                            if (result != 0x4a)
                                                goto label_4f9875
                                            
                                            if ((0x8000 & GetKeyState(0x11)) != 0)
                                                sub_4f7580()
                                                char* ecx_25
                                                ecx_25.b = 1
                                                sub_4fb1e0(ecx_25)
                                                result.b = 0
                                            else
                                                result = arg1[1]
                                            label_4f9875:
                                                
                                                if (result != 0x54)
                                                    goto label_4f988f
                                                
                                                if ((0x8000 & GetKeyState(0x11).w) == 0)
                                                    result = arg1[1]
                                                label_4f988f:
                                                    
                                                    if (result != 0x57)
                                                        if (result == 0x45)
                                                            if (data_d76c30 == 0)
                                                                goto label_4f9a95
                                                            
                                                            char ecx_26 = result.b - 0x44
                                                            
                                                            if (sub_48cd00(ecx_26).b != 0)
                                                                goto label_4f9a95
                                                            
                                                            data_d76c30 = 3
                                                            result.b = ecx_26
                                                        else if (result == 0x52)
                                                            if (data_d76c30 == 0)
                                                                goto label_4f9a95
                                                            
                                                            char ecx_27 = result.b - 0x51
                                                            
                                                            if (sub_48cd00(ecx_27).b != 0)
                                                                goto label_4f9a95
                                                            
                                                            data_d76c30 = 4
                                                            result.b = ecx_27
                                                        else if (result != 0x51)
                                                            if (result != 0x53)
                                                                goto label_4f9a95
                                                            
                                                            if ((0x8000 & GetKeyState(0x11)) == 0)
                                                                goto label_4f9a95
                                                            
                                                            if ((0x8000 & GetKeyState(0x10)) == 0)
                                                                goto label_4f9a95
                                                            
                                                            sub_4d1c00(0x8000)
                                                            result.b = 0
                                                        else
                                                            if (data_d76c30 == 0)
                                                                goto label_4f9a95
                                                            
                                                            data_d76c30 = 1
                                                            result.b = 1
                                                    else if (data_d76c30 == 0)
                                                    label_4f9a95:
                                                        result = arg1[1]
                                                        
                                                        if (result != 0x53)
                                                            goto label_4f9aae
                                                        
                                                        if ((0x8000 & GetKeyState(0x11)) != 0)
                                                            sub_4d18b0(0x8000)
                                                        else
                                                            result = arg1[1]
                                                        label_4f9aae:
                                                            
                                                            if (result != 0x41)
                                                            label_4f9ace:
                                                                
                                                                if (arg1[1] == 0x44
                                                                        && (0x8000 & GetKeyState(0x11).w) != 0
                                                                        && data_d76c30 == 0)
                                                                    data_ce37a4 = 0
                                                                    sub_4f4fa0()
                                                            else if ((0x8000 & GetKeyState(0x11).w) == 0
                                                                    || data_d76c30 != 0)
                                                                goto label_4f9ace
                                                        
                                                        result.b = 0
                                                    else
                                                        char ecx_18 = result.b - 0x56
                                                        
                                                        if (sub_48cd00(ecx_18).b != 0)
                                                            goto label_4f9a95
                                                        
                                                        data_d76c30 = 2
                                                        result.b = ecx_18
                                                else if (data_ce37a4 s<= 0)
                                                    result.b = 1
                                                else if (data_d76c30 != 0)
                                                    data_d76c30 = 0
                                                    result.b = 1
                                                else
                                                    data_d76c30 = 2
                                                    sub_4f5670()
                                                    result.b = 1
                                        else if (data_d63ba8 s<= 1)
                                            result.b = 1
                                        else
                                            sub_4c68c0(0x8000)
                                            int32_t eax_27 = data_d63ba8 - 1
                                            data_d63ba8 = eax_27
                                            sub_51d5b0(&data_ce27a4, &(&data_ce27a0)[eax_27 * 0x402], 
                                                0x1004)
                                            int32_t* eax_28 = data_ce27a0
                                            sub_48ba60(eax_28, **eax_28, 
                                                *(&data_ce37a4)[eax_27 * 0x402], data_e47020)
                                            sub_4cf180(data_ce27a0)
                                            sub_4f4fa0()
                                            result.b = 1
                                else
                                    if ((0x8000 & GetKeyState(0x11)) != 0)
                                        edx_4 = "env_probe"
                                        goto label_4f97d6
                                    
                                    result = arg1[1]
                                    
                                    if (result != 0x4c)
                                        goto label_4f9827
                                    
                                    data_655ad4 = 1
                                    result.b = 0
            else
                if ((0x8000 & GetKeyState(0x11)) == 0)
                    goto label_4f9696
                
                if ((0x8000 & GetKeyState(0x10)) == 0)
                    goto label_4f9696
                
                sub_4d51d0()
                result.b = 0
        else if (data_d76c30 == 0)
            result.b = 0
        else
            result = sub_4b0040(data_ce27a0)
            int32_t i = 0
            result_2 = result
            
            if (data_ce37a4 s> 0)
                void* esi_3 = &data_d64c00
                
                do
                    int32_t edx_2 = (&data_ce27a4)[i] * 0xb8
                    esi_3 += 0x24
                    int32_t ecx_6 = *result
                    i += 1
                    *(edx_2 + ecx_6 + 8) = *(esi_3 - 0x24)
                    *(edx_2 + ecx_6 + 0x18) = *(esi_3 - 0x14)
                    *(edx_2 + ecx_6 + 0x28) = *(esi_3 - 4)
                    result = result_2
                while (i s< data_ce37a4)
            
            data_d76c30 = 0
            result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
