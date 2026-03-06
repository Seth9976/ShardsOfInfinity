// 函数名称: sub_447760
// 虚拟地址: 0x447760
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_447760(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* eax_1 = sub_4476a0(arg3)
    void* eax_1 = sub_4476a0(arg3)
    *eax_1 = 8
    int32_t var_4c = arg4[1]
    int32_t var_50 = *arg4
    *(eax_1 + 4) = arg2
    *(eax_1 + 0x328) = 0
    *(eax_1 + 0x358) = 1.o
    *(eax_1 + 0x32c) = 1
    int128_t var_44
    *(eax_1 + 0x368) = var_44
    int64_t var_34
    *(eax_1 + 0x378) = var_34
    int32_t* eax_2 = sub_447380(arg3, arg4)
    void* ecx_4 = eax_1 + ((*(eax_1 + 0x328) + 2) << 2)
    *(eax_1 + 0x334) = 0
    *(eax_1 + 0x330) = ecx_4
    uint128_t var_2c
    sub_445fb0(&var_2c, arg3, 9, arg2)
    uint128_t xmm1 = var_2c
    uint128_t var_1c = xmm1
    sub_4460c0(&var_2c)
    uint32_t result = _mm_bsrli_si128(xmm1, 4)
    int32_t var_68_2
    char const* const var_64_3
    char* ecx_10
    
    if (result != var_2c:4.d)
        uint32_t* i = var_1c:4.d
        
        do
            if (i == 0)
                var_64_3 = "Cards::CardIt::operator *"
                var_68_2 = 0x132
                ecx_10 = &data_580cbc
                goto label_4478ea
            
            result = *i
            
            if (result != var_1c:8.d)
                var_64_3 = "Cards::CardIt::operator *"
                var_68_2 = 0x133
                ecx_10 = "c->where == where"
                goto label_4478ea
            
            if (sub_4472f0(i, eax_2) != 0)
                int32_t ecx_6 = i[6]
                int32_t eax_7 = (i - arg3 - 4) s>> 5
                int32_t ecx_8
                
                if (ecx_6 == 0)
                    ecx_8 = eax_7
                else
                    ecx_8 = ecx_6 << 0x10 | eax_7
                
                *(eax_1 + (*(eax_1 + 0x328) << 2) + 8) = ecx_8
                *(eax_1 + 0x328) += 1
                *(eax_1 + 0x334) += 1
            
            result = sub_445ed0(&var_1c)
            i = var_1c:4.d
        while (i != var_2c:4.d)
    
    if (*(eax_1 + 0x328) != 0)
        result.b = 1
        return result
    
    if (*(arg3 + 0x1a04) == 1)
        *(arg3 + 0x1a04) = 0
        result.b = 0
        return result
    
    var_64_3 = "ShYieldPop"
    var_68_2 = 0x485
    ecx_10 = "g.numYlds == 1"
    label_4478ea:
    sub_44e4d0(result, &data_5559b1, ecx_10, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_68_2, 
        var_64_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
