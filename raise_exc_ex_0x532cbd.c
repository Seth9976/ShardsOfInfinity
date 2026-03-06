// 函数名称: __raise_exc_ex
// 虚拟地址: 0x532cbd
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void__raise_exc_ex(uint32_t arg1, int32_t* arg2, char arg3, int32_t arg4, float* arg5, float* arg6, int32_t arg7) __noreturn
{
    // 第一条实际指令: *(arg1 + 4) = 0
    *(arg1 + 4) = 0
    int32_t edi
    int32_t var_c = edi
    uint32_t dwExceptionCode = 0xc000000d
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    
    if ((arg3 & 0x10) != 0)
        uint32_t eax_3 = arg1
        dwExceptionCode = 0xc000008f
        *(eax_3 + 4) |= 1
    
    if ((arg3 & 2) != 0)
        uint32_t eax_4 = arg1
        dwExceptionCode = 0xc0000093
        *(eax_4 + 4) |= 2
    
    if ((arg3 & 1) != 0)
        uint32_t eax_5 = arg1
        dwExceptionCode = 0xc0000091
        *(eax_5 + 4) |= 4
    
    if ((arg3 & 4) != 0)
        uint32_t eax_6 = arg1
        dwExceptionCode = 0xc000008e
        *(eax_6 + 4) |= 8
    
    if ((arg3 & 8) != 0)
        uint32_t eax_7 = arg1
        dwExceptionCode = 0xc0000090
        *(eax_7 + 4) |= 0x10
    
    uint32_t ecx_1 = arg1
    *(ecx_1 + 8) ^= (not.d(*arg2 << 4) ^ *(ecx_1 + 8)) & 0x10
    uint32_t ecx_2 = arg1
    *(ecx_2 + 8) ^= (not.d(*arg2 * 2) ^ *(ecx_2 + 8)) & 8
    uint32_t ecx_3 = arg1
    *(ecx_3 + 8) ^= (not.d(*arg2 u>> 1) ^ *(ecx_3 + 8)) & 4
    uint32_t ecx_4 = arg1
    *(ecx_4 + 8) ^= (not.d(*arg2 u>> 3) ^ *(ecx_4 + 8)) & 2
    uint32_t ecx_5 = arg1
    *(ecx_5 + 8) ^= (not.d(*arg2 u>> 5) ^ *(ecx_5 + 8)) & 1
    char eax_33 = __statfp()
    
    if ((eax_33 & 1) != 0)
        uint32_t ecx_6 = arg1
        *(ecx_6 + 0xc) |= 0x10
    
    if ((eax_33 & 4) != 0)
        uint32_t eax_34 = arg1
        *(eax_34 + 0xc) |= 8
    
    if ((eax_33 & 8) != 0)
        uint32_t eax_35 = arg1
        *(eax_35 + 0xc) |= 4
    
    if ((eax_33 & 0x10) != 0)
        uint32_t eax_36 = arg1
        *(eax_36 + 0xc) |= 2
    
    if ((eax_33 & 0x20) != 0)
        uint32_t eax_37 = arg1
        *(eax_37 + 0xc) |= 1
    
    int32_t eax_39 = *arg2 & 0xc00
    
    if (eax_39 == 0)
        uint32_t eax_46 = arg1
        *eax_46 &= 0xfffffffc
    else
        uint32_t ecx_7
        
        if (eax_39 == 0x400)
            ecx_7 = arg1
            *ecx_7 = (*ecx_7 & 0xfffffffd) | 1
        else if (eax_39 == 0x800)
            ecx_7 = arg1
            *ecx_7 = (*ecx_7 & 0xfffffffe) | 2
        else if (eax_39 == 0xc00)
            uint32_t eax_40 = arg1
            *eax_40 |= 3
    
    int32_t eax_48 = *arg2 & 0x300
    uint32_t ecx_8
    
    if (eax_48 == 0)
        ecx_8 = arg1
        *ecx_8 = (*ecx_8 & 0xffffffeb) | 8
    else if (eax_48 == 0x200)
        ecx_8 = arg1
        *ecx_8 = (*ecx_8 & 0xffffffe7) | 4
    else if (eax_48 == 0x300)
        uint32_t eax_49 = arg1
        *eax_49 &= 0xffffffe3
    uint32_t eax_55 = arg1
    *eax_55 ^= (arg4 << 5 ^ *eax_55) & 0x1ffe0
    uint32_t eax_56 = arg1
    *(eax_56 + 0x20) |= 1
    
    if (arg7 == 0)
        uint32_t ecx_13 = arg1
        *(ecx_13 + 0x20) = (*(ecx_13 + 0x20) & 0xffffffe3) | 2
        *(arg1 + 0x10) = fconvert.d(fconvert.t(*arg5))
        uint32_t eax_68 = arg1
        *(eax_68 + 0x60) |= 1
        uint32_t ecx_14 = arg1
        *(ecx_14 + 0x60) = (*(ecx_14 + 0x60) & 0xffffffe3) | 2
        *(arg1 + 0x50) = fconvert.d(fconvert.t(*arg6))
    else
        uint32_t eax_57 = arg1
        *(eax_57 + 0x20) &= 0xffffffe1
        *(arg1 + 0x10) = fconvert.s(fconvert.t(*arg5))
        uint32_t eax_60 = arg1
        *(eax_60 + 0x60) |= 1
        uint32_t eax_61 = arg1
        *(eax_61 + 0x60) &= 0xffffffe1
        *(arg1 + 0x50) = fconvert.s(fconvert.t(*arg6))
    
    __clrfp()
    RaiseException(dwExceptionCode, 0, 1, &arg1)
    noreturn
}
