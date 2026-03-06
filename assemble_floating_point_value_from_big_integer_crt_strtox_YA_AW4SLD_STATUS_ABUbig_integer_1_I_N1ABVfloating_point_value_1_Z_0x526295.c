// 函数名称: ?assemble_floating_point_value_from_big_integer@__crt_strtox@@YA?AW4SLD_STATUS@@ABUbig_integer@1@I_N1ABVfloating_point_value@1@@Z
// 虚拟地址: 0x526295
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?assemble_floating_point_value_from_big_integer@__crt_strtox@@YA?AW4SLD_STATUS@@ABUbig_integer@1@I_N1ABVfloating_point_value@1@@Z(int32_t* arg1, int32_t arg2, char arg3, char arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_30 = edi
    int32_t edx
    edx.b = arg5[1].b == 0
    int32_t var_48
    uint32_t var_44
    int32_t var_40
    char var_3c
    char var_38
    int32_t* var_34
    
    if (arg2 u> 0x40)
        uint32_t edi_2 = arg2 u>> 5
        int32_t ecx_4 = arg2 & 0x1f
        int32_t i_2 = edi_2 - 2
        int32_t eax_4 = i_2 << 5
        int32_t ebx_1 = arg1[i_2 + 1]
        int32_t ebx_2 = arg1[edi_2]
        int32_t var_10_1
        
        if (ecx_4 != 0)
            char ebx_4 = 1
            int32_t eax_13
            int32_t edx_5
            eax_13, edx_5 = __allshl(ebx_2, 0, 0x40 - ecx_4.b - 0x20)
            int32_t eax_17
            int32_t edx_6
            eax_17, edx_6 = __allshl(arg1[edi_2 + 1] & ((1 << ecx_4.b) - 1), 0, 0x40 - ecx_4.b)
            int32_t var_8_2 = eax_13 + eax_17
            uint32_t eax_21
            int32_t edx_7
            eax_21, edx_7 = __aullshr(not.d((1 << ecx_4.b) - 1) & ebx_1, 0, ecx_4.b)
            int32_t ecx_13 = var_8_2 + eax_21
            uint32_t var_c_4 = adc.d(adc.d(edx_5, edx_6, eax_13 + eax_17 u< eax_13), edx_7, 
                var_8_2 + eax_21 u< var_8_2)
            
            if (arg4 != 0 || (((1 << ecx_4.b) - 1) & ebx_1) != 0)
                ebx_4 = 0
            
            var_10_1.b = ebx_4
            
            if (i_2 != 0)
                void* ecx_15 = &arg1[1]
                int32_t i
                
                do
                    bool cond:1_1 = *ecx_15 != 0
                    ecx_15 += 4
                    eax_21.b = cond:1_1
                    eax_21.b -= 1
                    ebx_4 &= eax_21.b
                    var_10_1.b = ebx_4
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            var_34 = arg5
            var_38 = var_10_1.b
            var_3c = arg3
            var_40 = eax_4 + ecx_4 + ((edx - 1) & 0x1d) + 0x17
            var_44 = var_c_4
            var_48 = ecx_13
        else
            int32_t var_14_1 = arg1[i_2 + 1]
            int32_t ecx_7
            ecx_7.b = arg4
            uint32_t edi_4 = adc.d(ebx_2, 0, arg1[i_2 + 1] u< 0)
            ecx_7.b ^= 1
            var_10_1.b = ecx_7.b
            
            if (i_2 != 0)
                void* edx_4 = &arg1[1]
                int32_t i_1
                
                do
                    bool cond:0_1 = *edx_4 != 0
                    edx_4 += 4
                    int32_t* eax_5
                    eax_5.b = cond:0_1
                    eax_5.b -= 1
                    ecx_7.b &= eax_5.b
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                var_10_1.b = ecx_7.b
            
            var_34 = arg5
            var_38 = var_10_1.b
            var_3c = arg3
            var_40 = eax_4 + ((edx - 1) & 0x1d) + 0x17
            var_44 = edi_4
            var_48 = var_14_1
    else
        int32_t esi
        
        if (*arg1 u<= 0)
            esi = 0
        else
            esi = arg1[1]
        
        int32_t ecx_1
        
        if (*arg1 u<= 1)
            ecx_1 = 0
        else
            ecx_1 = arg1[2]
        
        var_34 = arg5
        var_38 = arg4 ^ 1
        var_3c = arg3
        var_40 = ((edx - 1) & 0x1d) + 0x17
        var_44 = adc.d(ecx_1, 0, esi u< 0)
        var_48 = esi
    
    return __crt_strtox::assemble_floating_point_value(var_48, var_44, var_40, var_3c, var_38, var_34)
}
