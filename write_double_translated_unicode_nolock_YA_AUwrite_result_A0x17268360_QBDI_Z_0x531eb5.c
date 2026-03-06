// 函数名称: ?write_double_translated_unicode_nolock@@YA?AUwrite_result@?A0x17268360@@QBDI@Z
// 虚拟地址: 0x531eb5
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*?write_double_translated_unicode_nolock@@YA?AUwrite_result@?A0x17268360@@QBDI@Z(int32_t* arg1, int16_t* arg2, void* arg3)
{
    // 第一条实际指令: uint32_t ecx
    uint32_t ecx
    uint32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    *arg1 = 0
    void* edi_2 = &arg1[1]
    *edi_2 = 0
    *(edi_2 + 4) = 0
    int16_t* edi_5 = arg2
    void* eax_1 = arg3 + edi_5
    
    if (edi_5 u< eax_1)
        while (true)
            uint32_t ebx_1 = zx.d(*edi_5)
            int16_t eax_2 = __putwch_nolock(ecx)
            ecx = ebx_1
            
            if (eax_2 == ebx_1.w)
                arg1[1] += 2
                
                if (ebx_1 != 0xa)
                    goto label_531f04
                
                int16_t eax_3 = __putwch_nolock(ecx)
                ecx = 0xd
                
                if (eax_3 == 0xd)
                    arg1[1] += 1
                    arg1[2] += 1
                label_531f04:
                    edi_5 = &edi_5[1]
                    
                    if (edi_5 u>= eax_1)
                        break
                    
                    continue
            
            *arg1 = GetLastError()
            break
    
    return arg1
}
