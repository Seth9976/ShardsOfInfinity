// 函数名称: sub_42dc50
// 虚拟地址: 0x42dc50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (* __convention("regparm")sub_42dc50(int32_t arg1, int32_t* arg2, void* arg3, void* arg4, void* arg5, void* arg6))[0x4]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = arg2
    int32_t i = 0
    void* ecx_1 = arg6
    uint32_t edi = 0
    int32_t* var_298 = eax_2
    int32_t* var_2a4 = ecx_1
    int32_t var_1c
    
    if (*(arg3 + 0x2164) s> 0)
        do
            if (i != eax_2)
                void* eax_3
                eax_3, ecx_1 = sub_445af0(arg3, i)
                
                if (*(eax_3 + 8) s<= 0)
                    eax_2 = var_298
                else
                    void* var_2c4_1 = ecx_1
                    char eax_4
                    eax_4, ecx_1 = sub_447450(arg3, i)
                    eax_2 = var_298
                    
                    if (eax_4 == 0)
                        (&var_1c)[edi] = i
                        edi += 1
            
            i += 1
        while (i s< *(arg3 + 0x2164))
    
    int32_t i_1 = 0
    
    if (edi - 1 s> 0)
        do
            int32_t var_2c4_2 = edi - 1
            int32_t eax_5 = sub_452bf0(eax_2, i_1, ecx_1)
            int32_t edx_3 = (&var_1c)[i_1]
            ecx_1 = &(&var_1c)[eax_5]
            eax_2 = *ecx_1
            (&var_1c)[i_1] = eax_2
            i_1 += 1
            *ecx_1 = edx_3
        while (i_1 s< edi - 1)
    
    if (edi == 0)
        uint32_t (* eax_6)[0x4] = sub_42da00(arg5, var_2a4)
        *eax_6 = 1
        (*eax_6)[1] = 5
        *(eax_6 + 8) = zx.o(0)
        (*eax_6)[6] = edi
        (*eax_6)[0xa] = *(arg3 + 0x2164)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_6
    
    int32_t var_2c8
    char const* const var_2c4_3
    char* ecx_9
    int32_t var_2a0_1
    int32_t var_294
    
    if (edi == 1)
        var_294 = var_1c
        var_2a0_1 = 1
    label_42de60:
        void* edx_6 = arg4
        eax_2 = &var_294
        void* ecx_12 = nullptr
        int32_t var_9c = 1
        void* var_2b0_1 = nullptr
        int32_t* var_298_1 = &var_294
        
        while (true)
            int32_t i_5 = (&var_9c)[ecx_12]
            int32_t i_2 = 0
            
            if (i_5 - 1 s> 0)
                do
                    int32_t var_2c4_4 = i_5 - 1
                    int32_t eax_10 = sub_452bf0(eax_2, i_2, ecx_12)
                    int32_t edx_8 = var_298_1[i_2]
                    ecx_12 = &var_298_1[eax_10]
                    eax_2 = *ecx_12
                    var_298_1[i_2] = eax_2
                    i_2 += 1
                    *ecx_12 = edx_8
                while (i_2 s< i_5 - 1)
                
                eax_2 = var_298_1
                edx_6 = arg4
            
            void* ebx_3 = edx_6
            int128_t var_30
            __builtin_memset(&var_30, 0, 0x14)
            
            if (i_5 s> 0)
                int32_t* esi = eax_2
                int32_t i_4 = i_5
                int32_t i_3
                
                do
                    int32_t ecx_13 = *esi
                    esi = &esi[1]
                    eax_2 = divs.dp.d(sx.q(ebx_3), i_5)
                    i_5 -= 1
                    ebx_3 -= eax_2
                    *(&var_30 + (ecx_13 << 2)) = eax_2
                    i_3 = i_4
                    i_4 -= 1
                while (i_3 != 1)
            
            int32_t edx_11 = *var_2a4
            
            if (edx_11 s>= 0x400)
                var_2c4_3 = "ActionAlloc"
                var_2c8 = 0x12b
                ecx_9 = "numActions < MAX_ACTIONS"
                break
            
            int32_t* ecx_15 = arg5 + edx_11 * 0x30
            *var_2a4 = edx_11 + 1
            edx_6 = arg4
            __builtin_memset(&ecx_15[7], 0, 0x14)
            int128_t xmm0_1 = var_30
            *ecx_15 = 1
            *(ecx_15 + 8) = xmm0_1
            int32_t var_20
            ecx_15[6] = var_20
            ecx_15[1] = 5
            ecx_15[0xa] = *(arg3 + 0x2164)
            ecx_12 = var_2b0_1 + 1
            eax_2 = &var_298_1[5]
            var_2b0_1 = ecx_12
            var_298_1 = eax_2
            
            if (ecx_12 s>= var_2a0_1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_2
    else
        int32_t var_18
        
        if (edi == 2)
            int32_t ecx_11 = var_1c
            var_294 = ecx_11
            int32_t var_280_2 = var_18
            int32_t var_98_2 = 1
            int32_t var_26c_2 = ecx_11
            int32_t var_268_1 = var_18
            int32_t var_94_2 = 2
            var_2a0_1 = 3
            goto label_42de60
        
        if (edi == 3)
            int32_t edx_5 = var_1c
            var_294 = edx_5
            int32_t var_280_1 = var_18
            int32_t var_98_1 = 1
            int32_t var_14
            int32_t var_26c_1 = var_14
            int32_t var_94_1
            __builtin_memcpy(&var_94_1, 
                "\x01\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00", 
                0x14)
            int32_t var_258_1 = edx_5
            int32_t var_254_1 = var_18
            int32_t var_244_1 = edx_5
            int32_t var_240_1 = var_14
            int32_t var_230_1 = var_18
            int32_t var_22c_1 = var_14
            int32_t var_21c_1 = edx_5
            int32_t var_218_1 = var_18
            int32_t var_214_1 = var_14
            var_2a0_1 = 7
            goto label_42de60
        
        var_2c4_3 = "GetOpponentPermutations"
        var_2c8 = 0x18d
        ecx_9 = "Halt"
    sub_44e4d0(eax_2, &data_5559b1, ecx_9, "c:\ax2017\jams\shards\code\shardsai.cpp", var_2c8, 
        var_2c4_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
