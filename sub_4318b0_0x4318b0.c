// 函数名称: sub_4318b0
// 虚拟地址: 0x4318b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4318b0(int32_t arg1 @ esi, int128_t* arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t* arg6, int32_t* arg7, int32_t arg8, char arg9, int32_t* arg10, int32_t* arg11, int32_t arg12, int32_t* arg13)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t edx
    ecx, edx = __alloca_probe(0x3ac8)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t eax_4
    eax_4.b = arg9
    int32_t ebx = arg5
    char var_3a78 = eax_4.b
    int32_t* esi = arg4
    void* edi = arg3
    int32_t var_3a94 = edx
    void* var_3a5c = edi
    int32_t* var_3a58 = esi
    void var_1810
    int32_t eax_9 = sub_42dff0(&var_1810, edi, *ecx, esi, &var_1810, var_3a78)
    int32_t ecx_4 = ebx
    int32_t var_3a54 = eax_9
    
    if (ecx_4 != 0xffffffff)
        goto label_431ab0
    
    int32_t var_3a64 = 0
    int32_t ecx_17
    
    if (eax_9 s<= 0)
    label_431aae:
        ecx_4 = ebx
    label_431ab0:
        int32_t edi_1 = 0
        int32_t eax_29
        
        if (eax_9 s<= 0)
        label_431c60:
            eax_29 = *arg6
        else
            while (true)
                int32_t eax_19 = edi_1
                
                if (ecx_4 != 0xffffffff)
                    eax_19 = ebx
                
                void var_3a50
                sub_51d5b0(&var_3a50, var_3a5c, 0x2178)
                int32_t eax_20 = esi[1]
                int32_t ebx_3 = edi_1 * 0x30
                int32_t* esi_3 = &var_1810 + ebx_3
                int32_t var_18e8_1 = 2
                void* ecx_11 = sub_44c7d0(eax_20, var_3a58, &var_3a50, esi_3, 2)
                int32_t* eax_22 = arg13
                
                if (eax_22 == 0)
                    goto label_431ba6
                
                int32_t i = sub_42f290(&var_3a50)
                int32_t i_1 = i
                int32_t* eax_24 = *(*arg13 + (((i s>> 4 | i) & arg13[1]) << 2))
                
                if (eax_24 == 0)
                label_431b7b:
                    int32_t* var_14_5 = &var_3a64
                    var_3a64 = 1
                    sub_431fe0(arg13, &i_1, var_14_5)
                    eax_22 = arg13
                    esi_3 = &var_1810 + ebx_3
                label_431ba6:
                    
                    if (*ecx_11 == 0xa)
                        *arg7 = 0x3f800000
                        eax_29 = eax_19
                        *arg6 = eax_29
                        break
                        break
                    
                    void var_180c
                    
                    if (*(&var_180c + ebx_3) == 5 || arg8 == arg12)
                        int32_t var_14_7 = eax_20
                        *arg10 += 1
                        sub_430e10(arg10, &var_3a50, ecx_11)
                        sub_42c7a0(0x65ac58)
                        int64_t* eax_32 = data_65accc
                        uint128_t xmm0_4 = zx.o(*eax_32)
                        int32_t var_18_7
                        char const* const var_14_8
                        char* ecx_22
                        
                        if (xmm0_4 f< -1.0)
                            var_14_8 = "EvalNet"
                            var_18_7 = 0xd22
                            ecx_22 = "nnet.net.win_prob[0] >= -1"
                        label_431d58:
                            sub_44e4d0(eax_32, &data_5559b1, ecx_22, 
                                "c:\ax2017\jams\shards\code\shardsai.cpp", var_18_7, var_14_8)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_44e680()
                            noreturn
                        
                        if (0x3ff0000000000000 f< xmm0_4)
                            var_14_8 = "EvalNet"
                            var_18_7 = 0xd23
                            ecx_22 = "nnet.net.win_prob[0] <= 1"
                            goto label_431d58
                        
                        int32_t xmm0_5 = _mm_cvtpd_ps(xmm0_4)
                        
                        if (xmm0_5 f<= *arg7)
                            goto label_431c3e
                        
                        ebx = eax_19
                        *arg7 = xmm0_5
                        *arg6 = ebx
                    else
                        ebx = eax_19
                        void var_3ac8
                        sub_4318b0(&var_3ac8, &var_3a50, ecx_11, ebx, arg6, arg7, arg8 + 1, var_3a78.d, 
                            arg10, arg11, esi_3, arg12, eax_22)
                else
                    while (i != *eax_24)
                        eax_24 = eax_24[2]
                        
                        if (eax_24 == 0)
                            goto label_431b7b
                    
                    if (eax_24 == 0xfffffffc)
                        goto label_431b7b
                    
                    *arg11 += 1
                label_431c3e:
                    ebx = eax_19
                
                esi = var_3a58
                edi_1 += 1
                ecx_4 = arg5
                
                if (edi_1 s>= var_3a54)
                    goto label_431c60
        
        ecx_17 = eax_29 * 3
    else
        void var_1808
        void* ebx_1 = &var_1808
        int32_t ecx_5 = eax_9
        
        while (true)
            uint32_t eax_10 = *(ebx_1 - 4)
            uint32_t var_19a0[0xb][0x4]
            int32_t var_18d8
            void var_18d4
            int32_t var_1818
            char var_1814
            int32_t edx_3
            
            if (eax_10 == 0)
                __builtin_memcpy(&var_18d8, 
                    sub_42eb10(&var_19a0, esi[1], edi, &var_19a0, (*ebx_1).w, eax_10), 0xc8)
                edx_3 = var_1818
                
                if (edx_3 == 0)
                label_431c22:
                    ecx_17 = var_3a64 * 3
                    break
                
                if (var_1814 == 0)
                    int32_t ecx_7 = 0
                    
                    if (edx_3 s> 0)
                        void* eax_13 = &var_18d4
                        
                        do
                            if (*(eax_13 - 4) == 0 && *eax_13 == 0)
                                goto label_431c22
                            
                            ecx_7 += 1
                            eax_13 += 0xc
                        while (ecx_7 s< edx_3)
                    
                label_431a67:
                    
                    if (edx_3 != 1 || var_18d8 != edx_3)
                        goto label_431a78
                    
                    goto label_431c22
                
            label_431a78:
                edi = var_3a5c
                esi = var_3a58
                ecx_5 = var_3a54
            else if (eax_10 == 1)
                __builtin_memcpy(&var_18d8, 
                    sub_42eb10(&var_19a0, esi[1], edi, &var_19a0, (*ebx_1).w, eax_10), 0xc8)
                edx_3 = var_1818
                
                if (edx_3 == 0)
                    goto label_431c22
                
                if (var_1814 != 0)
                    goto label_431a78
                
                int32_t ecx_9 = 0
                
                if (edx_3 s> 0)
                    void* eax_16 = &var_18d4
                    
                    do
                        if (*(eax_16 - 4) == 0 && *eax_16 == 0)
                            goto label_431c22
                        
                        ecx_9 += 1
                        eax_16 += 0xc
                    while (ecx_9 s< edx_3)
                
                goto label_431a67
            ebx_1 += 0x30
            int32_t eax_18 = var_3a64 + 1
            var_3a64 = eax_18
            
            if (eax_18 s>= ecx_5)
                eax_9 = var_3a54
                goto label_431aae
    
    int32_t ecx_18 = ecx_17 * 2
    *arg2 = *(&var_1810 + (ecx_18 << 3))
    void var_1800
    arg2[1] = *(&var_1800 + (ecx_18 << 3))
    int128_t var_17f0[0x17a]
    arg2[2] = *(&var_17f0 + (ecx_18 << 3))
    @__security_check_cookie@4(arg1 ^ &__saved_ebp)
    return arg2
}
