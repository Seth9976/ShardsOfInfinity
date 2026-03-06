// 函数名称: sub_448410
// 虚拟地址: 0x448410
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_448410(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: void* eax = sub_4476a0(arg1)
    void* eax = sub_4476a0(arg1)
    *eax = 1
    *(eax + 4) = arg2
    *(eax + 0x328) = 0
    *(eax + 0x32c) = 1
    *(eax + 0x358) = 0
    *(eax + 0x334) = 0
    *(eax + 0x330) = eax + 8
    uint128_t var_2c
    sub_445fb0(&var_2c, arg1, 7, arg2)
    uint128_t xmm1 = var_2c
    uint128_t var_1c = xmm1
    sub_4460c0(&var_2c)
    int32_t edi_1 = var_2c:4.d
    uint32_t eax_2 = _mm_bsrli_si128(xmm1, 4)
    int32_t var_54
    char const* const var_50_6
    char* ecx_8
    
    if (eax_2 != edi_1)
        uint32_t* ecx_1 = var_1c:4.d
        
        while (true)
            if (ecx_1 == 0)
            label_448854:
                var_50_6 = "Cards::CardIt::operator *"
                var_54 = 0x132
                ecx_8 = &data_580cbc
                goto label_44886d
            
            eax_2 = *ecx_1
            
            if (eax_2 != var_1c:8.d)
                break
            
            int32_t ecx_2 = ecx_1[6]
            int32_t eax_6 = (ecx_1 - arg1 - 4) s>> 5
            int32_t ecx_4
            
            if (ecx_2 == 0)
                ecx_4 = eax_6
            else
                ecx_4 = ecx_2 << 0x10 | eax_6
            
            *(eax + (*(eax + 0x328) << 2) + 8) = ecx_4
            *(eax + 0x328) += 1
            *(eax + 0x334) += 1
            eax_2 = sub_445ed0(&var_1c)
            ecx_1 = var_1c:4.d
            
            if (ecx_1 == edi_1)
                goto label_4484ef
        
        goto label_448557
    
    label_4484ef:
    int32_t eax_9 = *(eax + 0x328) + 2
    *(eax + 0x33c) = 0
    *(eax + 0x338) = eax + (eax_9 << 2)
    sub_445fb0(&var_2c, arg1, 0xa, arg2)
    uint128_t xmm1_2 = var_2c
    var_1c = xmm1_2
    sub_4460c0(&var_2c)
    eax_2 = _mm_bsrli_si128(xmm1_2, 4)
    
    if (eax_2 == var_2c:4.d)
    label_4485ae:
        int32_t eax_18 = *(eax + 0x328) + 2
        *(eax + 0x344) = 0
        *(eax + 0x340) = eax + (eax_18 << 2)
        sub_445fb0(&var_2c, arg1, 4, 0xffffffff)
        uint128_t xmm1_4 = var_2c
        var_1c = xmm1_4
        sub_4460c0(&var_2c)
        eax_2 = _mm_bsrli_si128(xmm1_4, 4)
        
        if (eax_2 != var_2c:4.d)
            uint32_t* i = var_1c:4.d
            
            do
                if (i == 0)
                    goto label_448854
                
                eax_2 = *i
                
                if (eax_2 != var_1c:8.d)
                    goto label_448557
                
                eax_2 = *(sub_445b50(arg1, arg2) + 0x10)
                
                if (eax_2 s>= *(i[4] + 8))
                    if (*i != 4)
                        var_50_6 = "ShYield_Action"
                        var_54 = 0x61c
                        ecx_8 = "c.where == CW_GLOBAL_CENTER"
                        goto label_44886d
                    
                    int32_t ecx_14 = i[6]
                    int32_t eax_24 = (i - arg1 - 4) s>> 5
                    int32_t ecx_16
                    
                    if (ecx_14 == 0)
                        ecx_16 = eax_24
                    else
                        ecx_16 = ecx_14 << 0x10 | eax_24
                    
                    *(eax + (*(eax + 0x328) << 2) + 8) = ecx_16
                    *(eax + 0x328) += 1
                    *(eax + 0x344) += 1
                
                eax_2 = sub_445ed0(&var_1c)
                i = var_1c:4.d
            while (i != var_2c:4.d)
        
        if (*(eax + 0x344) s<= 6)
            int32_t eax_27 = *(eax + 0x328) + 2
            *(eax + 0x34c) = 0
            *(eax + 0x348) = eax + (eax_27 << 2)
            sub_445fb0(&var_2c, arg1, 4, 0xffffffff)
            uint128_t xmm1_6 = var_2c
            var_1c = xmm1_6
            sub_4460c0(&var_2c)
            eax_2 = _mm_bsrli_si128(xmm1_6, 4)
            
            if (eax_2 != var_2c:4.d)
                uint32_t* i_1 = var_1c:4.d
                
                do
                    if (i_1 == 0)
                        goto label_448854
                    
                    eax_2 = *i_1
                    
                    if (eax_2 != var_1c:8.d)
                        goto label_448557
                    
                    void* eax_29 = sub_445b50(arg1, arg2)
                    void* ecx_20 = i_1[4]
                    eax_2 = *(eax_29 + 0x10)
                    
                    if (eax_2 s>= *(ecx_20 + 8) && *(ecx_20 + 0x28) == 1)
                        if (*i_1 != 4)
                            var_50_6 = "ShYield_Action"
                            var_54 = 0x62a
                            ecx_8 = "c.where == CW_GLOBAL_CENTER"
                            goto label_44886d
                        
                        int32_t ecx_21 = i_1[6]
                        int32_t eax_33 = (i_1 - arg1 - 4) s>> 5
                        int32_t ecx_23
                        
                        if (ecx_21 == 0)
                            ecx_23 = eax_33
                        else
                            ecx_23 = ecx_21 << 0x10 | eax_33
                        
                        *(eax + (*(eax + 0x328) << 2) + 8) = ecx_23
                        *(eax + 0x328) += 1
                        *(eax + 0x34c) += 1
                    
                    eax_2 = sub_445ed0(&var_1c)
                    i_1 = var_1c:4.d
                while (i_1 != var_2c:4.d)
            
            int32_t i_2 = 0
            int32_t eax_36 = *(eax + 0x328) + 2
            *(eax + 0x354) = 0
            int32_t i_3 = 0
            uint32_t result = eax + (eax_36 << 2)
            *(eax + 0x350) = result
            
            if (*(arg1 + 0x2164) s> 0)
                result = arg2
                
                do
                    if (i_2 != result)
                        uint128_t var_3c
                        sub_445fb0(&var_3c, arg1, 0xa, i_2)
                        uint128_t xmm1_8 = var_3c
                        var_1c = xmm1_8
                        sub_4460c0(&var_2c)
                        eax_2 = _mm_bsrli_si128(xmm1_8, 4)
                        
                        if (eax_2 != var_2c:4.d)
                            uint32_t* j = var_1c:4.d
                            
                            do
                                if (j == 0)
                                    goto label_448854
                                
                                eax_2 = *j
                                
                                if (eax_2 != var_1c:8.d)
                                    goto label_448557
                                
                                if (sub_4475d0(eax_2, arg2, arg1, j) != 0)
                                    int32_t ecx_27 = j[6]
                                    int32_t eax_41 = (j - arg1 - 4) s>> 5
                                    int32_t ecx_29
                                    
                                    if (ecx_27 == 0)
                                        ecx_29 = eax_41
                                    else
                                        ecx_29 = ecx_27 << 0x10 | eax_41
                                    
                                    *(eax + (*(eax + 0x328) << 2) + 8) = ecx_29
                                    *(eax + 0x328) += 1
                                    *(eax + 0x354) += 1
                                
                                eax_2 = sub_445ed0(&var_1c)
                                j = var_1c:4.d
                            while (j != var_2c:4.d)
                            
                            i_2 = i_3
                        
                        result = arg2
                    
                    i_2 += 1
                    i_3 = i_2
                while (i_2 s< *(arg1 + 0x2164))
            
            return result
        
        var_50_6 = "ShYield_Action"
        var_54 = 0x622
        ecx_8 = "y.action.numBuy <= 6"
    else
        uint32_t* ecx_7 = var_1c:4.d
        
        while (true)
            if (ecx_7 == 0)
                goto label_448854
            
            eax_2 = *ecx_7
            
            if (eax_2 != var_1c:8.d)
                break
            
            int32_t edi_2 = ecx_7[6]
            int32_t eax_14 = (ecx_7 - arg1 - 4) s>> 5
            int32_t edi_4
            
            if (edi_2 == 0)
                edi_4 = eax_14
            else
                edi_4 = edi_2 << 0x10 | eax_14
            
            if (sub_44ab90(eax_14, arg2, arg1, edi_4) != 0)
                *(eax + (*(eax + 0x328) << 2) + 8) = edi_4
                *(eax + 0x328) += 1
                *(eax + 0x33c) += 1
            
            eax_2 = sub_445ed0(&var_1c)
            ecx_7 = var_1c:4.d
            
            if (ecx_7 == var_2c:4.d)
                goto label_4485ae
        
    label_448557:
        var_50_6 = "Cards::CardIt::operator *"
        var_54 = 0x133
        ecx_8 = "c->where == where"
    
    label_44886d:
    sub_44e4d0(eax_2, &data_5559b1, ecx_8, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_54, 
        var_50_6)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
