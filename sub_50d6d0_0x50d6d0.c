// 函数名称: sub_50d6d0
// 虚拟地址: 0x50d6d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_50d6d0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t arg5, char* arg6, void** arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_3c = arg2
    int32_t esi = arg5
    int32_t var_34 = esi
    int128_t var_24
    __builtin_memcpy(&var_24, 
        "\xff\xff\xff\xff\x00\x00\x00\x00\x04\x00\x00\x00\x02\x00\x00\x00\x06\x00\x00\x00\x89\x50\x4e\x47\x"
    "0d\x0a\x1a\x0a", 
        0x1c)
    
    if (arg2 == 0)
        var_3c = arg6 * arg4
    
    void* edi_1 = arg6 * arg4
    void* var_54 = edi_1
    int32_t eax_4 = (edi_1 + 1) * esi
    int32_t var_7c = eax_4
    char* i_6 = _malloc()
    
    if (i_6 != 0)
        void* var_7c_1 = edi_1
        char* ebx_3 = _malloc()
        char* var_28 = ebx_3
        
        if (ebx_3 != 0)
            char* edx_1 = nullptr
            char* var_30_1 = nullptr
            
            if (esi s> 0)
                char* i_3 = i_6
                void* i_5 = i_3
                
                do
                    void* i = nullptr
                    char* i_2 = nullptr
                    int32_t var_60_1 = 0x7fffffff
                    void* i_1 = nullptr
                    
                    do
                        sub_50d370(i_3, var_3c, arg3, arg4, esi, edx_1, arg6, i, ebx_3)
                        int32_t esi_1 = 0
                        void* j = nullptr
                        int32_t var_58_1 = 0
                        
                        if (edi_1 s> 0 && edi_1 u>= 8 && data_65a2f4 s>= 2)
                            void* eax_9 = edi_1 & 0x80000007
                            
                            if (eax_9 s< 0)
                                eax_9 = ((eax_9 - 1) | 0xfffffff8) + 1
                            
                            int32_t xmm1_1[0x4] = zx.o(0)
                            int32_t xmm2_1[0x4] = zx.o(0)
                            
                            do
                                xmm1_1 = _mm_add_epi32(xmm1_1, 
                                    _mm_abs_epi32(_mm_cvtepi8_epi32(*(ebx_3 + j))))
                                int32_t xmm0_5[0x4] = _mm_cvtepi8_epi32(*(ebx_3 + j + 4))
                                j += 8
                                xmm2_1 = _mm_add_epi32(xmm2_1, _mm_abs_epi32(xmm0_5))
                            while (j s< edi_1 - eax_9)
                            
                            int32_t xmm1_2[0x4] = _mm_add_epi32(xmm1_1, xmm2_1)
                            int32_t xmm1_3[0x4] = _mm_add_epi32(xmm1_2, _mm_bsrli_si128(xmm1_2, 8))
                            esi_1 = _mm_add_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 4))
                            var_58_1 = esi_1
                        
                        int32_t ebx_4 = 0
                        int32_t var_38_1 = 0
                        
                        if (j s< edi_1)
                            if (edi_1 - j s>= 2)
                                int32_t edi_2 = 0
                                void* var_64_1 = edi_1 - 1
                                
                                do
                                    int32_t eax_17
                                    int32_t edx_5
                                    edx_5:eax_17 = sx.q(*(var_28 + j))
                                    ebx_4 += (eax_17 ^ edx_5) - edx_5
                                    int32_t eax_21 = sx.d(*(var_28 + j + 1))
                                    j += 2
                                    int32_t eax_22
                                    int32_t edx_6
                                    edx_6:eax_22 = sx.q(eax_21)
                                    edi_2 += (eax_22 ^ edx_6) - edx_6
                                while (j s< edi_1 - 1)
                                
                                esi_1 = var_58_1
                                var_38_1 = edi_2
                                edi_1 = var_54
                            
                            if (j s< edi_1)
                                int32_t eax_27
                                int32_t edx_7
                                edx_7:eax_27 = sx.q(*(j + var_28))
                                esi_1 += (eax_27 ^ edx_7) - edx_7
                            
                            esi_1 += var_38_1 + ebx_4
                        
                        char* i_4 = i_1
                        i_3 = i_4
                        
                        if (esi_1 s>= var_60_1)
                            i_3 = i_2
                        
                        i = &i_4[1]
                        ebx_3 = var_28
                        i_2 = i_3
                        
                        if (esi_1 s>= var_60_1)
                            esi_1 = var_60_1
                        
                        i_1 = i
                        edx_1 = var_30_1
                        var_60_1 = esi_1
                        esi = var_34
                    while (i s< 5)
                    
                    if (i != i_3)
                        sub_50d370(i_3, var_3c, arg3, arg4, esi, edx_1, arg6, i_3, ebx_3)
                        i = i_2
                    
                    *i_5 = i.b
                    sub_51dd40(i_5 + 1, ebx_3, edi_1)
                    i_3 = edi_1 + 1
                    i_5 += i_3
                    edx_1 = &var_30_1[1]
                    var_30_1 = edx_1
                while (edx_1 s< esi)
            
            _free(ebx_3)
            void* eax_35 = sub_50caf0(&var_54, eax_4, i_6, &var_54)
            _free(i_6)
            
            if (eax_35 != 0)
                void* ebx_6 = var_54
                void* var_7c_7 = ebx_6 + 0x39
                char* result = _malloc()
                
                if (result != 0)
                    *arg7 = ebx_6 + 0x39
                    int32_t var_10
                    sub_51dd40(result, &var_10, 8)
                    *(result + 8) = 0xd000000
                    __builtin_strncpy(&result[0xc], "IHDR", 4)
                    result[0x10] = (arg4 s>> 0x18).b
                    result[0x11] = (arg4 s>> 0x10).b
                    result[0x12] = (arg4 s>> 8).b
                    result[0x13] = arg4.b
                    result[0x14] = (var_34 s>> 0x18).b
                    result[0x15] = (var_34 s>> 0x10).b
                    result[0x16] = (var_34 s>> 8).b
                    result[0x17] = var_34.b
                    result[0x18] = 8
                    char* eax_49
                    eax_49.b = *(&var_24 + (arg6 << 2))
                    result[0x19] = eax_49.b
                    *(result + 0x1a) = 0
                    result[0x1c] = 0
                    var_28 = &result[0x1d]
                    sub_50d300(&var_28, 0xd)
                    char* esi_5 = var_28
                    *esi_5 = (ebx_6 s>> 0x18).b
                    esi_5[1] = (ebx_6 s>> 0x10).b
                    esi_5[2] = (ebx_6 s>> 8).b
                    esi_5[3] = ebx_6.b
                    __builtin_strncpy(&esi_5[4], "IDAT", 4)
                    sub_51dd40(&esi_5[8], eax_35, ebx_6)
                    var_28 = &esi_5[8] + ebx_6
                    _free(eax_35)
                    sub_50d300(&var_28, ebx_6)
                    char* eax_57 = var_28
                    *eax_57 = 0
                    __builtin_strncpy(&eax_57[4], "IEND", 4)
                    var_28 = &eax_57[8]
                    sub_50d300(&var_28, 0)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return result
        else
            _free(i_6)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
