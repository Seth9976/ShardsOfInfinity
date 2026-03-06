// 函数名称: ?write_text_utf16le_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDI@Z
// 虚拟地址: 0x532072
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*?write_text_utf16le_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDI@Z(int32_t* arg1, int32_t arg2, int16_t* arg3, void* arg4)
{
    // 第一条实际指令: __alloca_probe(0x1410)
    __alloca_probe(0x1410)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_10 = edi
    HANDLE hFile = *((&data_65a778)[arg2 s>> 6] + (arg2 & 0x3f) * 0x30 + 0x18)
    int16_t* ecx_3 = arg3
    void* i = arg4 + ecx_3
    *arg1 = 0
    void* edi_2 = &arg1[1]
    void* i_1 = i
    *edi_2 = 0
    *(edi_2 + 4) = 0
    
    for (; ecx_3 u< i; i = i_1)
        uint8_t buffer[0x13e4]
        uint8_t (* esi_1)[0x13e4] = &buffer
        
        while (ecx_3 u< i)
            uint32_t eax_5 = zx.d(*ecx_3)
            ecx_3 = &ecx_3[1]
            
            if (eax_5 == 0xa)
                arg1[2] += 2
                *esi_1 = 0xd
                esi_1 = &(*esi_1)[2]
            
            *esi_1 = eax_5.w
            esi_1 = &(*esi_1)[2]
            int32_t __saved_esi
            
            if (esi_1 u>= &__saved_esi:2)
                break
        
        uint32_t nNumberOfBytesToWrite = (esi_1 - &buffer) & 0xfffffffe
        uint32_t numberOfBytesWritten
        
        if (WriteFile(hFile, &buffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr) == 0)
            *arg1 = GetLastError()
            break
        
        uint32_t numberOfBytesWritten_1 = numberOfBytesWritten
        arg1[1] += numberOfBytesWritten_1
        
        if (numberOfBytesWritten_1 u< nNumberOfBytesToWrite)
            break
    
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return arg1
}
