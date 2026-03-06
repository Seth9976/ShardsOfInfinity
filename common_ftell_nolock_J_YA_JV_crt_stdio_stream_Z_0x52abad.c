// 函数名称: ??$common_ftell_nolock@_J@@YA_JV__crt_stdio_stream@@@Z
// 虚拟地址: 0x52abad
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t??$common_ftell_nolock@_J@@YA_JV__crt_stdio_stream@@@Z(int32_t* arg1)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (arg1 != 0)
        int32_t edi
        int32_t var_20_1 = edi
        int32_t eax_1 = __fileno(arg1)
        
        if (arg1[2] s< 0)
            arg1[2] = 0
        
        int32_t eax_2
        int32_t edx_1
        eax_2, edx_1 = __lseeki64(eax_1, 0, 0, FILE_CURRENT)
        
        if (edx_1 s<= 0 && (edx_1 s< 0 || eax_2 u< 0))
            result = 0xffffffff
        else if (((arg1[3]).b & 0xc0) != 0)
            int32_t eax_9 = eax_1 s>> 6
            int32_t ecx_4 = (eax_1 & 0x3f) * 0x30
            int32_t eax_10
            eax_10.b = *((&data_65a778)[eax_9] + ecx_4 + 0x29)
            char var_8_1 = eax_10.b
            uint32_t result_2
            uint32_t edx_4
            edx_4:result_2 = sx.q(*arg1 - arg1[1])
            uint32_t result_1 = result_2
            uint32_t ebx_1 = edx_4
            int32_t* esi_3
            
            if (((arg1[3]).b & 3) != 0)
                if (var_8_1 != 1 || (*((&data_65a778)[eax_9] + ecx_4 + 0x2d) & 2) == 0)
                    if (*((&data_65a778)[eax_9] + ecx_4 + 0x28) s>= 0)
                        goto label_52acdf
                    
                    esi_3 = arg1
                    int32_t eax_15
                    int32_t edx_6
                    eax_15, edx_6 = count_newline_bytes(result_1, esi_3[1], *esi_3, var_8_1)
                    uint32_t result_4 = result_1
                    result_1 += eax_15
                    ebx_1 = adc.d(ebx_1, edx_6, result_4 + eax_15 u< result_4)
                    goto label_52ace2
                
                result = common_ftell_translated_utf8_nolock(arg1, eax_2, edx_1)
            else if (((arg1[3] u>> 2).b & 1) != 0)
            label_52acdf:
                esi_3 = arg1
            label_52ace2:
                int32_t ecx_8 = eax_2
                
                if ((ecx_8 | edx_1) == 0)
                    result = result_1
                else if (((esi_3[3]).b & 1) == 0)
                    if (var_8_1 == 1)
                        uint32_t result_3
                        uint32_t edx_10
                        result_3, edx_10 = __alldiv(result_1, ebx_1, 2, 0)
                        ecx_8 = eax_2
                        result_1 = result_3
                    
                    result = result_1 + ecx_8
                else
                    result = common_ftell_read_mode_nolock(arg1, ecx_8, edx_1, result_1, ebx_1)
            else
                *__errno() = 0x16
                result = 0xffffffff
        else
            int32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(arg1[2])
            result = eax_2 - eax_7
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    return result
}
