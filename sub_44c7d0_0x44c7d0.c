// 函数名称: sub_44c7d0
// 虚拟地址: 0x44c7d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_44c7d0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* eax = sub_44c130(arg1, arg2, arg3, arg4, arg5)
    void* eax = sub_44c130(arg1, arg2, arg3, arg4, arg5)
    int32_t ebx
    ebx.b = eax.b
    
    if (*(arg3 + 0x1a04) != 0)
        goto label_44c95e
    
    eax = sub_449a10(arg3)
    
    if (*(arg3 + 0x1a04) != 0)
        goto label_44c95e
    
    void* ecx_3 = arg3
    int32_t var_3c_1
    char const* const var_38_1
    char* ecx_7
    uint32_t edx_5
    
    if (ebx.b == 0)
        edx_5 = arg2[1]
    label_44c959:
        eax = sub_448410(ecx_3, edx_5)
    label_44c95e:
        
        if (*(arg3 + 0x1a04) == 1)
            *(arg3 + 0x1a04) = 0
            return arg3 + 0x1a08
        
        var_38_1 = "ShYieldPop"
        var_3c_1 = 0x485
        ecx_7 = "g.numYlds == 1"
    else
        eax = sub_44b580(ecx_3)
        
        if (eax.b != 0)
            data_5c63ac = 1
            eax = sub_4483b0(arg3)
            goto label_44c95e
        
        int32_t ecx_5 = *(arg3 + 0x2164)
        int32_t edi_1 = 1
        
        if (ecx_5 s> 1)
            while (true)
                uint32_t temp1_1 = mods.dp.d(sx.q(*(arg3 + 0x19fc) + edi_1), ecx_5)
                eax = sub_445b50(arg3, temp1_1)
                
                if (*(eax + 8) s> 0)
                    int32_t var_38_2 = *sub_445b50(arg3, temp1_1)
                    char const* const var_3c_2 = "%s starts their turn."
                    void* var_40_1 = arg3
                    
                    if (temp1_1 == 0)
                        *arg3 += 1
                    
                    *(arg3 + 0x19fc) = temp1_1
                    *(sub_445b50(arg3, temp1_1) + 0x18) = 0
                    uint128_t var_14
                    void** ecx_11 = sub_445fb0(&var_14, arg3, 7, temp1_1)
                    uint128_t xmm1_1 = var_14
                    var_14 = xmm1_1
                    void var_24
                    sub_4460c0(&var_24)
                    eax = _mm_bsrli_si128(xmm1_1, 4)
                    int32_t var_20
                    
                    if (eax != var_20)
                        ecx_11 = var_14:4.d
                        
                        do
                            if (ecx_11 == 0)
                                var_38_1 = "Cards::CardIt::operator *"
                                var_3c_1 = 0x132
                                ecx_7 = &data_580cbc
                                goto label_44c997
                            
                            eax = *ecx_11
                            
                            if (eax != var_14:8.d)
                                var_38_1 = "Cards::CardIt::operator *"
                                var_3c_1 = 0x133
                                ecx_7 = "c->where == where"
                                goto label_44c997
                            
                            *(ecx_11 + 0x16) = 0
                            eax = sub_445ed0(&var_14)
                            ecx_11 = var_14:4.d
                        while (ecx_11 != var_20)
                    
                    if (*(arg3 + 0x2168) == 3)
                        void** var_38_5 = ecx_11
                        uint32_t var_3c_3 = temp1_1
                        eax = sub_42f980(eax, arg3, ecx_11)
                    
                    sub_445a20(eax, 0x1a, arg3, temp1_1, 0, 0, 0, 0)
                    edx_5 = temp1_1
                    ecx_3 = arg3
                    break
                
                ecx_5 = *(arg3 + 0x2164)
                edi_1 += 1
                
                if (edi_1 s>= ecx_5)
                    goto label_44c86a
            
            goto label_44c959
        
    label_44c86a:
        var_38_1 = "NextPlayerTurn"
        var_3c_1 = 0xd98
        ecx_7 = "Halt"
    label_44c997:
    sub_44e4d0(eax, &data_5559b1, ecx_7, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_3c_1, 
        var_38_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
