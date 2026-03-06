// 函数名称: ?write_text_ansi_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDI@Z
// 虚拟地址: 0x531f95
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*?write_text_ansi_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDI@Z(int32_t* arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: __alloca_probe(0x140c)
    __alloca_probe(0x140c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_10 = edi
    char* ecx_3 = arg3
    void* edx_1 = arg4 + ecx_3
    uint32_t numberOfBytesWritten = *((&data_65a778)[arg2 s>> 6] + (arg2 & 0x3f) * 0x30 + 0x18)
    *arg1 = 0
    void* edi_2 = &arg1[1]
    void* var_1410 = edx_1
    *edi_2 = 0
    *(edi_2 + 4) = 0
    
    if (ecx_3 u< edx_1)
        uint32_t hFile = numberOfBytesWritten
        
        do
            uint8_t buffer[0x13e4]
            uint8_t (* esi_1)[0x13e4] = &buffer
            void* numberOfBytesWritten_1
            
            while (ecx_3 u< edx_1)
                numberOfBytesWritten_1.b = *ecx_3
                ecx_3 = &ecx_3[1]
                
                if (numberOfBytesWritten_1.b == 0xa)
                    arg1[2] += 1
                    *esi_1 = 0xd
                    esi_1 = &(*esi_1)[1]
                
                *esi_1 = numberOfBytesWritten_1.b
                esi_1 = &(*esi_1)[1]
                int32_t __saved_esi
                
                if (esi_1 u>= &__saved_esi:3)
                    break
            
            uint32_t nNumberOfBytesToWrite = esi_1 - &buffer
            
            if (WriteFile(hFile, &buffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr) == 0)
                *arg1 = GetLastError()
                break
            
            numberOfBytesWritten_1 = numberOfBytesWritten
            arg1[1] += numberOfBytesWritten_1
            
            if (numberOfBytesWritten_1 u< nNumberOfBytesToWrite)
                break
            
            edx_1 = var_1410
        while (ecx_3 u< edx_1)
    
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return arg1
}
