// 函数名称: sub_53ad9c
// 虚拟地址: 0x53ad9c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_53ad9c(int32_t arg1, void* arg2, uint32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* const ebx = arg2
    void* esi = arg4
    void* const var_2c = ebx
    int32_t edi
    int32_t var_38 = edi
    void* const edi_1 = ebx
    
    if (esi == 0)
        esi = &data_65aa90
    
    uint32_t eax_2
    
    if (ebx != 0)
        eax_2 = arg3
    else
        ebx = &data_54f288
        eax_2 = 1
    
    int32_t edi_2 = neg.d(edi_1)
    uint32_t var_20 = eax_2
    uint32_t* edi_4 = sbb.d(edi_2, edi_2, edi_1 != 0) & arg1
    int32_t result
    
    if (eax_2 != 0)
        int16_t eax_3 = *(esi + 6)
        char var_28_1 = eax_3.b
        char eax_7
        int32_t ecx
        uint32_t edx_3
        
        if (eax_3 != 0)
            ecx.b = *(esi + 4)
            edx_3 = *esi
            eax_3.b = ecx.b
            eax_3.b -= 2
            
            if (eax_3.b u> 2)
            labelid_c:
                result = __crt_mbstring::return_illegal_sequence(esi)
            else
                eax_7 = (*(esi + 6)).b
                
                if (eax_7 u>= 1 && eax_7 u< ecx.b)
                    goto label_53ae85
                
            labelid_c:
                result = __crt_mbstring::return_illegal_sequence(esi)
        else
            ecx.b = *ebx
            ebx += 1
            char var_16_1 = ecx.b
            
            if (ecx.b s< 0)
                eax_3.b = ecx.b
                eax_3.b &= 0xe0
                
                if (eax_3.b != 0xc0)
                    eax_3.b = ecx.b
                    eax_3.b &= 0xf0
                    
                    if (eax_3.b == 0xe0)
                        eax_3.b = 3
                        goto label_53ae44
                    
                    eax_3.b = ecx.b
                    eax_3.b &= 0xf8
                    
                    if (eax_3.b == 0xf0)
                        eax_3.b = 4
                        goto label_53ae44
                    
                label_53af39:
                    result = __crt_mbstring::return_illegal_sequence(esi)
                else
                    eax_3.b = 2
                label_53ae44:
                    var_28_1 = eax_3.b
                    ecx.b = eax_3.b
                    edx_3 = ((1 << (7 - eax_3.b)) - 1) & zx.d(var_16_1)
                    eax_7 = var_28_1
                label_53ae85:
                    uint32_t eax_8 = zx.d(eax_7)
                    
                    if (eax_8 u< var_20)
                        var_20 = eax_8
                    
                    void* const var_1c = ebx
                    var_1c -= var_2c
                    
                    while (var_1c u< var_20)
                        uint32_t eax_12
                        eax_12:1.b = *ebx
                        ebx += 1
                        var_1c += 1
                        eax_12.b = eax_12:1.b
                        eax_12.b &= 0xc0
                        
                        if (eax_12.b != 0x80)
                            goto label_53af39_2
                        
                        edx_3 = edx_3 << 6 | (zx.d(eax_12:1.b) & 0x3f)
                    
                    if (var_20 u< eax_8)
                        *(esi + 4) = zx.w(ecx.b)
                        *esi = edx_3
                        *(esi + 6) = zx.w(var_28_1 - var_20.b)
                        result = 0xfffffffe
                    else if ((edx_3 u< 0xd800 || edx_3 u> 0xdfff) && edx_3 u<= 0x10ffff)
                        int32_t var_14_1 = 0x80
                        int32_t var_10_1 = 0x800
                        int32_t var_c_1 = 0x10000
                        
                        if (edx_3 u< (&var_1c)[zx.d(ecx.b)])
                        label_53af39_1:
                            result = __crt_mbstring::return_illegal_sequence(esi)
                        else
                            if (edi_4 != 0)
                                *edi_4 = edx_3
                            
                            *esi = 0
                            *(esi + 4) = 0
                            int32_t edx_5 = neg.d(edx_3)
                            result = sbb.d(edx_5, edx_5, edx_3 != 0) & eax_8
                    else
                    label_53af39_2:
                        result = __crt_mbstring::return_illegal_sequence(esi)
            else
                if (edi_4 != 0)
                    *edi_4 = zx.d(ecx.b)
                
                result.b = ecx.b != 0
    else
        result = 0xfffffffe
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
