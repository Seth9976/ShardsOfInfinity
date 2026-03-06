// 函数名称: sub_447b40
// 虚拟地址: 0x447b40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_447b40(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* eax = sub_4476a0(arg3)
    void* eax = sub_4476a0(arg3)
    *eax = 3
    int32_t var_60 = *arg4
    int32_t var_5c = arg4[1]
    *(eax + 4) = arg2
    *(eax + 0x328) = 0
    *(eax + 0x358) = 1.o
    *(eax + 0x32c) = 1
    int128_t var_54
    *(eax + 0x368) = var_54
    int64_t var_44
    *(eax + 0x378) = var_44
    void* eax_2 = sub_447380(arg3, arg4)
    int32_t edx_2 = *(eax + 0x328)
    int32_t* i = nullptr
    *(eax + 0x334) = 0
    arg4 = nullptr
    *(eax + 0x330) = eax + ((edx_2 + 2) << 2)
    *(eax + 0x338) = arg5
    int32_t var_7c
    char const* const var_78_2
    char* ecx_12
    
    if (*(arg3 + 0x2164) s> 0)
        int32_t ecx_5 = arg2
        
        do
            if (i != ecx_5)
                uint128_t var_2c
                sub_445fb0(&var_2c, arg3, 4, 0xffffffff)
                uint128_t xmm1_1 = var_2c
                uint128_t var_1c = xmm1_1
                void var_3c
                sub_4460c0(&var_3c)
                i = _mm_bsrli_si128(xmm1_1, 4)
                int32_t var_38
                
                if (i != var_38)
                    int32_t** ecx_7 = var_1c:4.d
                    
                    do
                        if (ecx_7 == 0)
                            var_78_2 = "Cards::CardIt::operator *"
                            var_7c = 0x132
                            ecx_12 = &data_580cbc
                            goto label_447d0e
                        
                        i = *ecx_7
                        
                        if (i != var_1c:8.d)
                            var_78_2 = "Cards::CardIt::operator *"
                            var_7c = 0x133
                            ecx_12 = "c->where == where"
                            goto label_447d0e
                        
                        if (ecx_7[4][2] s<= *(eax_2 + 4))
                            int32_t ecx_8 = ecx_7[6]
                            int32_t eax_8 = (ecx_7 - arg3 - 4) s>> 5
                            int32_t ecx_10
                            
                            if (ecx_8 == 0)
                                ecx_10 = eax_8
                            else
                                ecx_10 = ecx_8 << 0x10 | eax_8
                            
                            *(eax + (*(eax + 0x328) << 2) + 8) = ecx_10
                            *(eax + 0x328) += 1
                            *(eax + 0x334) += 1
                        
                        i = sub_445ed0(&var_1c)
                        ecx_7 = var_1c:4.d
                    while (ecx_7 != var_38)
                
                ecx_5 = arg2
                i = arg4
            
            i += 1
            arg4 = i
        while (i s< *(arg3 + 0x2164))
        
        edx_2 = *(eax + 0x328)
    
    if (edx_2 != 0)
        i.b = 1
        return i
    
    if (*(arg3 + 0x1a04) == 1)
        *(arg3 + 0x1a04) = 0
        i.b = 0
        return i
    
    var_78_2 = "ShYieldPop"
    var_7c = 0x485
    ecx_12 = "g.numYlds == 1"
    label_447d0e:
    sub_44e4d0(i, &data_5559b1, ecx_12, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_7c, var_78_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
