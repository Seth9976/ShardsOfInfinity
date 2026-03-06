// 函数名称: sub_50f1f0
// 虚拟地址: 0x50f1f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_50f1f0(uint32_t (* arg1)[0x4], int32_t arg2)
{
    // 第一条实际指令: int32_t eax = arg2
    int32_t eax = arg2
    uint32_t (* edx)[0x4] = arg1
    int32_t ecx = 0
    int32_t var_10 = eax
    uint32_t (* var_8)[0x4] = edx
    int32_t i = 0
    int32_t var_c = 0
    
    do
        int32_t eax_1 = *(eax + (i << 2))
        
        if (eax_1 s<= 0)
            eax = var_10
        else
            edx = var_8
            int32_t eax_4 = zx.d(i.b + 1) * 0x1010101
            int32_t ecx_3
            int32_t edi_3
            edi_3, ecx_3 = __memfill_u32(&edx[0x50] + ecx, eax_4, eax_1 u>> 2)
            int32_t ecx_6
            int32_t edi_4
            edi_4, ecx_6 = __memfill_u8(edi_3, eax_4.b, eax_1 & 3)
            eax = var_10
            ecx = var_c + *(eax + (i << 2))
            var_c = ecx
        
        i += 1
    while (i s< 0x10)
    
    int32_t eax_5 = 0
    *(ecx + edx + 0x500) = 0
    int32_t ebx = 0
    char* edi_5 = &edx[0x50]
    void* edx_1 = &(*edx)[0x182]
    int32_t* var_c_1 = edx_1
    int32_t i_1
    
    for (i_1 = 1; i_1 s<= 0x10; )
        *(edx_1 + 0x48) = ebx - eax_5
        
        if (zx.d(*edi_5) == i_1)
            uint32_t (* ecx_11)[0x4] = var_8
            int16_t* edx_3 = &ecx_11[0x20] + (ebx << 1)
            int32_t var_10_1
            
            do
                *edx_3 = eax_5.w
                ebx += 1
                var_10_1 = eax_5
                edi_5 = &ecx_11[0x50] + ebx
                edx_3 = &edx_3[1]
                eax_5 += 1
                ecx_11 = var_8
            while (zx.d(*edi_5) == i_1)
            
            if (var_10_1 u>= 1 << i_1.b)
                return 0
        
        int32_t edx_5 = eax_5
        eax_5 *= 2
        int32_t edx_6 = edx_5 << (0x10 - i_1.b)
        i_1 += 1
        *var_c_1 = edx_6
        edx_1 = &var_c_1[1]
        var_c_1 = edx_1
    
    uint32_t (* edi_7)[0x4] = var_8
    (*edi_7)[i_1 + 0x181] = 0xffffffff
    _memset(edi_7, 0xff, 0x200)
    int32_t eax_6 = 0
    int32_t var_10_2 = 0
    
    if (ebx s> 0)
        uint32_t* edx_8 = &edi_7[0x20]
        uint32_t* var_c_2 = edx_8
        
        do
            uint32_t esi_2 = zx.d(*(edi_7 + eax_6 + 0x500))
            
            if (esi_2 u<= 9)
                int32_t esi_3 = 1 << (9 - esi_2.b)
                
                if (esi_3 s> 0)
                    void* edi_10 = (zx.d(*edx_8) << (9 - esi_2.b)) + var_8
                    int32_t eax_8 = zx.d(eax_6.b) * 0x1010101
                    edx_8 = var_c_2
                    int32_t ecx_19
                    int32_t edi_11
                    edi_11, ecx_19 = __memfill_u32(edi_10, eax_8, esi_3 u>> 2)
                    int32_t ecx_22
                    int32_t edi_12
                    edi_12, ecx_22 = __memfill_u8(edi_11, eax_8.b, esi_3 & 3)
                    eax_6 = var_10_2
                
                edi_7 = var_8
            
            eax_6 += 1
            edx_8 += 2
            var_10_2 = eax_6
            var_c_2 = edx_8
        while (eax_6 s< ebx)
    
    return 1
}
