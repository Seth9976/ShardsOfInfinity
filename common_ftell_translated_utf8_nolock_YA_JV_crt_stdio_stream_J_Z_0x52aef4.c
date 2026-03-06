// 函数名称: ?common_ftell_translated_utf8_nolock@@YA_JV__crt_stdio_stream@@_J@Z
// 虚拟地址: 0x52aef4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?common_ftell_translated_utf8_nolock@@YA_JV__crt_stdio_stream@@_J@Z(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: __alloca_probe(0x1018)
    __alloca_probe(0x1018)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = __fileno(arg1)
    int32_t result
    
    if (arg1[2] != 0)
        int32_t edi
        int32_t var_10_1 = edi
        int32_t eax_5
        uint32_t edx_1
        edx_1:eax_5 = sx.q(*arg1 - arg1[1])
        uint32_t eax_6
        int32_t edx_2
        eax_6, edx_2 = __alldiv(eax_5, edx_1, 2, 0)
        int32_t edi_1 = (eax_2 & 0x3f) * 0x30
        int32_t esi_2 = eax_2 s>> 6
        int32_t ecx_3 = (&data_65a778)[esi_2]
        int32_t eax_7
        int32_t edx_3
        eax_7, edx_3 = __lseeki64(eax_2, *(edi_1 + ecx_3 + 0x20), *(edi_1 + ecx_3 + 0x24), FILE_BEGIN)
        int32_t ecx_4 = (&data_65a778)[esi_2]
        int32_t var_101c_1 = edx_3
        uint32_t numberOfBytesRead
        uint8_t buffer[0xfe4]
        
        if (eax_7 != *(edi_1 + ecx_4 + 0x20) || edx_3 != *(edi_1 + ecx_4 + 0x24))
            result = 0xffffffff
        else if (ReadFile(*(edi_1 + ecx_4 + 0x18), &buffer, 0x1000, &numberOfBytesRead, nullptr) == 0)
            result = 0xffffffff
        else
            int32_t eax_10
            int32_t edx_5
            eax_10, edx_5 = __lseeki64(eax_2, arg2, arg3, FILE_BEGIN)
            
            if (edx_5 s> 0 || (edx_5 s>= 0 && eax_10 u>= 0))
                uint32_t numberOfBytesRead_1 = numberOfBytesRead
                
                if (edx_2 s< 0 || (edx_2 s<= 0 && eax_6 u<= numberOfBytesRead_1))
                    int32_t edx_6 = 0
                    void* edi_2 = &buffer[numberOfBytesRead_1]
                    uint32_t ecx_5 = &buffer
                    int32_t esi_3 = 0
                    
                    if (eax_6 != 0 || edx_2 != 0)
                        while (ecx_5 u< edi_2)
                            numberOfBytesRead_1.b = *ecx_5
                            
                            if (numberOfBytesRead_1.b != 0xd)
                                ecx_5 += sx.d(*(zx.d(numberOfBytesRead_1.b) + 0x5b02e0))
                            else if (ecx_5 u< edi_2 - 1 && *(ecx_5 + 1) == 0xa)
                                ecx_5 += 1
                            
                            int32_t temp4_1 = esi_3
                            esi_3 += 1
                            edx_6 = adc.d(edx_6, 0, temp4_1 u>= 0xffffffff)
                            ecx_5 += 1
                            
                            if (esi_3 == eax_6)
                                if (edx_6 == edx_2)
                                    break
                    
                    int32_t eax_13
                    int32_t edx_7
                    edx_7:eax_13 = sx.q(ecx_5 - &buffer)
                    result = eax_13 + eax_7
                else
                    result = 0xffffffff
            else
                result = 0xffffffff
    else
        result = arg2
    
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
