// 函数名称: sub_448960
// 虚拟地址: 0x448960
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_448960(int32_t arg1, uint32_t arg2, void* arg3, int32_t* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* eax = sub_447380(arg3, arg4)
    int32_t* eax = sub_447380(arg3, arg4)
    int32_t ebx = *eax
    void* i_1 = sub_445b50(arg3, arg2)
    int32_t ecx_1 = *(i_1 + 0xc)
    
    if (eax[2] s<= ecx_1)
        if ((ebx & 0x20000000) == 0)
            if (arg6 != 1)
            label_4489b5:
                
                if (zx.d(ebx.b) != 6)
                label_4489cb:
                    int32_t* eax_3 = sub_447380(arg3, arg4)
                    void* i_2 = *(arg3 + 0x1a04)
                    int32_t edx_3 = *eax_3
                    uint32_t ecx_3 = zx.d(edx_3.b)
                    char eax_4 = sub_449de0(eax_3, arg2, arg3, ecx_3, edx_3 - ecx_3, eax_3[1], arg4, 0)
                    int32_t ecx_5 = *(arg3 + 0x1a04)
                    void* i = i_2
                    int32_t var_28_2
                    char const* const var_24_3
                    char* ecx_9
                    
                    if (i != ecx_5)
                        do
                            if (ecx_5 != 1)
                                var_24_3 = "ShYieldPop"
                                var_28_2 = 0x485
                                ecx_9 = "g.numYlds == 1"
                                goto label_448b8e
                            
                            ecx_5 = 0
                            *(arg3 + 0x1a04) = 0
                        while (i != 0)
                    
                    if (eax_4 != 0 && (ebx & 0x10000000) == 0 && ebx s>= 0)
                        if ((ebx & 0x100000) != 0)
                            i = sub_445af0(arg3, arg2)
                            
                            if (*(i + 0x1c) != 1)
                                int32_t edx_8
                                i, edx_8 = sub_446600(i, arg2, arg3, 6, arg2)
                                
                                if (i s<= 0)
                                    *arg5 = 0
                                    
                                    if (sub_446600(arg5, edx_8, arg3, 7, arg2) s<= 0)
                                        return 2
                                    
                                    return 1
                        
                        if ((ebx & 0x800000) != 0)
                            i = sub_445b50(arg3, arg2)
                        
                        if ((ebx & 0x800000) == 0 || *(i + 0x1d) == 1
                                || (*(i + 0x21) != 0 && *(i + 0x1f) != 0 && *(i + 0x22) != 0))
                            if ((ebx & 0x200000) != 0)
                                i = sub_446540(i, 4, arg3, 9, arg2)
                            
                            if ((ebx & 0x200000) == 0 || i s> 0)
                                if ((ebx & &__dos_header) != 0)
                                    i = sub_446460(i, 0xa, arg3, arg2)
                                
                                if ((ebx & &__dos_header) == 0 || i s> 1)
                                    if ((ebx & 0x1000000) != 0)
                                        i = i_1
                                    
                                    if ((ebx & 0x1000000) == 0 || *(i + 8) s>= 0x32)
                                        if ((ebx & 0x2000000) == 0)
                                            return 0
                                        
                                        if ((ebx & 0x22000) != 0x22000)
                                            var_24_3 = "TestPowerConditions"
                                            var_28_2 = 0x6ed
                                            ecx_9 = "Halt"
                                        label_448b8e:
                                            sub_44e4d0(i, &data_5559b1, ecx_9, 
                                                "c:\ax2017\jams\shards\code\shardsgame.cpp", var_28_2, 
                                                var_24_3)
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_44e680()
                                            noreturn
                                        
                                        if (sub_446540(i, 1, arg3, 0xa, arg2) s>= 3)
                                            return 0
                        else if (sub_448890(i, arg2, arg3, arg5) != 0)
                            return 1
                else if (*(i_1 + 0x10) s>= 1 && ecx_1 s< 0x1e)
                    goto label_4489cb
        else if (arg6 == 1)
            goto label_4489b5
    
    return 2
}
