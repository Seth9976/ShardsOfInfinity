// 函数名称: sub_42da60
// 虚拟地址: 0x42da60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __convention("regparm")sub_42da60(int32_t arg1, void* arg2, int32_t arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t result = __security_cookie ^ &__saved_ebp
    uint32_t result_1 = result
    int32_t ebx = 0
    int32_t* edx = arg4
    int32_t esi = 0
    int32_t var_330 = arg3
    int32_t* var_334 = edx
    char const* const var_350
    int32_t var_34c
    char const* const var_348
    int32_t var_32c[0xc9]
    char* ecx_1
    
    if (arg8 s> 0)
        int32_t edx_1 = arg7
        
        while (true)
            result = zx.d((*(edx_1 + (ebx << 2))).w)
            
            if (result u>= 0xc8)
            label_42db07:
                var_348 = "CardGet"
                var_34c = 0x87
                var_350 = "c:\ax2017\jams\shards\code\shardsgame.cpp"
                ecx_1 = "idNoMimic < MAX_CARDS"
                goto label_42dbe6
            
            int32_t edi_1 = *((result << 5) + arg3 + 0x14)
            int32_t ecx = 0
            
            if (esi s<= 0)
            label_42daee:
                result = *(edx_1 + (ebx << 2))
                var_32c[esi] = result
                esi += 1
            else
                while (true)
                    result = zx.d((*(edx_1 + (ecx << 2))).w)
                    
                    if (result u>= 0xc8)
                        goto label_42db07
                    
                    result <<= 5
                    edx_1 = arg7
                    
                    if (edi_1 == *(result + var_330 + 0x14))
                        if (arg6 != 0xa)
                            break
                        
                        goto label_42daee
                    
                    ecx += 1
                    
                    if (ecx s>= esi)
                        goto label_42daee
            
            ebx += 1
            
            if (ebx s>= arg8)
                edx = var_334
                break
            
            arg3 = var_330
    
    int32_t edi_2 = 0
    
    if (esi s<= 0)
    label_42dbc4:
        @__security_check_cookie@4(result_1 ^ &__saved_ebp)
        return result
    
    while (true)
        int32_t edx_3 = *edx
        
        if (edx_3 s>= 0x400)
            var_348 = "ActionAlloc"
            var_34c = 0x12b
            var_350 = "c:\ax2017\jams\shards\code\shardsai.cpp"
            ecx_1 = "numActions < MAX_ACTIONS"
            break
        
        int32_t* ecx_3 = arg2 + edx_3 * 0x30
        edx = var_334
        *edx = edx_3 + 1
        __builtin_memset(&ecx_3[3], 0, 0x1c)
        *ecx_3 = arg5
        ecx_3[1] = arg6
        result = var_32c[edi_2]
        edi_2 += 1
        ecx_3[2] = result
        ecx_3[0xa] = 1
        ecx_3[0xb] = arg9
        
        if (edi_2 s>= esi)
            goto label_42dbc4
    
    label_42dbe6:
    sub_44e4d0(result, &data_5559b1, ecx_1, var_350, var_34c, var_348)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
