// 函数名称: ___acrt_fp_strflt_to_string
// 虚拟地址: 0x5387ae
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_fp_strflt_to_string(char* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebx_1
    int32_t __saved_ebx_1
    void* eax_1
    
    if (arg1 != 0 && arg2 u> 0)
        int32_t i = arg3
        *arg1 = 0
        int32_t i_1
        
        i_1 = i s<= 0 ? 0 : i
        
        if (arg2 u> i_1 + 1)
            if (arg4 != 0)
                void* ebx_1 = &arg1[1]
                void* eax_4 = ebx_1
                int32_t edi
                int32_t var_10_1 = edi
                char* edi_1 = *(arg4 + 8)
                *arg1 = 0x30
                
                if (i s> 0)
                    do
                        ebx_1.b = *edi_1
                        
                        if (ebx_1.b == 0)
                            ebx_1.b = 0x30
                        else
                            edi_1 = &edi_1[1]
                        
                        *eax_4 = ebx_1.b
                        eax_4 += 1
                        i -= 1
                    while (i s> 0)
                    
                    ebx_1 = &arg1[1]
                
                *eax_4 = 0
                
                if (i s>= 0 && *edi_1 s>= 0x35)
                    while (true)
                        eax_4 -= 1
                        i.b = *eax_4
                        
                        if (i.b != 0x39)
                            break
                        
                        *eax_4 = 0x30
                    
                    i.b += 1
                    *eax_4 = i.b
                
                if (*arg1 != 0x31)
                    char* ecx_1 = ebx_1
                    
                    do
                        eax_4.b = *ecx_1
                        ecx_1 = &ecx_1[1]
                    while (eax_4.b != 0)
                    
                    sub_51dd40(arg1, ebx_1, ecx_1 - &ecx_1[1] + 1)
                else
                    *(arg4 + 4) += 1
                
                return 0
            
            eax_1 = __errno()
            __saved_ebx_1 = 0x16
        else
            eax_1 = __errno()
            __saved_ebx_1 = 0x22
    else
        eax_1 = __errno()
        __saved_ebx_1 = 0x16
    
    *eax_1 = __saved_ebx_1
    __invalid_parameter_noinfo()
    return __saved_ebx_1
}
