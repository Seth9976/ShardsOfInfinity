// 函数名称: sub_513d80
// 虚拟地址: 0x513d80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_513d80(int32_t arg1, char* arg2, uint32_t (* arg3)[0x4], int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_98 = 0
    uint32_t var_4c[0x4][0x4]
    _memset(&var_4c, 0, 0x44)
    _memset(arg3, 0, 0x400)
    int32_t ecx = 0
    
    if (arg4 s> 0)
        do
            uint32_t eax_2 = zx.d(arg2[ecx])
            ecx += 1
            var_4c[0][eax_2] += 1
        while (ecx s< arg4)
    
    __builtin_memset(&var_4c, 0, 4)
    int32_t ecx_1 = 1
    
    while (var_4c[0][ecx_1] s<= 1 << ecx_1.b)
        ecx_1 += 1
        
        if (ecx_1 s>= 0x10)
            int32_t esi_1 = 0
            int32_t var_9c_1 = 0xf
            uint32_t* edx_1 = &(*arg3)[0x109]
            void* eax_4 = arg3 + 0x466
            uint32_t* var_94_1 = edx_1
            void* var_a0_1 = eax_4
            int32_t ebx_1 = 1
            
            while (true)
                *(eax_4 - 0x64) = esi_1.w
                *eax_4 = var_98.w
                int32_t eax_5 = var_4c[0][ebx_1]
                int32_t ecx_3 = var_9c_1
                int32_t var_8c[0x10]
                var_8c[ebx_1] = esi_1
                int32_t esi_2 = esi_1 + eax_5
                
                if (eax_5 != 0)
                    if (esi_2 - 1 s>= 1 << ebx_1.b)
                        break
                    
                    ecx_3 = var_9c_1
                    edx_1 = var_94_1
                
                esi_1 = esi_2 * 2
                *edx_1 = esi_2 << ecx_3.b
                edx_1 = &edx_1[1]
                int32_t eax_10 = var_98 + var_4c[0][ebx_1]
                ebx_1 += 1
                var_98 = eax_10
                eax_4 = var_a0_1 + 2
                var_94_1 = edx_1
                var_a0_1 = eax_4
                var_9c_1 = ecx_3 - 1
                
                if (ebx_1 s>= 0x10)
                    int32_t ebx_2 = 0
                    arg3[0x46][0] = 0x10000
                    
                    if (arg4 s> 0)
                        do
                            char* eax_12
                            eax_12.b = arg2[ebx_2]
                            uint32_t esi_3 = zx.d(eax_12.b)
                            
                            if (eax_12.b != 0)
                                int32_t edx_5 = zx.d(*(arg3 + (esi_3 << 1) + 0x464))
                                    - zx.d(*(arg3 + (esi_3 << 1) + 0x400)) + var_8c[esi_3]
                                int16_t ecx_7 = ebx_2.w
                                int16_t eax_17
                                eax_17.b = eax_12.b
                                *(arg3 + edx_5 + 0x484) = eax_17.b
                                *(arg3 + (edx_5 << 1) + 0x5a4) = ecx_7
                                
                                if (esi_3 u<= 9)
                                    int32_t eax_18 = var_8c[esi_3]
                                    int32_t ecx_11 = (eax_18 s>> 1 & 0x5555) | ((eax_18 & 0x5555) * 2)
                                    int32_t eax_24 = (ecx_11 u>> 2 & 0x3333) | (ecx_11 & 0x3333) << 2
                                    int32_t ecx_17 = (eax_24 u>> 4 & 0xf0f) | (eax_24 & 0xf0f) << 4
                                    
                                    for (int32_t i = (zx.d((ecx_17 s>> 8).b) | zx.d(ecx_17.b) << 8)
                                            s>> (0x10 - esi_3.b); i s< 0x200; i += 1 << esi_3.b)
                                        *(arg3 + (i << 1)) = (esi_3 << 9).w | ecx_7
                                
                                var_8c[esi_3] += 1
                            
                            ebx_2 += 1
                        while (ebx_2 s< arg4)
                    
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 1
            
            break
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
