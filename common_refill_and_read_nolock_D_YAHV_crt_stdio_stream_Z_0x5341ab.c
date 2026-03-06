// 函数名称: ??$common_refill_and_read_nolock@D@@YAHV__crt_stdio_stream@@@Z
// 虚拟地址: 0x5341ab
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t??$common_refill_and_read_nolock@D@@YAHV__crt_stdio_stream@@@Z(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    if ((1 & (arg1[3] u>> 0xd).b) != 0 && (1 & (arg1[3] u>> 0xc).b) == 0)
        if ((1 & (arg1[3] u>> 1).b) == 0)
            arg1[3] |= 1
            
            if ((arg1[3] & 0x4c0) == 0)
                ___acrt_stdio_allocate_buffer_nolock(arg1)
            
            *arg1 = arg1[1]
            arg1[2] = __read(__fileno(arg1), arg1[1], arg1[6])
            int32_t edx_1 = arg1[2]
            
            if (edx_1 != 0 && edx_1 != 0xffffffff)
                if (((arg1[3]).b & 6) == 0)
                    int32_t eax_21
                    eax_21, edx_1 = __fileno(arg1)
                    int32_t eax_22
                    
                    if (eax_21 != 0xffffffff)
                        eax_22, edx_1 = __fileno(arg1)
                    
                    void* eax_27
                    
                    if (eax_21 == 0xffffffff || eax_22 == 0xfffffffe)
                        eax_27 = &data_5b02a0
                    else
                        int32_t edi
                        int32_t var_10_5 = edi
                        int32_t edi_2 = __fileno(arg1) s>> 6
                        int32_t eax_24
                        eax_24, edx_1 = __fileno(arg1)
                        eax_27 = (&data_65a778)[edi_2] + (eax_24 & 0x3f) * 0x30
                    
                    eax_27.b = *(eax_27 + 0x28)
                    eax_27.b &= 0x82
                    
                    if (eax_27.b == 0x82)
                        arg1[3] |= 0x20
                
                int32_t* eax_36 = arg1
                
                if (eax_36[6] == 0x200)
                    if ((1 & (eax_36[3] u>> 6).b) != 0 && (1 & (arg1[3] u>> 8).b) == 0)
                        arg1[6] = 0x1000
                    
                    eax_36 = arg1
                
                eax_36[2] -= 1
                char* ecx_7 = *eax_36
                edx_1.b = *ecx_7
                *eax_36 = &ecx_7[1]
                return zx.d(edx_1.b)
            
            int32_t ecx_9
            ecx_9.b = edx_1 != 0
            arg1[3] |= (ecx_9 << 3) + 8
            arg1[2] = 0
        else
            arg1[3] |= 0x10
    
    return 0xffffffff
}
