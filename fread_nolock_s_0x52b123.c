// 函数名称: __fread_nolock_s
// 虚拟地址: 0x52b123
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__fread_nolock_s(uint32_t (* arg1)[0x4], void* arg2, int32_t arg3, uint32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_24 = edi
    
    if (arg3 != 0 && arg4 != 0)
        if (arg1 != 0)
            int32_t* ecx_1 = arg5
            
            if (ecx_1 == 0 || arg4 u> divu.dp.d(0:0xffffffff, arg3))
                if (arg2 != 0xffffffff)
                    _memset(arg1, 0, arg2)
                    ecx_1 = arg5
                
                if (ecx_1 != 0 && arg4 u<= divu.dp.d(0:0xffffffff, arg3))
                    goto label_52b195
                
                *__errno() = 0x16
            else
            label_52b195:
                int32_t* eax_7 = &ecx_1[3]
                int32_t var_10_1
                
                if ((*eax_7 & 0x4c0) == 0)
                    var_10_1 = 0x1000
                else
                    var_10_1 = ecx_1[6]
                
                uint32_t esi_3 = arg3 * arg4
                void* edx_5 = arg2
                uint32_t (* var_14_1)[0x4] = arg1
                uint32_t ebx_1 = esi_3
                bool cond:0_1 = esi_3 != 0
                
                while (true)
                    void* var_8_1 = edx_5
                    
                    if (not(cond:0_1))
                        return arg4
                    
                    void* var_c_1
                    void* eax_12
                    
                    if ((ecx_1[3] & 0x4c0) != 0)
                        eax_12 = ecx_1[2]
                        var_c_1 = eax_12
                    
                    void* eax_13
                    
                    if ((ecx_1[3] & 0x4c0) != 0 && eax_12 != 0)
                        if (eax_12 s>= 0)
                            if (ebx_1 u< eax_12)
                                eax_12 = ebx_1
                                var_c_1 = ebx_1
                            
                            if (eax_12 u> edx_5)
                                break
                            
                            _memcpy_s(var_14_1, edx_5, *ecx_1, eax_12)
                            ecx_1 = arg5
                            eax_13 = var_c_1
                            ebx_1 -= eax_13
                            ecx_1[2] -= eax_13
                            *ecx_1 += eax_13
                            edx_5 = var_8_1 - eax_13
                            goto label_52b2a8
                        
                        *eax_7 |= 0x10
                    else if (ebx_1 u< var_10_1)
                        int32_t* var_28_4 = ecx_1
                        int32_t eax_18 = sub_53432e()
                        
                        if (eax_18 != 0xffffffff)
                            if (var_8_1 == 0)
                                break
                            
                            ebx_1 -= 1
                            edx_5 = var_8_1 - 1
                            *var_14_1 = eax_18.b
                            ecx_1 = arg5
                            var_10_1 = ecx_1[6]
                            eax_13 = 1
                            goto label_52b2a8
                    else
                        uint32_t eax_14 = 0x7fffffff
                        uint32_t var_c_2
                        
                        if (ebx_1 u<= 0x7fffffff)
                            eax_14 = ebx_1
                            var_c_2 = ebx_1
                        else
                            var_c_2 = 0x7fffffff
                        
                        if (var_10_1 != 0)
                            eax_14 = var_c_2 - modu.dp.d(0:eax_14, var_10_1)
                            edx_5 = var_8_1
                        
                        if (eax_14 u> edx_5)
                            break
                        
                        int32_t eax_16 = ecx_1[1]
                        ecx_1[2] = 0
                        *ecx_1 = eax_16
                        eax_13 = __read_nolock(__fileno(ecx_1), var_14_1, eax_14)
                        
                        if (eax_13 == 0)
                            *eax_7 |= 8
                        else if (eax_13 s< 0)
                            *eax_7 |= 0x10
                        else
                            ebx_1 -= eax_13
                            ecx_1 = arg5
                            edx_5 = var_8_1 - eax_13
                        label_52b2a8:
                            var_14_1 += eax_13
                            cond:0_1 = ebx_1 != 0
                            continue
                    return divu.dp.d(0:(esi_3 - ebx_1), arg3)
                
                if (arg2 != 0xffffffff)
                    _memset(arg1, 0, arg2)
                
                *__errno() = 0x22
        else
            *__errno() = 0x16
        
        __invalid_parameter_noinfo()
    
    return 0
}
