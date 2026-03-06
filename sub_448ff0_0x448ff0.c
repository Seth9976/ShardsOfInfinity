// 函数名称: sub_448ff0
// 虚拟地址: 0x448ff0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_448ff0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax = *arg4
    int32_t eax = *arg4
    int32_t var_64
    char const* const var_60
    uint32_t result
    char* ecx_1
    
    if (eax == 0)
        void* eax_4 = sub_4476a0(arg3)
        int32_t var_48_1 = *arg5
        int32_t var_44_1 = arg5[1]
        *eax_4 = 4
        *(eax_4 + 0x358) = 1.o
        *(eax_4 + 4) = arg2
        *(eax_4 + 0x328) = 0
        *(eax_4 + 0x32c) = 1
        int128_t var_3c
        *(eax_4 + 0x368) = var_3c
        *(eax_4 + 0x334) = 0
        int64_t var_2c
        *(eax_4 + 0x378) = var_2c
        *(eax_4 + 0x330) = eax_4 + 8
        uint128_t var_14
        sub_445fb0(&var_14, arg3, 7, arg2)
        uint128_t xmm1_1 = var_14
        var_14 = xmm1_1
        void var_24
        sub_4460c0(&var_24)
        result = _mm_bsrli_si128(xmm1_1, 4)
        int32_t var_20
        
        if (result != var_20)
            uint32_t* ecx_7 = var_14:4.d
            
            do
                if (ecx_7 == 0)
                    var_60 = "Cards::CardIt::operator *"
                    var_64 = 0x132
                    ecx_1 = &data_580cbc
                    goto label_449199
                
                result = *ecx_7
                
                if (result != var_14:8.d)
                    var_60 = "Cards::CardIt::operator *"
                    var_64 = 0x133
                    ecx_1 = "c->where == where"
                    goto label_449199
                
                void* eax_6 = ecx_7[4]
                
                if (*(eax_6 + 0x28) != 2 && *(eax_6 + 0xc) == 3)
                    int32_t ecx_8 = ecx_7[6]
                    int32_t eax_10 = (ecx_7 - arg3 - 4) s>> 5
                    int32_t ecx_10
                    
                    if (ecx_8 == 0)
                        ecx_10 = eax_10
                    else
                        ecx_10 = ecx_8 << 0x10 | eax_10
                    
                    *(eax_4 + (*(eax_4 + 0x328) << 2) + 8) = ecx_10
                    *(eax_4 + 0x328) += 1
                    *(eax_4 + 0x334) += 1
                
                result = sub_445ed0(&var_14)
                ecx_7 = var_14:4.d
            while (ecx_7 != var_20)
        
        if (*(eax_4 + 0x328) != 0)
            return result
        
        if (*(arg3 + 0x1a04) == 1)
            *(arg3 + 0x1a04) = 0
            return result
        
        var_60 = "ShYieldPop"
        var_64 = 0x485
        ecx_1 = "g.numYlds == 1"
    else
        result = eax - 1
        
        if (eax == 1)
            return sub_448070(&arg4[2], arg2, arg3, &arg4[2], arg4[1], arg5)
        
        var_60 = "ShYield_RevealChoice"
        var_64 = 0x7a6
        ecx_1 = "Halt"
    
    label_449199:
    sub_44e4d0(result, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_64, var_60)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
