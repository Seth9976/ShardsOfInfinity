// 函数名称: sub_539cea
// 虚拟地址: 0x539cea
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_539cea(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5, int32_t arg6, int32_t arg7, int32_t arg8, char* arg9)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t edi
    int32_t var_10 = edi
    int32_t ebx = 0
    *arg9 = 0
    
    if (*((&data_65a778)[arg4 s>> 6] + (arg4 & 0x3f) * 0x30 + 0x28) s>= 0)
        return 0
    
    int32_t esi_1 = arg8
    
    if ((esi_1 & 0x74000) == 0)
        var_8 = 0
        
        if (__get_fmode(&var_8) != 0)
            int32_t var_28
            __builtin_memset(&var_28, 0, 0x14)
            sub_52d729()
            noreturn
        
        int32_t eax_6 = var_8 & 0x74000
        
        if (eax_6 != 0)
            esi_1 |= eax_6
        else
            esi_1 |= 0x4000
    
    int32_t eax_8 = esi_1 & 0x74000
    
    if (eax_8 == 0x4000)
        *arg9 = 0
    else if (eax_8 == 0x10000 || eax_8 == 0x14000)
        if ((esi_1 & 0x301) == 0x301)
            *arg9 = 2
    else if (eax_8 == 0x20000 || eax_8 == 0x24000)
        *arg9 = 2
    else if (eax_8 == 0x40000 || eax_8 == 0x44000)
        *arg9 = 1
    
    if ((esi_1 & 0x70000) != 0 && (arg5 & 0x40) == 0)
        int32_t eax_12 = arg6 & 0xc0000000
        uint32_t ecx_2 = 0
        int32_t esi_2 = 0
        
        if (eax_12 == 0x40000000)
        label_539dd3:
            
            if (arg7 != 0)
                if (arg7 u<= 2)
                label_539e25:
                    esi_2 = 1
                label_539e26:
                    
                    if (ecx_2 == 0)
                        goto label_539ec6
                    
                    goto label_539e33
                
                if (arg7 u<= 4)
                    int32_t eax_14
                    int32_t edx_2
                    eax_14, edx_2 = __lseeki64_nolock(arg4, 0, 0, FILE_END)
                    
                    if ((eax_14 | edx_2) != 0)
                        int32_t eax_16
                        int32_t edx_3
                        eax_16, edx_3 = __lseeki64_nolock(arg4, 0, 0, FILE_BEGIN)
                        
                        if ((eax_16 & edx_3) == 0xffffffff)
                            return *__errno()
                        
                        ecx_2 = arg6 u>> 0x1f
                        goto label_539e26
                    
                label_539ece:
                    int32_t eax_26 = sx.d(*arg9)
                    int32_t esi_3 = 0
                    var_8 = 0
                    
                    if (eax_26 == 1)
                        var_8 = 0xbfbbef
                        esi_3 = 3
                    label_539ef6:
                        
                        if (esi_3 != 0)
                            goto label_539f0c
                    else
                        if (eax_26 != 2)
                            goto label_539ef6
                        
                        var_8 = 0xfeff
                        esi_3 = 2
                    label_539f0c:
                        
                        while (true)
                            int32_t eax_32 = __write(arg4, &var_8 + ebx, esi_3 - ebx)
                            
                            if (eax_32 == 0xffffffff)
                                return *__errno()
                            
                            ebx += eax_32
                            
                            if (esi_3 s<= ebx)
                                return 0
                else if (arg7 == 5)
                    goto label_539e25
        else if (eax_12 == 0x80000000)
        label_539e33:
            var_8 = 0
            int32_t eax_18 = __read_nolock(arg4, &var_8, 3)
            
            if (eax_18 s> 0)
                int32_t ecx_5 = neg.d(esi_2 - 1)
                esi_2 &= sbb.d(ecx_5, ecx_5, esi_2 != 1)
            
            if (eax_18 == 0xffffffff)
                return *__errno()
            
            int32_t ecx_7 = var_8
            
            if (eax_18 == 2)
            label_539e6e:
                uint32_t eax_19 = zx.d(ecx_7.w)
                
                if (eax_19 == 0xfffe)
                    *__errno() = 0x16
                    return *__errno()
                
                if (eax_19 != 0xfeff)
                    goto label_539eb7
                
                int32_t eax_22
                int32_t edx_4
                eax_22, edx_4 = __lseeki64_nolock(arg4, 2, 0, FILE_BEGIN)
                
                if ((eax_22 & edx_4) == 0xffffffff)
                    return *__errno()
                
                *arg9 = 2
                goto label_539ec6
            
            if (eax_18 != 3)
            label_539eb7:
                int32_t eax_24
                int32_t edx_5
                eax_24, edx_5 = __lseeki64_nolock(arg4, 0, 0, FILE_BEGIN)
                
                if ((eax_24 & edx_5) == 0xffffffff)
                    return *__errno()
                
                goto label_539ec6
            
            if (ecx_7 != 0xbfbbef)
                goto label_539e6e
            
            *arg9 = 1
        label_539ec6:
            
            if (esi_2 != 0)
                goto label_539ece
        else if (eax_12 == 0xc0000000)
            goto label_539dd3
    
    return 0
}
