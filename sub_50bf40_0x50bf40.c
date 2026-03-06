// 函数名称: sub_50bf40
// 虚拟地址: 0x50bf40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_50bf40(void* arg1, long double arg2 @ st0)
{
    // 第一条实际指令: void* var_38 = arg1
    void* var_38 = arg1
    int32_t eax = *(arg1 + 0x18)
    float xmm0 = *(arg1 + 0x3c)
    (&data_659a34)[*(arg1 + 0x54) * 2](xmm0)
    int32_t ebx = *(arg1 + 0x94)
    int32_t eax_4 = *(arg1 + 8) + ebx
    int32_t ebx_1 = neg.d(ebx)
    int32_t var_10 = ebx_1
    float var_14 = fconvert.s(arg2 / fconvert.t(xmm0))
    int16_t top = 1
    
    while (ebx_1 s< eax_4)
        float var_20
        int32_t var_18
        int32_t var_8
        sub_508490(&var_8, &var_18, ebx_1, var_14, xmm0, *(arg1 + 0x34), &var_8, &var_20)
        
        if (var_8 s>= 0)
            int32_t edi_1 = var_18
            
            if (edi_1 s< eax)
                sub_50be40(arg1, edi_1)
                top -= 1
                unimplemented  {call 0x50be40}
                sub_5090c0(arg1, ebx_1)
                uint32_t (* ebx_2)[0x4] = *(arg1 + 0x7c)
                _memset(ebx_2, 0, (*(arg1 + 0x40) * *(arg1 + 0x14)) << 2)
                int32_t eax_9
                eax_9.b = *(arg1 + 0x38) > 1f
                
                if (eax_9 == 0)
                    sub_50a080(arg1, ebx_2)
                else
                    sub_509d50(arg1, ebx_2)
                
                int32_t ebx_3 = *(arg1 + 0xb0)
                
                if (ebx_3 s>= 0)
                    edi_1 = *(arg1 + 0xac)
                else
                    void* var_38_4 = *(arg1 + 0xa0)
                    *(arg1 + 0xac) = edi_1
                    uint32_t (* var_40_2)[0x4] = *(arg1 + 0xb4)
                    *(arg1 + 0xb0) = 0
                    *(arg1 + 0xa8) = edi_1
                    _memset(var_40_2, 0, var_38_4)
                    ebx_3 = 0
                
                if (var_8 s> edi_1)
                    void* eax_10 = *(arg1 + 0xa0)
                    uint32_t ecx_5 = eax_10 u>> 2
                    var_20 = ecx_5
                    
                    do
                        edi_1 += 1
                        int32_t edx_5
                        
                        if (ebx_3 s>= 0)
                            edx_5 = mods.dp.d(sx.q(ebx_3 - *(arg1 + 0xa8) + edi_1), *(arg1 + 0xa4))
                            eax_10 = *(arg1 + 0xa0)
                        else
                            edx_5 = 0
                            *(arg1 + 0xb0) = 0
                            *(arg1 + 0xa8) = edi_1
                            ebx_3 = 0
                        
                        _memset(*(arg1 + 0xb4) + ((ecx_5 * edx_5) << 2), 0, eax_10)
                        ecx_5 = var_20
                        eax_10 = *(arg1 + 0xa0)
                    while (edi_1 s< var_8)
                    
                    *(arg1 + 0xac) = edi_1
                
                ebx_1 = var_10
                sub_50ba70(arg1, ebx_1)
        
        ebx_1 += 1
        var_10 = ebx_1
    
    int32_t result = sub_50be40(arg1, *(arg1 + 0x18))
    unimplemented  {call 0x50be40}
    return result
}
