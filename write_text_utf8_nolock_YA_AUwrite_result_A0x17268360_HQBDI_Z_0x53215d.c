// 函数名称: ?write_text_utf8_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDI@Z
// 虚拟地址: 0x53215d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*?write_text_utf8_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDI@Z(int32_t* arg1, int32_t arg2, int16_t* arg3, void* arg4)
{
    // 第一条实际指令: __alloca_probe(0x1418)
    __alloca_probe(0x1418)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t* result = arg1
    int32_t edi
    int32_t var_10 = edi
    HANDLE hFile = *((&data_65a778)[arg2 s>> 6] + (arg2 & 0x3f) * 0x30 + 0x18)
    void* ecx_4 = arg4 + arg3
    *result = 0
    void* edi_2 = &result[1]
    *edi_2 = 0
    *(edi_2 + 4) = 0
    int16_t* edi_5 = arg3
    
    if (arg3 u< ecx_4)
        do
            wchar16 var_6b4[0x342]
            wchar16 (* eax_5)[0x342] = &var_6b4
            
            while (edi_5 u< ecx_4)
                uint32_t ecx_5 = zx.d(*edi_5)
                edi_5 = &edi_5[1]
                
                if (ecx_5 == 0xa)
                    *eax_5 = 0xd
                    eax_5 = &(*eax_5)[1]
                
                *eax_5 = ecx_5.w
                eax_5 = &(*eax_5)[1]
                int32_t __saved_esi
                
                if (eax_5 u>= &__saved_esi)
                    break
            
            void var_140c
            int32_t eax_8 = ___acrt_WideCharToMultiByte(0xfde9, 0, &var_6b4, (eax_5 - &var_6b4) s>> 1, 
                &var_140c, 0xd55, 0, 0)
            result = arg1
            int32_t var_141c_1 = eax_8
            
            if (eax_8 == 0)
            label_53227c:
                *result = GetLastError()
                break
            
            int32_t ebx = 0
            
            if (eax_8 != 0)
                do
                    uint32_t numberOfBytesWritten
                    
                    if (WriteFile(hFile, &var_140c + ebx, eax_8 - ebx, &numberOfBytesWritten, nullptr)
                            == 0)
                        goto label_53227c
                    
                    ebx += numberOfBytesWritten
                    eax_8 = var_141c_1
                while (ebx u< eax_8)
            
            result[1] = edi_5 - arg3
        while (edi_5 u< ecx_4)
    
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
