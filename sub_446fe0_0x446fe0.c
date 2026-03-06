// 函数名称: sub_446fe0
// 虚拟地址: 0x446fe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_446fe0(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    void* result = sub_446460(eax, 8, arg1, arg2)
    void* result_1 = result
    bool cond:0 = result_1 s> 0
    
    if (result_1 == 0)
        result = sub_446460(sub_446b90(result, result + 9, arg1, arg2, 8, arg2, 1), 8, arg1, arg2)
        result_1 = result
        cond:0 = result_1 s> 0
        
        if (result_1 == 0)
            return result
    
    char const* const var_48_1
    int32_t var_44_2
    char const* const var_40_1
    char* ecx_2
    
    if (cond:0)
        int32_t eax_3 = *(arg1 + 0x19d4) * 0x41c64e6d + 0x3039
        *(arg1 + 0x19d4) = eax_3
        uint32_t esi_1 = modu.dp.d(0:eax_3, result_1)
        void* eax_5 = sub_445b50(arg1, arg2)
        int32_t edx_4 = *(arg1 + 0x216c)
        void* var_c = eax_5
        
        if (edx_4 != 0)
            eax_5 = *(edx_4 + ((arg2 * 0x3e9 + *(eax_5 + 0x98)) << 2) + 0x40)
            
            if (eax_5 != 0)
                esi_1 = 0
                uint128_t var_2c
                sub_445fb0(&var_2c, arg1, 8, arg2)
                uint128_t xmm1_1 = var_2c
                uint128_t var_1c = xmm1_1
                sub_4460c0(&var_2c)
                result = _mm_bsrli_si128(xmm1_1, 4)
                
                if (result != var_2c:4.d)
                    void** i = var_1c:4.d
                    
                    do
                        if (i == 0)
                            var_40_1 = "Cards::CardIt::operator *"
                            var_44_2 = 0x132
                            ecx_2 = &data_580cbc
                            goto label_4471a3
                        
                        result = *i
                        
                        if (result != var_1c:8.d)
                            var_40_1 = "Cards::CardIt::operator *"
                            var_44_2 = 0x133
                            ecx_2 = "c->where == where"
                            goto label_4471a3
                        
                        if (*i[4] == eax_5)
                            break
                        
                        esi_1 += 1
                        result = sub_445ed0(&var_1c)
                        i = var_1c:4.d
                    while (i != var_2c:4.d)
                
                eax_5 = var_c
                *(eax_5 + 0x98) += 1
        
        uint32_t eax_7 = sub_446a60(eax_5, 8, arg1, arg2, esi_1)
        result = sub_4460d0(&var_c, 7, arg1, arg2, &var_c)
        *result = eax_7
        
        if (arg2 != 0xffffffff)
            uint32_t ecx_11 = zx.d(eax_7.w)
            
            if (ecx_11 u< 0xc8)
                void* eax_9 = var_c
                uint32_t ecx_12 = ecx_11 << 5
                *(ecx_12 + arg1 + 8) = arg2
                *(ecx_12 + arg1 + 4) = 7
                *(ecx_12 + arg1 + 0x10) = eax_9
                *(ecx_12 + arg1 + 0xc) = 0
                return sub_445a20(eax_9, 7, arg1, arg2, eax_7, 0, 0, 0)
            
            var_40_1 = "CardGet"
            var_44_2 = 0x90
            ecx_2 = "idNoMimic < MAX_CARDS"
        else
            var_40_1 = "AddCardTail"
            var_44_2 = 0x1a7
            ecx_2 = "where == CW_GLOBAL_DECK || where == CW_GLOBAL_DISCARD || where == CW_GLOBAL_CENTER "
            "|| where == CW_GLOBAL_HERO"
        
    label_4471a3:
        var_48_1 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
    else
        var_40_1 = "RandomLCInt"
        var_44_2 = 0xcd
        var_48_1 = "c:\ax2017\engine\random.cpp"
        ecx_2 = "maxPlusOne > 0"
    
    sub_44e4d0(result, &data_5559b1, ecx_2, var_48_1, var_44_2, var_40_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
