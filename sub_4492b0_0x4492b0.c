// 函数名称: sub_4492b0
// 虚拟地址: 0x4492b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_4492b0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_3c = arg2
    int32_t edi = 0
    int32_t eax_2 = *arg4
    int32_t var_b0
    char const* const var_ac_1
    uint32_t eax_4
    char* ecx_1
    uint128_t var_4c
    uint128_t var_30
    int32_t var_20[0x5]
    
    if (eax_2 == 0)
        sub_445fb0(&var_4c, arg3, 7, arg2)
        uint128_t xmm1_7 = var_4c
        var_30 = xmm1_7
        sub_4460c0(&var_4c)
        int32_t esi_4 = var_4c:4.d
        eax_4 = _mm_bsrli_si128(xmm1_7, 4)
        
        if (eax_4 == esi_4)
        label_4495ae:
            var_ac_1 = "ShRevealAutomatic"
            var_b0 = 0x7d4
            ecx_1 = "numCards == 1"
        else
            uint32_t* ecx_15 = var_30:4.d
            
            while (true)
                if (ecx_15 == 0)
                    goto label_4494b0
                
                eax_4 = *ecx_15
                
                if (eax_4 != var_30:8.d)
                    break
                
                void* eax_16 = ecx_15[4]
                
                if (*(eax_16 + 0x28) != 2 && *(eax_16 + 0xc) == 3)
                    int32_t ecx_17 = ecx_15[6]
                    int32_t eax_20 = (ecx_15 - arg3 - 4) s>> 5
                    int32_t ecx_19
                    
                    if (ecx_17 == 0)
                        ecx_19 = eax_20
                    else
                        ecx_19 = ecx_17 << 0x10 | eax_20
                    
                    var_20[0] = ecx_19
                    edi = 1
                    goto label_449587
                
                eax_4 = sub_445ed0(&var_30)
                ecx_15 = var_30:4.d
                
                if (ecx_15 == esi_4)
                    goto label_4495ae
            
        label_44949c:
            var_ac_1 = "Cards::CardIt::operator *"
            var_b0 = 0x133
            ecx_1 = "c->where == where"
    else
        eax_4 = eax_2 - 1
        
        if (eax_2 == 1)
            eax_4 = arg4[1]
            int32_t var_34_1 = 0
            
            if (eax_4 s> 0)
                void* ecx_2 = &arg4[2]
                void* var_38_1 = ecx_2
                
                while (true)
                    int32_t eax_5 = *ecx_2
                    uint32_t* ecx_4
                    
                    if (eax_5 == 1)
                        uint128_t var_9c
                        sub_445fb0(&var_9c, arg3, 7, arg2)
                        uint128_t xmm1_5 = var_9c
                        var_30 = xmm1_5
                        sub_4460c0(&var_4c)
                        int32_t esi_3 = var_4c:4.d
                        eax_4 = _mm_bsrli_si128(xmm1_5, 4)
                        
                        if (eax_4 != esi_3)
                            ecx_4 = var_30:4.d
                            
                            while (true)
                                if (ecx_4 == 0)
                                    goto label_4494b0
                                
                                eax_4 = *ecx_4
                                
                                if (eax_4 != var_30:8.d)
                                    goto label_44949c
                                
                                if (*(ecx_4[4] + 0xc) == 1)
                                    break
                                
                                eax_4 = sub_445ed0(&var_30)
                                ecx_4 = var_30:4.d
                                
                                if (ecx_4 == esi_3)
                                    goto label_449483
                            
                        label_44945d:
                            int32_t ecx_10 = ecx_4[6]
                            int32_t eax_14 = (ecx_4 - arg3 - 4) s>> 5
                            int32_t ecx_12
                            
                            if (ecx_10 == 0)
                                ecx_12 = eax_14
                            else
                                ecx_12 = ecx_10 << 0x10 | eax_14
                            
                            var_20[edi] = ecx_12
                            edi += 1
                    else if (eax_5 == 3)
                        uint128_t var_7c
                        sub_445fb0(&var_7c, arg3, 7, arg2)
                        uint128_t xmm1_3 = var_7c
                        var_30 = xmm1_3
                        void var_8c
                        sub_4460c0(&var_8c)
                        eax_4 = _mm_bsrli_si128(xmm1_3, 4)
                        int32_t var_88
                        
                        if (eax_4 != var_88)
                            ecx_4 = var_30:4.d
                            
                            while (true)
                                if (ecx_4 == 0)
                                    goto label_4494b0
                                
                                eax_4 = *ecx_4
                                
                                if (eax_4 != var_30:8.d)
                                    goto label_44949c
                                
                                if (*(ecx_4[4] + 0xc) == 3)
                                    break
                                
                                eax_4 = sub_445ed0(&var_30)
                                ecx_4 = var_30:4.d
                                
                                if (ecx_4 == var_88)
                                    goto label_449483
                            
                            goto label_44945d
                    else
                        eax_4 = eax_5 - 4
                        
                        if (eax_5 != 4)
                            var_ac_1 = "ShRevealAutomatic"
                            var_b0 = 0x7f4
                            ecx_1 = "Halt"
                            goto label_4495c7
                        
                        uint128_t var_5c
                        sub_445fb0(&var_5c, arg3, 7, arg2)
                        uint128_t xmm1_1 = var_5c
                        var_30 = xmm1_1
                        void var_6c
                        sub_4460c0(&var_6c)
                        eax_4 = _mm_bsrli_si128(xmm1_1, 4)
                        int32_t var_68
                        
                        if (eax_4 != var_68)
                            ecx_4 = var_30:4.d
                            
                            while (true)
                                if (ecx_4 == 0)
                                label_4494b0:
                                    var_ac_1 = "Cards::CardIt::operator *"
                                    var_b0 = 0x132
                                    ecx_1 = &data_580cbc
                                    goto label_4495c7
                                
                                eax_4 = *ecx_4
                                
                                if (eax_4 != var_30:8.d)
                                    goto label_44949c
                                
                                if (*(ecx_4[4] + 0xc) == 4)
                                    break
                                
                                eax_4 = sub_445ed0(&var_30)
                                ecx_4 = var_30:4.d
                                
                                if (ecx_4 == var_68)
                                    goto label_449483
                            
                            goto label_44945d
                label_449483:
                    int32_t edx_1 = var_34_1 + 1
                    ecx_2 = var_38_1 + 4
                    var_34_1 = edx_1
                    eax_4 = arg4[1]
                    var_38_1 = ecx_2
                    
                    if (edx_1 s>= eax_4)
                        break
                    
                    arg2 = var_3c
            
            if (edi == eax_4)
            label_449587:
                int32_t eax_23 = *arg4 - 1
                int32_t eax_24 = neg.d(eax_23)
                uint32_t result = sub_4491c0(&var_20, var_3c, arg3, &var_20, edi, 
                    sbb.d(eax_24, eax_24, eax_23 != 0) + 5)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            var_ac_1 = "ShRevealAutomatic"
            var_b0 = 0x7f7
            ecx_1 = "numCards == revealChoice.numColors"
        else
            var_ac_1 = "ShRevealAutomatic"
            var_b0 = 0x7fa
            ecx_1 = "Halt"
    label_4495c7:
    sub_44e4d0(eax_4, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_b0, 
        var_ac_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
