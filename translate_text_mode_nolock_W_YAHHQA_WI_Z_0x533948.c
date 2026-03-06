// 函数名称: ??$translate_text_mode_nolock@_W@@YAHHQA_WI@Z
// 虚拟地址: 0x533948
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*??$translate_text_mode_nolock@_W@@YAHHQA_WI@Z(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int16_t* ebx = arg2
    int16_t* ebx = arg2
    int32_t ecx_1 = arg1 s>> 6
    int32_t edi
    int32_t var_38 = edi
    int32_t edi_1 = (arg1 & 0x3f) * 0x30
    int32_t var_c = ecx_1
    int32_t eax_2 = (&data_65a778)[ecx_1]
    int32_t var_2c = 0xa
    HANDLE hFile = *(edi_1 + eax_2 + 0x18)
    
    if (arg3 == 0 || *ebx != 0xa)
        *(edi_1 + eax_2 + 0x28) &= 0xfb
    else
        *(edi_1 + eax_2 + 0x28) |= 4
    
    void* eax_3 = &ebx[arg3]
    int16_t* esi = ebx
    int16_t* edx_1 = ebx
    
    if (ebx u< eax_3)
        int16_t var_18_1 = 0x1a
        int16_t var_1c_1 = 0xd
        
        do
            int16_t eax_4 = *edx_1
            
            if (eax_4 == var_18_1)
                int32_t ecx_7 = (&data_65a778)[ecx_1]
                eax_4.b = *(ecx_7 + edi_1 + 0x28)
                
                if ((eax_4.b & 0x40) != 0)
                    *esi = 0x1a
                    esi = &esi[1]
                else
                    eax_4.b |= 2
                    *(ecx_7 + edi_1 + 0x28) = eax_4.b
                
                break
            
            if (eax_4 != var_1c_1)
                edx_1 = &edx_1[1]
            label_533ad9:
                *esi = eax_4
                esi = &esi[1]
                ecx_1 = var_c
            else if (&edx_1[1] u>= eax_3)
                uint32_t numberOfBytesRead
                uint16_t buffer
                
                if (ReadFile(hFile, &buffer, 2, &numberOfBytesRead, nullptr) == 0
                        || numberOfBytesRead == 0)
                    edx_1 = &edx_1[1]
                    eax_4 = 0xd
                    goto label_533ad9
                
                ecx_1 = var_c
                
                if ((*(edi_1 + (&data_65a778)[ecx_1] + 0x28) & 0x48) != 0)
                    uint16_t buffer_1 = buffer
                    
                    if (buffer_1 != 0xa)
                        *esi = 0xd
                        *(edi_1 + (&data_65a778)[ecx_1] + 0x2a) = buffer_1.b
                        *(edi_1 + (&data_65a778)[ecx_1] + 0x2b) = (buffer_1 u>> 8).b
                        *(edi_1 + (&data_65a778)[ecx_1] + 0x2c) = 0xa
                    else
                        *esi = 0xa
                    
                    esi = &esi[1]
                    edx_1 = &edx_1[1]
                else if (buffer != 0xa || esi != ebx)
                    __lseeki64_nolock(arg1, 0xfffffffe, 0xffffffff, FILE_CURRENT)
                    edx_1 = &edx_1[1]
                    
                    if (buffer != 0xa)
                        eax_4 = 0xd
                        goto label_533ad9
                    
                    ecx_1 = var_c
                else
                    *esi = 0xa
                    esi = &esi[1]
                    edx_1 = &edx_1[1]
            else
                int16_t ecx_3 = edx_1[1]
                
                if (ecx_3 == 0xa)
                    eax_4 = 0xa
                
                ebx = arg2
                int32_t eax_5
                eax_5.b = ecx_3 == 0xa
                *esi = eax_4
                esi = &esi[1]
                edx_1 += (eax_5 << 1) + 2
                ecx_1 = var_c
        while (edx_1 u< eax_3)
    
    return (esi - ebx) & 0xfffffffe
}
