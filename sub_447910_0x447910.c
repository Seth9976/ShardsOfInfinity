// 函数名称: sub_447910
// 虚拟地址: 0x447910
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_447910(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* eax = sub_447380(arg3, arg4)
    int32_t* eax = sub_447380(arg3, arg4)
    void* eax_1 = sub_4476a0(arg3)
    *eax_1 = 2
    int32_t var_50 = *arg4
    int32_t var_4c = arg4[1]
    *(eax_1 + 0x358) = 1.o
    *(eax_1 + 4) = arg2
    int128_t var_44
    *(eax_1 + 0x368) = var_44
    *(eax_1 + 0x328) = 0
    int64_t var_34
    *(eax_1 + 0x378) = var_34
    *(eax_1 + 0x334) = 0
    *(eax_1 + 0x330) = eax_1 + 8
    uint128_t var_1c
    sub_445fb0(&var_1c, arg3, 7, arg2)
    uint128_t xmm1 = var_1c
    var_1c = xmm1
    uint128_t var_2c
    sub_4460c0(&var_2c)
    uint32_t result = _mm_bsrli_si128(xmm1, 4)
    int32_t var_68
    char const* const var_64_4
    int32_t var_28
    char* ecx_15
    
    if (result != var_28)
        uint32_t* ecx_5 = var_1c:4.d
        
        while (true)
            if (ecx_5 == 0)
            label_447a99:
                var_64_4 = "Cards::CardIt::operator *"
                var_68 = 0x132
                ecx_15 = &data_580cbc
                goto label_447b26
            
            result = *ecx_5
            
            if (result != var_1c:8.d)
                break
            
            int32_t ecx_6 = ecx_5[6]
            int32_t eax_6 = (ecx_5 - arg3 - 4) s>> 5
            int32_t ecx_8
            
            if (ecx_6 == 0)
                ecx_8 = eax_6
            else
                ecx_8 = ecx_6 << 0x10 | eax_6
            
            *(eax_1 + (*(eax_1 + 0x328) << 2) + 8) = ecx_8
            *(eax_1 + 0x328) += 1
            *(eax_1 + 0x334) += 1
            result = sub_445ed0(&var_1c)
            ecx_5 = var_1c:4.d
            
            if (ecx_5 == var_28)
                goto label_447a20
        
        goto label_447a85
    
    label_447a20:
    int32_t eax_9 = *(eax_1 + 0x328) + 2
    *(eax_1 + 0x33c) = 0
    *(eax_1 + 0x338) = eax_1 + (eax_9 << 2)
    sub_445fb0(&var_2c, arg3, 9, arg2)
    uint128_t xmm1_2 = var_2c
    var_1c = xmm1_2
    sub_4460c0(&var_2c)
    result = _mm_bsrli_si128(xmm1_2, 4)
    
    if (result == var_28)
    label_447ad4:
        uint32_t result_1 = *(eax_1 + 0x328)
        result = eax[1]
        
        if (result s>= result_1)
            result = result_1
        
        *(eax_1 + 0x32c) = result
        
        if (result_1 != 0)
            result.b = 1
            return result
        
        if (*(arg3 + 0x1a04) == 1)
            *(arg3 + 0x1a04) = result_1
            result.b = 0
            return result
        
        var_64_4 = "ShYieldPop"
        var_68 = 0x485
        ecx_15 = "g.numYlds == 1"
    else
        uint32_t* ecx_11 = var_1c:4.d
        
        while (true)
            if (ecx_11 == 0)
                goto label_447a99
            
            result = *ecx_11
            
            if (result != var_1c:8.d)
                break
            
            int32_t ecx_12 = ecx_11[6]
            int32_t eax_14 = (ecx_11 - arg3 - 4) s>> 5
            int32_t ecx_14
            
            if (ecx_12 == 0)
                ecx_14 = eax_14
            else
                ecx_14 = ecx_12 << 0x10 | eax_14
            
            *(eax_1 + (*(eax_1 + 0x328) << 2) + 8) = ecx_14
            *(eax_1 + 0x328) += 1
            *(eax_1 + 0x33c) += 1
            result = sub_445ed0(&var_1c)
            ecx_11 = var_1c:4.d
            
            if (ecx_11 == var_28)
                goto label_447ad4
        
    label_447a85:
        var_64_4 = "Cards::CardIt::operator *"
        var_68 = 0x133
        ecx_15 = "c->where == where"
    
    label_447b26:
    sub_44e4d0(result, &data_5559b1, ecx_15, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_68, 
        var_64_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
