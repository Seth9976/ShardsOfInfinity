// 函数名称: __control87
// 虚拟地址: 0x538331
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__control87(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int16_t x87status
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg2)
    int32_t ecx_2 = (zx.d(temp0) & 1) << 4
    
    if ((temp0.b & 4) != 0)
        ecx_2 |= 8
    
    if ((temp0.b & 8) != 0)
        ecx_2 |= 4
    
    if ((temp0.b & 0x10) != 0)
        ecx_2 |= 2
    
    if ((temp0.b & 0x20) != 0)
        ecx_2 |= 1
    
    if ((temp0.b & 2) != 0)
        ecx_2 |= 0x80000
    
    uint32_t esi = zx.d(temp0)
    int32_t edi
    int32_t var_20 = edi
    int32_t edx_1 = esi & 0xc00
    
    if (edx_1 != 0)
        if (edx_1 == 0x400)
            ecx_2 |= 0x100
        else if (edx_1 == 0x800)
            ecx_2 |= 0x200
        else if (edx_1 == 0xc00)
            ecx_2 |= 0x300
    
    int32_t esi_1 = esi & 0x300
    
    if (esi_1 == 0)
        ecx_2 |= 0x20000
    else if (esi_1 == 0x200)
        ecx_2 |= 0x10000
    
    if ((0x1000 & temp0) != 0)
        ecx_2 |= 0x40000
    
    int32_t esi_5 = (not.d(arg4) & ecx_2) | (arg3 & arg4)
    
    if (esi_5 != ecx_2)
        int16_t x87control
        int16_t x87status_1
        x87control, x87status_1 = __fldcw_memmem16(__hw_cw(esi_5))
        int16_t x87status_2
        int16_t temp0_1
        temp0_1, x87status_2 = __fnstcw_memmem16(x87control)
        esi_5 = (zx.d(temp0_1) & 1) << 4
        
        if ((temp0_1.b & 4) != 0)
            esi_5 |= 8
        
        if ((temp0_1.b & 8) != 0)
            esi_5 |= 4
        
        if ((temp0_1.b & 0x10) != 0)
            esi_5 |= 2
        
        if ((temp0_1.b & 0x20) != 0)
            esi_5 |= 1
        
        if ((temp0_1.b & 2) != 0)
            esi_5 |= 0x80000
        
        uint32_t edx_2 = zx.d(temp0_1)
        int32_t ecx_5 = edx_2 & 0xc00
        
        if (ecx_5 != 0)
            if (ecx_5 == 0x400)
                esi_5 |= 0x100
            else if (ecx_5 == 0x800)
                esi_5 |= 0x200
            else if (ecx_5 == 0xc00)
                esi_5 |= 0x300
        
        int32_t edx_3 = edx_2 & 0x300
        
        if (edx_3 == 0)
            esi_5 |= 0x20000
        else if (edx_3 == 0x200)
            esi_5 |= 0x10000
        
        if ((0x1000 & temp0_1) != 0)
            esi_5 |= 0x40000
    
    if (data_65a2f4 s< 1)
        return esi_5
    
    int32_t edi_2 = arg4 & 0x308031f
    int32_t eax_6 = arg1 u>> 3 & 0x10
    
    if ((arg1 & 0x200) != 0)
        eax_6 |= 8
    
    if ((arg1 & 0x400) != 0)
        eax_6 |= 4
    
    if ((arg1 & 0x800) != 0)
        eax_6 |= 2
    
    if ((0x1000 & arg1) != 0)
        eax_6 |= 1
    
    if ((arg1 & 0x100) != 0)
        eax_6 |= 0x80000
    
    int32_t edx_5 = arg1 & 0x6000
    
    if (edx_5 != 0)
        if (edx_5 == 0x2000)
            eax_6 |= 0x100
        else if (edx_5 == 0x4000)
            eax_6 |= 0x200
        else if (edx_5 == 0x6000)
            eax_6 |= 0x300
    
    int32_t ecx_7 = arg1 & 0x8040
    
    if (ecx_7 == 0x40)
        eax_6 |= 0x2000000
    else if (ecx_7 == 0x8000)
        eax_6 |= 0x3000000
    else if (ecx_7 == 0x8040)
        eax_6 |= 0x1000000
    
    int32_t ecx_14 = (not.d(edi_2) & eax_6) | (edi_2 & arg3)
    
    if (ecx_14 != eax_6)
        int32_t eax_7 = ___hw_cw_sse2(ecx_14)
        int32_t var_10_1 = eax_7
        int32_t mxcsr = ___set_fpsr_sse2(eax_7)
        eax_6 = mxcsr u>> 3 & 0x10
        
        if ((mxcsr & 0x200) != 0)
            eax_6 |= 8
        
        if ((mxcsr & 0x400) != 0)
            eax_6 |= 4
        
        if ((mxcsr & 0x800) != 0)
            eax_6 |= 2
        
        if ((mxcsr & 0x1000) != 0)
            eax_6 |= 1
        
        if ((mxcsr & 0x100) != 0)
            eax_6 |= 0x80000
        
        int32_t edx_7 = mxcsr & 0x6000
        
        if (edx_7 != 0)
            if (edx_7 == 0x2000)
                eax_6 |= 0x100
            else if (edx_7 == 0x4000)
                eax_6 |= 0x200
            else if (edx_7 == 0x6000)
                eax_6 |= 0x300
        
        int32_t ecx_16 = mxcsr & 0x8040
        
        if (ecx_16 == 0x40)
            eax_6 |= 0x2000000
        else if (ecx_16 == 0x8000)
            eax_6 |= 0x3000000
        else if (ecx_16 == 0x8040)
            eax_6 |= 0x1000000
    
    int32_t ecx_21 = eax_6 | esi_5
    
    if (((eax_6 ^ esi_5) & 0x8031f) == 0)
        return ecx_21
    
    return ecx_21 | 0x80000000
}
