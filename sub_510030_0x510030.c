// 函数名称: sub_510030
// 虚拟地址: 0x510030
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_510030(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_e8
    void* edx = &var_e8
    int32_t i_3 = 8
    int16_t* ebx_1 = arg3 + 0x20
    void* var_118 = &var_e8
    int16_t* var_10c = ebx_1
    int32_t i_4 = 8
    int32_t i
    
    do
        int16_t eax_4 = ebx_1[-8]
        int32_t eax_6
        int32_t esi_1
        int32_t edi_1
        
        if (eax_4 != 0 || *ebx_1 != eax_4 || ebx_1[8] != eax_4 || ebx_1[0x10] != eax_4
                || ebx_1[0x18] != eax_4 || ebx_1[0x20] != eax_4 || ebx_1[0x28] != eax_4)
            int32_t esi_2 = sx.d(*ebx_1)
            int32_t ecx = sx.d(ebx_1[0x20])
            int32_t edx_1 = (ecx + esi_2) * 0x8a9
            int32_t edi_3 = edx_1 - ecx * 0x1d8f
            int32_t eax_9 = sx.d(ebx_1[0x10])
            int32_t ecx_2 = esi_2 * 0xc3f + edx_1
            int32_t edx_2 = sx.d(ebx_1[-0x10])
            int32_t esi_4 = (eax_9 + edx_2) << 0xc
            int32_t edx_4 = (edx_2 - eax_9) << 0xc
            int32_t edi_4 = sx.d(ebx_1[0x28])
            int32_t esi_6 = sx.d(ebx_1[-8])
            int32_t ecx_4 = edi_4 + sx.d(ebx_1[8])
            int32_t edx_7 = sx.d(ebx_1[0x18]) + esi_6
            int32_t ecx_5 = ecx_4 * 0xffffe09e
            int32_t ebx_2 = (edx_7 + ecx_4) * 0x12d0
            int32_t edi_6 = ebx_2 - (edi_4 + esi_6) * 0xe65
            int32_t ebx_3 = ebx_2 - (sx.d(var_10c[8]) + sx.d(var_10c[0x18])) * 0x2901
            int32_t eax_19 = edx_7 * 0xfffff9c3
            int32_t edx_11 = esi_6 * 0x1805 + eax_19 + edi_6
            int32_t esi_11 = sx.d(var_10c[8]) * 0x312a + ecx_5 + ebx_3
            int32_t var_114_3 = sx.d(var_10c[0x18]) * 0x20da + eax_19 + ebx_3
            int32_t ebx_7 = sx.d(var_10c[0x28]) * 0x4c7 + edi_6 + ecx_5
            edx = var_118
            *(var_118 - 0x20) = (esi_4 + ecx_2 + 0x200 + edx_11) s>> 0xa
            *(edx + 0xc0) = (esi_4 + ecx_2 + 0x200 - edx_11) s>> 0xa
            *edx = (edx_4 + edi_3 + 0x200 + esi_11) s>> 0xa
            *(edx + 0xa0) = (edx_4 + edi_3 + 0x200 - esi_11) s>> 0xa
            i_3 = i_4
            *(edx + 0x20) = (edx_4 - edi_3 + 0x200 + var_114_3) s>> 0xa
            esi_1 = (edx_4 - edi_3 + 0x200 - var_114_3) s>> 0xa
            eax_6 = (esi_4 - ecx_2 + 0x200 + ebx_7) s>> 0xa
            ebx_1 = var_10c
            edi_1 = (esi_4 - ecx_2 + 0x200 - ebx_7) s>> 0xa
        else
            eax_6 = sx.d(ebx_1[-0x10]) << 2
            *(edx + 0xc0) = eax_6
            esi_1 = eax_6
            *(edx + 0xa0) = eax_6
            edi_1 = eax_6
            *(edx + 0x20) = eax_6
            *edx = eax_6
            *(edx - 0x20) = eax_6
        
        *(edx + 0x60) = edi_1
        ebx_1 = &ebx_1[1]
        *(edx + 0x80) = esi_1
        *(edx + 0x40) = eax_6
        edx += 4
        i = i_3
        i_3 -= 1
        var_10c = ebx_1
        var_118 = edx
        i_4 = i_3
    while (i != 1)
    void var_f0
    void* ebx_8 = &var_f0
    void* var_10c_1 = &var_f0
    void* var_120 = arg1 + 1
    int32_t i_2 = 8
    int32_t result
    int32_t i_1
    
    do
        int32_t ecx_11 = *ebx_8
        int32_t esi_19 = *(ebx_8 - 0x10)
        int32_t edx_14 = (ecx_11 + esi_19) * 0x8a9
        int32_t ecx_12 = *(ebx_8 - 8)
        int32_t esi_21 = esi_19 * 0xc3f + edx_14
        int32_t edi_14 = edx_14 - ecx_11 * 0x1d8f
        int32_t eax_32 = *(ebx_8 - 0x18)
        int32_t eax_34 = (eax_32 - ecx_12) << 0xc
        int32_t edx_16 = (ecx_12 + eax_32) << 0xc
        int32_t edi_15 = *(var_10c_1 - 0x14)
        int32_t edx_19 = *(ebx_8 + 4) + *(var_10c_1 - 0xc)
        int32_t esi_23 = *(ebx_8 - 4) + edi_15
        int32_t ebx_10 = (esi_23 + edx_19) * 0x12d0
        int32_t edx_20 = edx_19 * 0xffffe09e
        int32_t ebx_11 = ebx_10 - (*(var_10c_1 + 4) + edi_15) * 0xe65
        int32_t var_118_2 = ebx_10 - (*(var_10c_1 - 0xc) + *(var_10c_1 - 4)) * 0x2901
        int32_t ecx_22 = esi_23 * 0xfffff9c3
        int32_t eax_39 = edi_15 * 0x1805 + ecx_22 + ebx_11
        int32_t eax_42 = *(var_10c_1 - 0xc) * 0x312a + edx_20 + var_118_2
        int32_t var_118_3 = var_118_2 + *(var_10c_1 - 4) * 0x20da + ecx_22
        int32_t eax_48 = *(var_10c_1 + 4) * 0x4c7 + ebx_11 + edx_20
        int32_t ecx_24 = (edx_16 + esi_21 + 0x1010000 + eax_39) s>> 0x11
        int32_t var_114_4 = ecx_24
        
        if (ecx_24 u> 0xff)
            if (ecx_24 s< 0)
                var_114_4.b = 0
            else if (var_114_4 s> 0xff)
                var_114_4.b = 0xff
        
        int32_t ebx_15 = (edx_16 + esi_21 + 0x1010000 - eax_39) s>> 0x11
        *(var_120 - 1) = var_114_4.b
        
        if (ebx_15 u> 0xff)
            if (ebx_15 s< 0)
                ebx_15.b = 0
            else if (ebx_15 s> 0xff)
                ebx_15.b = 0xff
        
        *(var_120 + 6) = ebx_15.b
        int32_t ebx_17 = (eax_34 + edi_14 + 0x1010000 + eax_42) s>> 0x11
        
        if (ebx_17 u> 0xff)
            if (ebx_17 s< 0)
                ebx_17.b = 0
            else if (ebx_17 s> 0xff)
                ebx_17.b = 0xff
        
        *var_120 = ebx_17.b
        int32_t edx_24 = (eax_34 + edi_14 + 0x1010000 - eax_42) s>> 0x11
        
        if (edx_24 u> 0xff)
            if (edx_24 s< 0)
                edx_24.b = 0
            else if (edx_24 s> 0xff)
                edx_24.b = 0xff
        
        *(var_120 + 5) = edx_24.b
        int32_t edx_26 = (eax_34 - edi_14 + 0x1010000 + var_118_3) s>> 0x11
        
        if (edx_26 u> 0xff)
            if (edx_26 s< 0)
                edx_26.b = 0
            else if (edx_26 s> 0xff)
                edx_26.b = 0xff
        
        *(var_120 + 1) = edx_26.b
        int32_t eax_52 = (eax_34 - edi_14 + 0x1010000 - var_118_3) s>> 0x11
        
        if (eax_52 u> 0xff)
            if (eax_52 s< 0)
                eax_52.b = 0
            else if (eax_52 s> 0xff)
                eax_52.b = 0xff
        
        *(var_120 + 4) = eax_52.b
        result = (edx_16 - esi_21 + 0x1010000 + eax_48) s>> 0x11
        
        if (result u> 0xff)
            if (result s< 0)
                result.b = 0
            else if (result s> 0xff)
                result.b = 0xff
        
        *(var_120 + 2) = result.b
        int32_t ecx_28 = (edx_16 - esi_21 + 0x1010000 - eax_48) s>> 0x11
        
        if (ecx_28 u> 0xff)
            if (ecx_28 s< 0)
                ecx_28.b = 0
            else if (ecx_28 s> 0xff)
                ecx_28.b = 0xff
        
        *(var_120 + 3) = ecx_28.b
        ebx_8 = var_10c_1 + 0x20
        i_1 = i_2
        i_2 -= 1
        var_10c_1 = ebx_8
        var_120 += arg2
    while (i_1 != 1)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
