// 函数名称: ??$write_buffer_nolock@D@@YA_NDV__crt_stdio_stream@@@Z
// 虚拟地址: 0x53269c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*??$write_buffer_nolock@D@@YA_NDV__crt_stdio_stream@@@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t eax = __fileno(arg1)
    void* result
    char arg_4
    
    if (((arg1[3]).b & 0xc0) == 0)
        int32_t eax_14 = __write(eax, &arg_4, ENABLE_PROCESSED_INPUT) - 1
        result = neg.d(eax_14)
        result.b = sbb.b(result.b, result.b, eax_14 != 0)
        result.b += 1
    else
        int32_t edi_1 = 0
        int32_t eax_1 = arg1[1]
        enum CONSOLE_MODE esi_2 = *arg1 - eax_1
        *arg1 = eax_1 + 1
        arg1[2] = arg1[6] - 1
        
        if (esi_2 s<= 0)
            void* eax_9
            
            if (eax == 0xffffffff || eax == 0xfffffffe)
                eax_9 = &data_5b02a0
            else
                eax_9 = (eax & 0x3f) * 0x30 + (&data_65a778)[eax s>> 6]
            
            if ((*(eax_9 + 0x28) & 0x20) == 0)
                goto label_5326f4
            
            int32_t eax_10
            int32_t edx_1
            eax_10, edx_1 = __lseeki64(eax, 0, 0, FILE_END)
            
            if ((eax_10 & edx_1) != 0xffffffff)
                goto label_5326f4
            
            arg1[3] |= 0x10
            result.b = 1
        else
            edi_1 = __write(eax, arg1[1], esi_2)
        label_5326f4:
            result.b = arg_4
            **(arg1 + 4) = result.b
            result.b = edi_1 == esi_2
    return result
}
