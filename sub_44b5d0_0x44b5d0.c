// 函数名称: sub_44b5d0
// 虚拟地址: 0x44b5d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_44b5d0(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: uint32_t result_3 = arg2
    uint32_t result_3 = arg2
    uint32_t result_1 = result_3
    void* i = sub_445b50(arg1, arg2)
    void* i_3 = i
    int32_t var_40 = *(i + 0x14)
    int32_t var_44 = *(i + 0x10)
    int32_t var_48 = *i
    char const* const var_4c = "%s ends their turn (m:%d, p%d)."
    void* var_50 = arg1
    *(i + 0x10) = 0
    *(i + 0x14) = 0
    *(i + 0x1c) = 0
    *(i + 0x1e) = 0
    *(i + 0x22) = 0
    void* i_4 = nullptr
    
    if (*(i + 0x94) s> 0)
        void* edi_1 = i + 0x54
        
        do
            sub_445a20(i, 0x19, arg1, result_3, 0, *edi_1, 0, 0)
            edi_1 += 0x14
            i = i_4 + 1
            i_4 = i
        while (i s< *(i_3 + 0x94))
        
        i = i_3
    
    *(i + 0x94) = 0
    sub_445a20(i, 0x1b, arg1, result_3, 0, 0, 0, 0)
    uint128_t var_30
    sub_445fb0(&var_30, arg1, 6, result_3)
    uint128_t xmm1 = var_30
    uint128_t var_20 = xmm1
    sub_4460c0(&var_30)
    uint32_t result = _mm_bsrli_si128(xmm1, 4)
    int32_t var_44_1
    char const* const var_40_5
    char* ecx_15
    
    if (result != var_30:4.d)
        uint32_t* ebx = var_20:4.d
        
        while (true)
            if (ebx == 0)
            label_44ba05:
                var_40_5 = "Cards::CardIt::operator *"
                var_44_1 = 0x132
                ecx_15 = &data_580cbc
                goto label_44ba1e
            
            result = *ebx
            
            if (result != var_20:8.d)
                break
            
            int32_t ecx_4 = ebx[6]
            int32_t eax_4 = (ebx - arg1 - 4) s>> 5
            uint32_t edi_4
            
            if (ecx_4 == 0)
                edi_4 = eax_4
            else
                edi_4 = ecx_4 << 0x10 | eax_4
            
            if (ebx[5].b == 0)
                result = result_1
                
                if (result == 0xffffffff)
                    var_40_5 = "ShEndTurn"
                    var_44_1 = 0xb9b
                    ecx_15 = "who != PLAYER_NONE"
                    goto label_44ba1e
                
                if (ebx[1] == 0xffffffff)
                    var_40_5 = "ShEndTurn"
                    var_44_1 = 0xb9c
                    ecx_15 = "c.owner != PLAYER_NONE"
                    goto label_44ba1e
                
                sub_445a20(result, 0xc, arg1, result, edi_4, 0, 0, 0)
                result = sub_446860(arg1, edi_4)
                
                if (ecx_4 == 0)
                    sub_4461a0(result, edi_4, arg1, 9, result_1)
                else
                    int32_t edx_3 = *(arg1 + 0x1904)
                    uint32_t ecx_10 = zx.d(edi_4.w)
                    
                    if (ecx_10 s< edx_3)
                        var_40_5 = "CardFreeMimic"
                        var_44_1 = 0xe3
                        ecx_15 = "which >= g.numCards"
                        goto label_44ba1e
                    
                    result = *(arg1 + 0x19d0) + edx_3
                    
                    if (ecx_10 s>= result)
                        var_40_5 = "CardFreeMimic"
                        var_44_1 = 0xe4
                        ecx_15 = "which < g.numCards + g.numMimics"
                        goto label_44ba1e
                    
                    *(ecx_10 - edx_3 + arg1 + 0x1908) = 0
            else
                int32_t eax_6 = sub_4461a0(sub_446860(arg1, edi_4), edi_4, arg1, 3, 0xffffffff)
                ebx[5].b = 0
                ebx[1] = 0xffffffff
                sub_445a20(eax_6, 0xd, arg1, result_1, edi_4, 0, 0, 0)
            
            result = sub_445ed0(&var_20)
            ebx = var_20:4.d
            
            if (ebx == var_30:4.d)
                result_3 = result_1
                goto label_44b7b8
        
        goto label_44b828
    
    label_44b7b8:
    result = sub_446460(result, 6, arg1, result_3)
    
    if (result == 0)
        sub_445fb0(&var_30, arg1, 7, result_3)
        uint128_t xmm1_2 = var_30
        var_20 = xmm1_2
        sub_4460c0(&var_30)
        result = _mm_bsrli_si128(xmm1_2, 4)
        
        if (result == var_30:4.d)
        label_44b8e9:
            result = sub_446460(result, 7, arg1, result_3)
            
            if (result == 0)
                sub_445fb0(&var_30, arg1, 0xa, result_3)
                uint128_t xmm1_4 = var_30
                var_20 = xmm1_4
                sub_4460c0(&var_30)
                int32_t edi_7 = var_30:4.d
                result = _mm_bsrli_si128(xmm1_4, 4)
                
                if (result != edi_7)
                    uint32_t* edx_7 = var_20:4.d
                    
                    do
                        if (edx_7 == 0)
                            goto label_44ba05
                        
                        result = *edx_7
                        
                        if (result != var_20:8.d)
                            goto label_44b828
                        
                        int32_t ecx_24 = edx_7[6]
                        uint32_t eax_15 = (edx_7 - arg1 - 4) s>> 5
                        uint32_t ecx_26
                        
                        if (ecx_24 == 0)
                            ecx_26 = eax_15
                        else
                            ecx_26 = ecx_24 << 0x10 | eax_15
                        
                        *(edx_7 + 0x15) = 0
                        sub_445a20(eax_15, 0x15, arg1, result_3, ecx_26, 0, 0, 0)
                        result = sub_445ed0(&var_20)
                        edx_7 = var_20:4.d
                    while (edx_7 != edi_7)
                
                if (*arg1 s<= 0x64)
                    int32_t edi_8 = 0
                    
                    if (*(arg1 + 0x2164) s> 0)
                        int32_t i_1 = 0
                        
                        do
                            result = sub_445b50(arg1, i_1)
                            int32_t ecx_30 = edi_8 + 1
                            
                            if (*(result + 8) s<= 0)
                                ecx_30 = edi_8
                            
                            i_1 += 1
                            edi_8 = ecx_30
                        while (i_1 s< *(arg1 + 0x2164))
                        
                        result_3 = result_1
                    
                    if (edi_8 s> 1)
                        int32_t i_5 = 5
                        int32_t i_2
                        
                        do
                            result = sub_446fe0(arg1, result_3)
                            i_2 = i_5
                            i_5 -= 1
                        while (i_2 != 1)
                
                return result
            
            var_40_5 = "ShEndTurn"
            var_44_1 = 0xbb5
            ecx_15 = "CountCards(g, CW_PLAYER_HAND, who) == 0"
        else
            uint32_t* ecx_17 = var_20:4.d
            
            while (true)
                if (ecx_17 == 0)
                    goto label_44ba05
                
                result = *ecx_17
                
                if (result != var_20:8.d)
                    break
                
                int32_t edi_5 = ecx_17[6]
                result = (ecx_17 - arg1 - 4) s>> 5
                int32_t result_2
                
                if (edi_5 == 0)
                    result_2 = result
                else
                    result_2 = edi_5 << 0x10 | result
                
                *(ecx_17 + 0x16) = 0
                
                if (result_3 == 0xffffffff)
                    var_40_5 = "ShEndTurn"
                    var_44_1 = 0xbb1
                    ecx_15 = "who != PLAYER_NONE"
                    goto label_44ba1e
                
                sub_445a20(result, 0xc, arg1, result_3, result_2, 0, 0, 0)
                sub_4461a0(sub_446860(arg1, result_2), result_2, arg1, 9, result_3)
                result = sub_445ed0(&var_20)
                ecx_17 = var_20:4.d
                
                if (ecx_17 == var_30:4.d)
                    goto label_44b8e9
            
        label_44b828:
            var_40_5 = "Cards::CardIt::operator *"
            var_44_1 = 0x133
            ecx_15 = "c->where == where"
    else
        var_40_5 = "ShEndTurn"
        var_44_1 = 0xbab
        ecx_15 = "CountCards(g, CW_PLAYER_IN_PLAY, who) == 0"
    
    label_44ba1e:
    sub_44e4d0(result, &data_5559b1, ecx_15, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_44_1, 
        var_40_5)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
