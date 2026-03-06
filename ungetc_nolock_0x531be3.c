// 函数名称: __ungetc_nolock
// 虚拟地址: 0x531be3
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__ungetc_nolock(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_10 = edi
    int32_t* edx = &arg2[3]
    
    if (((*edx u>> 0xc).b & 1) != 0)
        goto label_531c6d
    
    int32_t eax_2 = __fileno(arg2)
    void* edi_1 = &data_5b02a0
    int32_t ecx_3
    int32_t edx_2
    void* ebx_2
    
    if (eax_2 == 0xffffffff || eax_2 == 0xfffffffe)
        ecx_3 = eax_2 s>> 6
        ebx_2 = &data_5b02a0
        edx_2 = eax_2 & 0x3f
    else
        edx_2 = eax_2 & 0x3f
        ecx_3 = eax_2 s>> 6
        ebx_2 = edx_2 * 0x30 + (&data_65a778)[ecx_3]
    
    if (*(ebx_2 + 0x29) == 0 && eax_2 != 0xffffffff && eax_2 != 0xfffffffe)
        edi_1 = edx_2 * 0x30 + (&data_65a778)[ecx_3]
    
    if (*(ebx_2 + 0x29) == 0 && (*(edi_1 + 0x2d) & 1) == 0)
        edx = &arg2[3]
    label_531c6d:
        
        if (arg1 != 0xffffffff && (((*edx).b & 1) != 0 || ((*edx).b & 6) == 6))
            int32_t eax_5 = arg2[1]
            
            if (eax_5 == 0)
                ___acrt_stdio_allocate_buffer_nolock(arg2)
                eax_5 = arg2[1]
                edx = &arg2[3]
            
            int32_t ecx_8 = *arg2
            
            if (ecx_8 != eax_5)
                goto label_531cab
            
            if (arg2[2] == 0)
                *arg2 = ecx_8 + 1
            label_531cab:
                uint8_t eax_8 = (*edx u>> 0xc).b
                char* ecx_10 = *arg2 - 1
                *arg2 = ecx_10
                
                if ((eax_8 & 1) == 0)
                    *ecx_10 = arg1.b
                label_531cc2:
                    arg2[2] += 1
                    *edx &= 0xfffffff7
                    *edx |= 1
                    return zx.d(arg1.b)
                
                if (*ecx_10 == arg1.b)
                    goto label_531cc2
                
                *arg2 = &ecx_10[1]
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    return 0xffffffff
}
