// 函数名称: ?convert_hexadecimal_string_to_floating_type_common@__crt_strtox@@YA?AW4SLD_STATUS@@ABUfloating_point_string@1@ABVfloating_point_value@1@@Z
// 虚拟地址: 0x5281d8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?convert_hexadecimal_string_to_floating_type_common@__crt_strtox@@YA?AW4SLD_STATUS@@ABUfloating_point_string@1@ABVfloating_point_value@1@@Z(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    void* ecx_1 = arg1
    int32_t edi
    int32_t var_18 = edi
    void* edi_1 = nullptr
    char* esi = ecx_1 + 8
    uint32_t edx = 0
    int32_t ebx
    ebx.b = arg2[1].b == 0
    uint32_t var_8_1 = 0
    void* eax_3 = *(ecx_1 + 4) + 8 + ecx_1
    void* var_c_1 = eax_3
    int32_t ebx_4 = ((ebx - 1) & 0x1d) + 0x17 + *ecx_1
    
    if (esi != eax_3)
        do
            int32_t edx_1
            eax_3, edx_1 = __crt_strtox::floating_point_value::normal_mantissa_mask(arg2)
            
            if (var_8_1 u> edx_1)
                break
            
            if (var_8_1 u>= edx_1 && edi_1 u> eax_3)
                break
            
            int32_t ecx_4 = var_8_1 << 4 | edi_1 u>> 0xffffffe4
            int32_t edx_2
            edx_2:eax_3 = sx.q(zx.d(*esi))
            int32_t edi_2 = edi_1 << 4
            edi_1 = edi_2 + eax_3
            esi = &esi[1]
            ebx_4 -= 4
            var_8_1 = adc.d(ecx_4, edx_2, edi_2 + eax_3 u< edi_2)
        while (esi != var_c_1)
        
        ecx_1 = arg1
        edx = var_8_1
    
    eax_3.b = 1
    
    while (true)
        var_8_1.b = eax_3.b
        
        if (esi == var_c_1 || eax_3.b == 0)
            return __crt_strtox::assemble_floating_point_value(edi_1, edx, ebx_4, *(ecx_1 + 0x308), 
                var_8_1.b, arg2)
        
        eax_3.b = *esi
        esi = &esi[1]
        eax_3.b = eax_3.b == 0
}
