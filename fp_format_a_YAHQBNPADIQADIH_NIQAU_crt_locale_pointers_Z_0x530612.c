// 函数名称: ?fp_format_a@@YAHQBNPADIQADIH_NIQAU__crt_locale_pointers@@@Z
// 虚拟地址: 0x530612
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?fp_format_a@@YAHQBNPADIQADIH_NIQAU__crt_locale_pointers@@@Z(int32_t* arg1, char* arg2, int32_t arg3, int32_t arg4, void* arg5, void* arg6, char arg7, int32_t arg8, int32_t* arg9)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_40 = edi
    void* i = arg6
    
    if (i s< 0)
        i = nullptr
    
    char* esi = arg2
    *esi = 0
    void* var_3c
    _LocaleUpdate::_LocaleUpdate(&var_3c, arg9)
    int32_t result
    
    if (arg3 u> i + 0xb)
        int32_t ecx_1 = arg1[1]
        
        if ((ecx_1 u>> 0x14 & 0x7ff) != 0x7ff)
            if (ecx_1 s<= 0 && (ecx_1 s< 0 || *arg1 u< 0))
                *esi = 0x2d
                esi = &esi[1]
                ecx_1 = arg1[1]
            
            char eax_7 = arg7 ^ 1
            uint32_t var_14_1 = 0x3ff
            uint32_t ecx_5
            
            if ((ecx_1 & 0x7ff00000) != 0)
                *esi = 0x31
                ecx_5 = 0
            else
                *esi = 0x30
                ecx_5 = *arg1 | (arg1[1] & 0xfffff)
                
                if (ecx_5 != 0)
                    var_14_1 = 0x3fe
                    ecx_5 = 0
                else
                    var_14_1 = ecx_5
            
            void* esi_1 = &esi[2]
            void* var_10_1 = esi_1
            char* eax_12
            void* var_38
            
            if (i != 0)
                eax_12.b = ***(var_38 + 0x88)
            else
                eax_12.b = ecx_5.b
            esi[1] = eax_12.b
            int32_t eax_17 = arg1[1] & 0xfffff
            int32_t var_18_1 = eax_17
            
            if (eax_17 u> 0 || *arg1 u> ecx_5)
                int32_t edx_3 = ecx_5
                ecx_5 = 0xf0000
                int32_t eax_18 = 0x30
                int32_t var_c_1 = 0x30
                int32_t var_10_2 = edx_3
                uint32_t var_18_2 = 0xf0000
                
                while (i s> 0)
                    int16_t ecx_8 =
                        __aullshr(*arg1 & edx_3, arg1[1] & ecx_5 & 0xfffff, var_c_1.b) + 0x30
                    char eax_22 = ecx_8.b
                    
                    if (ecx_8 u> 0x39)
                        eax_22 = ((zx.d(eax_7) << 5) + 7).b + ecx_8.b
                    
                    edx_3 = var_10_2 u>> 4 | var_18_2 << 0x1c
                    *esi_1 = eax_22
                    esi_1 += 1
                    ecx_5 = var_18_2 u>> 4
                    eax_18 = var_c_1 - 4
                    i -= 1
                    var_10_2 = edx_3
                    var_18_2 = ecx_5
                    var_c_1 = eax_18
                    
                    if (eax_18.w s< 0)
                        break
                
                var_10_1 = esi_1
                
                if (eax_18.w s>= 0)
                    int16_t eax_28
                    eax_28, ecx_5 = __aullshr(*arg1 & edx_3, arg1[1] & ecx_5 & 0xfffff, var_c_1.b)
                    
                    if (eax_28 u> 8)
                        void* eax_29 = esi_1 - 1
                        
                        while (true)
                            ecx_5.b = *eax_29
                            
                            if (ecx_5.b != 0x66 && ecx_5.b != 0x46)
                                break
                            
                            *eax_29 = 0x30
                            eax_29 -= 1
                        
                        if (eax_29 == &esi[1])
                            *(eax_29 - 1) += 1
                        else
                            if (ecx_5.b == 0x39)
                                ecx_5.b = ((zx.d(eax_7) << 5) + 7).b + 0x39
                            
                            ecx_5.b += 1
                            *eax_29 = ecx_5.b
            
            if (i s> 0)
                _memset(esi_1, 0x30, i)
                esi_1 += i
                var_10_1 = esi_1
            
            if (esi[1] == 0)
                esi_1 = &esi[1]
                var_10_1 = esi_1
            
            void* eax_30
            eax_30.b = eax_7
            ecx_5.b = 0x34
            eax_30.b <<= 5
            eax_30.b += 0x50
            *esi_1 = eax_30.b
            int32_t ecx_13 = __aullshr(*arg1, arg1[1], ecx_5.b) & 0x7ff
            int32_t ecx_14 = ecx_13 - var_14_1
            bool c_1 = ecx_13 u< var_14_1
            int32_t* esi_2 = sbb.d(0, 0, c_1)
            bool s_1 = sbb.d(0, 0, c_1) s< 0
            bool o_1 = unimplemented  {sbb esi, esi}
            void* edx_12 = var_10_1 + 2
            void* var_28_2 = edx_12
            int32_t* ebx_1
            
            if (s_1 || ((sbb.d(0, 0, c_1) == 0 || s_1 != o_1) && ecx_14 u< 0))
                int32_t temp4_1 = ecx_14
                ecx_14 = neg.d(ecx_14)
                esi_2 = neg.d(adc.d(esi_2, 0, temp4_1 != 0))
                ebx_1 = 0x2d
            else
                ebx_1.b = 0x2b
            
            *(var_10_1 + 1) = ebx_1.b
            void* edi_1 = edx_12
            *edx_12 = 0x30
            
            if (esi_2 s>= 0)
                ebx_1 = 0x3e8
                
                if (esi_2 s> 0 || ecx_14 u>= 0x3e8)
                    char eax_34
                    int32_t edx_13
                    eax_34, ecx_14, edx_13 = __alldvrm(ecx_14, esi_2, 0x3e8, 0)
                    esi_2 = 0x3e8
                    ebx_1 = 0x3e8
                    int32_t var_20_2 = edx_13
                    edx_12 = var_28_2
                    *edx_12 = eax_34 + 0x30
                    edi_1 = edx_12 + 1
            
            if (edi_1 != edx_12)
            label_5308cf:
                char eax_35
                int32_t edx_14
                eax_35, ecx_14, edx_14 = __alldvrm(ecx_14, esi_2, 0x64, 0)
                esi_2 = ebx_1
                int32_t var_20_3 = edx_14
                edx_12 = var_28_2
                *edi_1 = eax_35 + 0x30
                edi_1 += 1
            else if (esi_2 s>= 0 && (esi_2 s> 0 || ecx_14 u>= 0x64))
                goto label_5308cf
            
            if (edi_1 != edx_12)
            label_5308f3:
                int32_t* var_4c_3 = ebx_1
                char eax_36
                int32_t edx_15
                eax_36, ecx_14, edx_15 = __alldvrm(ecx_14, esi_2, 0xa, 0)
                int32_t var_28_3 = edx_15
                *edi_1 = eax_36 + 0x30
                edi_1 += 1
            else if (esi_2 s>= 0 && (esi_2 s> 0 || ecx_14 u>= 0xa))
                goto label_5308f3
            
            ecx_14.b += 0x30
            *edi_1 = ecx_14.b
            *(edi_1 + 1) = 0
            result = 0
        else
            result = fp_format_e(arg1, esi, arg3, arg4, arg5, i, 0, arg8, nullptr)
            
            if (result == 0)
                void* eax_6 = _strrchr(esi, 0x65)
                
                if (eax_6 != 0)
                    *eax_6 = ((arg7 ^ 1) << 5) + 0x50
                    *(eax_6 + 3) = 0
                
                result = 0
            else
                *esi = 0
    else
        result = 0x22
        *__errno() = 0x22
        __invalid_parameter_noinfo()
    
    char var_30
    
    if (var_30 != 0)
        void* ecx_15 = var_3c
        *(ecx_15 + 0x350) &= 0xfffffffd
    
    return result
}
