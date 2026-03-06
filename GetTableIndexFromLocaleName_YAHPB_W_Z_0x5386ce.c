// 函数名称: ?GetTableIndexFromLocaleName@@YAHPB_W@Z
// 虚拟地址: 0x5386ce
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?GetTableIndexFromLocaleName@@YAHPB_W@Z(int32_t arg1)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    int32_t eax = 0xe3
    int32_t edi
    int32_t var_20 = edi
    int32_t var_c = 0
    int32_t var_10 = 0xe3
    
    do
        int32_t var_8_1 = 0x55
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(eax + ebx)
        int32_t ecx_2 = (eax_2 - edx_1) s>> 1
        int16_t* esi_1 = (&data_5505a0)[ecx_2 * 2]
        int16_t* ecx_4 = arg1 - esi_1
        int16_t eax_8
        int16_t edx_2
        
        do
            edx_2 = *(ecx_4 + esi_1)
            
            if (edx_2 - 0x41 u<= 0x19)
                edx_2 += 0x20
            
            int16_t edi_1 = *esi_1
            
            if (edi_1 - 0x41 u> 0x19)
                eax_8 = edi_1
            else
                eax_8 = edi_1 + 0x20
            
            esi_1 = &esi_1[1]
            int32_t temp0_1 = var_8_1
            var_8_1 -= 1
            
            if (temp0_1 == 1)
                break
            
            if (edx_2 == 0)
                break
        while (edx_2 == eax_8)
        
        ebx = var_c
        uint32_t eax_9 = zx.d(eax_8)
        uint32_t edx_3 = zx.d(edx_2)
        
        if (edx_3 == eax_9)
            return *((ecx_2 << 3) + &data_5505a4)
        
        if (edx_3 - eax_9 s>= 0)
            eax = var_10
            ebx = ecx_2 + 1
            var_c = ebx
        else
            eax = ecx_2 - 1
            var_10 = eax
    while (ebx s<= eax)
    
    return 0xffffffff
}
