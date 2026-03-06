// 函数名称: sub_447e90
// 虚拟地址: 0x447e90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_447e90(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* eax = sub_4476a0(arg3)
    void* eax = sub_4476a0(arg3)
    int32_t* ecx = arg4
    int32_t* i = nullptr
    arg4 = nullptr
    void* result = eax + 8
    int32_t var_5c = ecx[1]
    int32_t ecx_2 = arg2
    int32_t var_60 = *ecx
    *eax = 6
    *(eax + 4) = ecx_2
    *(eax + 0x358) = 1.o
    *(eax + 0x328) = 0
    *(eax + 0x32c) = 1
    *(eax + 0x334) = 0
    int128_t var_54
    *(eax + 0x368) = var_54
    *(eax + 0x330) = result
    int64_t var_44
    *(eax + 0x378) = var_44
    int32_t var_78
    char const* const var_74_3
    char* ecx_9
    
    if (*(arg3 + 0x2164) s> 0)
        do
            if (i != ecx_2)
                uint128_t var_3c
                sub_445fb0(&var_3c, arg3, 0xa, i)
                uint128_t xmm1_1 = var_3c
                uint128_t var_1c = xmm1_1
                void var_2c
                sub_4460c0(&var_2c)
                result = _mm_bsrli_si128(xmm1_1, 4)
                int32_t var_28
                
                if (result != var_28)
                    void** esi = var_1c:4.d
                    
                    do
                        if (esi == 0)
                            var_74_3 = "Cards::CardIt::operator *"
                            var_78 = 0x132
                            ecx_9 = &data_580cbc
                            goto label_448047
                        
                        result = *esi
                        
                        if (result != var_1c:8.d)
                            var_74_3 = "Cards::CardIt::operator *"
                            var_78 = 0x133
                            ecx_9 = "c->where == where"
                            goto label_448047
                        
                        if (*(esi[4] + 0x28) == 2)
                            int32_t edx_1 = esi[1]
                            
                            if (edx_1 != arg2 && *(sub_445af0(arg3, edx_1) + 8) s> 0)
                                int32_t ecx_5 = esi[6]
                                int32_t eax_6 = (esi - arg3 - 4) s>> 5
                                int32_t ecx_7
                                
                                if (ecx_5 == 0)
                                    ecx_7 = eax_6
                                else
                                    ecx_7 = ecx_5 << 0x10 | eax_6
                                
                                *(eax + (*(eax + 0x328) << 2) + 8) = ecx_7
                                *(eax + 0x328) += 1
                                *(eax + 0x334) += 1
                        
                        result = sub_445ed0(&var_1c)
                        esi = var_1c:4.d
                    while (esi != var_28)
                    
                    i = arg4
                
                ecx_2 = arg2
            
            i += 1
            arg4 = i
        while (i s< *(arg3 + 0x2164))
        
        if (*(eax + 0x328) != 0)
            result.b = 1
            return result
    
    if (*(arg3 + 0x1a04) == 1)
        *(arg3 + 0x1a04) = 0
        result.b = 0
        return result
    
    var_74_3 = "ShYieldPop"
    var_78 = 0x485
    ecx_9 = "g.numYlds == 1"
    label_448047:
    sub_44e4d0(result, &data_5559b1, ecx_9, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_78, 
        var_74_3)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
