// 函数名称: __fwrite_nolock
// 虚拟地址: 0x5298f6
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__fwrite_nolock(void* arg1, int32_t arg2, uint32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_1c = edi
    
    if (arg2 != 0 && arg3 != 0)
        if (arg4 != 0 && arg1 != 0 && arg3 u<= divu.dp.d(0:0xffffffff, arg2))
            enum CONSOLE_MODE edx_3
            
            if ((arg4[3] & 0x4c0) == 0)
                edx_3 = 0x1000
            else
                edx_3 = arg4[6]
            
            enum CONSOLE_MODE var_8_1 = edx_3
            enum CONSOLE_MODE esi_2 = arg2 * arg3
            enum CONSOLE_MODE edi_3 = esi_2
            
            if (esi_2 != 0)
                while (true)
                    void* var_c_1
                    void* eax_8
                    
                    if (((arg4[3]).b & 0xc0) != 0)
                        eax_8 = arg4[2]
                        var_c_1 = eax_8
                    
                    if (((arg4[3]).b & 0xc0) != 0 && eax_8 != 0)
                        if (eax_8 s>= 0)
                            if (edi_3 u< eax_8)
                                eax_8 = edi_3
                                var_c_1 = edi_3
                            
                            sub_51d5b0(*arg4, arg1, eax_8)
                            arg4[2] -= var_c_1
                            edi_3 -= var_c_1
                            *arg4 += var_c_1
                            arg1 += var_c_1
                            goto label_529a15
                        
                        arg4[3] |= 0x10
                    else if (edi_3 u< edx_3)
                        int32_t* var_20_4 = arg4
                        int32_t var_24_3 = sx.d(*arg1)
                        
                        if (sub_532767() != 0xffffffff)
                            arg1 += 1
                            edi_3 -= 1
                            edx_3 = arg4[6]
                            var_8_1 = edx_3
                            
                            if (edx_3 s<= 0)
                                edx_3 = ENABLE_PROCESSED_INPUT
                                var_8_1 = ENABLE_PROCESSED_INPUT
                            
                            goto label_529a42
                    else
                        if (((arg4[3]).b & 0xc0) == 0)
                            goto label_5299c6
                        
                        if (___acrt_stdio_flush_nolock(arg4) == 0)
                            edx_3 = var_8_1
                        label_5299c6:
                            enum CONSOLE_MODE eax_13 = edi_3
                            enum CONSOLE_MODE var_c_2
                            
                            if (edx_3 == 0)
                                var_c_2 = edi_3
                            else
                                eax_13 = edi_3 - modu.dp.d(0:eax_13, var_8_1)
                                var_c_2 = eax_13
                            
                            if (eax_13 u>= ~ENABLE_PROCESSED_INPUT)
                                eax_13 = ~ENABLE_PROCESSED_INPUT
                                var_c_2 = ~ENABLE_PROCESSED_INPUT
                            
                            enum CONSOLE_MODE eax_15 = __write(__fileno(arg4), arg1, eax_13)
                            
                            if (eax_15 != 0xffffffff)
                                enum CONSOLE_MODE edx_6 = var_c_2
                                
                                if (eax_15 u<= var_c_2)
                                    edx_6 = eax_15
                                
                                arg1 += edx_6
                                edi_3 -= edx_6
                            
                            if (eax_15 == 0xffffffff || eax_15 u< var_c_2)
                                arg4[3] |= 0x10
                            else
                            label_529a15:
                                edx_3 = var_8_1
                            label_529a42:
                                
                                if (edi_3 == 0)
                                    break
                                
                                continue
                    
                    return divu.dp.d(0:(esi_2 - edi_3), arg2)
            
            return arg3
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    return 0
}
