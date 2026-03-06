// 函数名称: sub_448070
// 虚拟地址: 0x448070
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_448070(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: void* eax = sub_4476a0(arg3)
    void* eax = sub_4476a0(arg3)
    int32_t ecx = arg2
    int32_t var_44 = 1
    int32_t var_40 = *arg6
    int32_t var_3c = arg6[1]
    void* result = nullptr
    *eax = 5
    *(eax + 4) = ecx
    *(eax + 0x328) = 0
    *(eax + 0x32c) = arg5
    arg6 = nullptr
    *(eax + 0x358) = var_44.o
    int128_t var_34
    *(eax + 0x368) = var_34
    int64_t var_24
    *(eax + 0x378) = var_24
    
    if (arg5 s> 0)
        while (true)
            int32_t eax_3 = *(arg4 + (result << 2))
            int32_t var_b8
            char const* const var_b4_7
            uint128_t var_18
            uint32_t eax_6
            char* ecx_19
            
            if (eax_3 != 1)
                if (eax_3 == 3)
                    int32_t eax_17 = *(eax + 0x328) + 2
                    *(eax + 0x334) = 0
                    *(eax + 0x330) = eax + (eax_17 << 2)
                    uint128_t var_74
                    sub_445fb0(&var_74, arg3, 7, ecx)
                    uint128_t xmm1_3 = var_74
                    var_18 = xmm1_3
                    void var_84
                    sub_4460c0(&var_84)
                    eax_6 = _mm_bsrli_si128(xmm1_3, 4)
                    int32_t var_80
                    
                    if (eax_6 == var_80)
                        goto label_448322
                    
                    uint32_t* ecx_8 = var_18:4.d
                    
                    while (true)
                        if (ecx_8 == 0)
                            goto label_448370
                        
                        eax_6 = *ecx_8
                        
                        if (eax_6 != var_18:8.d)
                            break
                        
                        if (*(ecx_8[4] + 0xc) == 3)
                            int32_t ecx_9 = ecx_8[6]
                            int32_t eax_23 = (ecx_8 - arg3 - 4) s>> 5
                            int32_t ecx_11
                            
                            if (ecx_9 == 0)
                                ecx_11 = eax_23
                            else
                                ecx_11 = ecx_9 << 0x10 | eax_23
                            
                            *(eax + (*(eax + 0x328) << 2) + 8) = ecx_11
                            *(eax + 0x328) += 1
                            *(eax + 0x334) += 1
                        
                        eax_6 = sub_445ed0(&var_18)
                        ecx_8 = var_18:4.d
                        
                        if (ecx_8 == var_80)
                            goto label_448322
                    
                    goto label_44834e
                
                eax_6 = eax_3 - 4
                
                if (eax_3 != 4)
                    var_b4_7 = "ShYield_RevealDominion"
                    var_b8 = 0x5a2
                    ecx_19 = "Halt"
                label_448389:
                    sub_44e4d0(eax_6, &data_5559b1, ecx_19, 
                        "c:\ax2017\jams\shards\code\shardsgame.cpp", var_b8, var_b4_7)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                *(eax + 0x33c) = eax_6
                *(eax + 0x338) = eax + ((*(eax + 0x328) + 2) << 2)
                uint128_t var_54
                sub_445fb0(&var_54, arg3, 7, ecx)
                uint128_t xmm1_1 = var_54
                var_18 = xmm1_1
                void var_64
                sub_4460c0(&var_64)
                eax_6 = _mm_bsrli_si128(xmm1_1, 4)
                int32_t var_60
                
                if (eax_6 == var_60)
                    goto label_448322
                
                uint32_t* ecx_2 = var_18:4.d
                
                while (true)
                    if (ecx_2 == 0)
                    label_448370:
                        var_b4_7 = "Cards::CardIt::operator *"
                        var_b8 = 0x132
                        ecx_19 = &data_580cbc
                        goto label_448389
                    
                    eax_6 = *ecx_2
                    
                    if (eax_6 != var_18:8.d)
                        break
                    
                    if (*(ecx_2[4] + 0xc) == 4)
                        int32_t ecx_3 = ecx_2[6]
                        int32_t eax_14 = (ecx_2 - arg3 - 4) s>> 5
                        int32_t ecx_5
                        
                        if (ecx_3 == 0)
                            ecx_5 = eax_14
                        else
                            ecx_5 = ecx_3 << 0x10 | eax_14
                        
                        *(eax + (*(eax + 0x328) << 2) + 8) = ecx_5
                        *(eax + 0x328) += 1
                        *(eax + 0x33c) += 1
                    
                    eax_6 = sub_445ed0(&var_18)
                    ecx_2 = var_18:4.d
                    
                    if (ecx_2 == var_60)
                        goto label_448322
                
                goto label_44834e
            
            int32_t eax_26 = *(eax + 0x328) + 2
            *(eax + 0x344) = 0
            *(eax + 0x340) = eax + (eax_26 << 2)
            uint128_t var_94
            sub_445fb0(&var_94, arg3, 7, ecx)
            uint128_t xmm1_5 = var_94
            var_18 = xmm1_5
            void var_a4
            sub_4460c0(&var_a4)
            eax_6 = _mm_bsrli_si128(xmm1_5, 4)
            int32_t var_a0
            
            if (eax_6 != var_a0)
                uint32_t* ecx_14 = var_18:4.d
                
                while (true)
                    if (ecx_14 == 0)
                        goto label_448370
                    
                    eax_6 = *ecx_14
                    
                    if (eax_6 != var_18:8.d)
                        break
                    
                    if (*(ecx_14[4] + 0xc) == 1)
                        int32_t ecx_15 = ecx_14[6]
                        int32_t eax_32 = (ecx_14 - arg3 - 4) s>> 5
                        int32_t ecx_17
                        
                        if (ecx_15 == 0)
                            ecx_17 = eax_32
                        else
                            ecx_17 = ecx_15 << 0x10 | eax_32
                        
                        *(eax + (*(eax + 0x328) << 2) + 8) = ecx_17
                        *(eax + 0x328) += 1
                        *(eax + 0x344) += 1
                    
                    eax_6 = sub_445ed0(&var_18)
                    ecx_14 = var_18:4.d
                    
                    if (ecx_14 == var_a0)
                        goto label_448322
                
            label_44834e:
                var_b4_7 = "Cards::CardIt::operator *"
                var_b8 = 0x133
                ecx_19 = "c->where == where"
                goto label_448389
            
        label_448322:
            result = arg6 + 1
            arg6 = result
            
            if (result s>= arg5)
                if (*(eax + 0x328) == 0)
                    break
                
                result.b = 1
                return result
            
            ecx = arg2
    
    result.b = 0
    return result
}
