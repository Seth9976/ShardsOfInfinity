// 函数名称: ___isa_available_init
// 虚拟地址: 0x51c35c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___isa_available_init(int64_t arg1 @ xcr0)
{
    // 第一条实际指令: data_65a2f4 = 0
    data_65a2f4 = 0
    data_5b0080 |= 1
    
    if (IsProcessorFeaturePresent(PF_XMMI64_INSTRUCTIONS_AVAILABLE) != 0)
        int32_t var_14_1 = 0
        data_5b0080 |= 2
        data_65a2f4 = 1
        int32_t eax_1
        int32_t ecx_1
        int32_t edx_1
        int32_t ebx_1
        eax_1, ebx_1, ecx_1, edx_1 = __cpuid(0, 0)
        int32_t var_28 = eax_1
        int32_t eax_2 = var_28
        int32_t eax_7
        int32_t ecx_2
        int32_t edx_2
        int32_t ebx_2
        eax_7, ebx_2, ecx_2, edx_2 = __cpuid(1, 0)
        var_28 = eax_7
        int32_t var_24_2 = ebx_2
        int32_t var_1c_2 = edx_2
        int32_t eax_12
        
        if (((ecx_1 ^ 0x6c65746e) | (edx_1 ^ 0x49656e69) | (ebx_1 ^ 0x756e6547)) == 0)
            eax_12 = var_28 & 0xfff3ff0
        
        int32_t edi_4
        
        if (((ecx_1 ^ 0x6c65746e) | (edx_1 ^ 0x49656e69) | (ebx_1 ^ 0x756e6547)) == 0 && (
                eax_12 == 0x106c0 || eax_12 == 0x20660 || eax_12 == 0x20670 || eax_12 == 0x30650
                || eax_12 == 0x30660 || eax_12 == 0x30670))
            edi_4 = data_65a2f8 | 1
            data_65a2f8 = edi_4
        else
            edi_4 = data_65a2f8
        
        int32_t ebx_4
        
        if (eax_2 s< 7)
            ebx_4 = var_14_1
        else
            int32_t* var_38_1 = &var_28
            int32_t eax_14
            int32_t ecx_3
            int32_t edx_3
            int32_t ebx_3
            eax_14, ebx_3, ecx_3, edx_3 = __cpuid(7, 0)
            var_28 = eax_14
            int32_t var_20_3 = ecx_3
            int32_t var_1c_3 = edx_3
            ebx_4 = ebx_3
            
            if ((ebx_4 & 0x200) != 0)
                data_65a2f8 = edi_4 | 2
        
        if ((ecx_2 & 0x100000) != 0)
            data_5b0080 |= 4
            data_65a2f4 = 2
            
            if ((ecx_2 & 0x8000000) != 0 && (ecx_2 & 0x10000000) != 0)
                int32_t eax_15
                int32_t edx_4
                edx_4, eax_15 = _xgetbv(0, arg1)
                int32_t var_14_2 = edx_4
                
                if ((eax_15 & 6) == 6)
                    int32_t eax_19 = data_5b0080 | 8
                    data_65a2f4 = 3
                    data_5b0080 = eax_19
                    
                    if ((ebx_4.b & 0x20) != 0)
                        data_65a2f4 = 5
                        data_5b0080 = eax_19 | 0x20
    
    return 0
}
