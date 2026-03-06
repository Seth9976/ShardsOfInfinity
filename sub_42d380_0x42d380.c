// 函数名称: sub_42d380
// 虚拟地址: 0x42d380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_42d380(int32_t arg1, void* arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* result = arg4
    _memset(result, 0, 0x30)
    *result = *arg5
    int32_t eax_4 = *arg5 - 1
    int32_t var_66c_2
    char const* const var_668_4
    char* ecx_6
    int32_t eax_22
    
    if (eax_4 u> 8)
        var_668_4 = "ShAIAction_Random"
        var_66c_2 = 0x9e
        ecx_6 = "Halt"
    else
        switch (eax_4)
            case 0
                if (arg5[0xcd] != 0)
                    goto label_42d66d
                
                int32_t var_668_1
                int32_t edx
                
                if (arg5[0xcf] != 0)
                    result[1] = 1
                    var_668_1 = arg5[0xcf]
                    edx = arg5[0xce]
                else if (arg5[0xd1] == 0)
                    if (arg5[0xd5] == 0)
                        result[1] = 5
                        int32_t eax_5 = sub_44d1d0(arg2, arg5[1])
                        __builtin_memset(&result[2], 0, 0x20)
                        result[eax_5 + 2] = *(arg5[1] * 0x9c + arg2 + 0x1e6c)
                        result[0xa] = *(arg2 + 0x2164)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return result
                    
                    result[1] = 4
                    var_668_1 = arg5[0xd5]
                    edx = arg5[0xd4]
                else
                    result[1] = 2
                    var_668_1 = arg5[0xd1]
                    edx = arg5[0xd0]
                
                eax_22 = sub_42d320(eax_4, edx, arg3, var_668_1)
                goto label_42d687
            case 1
                result[1] = 8
                int32_t eax_11 = arg5[0xcd] + arg5[0xcf]
                int32_t ecx_4 = arg5[0xcb]
                
                if (ecx_4 s>= eax_11)
                    ecx_4 = eax_11
                
                result[0xa] = ecx_4
                int32_t edi_2 = arg5[0xcf] << 2
                char var_64c[0x320]
                sub_51d5b0(&var_64c, arg5[0xce], edi_2)
                int32_t esi_1 = arg5[0xcd]
                sub_51d5b0(&var_64c[edi_2], arg5[0xcc], esi_1 << 2)
                int32_t* ecx_5 = arg5
                eax_4 = ecx_5[0xcf] + esi_1
                
                if (eax_4 s< 0xc8)
                    int32_t edx_2 = ecx_4
                    
                    if (edx_2 s<= eax_4)
                        char var_32c[0x324]
                        
                        if (eax_4 s> 0)
                            ecx_5 = __builtin_memcpy(&var_32c, &var_64c, eax_4 << 2)
                        
                        int32_t i = 0
                        
                        if (edx_2 - 1 s> 0)
                            int32_t ebx = eax_4 - 1
                            
                            do
                                int32_t var_668_5 = ebx
                                int32_t eax_17 = sub_452bf0(eax_4, i, ecx_5)
                                int32_t edx_4 = *(&var_32c + (i << 2))
                                ecx_5 = &var_32c[eax_17 << 2]
                                eax_4 = *ecx_5
                                *(&var_32c + (i << 2)) = eax_4
                                i += 1
                                *ecx_5 = edx_4
                            while (i s< edx_2 - 1)
                            
                            result = arg4
                            edx_2 = ecx_4
                        
                        sub_51d5b0(&result[2], &var_32c, edx_2 << 2)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return result
                    
                    var_668_4 = "AIRandomSelectN"
                    var_66c_2 = 0x13
                    ecx_6 = "numSelect <= numCards"
                else
                    var_668_4 = "AIRandomSelectN"
                    var_66c_2 = 0x12
                    ecx_6 = "numCards < MAX_CARDS"
            case 2
                result[1] = 6
            label_42d66d:
                eax_22 = sub_42d320(eax_4, arg5[0xcc], arg3, arg5[0xcd])
                goto label_42d687
            case 3
                result[1] = 9
                eax_22 = *arg5[0xcc]
            label_42d687:
                result[2] = eax_22
                result[0xa] = 1
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            case 4
                int32_t ecx_10 = 0
                result[1] = 9
                
                if (arg5[0xd1] != 0)
                    ecx_10 = 1
                    result[2] = *arg5[0xd0]
                
                if (arg5[0xcd] != 0)
                    result[ecx_10 + 2] = *arg5[0xcc]
                    ecx_10 += 1
                
                if (arg5[0xcf] != 0)
                    result[ecx_10 + 2] = *arg5[0xce]
                    ecx_10 += 1
                
                result[0xa] = ecx_10
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            case 5
                result[1] = 0xb
                goto label_42d66d
            case 6
                result[1] = 0xa
                goto label_42d66d
            case 7
                result[1] = 0xc
                goto label_42d66d
            case 8
                result[1] = 7
                goto label_42d66d
    sub_44e4d0(eax_4, &data_5559b1, ecx_6, "c:\ax2017\jams\shards\code\shardsai.cpp", var_66c_2, 
        var_668_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
