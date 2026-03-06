// 函数名称: sub_44ae50
// 虚拟地址: 0x44ae50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_44ae50(int32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: void* eax = sub_445b50(arg3, arg2)
    void* eax = sub_445b50(arg3, arg2)
    uint32_t eax_1 = zx.d(arg4.w)
    int32_t var_4c_1
    char const* const var_48
    char* ecx_1
    
    if (eax_1 u< 0xc8)
        eax_1 <<= 5
        uint32_t var_8_1 = eax_1
        uint32_t ecx_2 = *(eax_1 + arg3 + 0x10)
        
        if (*(eax_1 + arg3 + 4) != 4)
            var_48 = "ShAcquireFinish"
            var_4c_1 = 0xab0
            ecx_1 = "c.where == CW_GLOBAL_CENTER"
        else if (ecx_2 s< 0)
            var_48 = "ShAcquireFinish"
            var_4c_1 = 0xab1
            ecx_1 = "c.slot >= 0"
        else if (ecx_2 s< 6)
            void* var_10 = arg3
            void* var_c_1 = arg2
            int32_t var_2c
            sub_445e80(&var_10, &var_2c)
            void var_38
            sub_445ea0(&var_10, &var_38)
            int32_t var_24
            int32_t ebx_1 = var_24
            int32_t var_30
            
            if (ebx_1 == var_30)
            label_44af57:
                eax_1 = arg5
                
                if (eax_1 u> 3)
                    var_48 = "ShAcquireFinish"
                    var_4c_1 = 0xaf6
                    ecx_1 = "Halt"
                else
                label_44af63:
                    void* result
                    
                    switch (eax_1)
                        case 0
                            if (arg2 != 0xffffffff)
                                result = sub_445a20(sub_4469f0(eax_1, arg4, arg3, 9, arg2), 0x1c, arg3, 
                                    arg2, arg4, 0, 0, 0)
                            label_44b203:
                                
                                if (*(arg3 + 0x2168) == 2)
                                    return result
                                
                                return sub_446c60(arg3, ecx_2)
                            
                            var_48 = "ShAcquireFinish"
                            var_4c_1 = 0xac7
                            ecx_1 = "who != PLAYER_NONE"
                        case 1
                            if (arg2 != 0xffffffff)
                                result = sub_445a20(sub_4469f0(eax_1, arg4, arg3, 7, arg2), 0x1f, arg3, 
                                    arg2, arg4, 0, 0, 0)
                                goto label_44b203
                            
                            var_48 = "ShAcquireFinish"
                            var_4c_1 = 0xaea
                            ecx_1 = "who != PLAYER_NONE"
                        case 2
                            if (arg2 != 0xffffffff)
                                int32_t eax_25 = *(*(var_8_1 + arg3 + 0x14) + 0xc)
                                *(eax_25 + eax + 0x1e) = 1
                                result = sub_4496d0(
                                    sub_445a20(sub_4469f0(eax_25, arg4, arg3, 0xa, arg2), 0x1e, arg3, 
                                        arg2, arg4, 0, 0, 0), 
                                    arg2, arg3, arg4, 0)
                                goto label_44b203
                            
                            var_48 = "ShAcquireFinish"
                            var_4c_1 = 0xaef
                            ecx_1 = "who != PLAYER_NONE"
                        case 3
                            *(var_8_1 + arg3 + 0x18) = 1
                            eax_1 = *(*(var_8_1 + arg3 + 0x14) + 0xc)
                            *(eax_1 + eax + 0x1e) = 1
                            
                            if (arg2 != 0xffffffff)
                                uint32_t eax_20 = sub_4496d0(
                                    sub_445a20(sub_4469f0(eax_1, arg4, arg3, 5, arg2), 0xb, arg3, arg2, 
                                        arg4, 0, 0, 0), 
                                    arg2, arg3, arg4, 0)
                                
                                if (*(arg3 + 0x1a04) == 0)
                                    sub_445a20(sub_4469f0(eax_20, arg4, arg3, 6, arg2), 0x1d, arg3, 
                                        arg2, arg4, 0, 0, 0)
                                
                                void* var_1c = arg3
                                uint32_t var_18_1 = arg2
                                int32_t var_14
                                sub_445e80(&var_1c, &var_14)
                                sub_445ea0(&var_1c, &var_38)
                                result = var_c_1
                                
                                if (result != var_30)
                                    void* i_2 = var_30 - result
                                    int32_t* ebx_9 =
                                        var_10 * 0x9c + var_14 + ((result * 5 + 0x7a9) << 2)
                                    void* i
                                    
                                    do
                                        result = sub_447380(arg3, ebx_9)
                                        int32_t edx_12 = *result
                                        
                                        if (edx_12.b == 0x15)
                                            result = sub_448f50(var_8_1 + 4 + arg3, edx_12 - 0x15)
                                            
                                            if (result.b != 0)
                                                result = sub_449c10(result, arg2, arg3, arg4, ebx_9)
                                        
                                        ebx_9 = &ebx_9[5]
                                        i = i_2
                                        i_2 -= 1
                                    while (i != 1)
                                
                                goto label_44b203
                            
                            var_48 = "ShAcquireFinish"
                            var_4c_1 = 0xace
                            ecx_1 = "who != PLAYER_NONE"
            else
                int32_t var_28
                void* eax_3 = var_28 * 0x9c + var_2c + ebx_1 * 0x14
                var_c_1 = eax_3
                void* eax_5
                
                while (true)
                    int32_t edx_1 = *sub_447380(arg3, eax_3 + 0x1ea4)
                    
                    if (edx_1.b == 0xf)
                        eax_5 = sub_448f50(var_8_1 + 4 + arg3, edx_1 - 0xf)
                        
                        if (eax_5.b != 0)
                            break
                    
                    ebx_1 += 1
                    eax_3 = var_c_1 + 0x14
                    var_c_1 = eax_3
                    
                    if (ebx_1 == var_30)
                        goto label_44af57
                
                void* ebx_2 = var_c_1
                sub_445a20(eax_5, 0x19, arg3, arg2, *(ebx_2 + 0x1ea0), *(ebx_2 + 0x1eac), 0, 0)
                void* i_1 = sub_445b50(arg3, arg2)
                int32_t edx_4 = 0
                var_c_1 = i_1
                eax_1 = *(i_1 + 0x94)
                
                if (eax_1 s> 0)
                    while (i_1 != ebx_2 + 0x1e58)
                        edx_4 += 1
                        i_1 += 0x14
                        
                        if (edx_4 s>= eax_1)
                            goto label_44afbc
                    
                    void* ecx_13 = var_c_1 + edx_4 * 0x14
                    sub_51dd40(ecx_13 + 0x44, ecx_13 + 0x58, 
                        (*(var_c_1 + 0x94) - edx_4) * 0x14 + 0xffffffec)
                    eax_1 = 2
                    *(var_c_1 + 0x94) -= 1
                    goto label_44af63
                
            label_44afbc:
                var_48 = "ShOngoingEffectEnd"
                var_4c_1 = 0xaa8
                ecx_1 = "Halt"
        else
            var_48 = "ShAcquireFinish"
            var_4c_1 = 0xab2
            ecx_1 = "c.slot < 6"
    else
        var_48 = "CardGet"
        var_4c_1 = 0x90
        ecx_1 = "idNoMimic < MAX_CARDS"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx_1, "c:\ax2017\jams\shards\code\shardsgame.cpp", var_4c_1, 
        var_48)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
