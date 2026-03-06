// 函数名称: sub_4d3500
// 虚拟地址: 0x4d3500
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOLsub_4d3500()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_545792
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_99c = esi
    int32_t var_9a4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    BOOL result = data_ce26e4
    
    if (result != 0)
        int32_t eax_3 = *(result + 4)
        
        if (eax_3 == 0x1e)
            result = sub_4fe850()
        else if (eax_3 == 0x22)
            result = sub_472650()
        else
            int128_t result_3
            char var_8f4
            int128_t var_858
            float var_830
            int32_t* result_1
            
            if (eax_3 == 0x1d)
                void var_998
                int128_t* eax_4 = sub_507da0(&var_998)
                int128_t var_8d0_1 = *eax_4
                int128_t var_8c0_1 = eax_4[1]
                int128_t var_8b0_1 = eax_4[2]
                int128_t var_8a0_1 = eax_4[3]
                int32_t var_880_1 = eax_4[5].d
                int128_t var_890_1 = eax_4[4]
                int32_t ecx_2 = sub_44edc0(&var_830)
                void* eax_7
                
                if ((*(data_cdf450 + 0xc) & 1) != 0)
                    eax_7 = data_65ae04
                    var_8f4 = 1
                    eax_7.b = *(eax_7 + 0x18)
                
                if ((*(data_cdf450 + 0xc) & 1) == 0 || eax_7.b == 0)
                    var_8f4 = 0
                
                int32_t var_9b4_1 = ecx_2
                data_dfc4d0
                int128_t* eax_8 = sub_487dc0(esi, &var_858, &var_830, (var_8f4.d).b, data_5b0f3c, 
                    nullptr, nullptr, nullptr)
                int128_t result_2 = *eax_8
                int32_t eax_9 = eax_8[1].d
                result = result_2
                result_3 = result_2
                
                if (result == 2)
                    char* var_9a8_2 = &var_8f4
                    sub_42ce10(&result_1, data_dfc4cc, 0x1d)
                    int32_t var_14_1 = 0
                    int32_t* edi_1 = var_8f4.d
                    int32_t var_828[0x201]
                    int32_t eax_10 = sub_4a0790(edi_1, &var_828)
                    int32_t esi_1 = result_3:0xc.d
                    
                    if (esi_1 s>= eax_10)
                        sub_44e4d0(eax_10, &data_5559b1, "item < numLayers", 
                            "c:\ax2017\engine\materialfndef.cpp", 0x135, "MaterialFn_ItemClicked")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    int32_t esi_2 = esi_1 * 2
                    
                    if (data_e49a00 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                        __Init_thread_header(&data_e49a00)
                        
                        if (data_e49a00 == 0xffffffff)
                            var_14_1.b = 1
                            data_e49a04 = sub_4856d0(data_e46fe0, "imgVisible")
                            __Init_thread_footer(&data_e49a00)
                    
                    if (eax_9 == data_e49a04 && var_828[esi_2 * 2] == 0)
                        int32_t ecx_8 = *edi_1
                        var_824
                        int32_t edx_2 = *(&var_824 + (esi_2 << 3)) * 9
                        int32_t eax_15
                        eax_15.b = *(ecx_8 + (edx_2 << 3) + 4) == 0
                        *(ecx_8 + (edx_2 << 3) + 4) = eax_15.b
                    
                    result = result_1
                    edi_1[3] = 0
                    
                    if (result != 0)
                        *(result + 0x1c) -= 1
            else if (eax_3 != 0x20)
                void* edi_2 = data_cdf428
                
                if (edi_2 == 0)
                    sub_44e4d0(eax_3, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                        "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t* esi_3 = *(edi_2 + 0xc)
                var_8f4.d = 0
                void* eax_16 = sub_4c4670(esi_3, &var_8f4)
                
                if (eax_16.b != 0)
                    do
                        sub_4c1040(var_8f4.d, data_5b0f3c)
                        eax_16 = sub_4c4670(esi_3, &var_8f4)
                    while (eax_16.b != 0)
                    
                    edi_2 = data_cdf428
                
                if (edi_2 == 0)
                    sub_44e4d0(eax_16, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                        "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t* edi_3 = *(edi_2 + 0x10)
                void* esi_4 = nullptr
                
                while (true)
                    void* ecx_12
                    
                    if (esi_4 != 0)
                        ecx_12 = *edi_3
                        esi_4 += 0x7c
                    else
                        esi_4 = *edi_3
                        ecx_12 = esi_4
                    
                    void* eax_18 = edi_3[1] * 0x7c + ecx_12
                    
                    if (esi_4 u>= eax_18)
                        break
                    
                    while ((*(esi_4 + 0x78) & 0xffff0000) == 0)
                        esi_4 += 0x7c
                        
                        if (esi_4 u>= eax_18)
                            goto label_4d37d1
                    
                    sub_49a150(esi_4, data_ce2794)
                
            label_4d37d1:
                int32_t* eax_19 = data_cdf428
                
                if (eax_19 == 0)
                    sub_44e4d0(eax_19, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, 
                        "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t* eax_20 = *eax_19
                void* esi_5 = nullptr
                var_8f4.d = eax_20
                
                while (true)
                    void* ecx_14
                    
                    if (esi_5 != 0)
                        ecx_14 = *eax_20
                        esi_5 += 0x6c
                    else
                        esi_5 = *eax_20
                        ecx_14 = esi_5
                    
                    void* eax_22 = eax_20[1] * 0x6c + ecx_14
                    
                    if (esi_5 u>= eax_22)
                        break
                    
                    while (true)
                        if ((*(esi_5 + 0x68) & 0xffff0000) != 0)
                            int32_t* ecx_19 = *(esi_5 + 0x2c)
                            
                            if (ecx_19 != 0)
                                sub_4ba5b0(ecx_19)
                            
                            int32_t* i = *(esi_5 + 0x38)
                            eax_20 = var_8f4.d
                            
                            if (i == 0)
                                break
                            
                            do
                                int32_t* i_1 = i
                                i = i[4]
                                sub_4b5fc0(esi_5, i_1)
                            while (i != 0)
                            
                            eax_20 = var_8f4.d
                            break
                        
                        esi_5 += 0x6c
                        
                        if (esi_5 u>= eax_22)
                            goto label_4d3834
                
            label_4d3834:
                result = sub_4f4b10()
                
                if (data_ce26f8 == 0)
                    int32_t eax_24 = *(data_ce24d4 + 0x20)
                    int128_t var_840
                    
                    if (eax_24 == 1)
                        result = sub_44edc0(&var_830)
                        
                        if (result.b != 0)
                            result = data_ce24d4
                            float xmm1_12 = var_830
                            float result_4 = result_1
                            float xmm2_9 = xmm1_12 f- *(result + 0x44)
                            float xmm3_3 = result_4 f- *(result + 0x48)
                            *(result + 0x48) = result_4
                            *(result + 0x44) = xmm1_12
                            xmm2_9 f- 0
                            result:1.b = (xmm2_9 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_9, 0f) ? 1 : 0) << 2 | (xmm2_9 < 0f ? 1 : 0)
                            bool p_2 = unimplemented  {test ah, 0x44}
                            bool p_4
                            
                            if (not(p_2))
                                xmm3_3 f- 0
                                result:1.b = (xmm3_3 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm3_3, 0f) ? 1 : 0) << 2 | (xmm3_3 < 0f ? 1 : 0)
                                p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_2 || p_4)
                                void var_938
                                int64_t* eax_32 = sub_4b8050(&var_938)
                                void* ecx_29 = data_ce24d4
                                int128_t xmm1_13 = *eax_32
                                int64_t xmm0_24 = eax_32[2]
                                var_840 = xmm1_13
                                var_830.q = xmm0_24
                                var_840.d = xmm1_13 f- *(ecx_29 + 0x58)
                                var_840:4.d = var_840:4.d f- *(ecx_29 + 0x5c)
                                int32_t ecx_30 = *(ecx_29 + 0x40)
                                var_840:8.d = var_840:8.d f- *(ecx_29 + 0x60)
                                
                                if (ecx_30 != 0)
                                    result = data_ce24d4
                                    int64_t var_870_2 = *(result + 0x4c)
                                    
                                    if (ecx_30 != 1 && ecx_30 != 2 && ecx_30 != 3)
                                        sub_44e4d0(result, &data_5559b1, "Halt", 
                                            "c:\ax2017\engine\editor\editmode.cpp", 0x1cb, 
                                            "sEditModeFindManipulatorPosition")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_44e680()
                                        noreturn
                                else
                                    result = sub_4d3080(&var_840, &var_858:0xc)
                    else if (eax_24 == 2)
                        int32_t edx_4
                        result, edx_4 = sub_44edc0(&var_830)
                        
                        if (result.b != 0)
                            int32_t var_868_1 = 0
                            float var_848_1 = 1f
                            result_1 = 0x3f800000
                            var_840:0xc.q = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
                            int64_t* eax_28 = sub_452d30(&result_3:8, edx_4, &var_840:0xc, &result_3:8)
                            int64_t xmm0_13 = *eax_28
                            int32_t var_85c_2 = eax_28[1].d
                            int32_t var_900 = 0
                            var_858 = 0.o
                            int32_t var_8fc_1 = 0
                            var_848_1.q = xmm0_13
                            int32_t var_8f8_1 = 0
                            int32_t var_14_2 = 2
                            sub_4d2f90(&var_900)
                            int128_t var_8f0 = zx.o(0)
                            var_8f0:0xc.b = 1
                            var_8f0.d = &var_900
                            int128_t var_8e0_1 = zx.o(0)
                            
                            if (sub_4b6ae0(&var_858, &var_8f0) != 0)
                                goto label_4d3b24
                            
                            float xmm4_1 = var_858:0xc.d
                            float var_844
                            float xmm2_7 = xmm4_1 * 0f + var_848_1 + var_844 * 0f
                            int32_t xmm0_19 = sub_41b760(xmm2_7)
                            float xmm1_9
                            float xmm7_1
                            
                            if (not(9.99999975e-06f f> xmm0_19))
                                xmm7_1 = var_858.d
                                xmm1_9 = xmm7_1 * 0f f+ var_858:4.d + var_858:8.d * 0f + -0f
                            
                            if (9.99999975e-06f f> xmm0_19 || 0 f< xmm1_9 * xmm2_7)
                                int32_t var_14_5 = 3
                                result = sub_429100(&var_900)
                            else
                                float xmm1_11 = (xmm1_9 / xmm2_7) ^ (data_59e5c0.o).d
                                float xmm5_3 = var_844 * xmm1_11 f+ var_858:8.d
                                var_8e0_1.q = _mm_unpacklo_ps(xmm4_1 * xmm1_11 + xmm7_1, 
                                    var_848_1 * xmm1_11 f+ var_858:4.d)
                                var_8e0_1:8.d = xmm5_3
                            label_4d3b24:
                                int32_t var_14_3 = 4
                                sub_429100(&var_900)
                                int32_t var_14_4 = 0xffffffff
                                void var_940
                                result = sub_4d3d60(&var_940)
                    else
                        result = eax_24 - 3
                        
                        if (eax_24 == 3)
                            result = sub_4d32e0()
                    void* ecx_15 = data_ce24d4
                    int32_t edx_3 = *(ecx_15 + 0x14)
                    
                    if (edx_3 != 0)
                        int64_t xmm0_7 = 0
                        float xmm3_1 = 1f / _mm_cvtepi32_ps(zx.o(edx_3))
                        *(ecx_15 + 0x4c) = _mm_unpacklo_ps(xmm0_7.d * xmm3_1, xmm0_7:4.d * xmm3_1)
                        result = 0f * xmm3_1
                        *(ecx_15 + 0x54) = result
            else
                result = sub_4f79c0()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
