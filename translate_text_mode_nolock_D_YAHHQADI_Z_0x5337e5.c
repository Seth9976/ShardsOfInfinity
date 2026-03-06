// 函数名称: ??$translate_text_mode_nolock@D@@YAHHQADI@Z
// 虚拟地址: 0x5337e5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$translate_text_mode_nolock@D@@YAHHQADI@Z(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edx_1 = arg1 s>> 6
    int32_t edx_1 = arg1 s>> 6
    int32_t edi
    int32_t var_2c = edi
    int32_t edi_1 = (arg1 & 0x3f) * 0x30
    int32_t var_10 = edx_1
    int32_t eax_2 = (&data_65a778)[edx_1]
    HANDLE hFile = *(eax_2 + edi_1 + 0x18)
    
    if (arg3 == 0 || *arg2 != 0xa)
        *(eax_2 + edi_1 + 0x28) &= 0xfb
    else
        *(eax_2 + edi_1 + 0x28) |= 4
    
    void* eax_3 = &arg2[arg3]
    char* var_c = arg2
    char* esi = arg2
    
    if (arg2 u< eax_3)
        char* eax_4 = arg2
        
        do
            int32_t ecx
            ecx.b = *eax_4
            
            if (ecx.b == 0x1a)
                int32_t ecx_1 = (&data_65a778)[edx_1]
                eax_4.b = *(ecx_1 + edi_1 + 0x28)
                
                if ((eax_4.b & 0x40) != 0)
                    *esi = 0x1a
                    esi = &esi[1]
                else
                    eax_4.b |= 2
                    *(ecx_1 + edi_1 + 0x28) = eax_4.b
                
                break
            
            eax_4 = &eax_4[1]
            
            if (ecx.b != 0xd)
                *esi = ecx.b
                esi = &esi[1]
                var_c = eax_4
            else if (eax_4 u>= eax_3)
                var_c = eax_4
                uint32_t numberOfBytesRead
                uint8_t buffer
                BOOL eax_8
                eax_8, ecx = ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr)
                
                if (eax_8 == 0 || numberOfBytesRead == 0)
                    edx_1 = var_10
                    *esi = 0xd
                    esi = &esi[1]
                else
                    edx_1 = var_10
                    
                    if ((*((&data_65a778)[edx_1] + edi_1 + 0x28) & 0x48) != 0)
                        ecx.b = buffer
                        
                        if (ecx.b != 0xa)
                            *esi = 0xd
                            *((&data_65a778)[edx_1] + edi_1 + 0x2a) = ecx.b
                        else
                            *esi = ecx.b
                        
                        esi = &esi[1]
                    else if (buffer != 0xa || esi != arg2)
                        __lseeki64_nolock(arg1, 0xffffffff, 0xffffffff, FILE_CURRENT)
                        edx_1 = var_10
                        
                        if (buffer != 0xa)
                            *esi = 0xd
                            esi = &esi[1]
                    else
                        *esi = 0xa
                        esi = &esi[1]
                
                eax_4 = var_c
            else
                ecx:1.b = *eax_4
                
                if (ecx:1.b == 0xa)
                    ecx.b = ecx:1.b
                
                *esi = ecx.b
                esi = &esi[1]
                void* const eax_6
                eax_6.b = ecx:1.b == 0xa
                eax_4 = eax_6 + 1 + var_c
                var_c = eax_4
        while (eax_4 u< eax_3)
    
    return esi - arg2
}
