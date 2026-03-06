// 函数名称: ?assemble_floating_point_value@__crt_strtox@@YA?AW4SLD_STATUS@@_KH_N1ABVfloating_point_value@1@@Z
// 虚拟地址: 0x525f4f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?assemble_floating_point_value@__crt_strtox@@YA?AW4SLD_STATUS@@_KH_N1ABVfloating_point_value@1@@Z(int32_t arg1, uint32_t arg2, int32_t arg3, char arg4, char arg5, int32_t* arg6)
{
    // 第一条实际指令: uint32_t esi = arg2
    uint32_t esi = arg2
    char ebx = 0
    int32_t edi
    int32_t var_34 = edi
    int32_t edi_1 = arg1
    bool cond:0 = esi != 0
    
    if (esi u<= 0)
        cond:0 = edi_1 != 0xffffffff
    
    int32_t ecx
    
    if (esi u> 0 || edi_1 u> 0xffffffff)
        int32_t eflags_1
        int32_t eax_1
        eax_1, eflags_1 = _bit_scan_reverse(esi)
        int32_t var_28_1 = 0
        int32_t ecx_1 = eax_1 + 1
        
        if (not(cond:0))
            ecx_1 = 0
        
        ecx = ecx_1 + 0x20
    else
        int32_t eflags
        int32_t eax
        eax, eflags = _bit_scan_reverse(edi_1)
        int32_t var_28 = 0
        
        if (edi_1 == 0xffffffff)
            ecx = 0
        else
            ecx = eax + 1
    
    int32_t* eax_2
    eax_2.b = arg6[1].b
    char var_5 = eax_2.b
    int32_t edx
    edx.b = eax_2.b == 0
    int32_t edx_4 = ((edx - 1) & 0x1d) + 0x18 - ecx
    int32_t ecx_3 = arg3 - edx_4
    int32_t var_c = ecx_3
    int32_t eax_3
    eax_3.b = var_5 == 0
    int32_t* var_38
    
    if (ecx_3 s<= ((eax_3 - 1) & 0x380) + 0x7f)
        int32_t eax_7
        eax_7.b = var_5 == 0
        char ecx_14
        int32_t ebx_4
        
        if (ecx_3 s< ((eax_7 - 1) & 0xfffffc80) - 0x7e)
            int32_t eax_13 = arg3 - 1 + ((eax_3 - 1) & 0x380) + 0x7f
            var_c = neg.d(((eax_3 - 1) & 0x380) + 0x7f)
            
            if (eax_13 s>= 0)
                ecx_14 = eax_13.b
            label_526244:
                int32_t eax_54
                uint32_t edx_27
                eax_54, edx_27 = __allshl(edi_1, esi, ecx_14)
                esi = edx_27
                edi_1 = eax_54
            label_52624d:
                ebx_4 = var_c
            label_526253:
                int32_t eax_55
                int32_t edx_28
                eax_55, edx_28 = __crt_strtox::floating_point_value::denormal_mantissa_mask(arg6)
                int32_t edi_4 = edi_1 & eax_55
                int32_t* esi_3 = esi & edx_28
                
                if (arg6[1].b != 0)
                    return __crt_strtox::assemble_floating_point_value_t<double>(arg4, ebx_4, edi_4, 
                        esi_3, __crt_strtox::floating_point_value::as_double(arg6))
                
                int32_t var_38_4 = __crt_strtox::floating_point_value::as_float(arg6)
                return __crt_strtox::assemble_floating_point_value_t<float>(arg4, ebx_4, edi_4, esi_3)
            
            int32_t eax_14 = neg.d(eax_13)
            char var_14_1 = eax_14.b
            
            if (eax_14 u< 0x40)
                int32_t eax_15
                int32_t edx_5
                eax_15, edx_5 = __allshl(1, 0, eax_14.b - 1)
                int32_t eax_17
                int32_t edx_7
                eax_17, edx_7 = __allshl(1, 0, var_14_1)
                char var_7_1 = 1
                
                if (((eax_17 & edi_1) | (edx_7 & esi)) == 0)
                    var_7_1 = 0
                
                int32_t ecx_10
                ecx_10.b = 1
                
                if (((eax_15 & edi_1) | (edx_5 & esi)) == 0)
                    ecx_10.b = 0
                
                int32_t eax_22
                
                if (arg5 != 0)
                    eax_22.b = 0
                
                if (arg5 == 0
                        || (((eax_15 - 1) & edi_1) | (adc.d(edx_5, 0xffffffff, eax_15 u>= 1) & esi))
                        != 0)
                    eax_22.b = 1
                
                if (ecx_10.b != 0 || eax_22.b != 0)
                    int32_t eax_25 = _fegetround()
                    
                    if (eax_25 == 0)
                        if (ecx_10.b != 0 && (eax_22.b != 0 || var_7_1 != 0))
                            ebx = 1
                    else if (eax_25 == 0x100)
                        ebx = arg4
                    else if (eax_25 == 0x200)
                        ebx = arg4 ^ 1
                
                uint32_t eax_27
                int32_t edx_12
                eax_27, edx_12 = __aullshr(edi_1, esi, var_14_1)
                int32_t eax_29
                int32_t edx_13
                edx_13:eax_29 = sx.q(zx.d(ebx))
                edi_1 = eax_27 + eax_29
                esi = adc.d(edx_12, edx_13, eax_27 + eax_29 u< eax_27)
            
            if (eax_14 u>= 0x40 || (edi_1 | esi) == 0)
                __crt_strtox::assemble_floating_point_zero(arg4, arg6)
                return 2
            
            int32_t eax_32
            int32_t edx_14
            eax_32, edx_14 = __crt_strtox::floating_point_value::denormal_mantissa_mask(arg6)
            
            if (esi u< edx_14 || (esi u<= edx_14 && edi_1 u<= eax_32))
                goto label_52624d
            
            ebx_4 = arg3 - eax_13 - edx_4 - 1
            goto label_526253
        
        if (edx_4 s>= 0)
            if (edx_4 s<= 0)
                goto label_52624d
            
            ecx_14 = edx_4.b
            goto label_526244
        
        int32_t edx_15 = neg.d(edx_4)
        char var_10_1 = edx_15.b
        
        if (edx_15 u< 0x40)
            int32_t eax_33
            int32_t edx_16
            eax_33, edx_16 = __allshl(1, 0, edx_15.b - 1)
            int32_t eax_35
            int32_t edx_18
            eax_35, edx_18 = __allshl(1, 0, var_10_1)
            char var_5_2 = 1
            
            if (((eax_35 & edi_1) | (edx_18 & esi)) == 0)
                var_5_2 = 0
            
            int32_t ecx_18
            ecx_18.b = 1
            
            if (((eax_33 & edi_1) | (edx_16 & esi)) == 0)
                ecx_18.b = 0
            
            int32_t eax_40
            
            if (arg5 != 0)
                eax_40.b = 0
            
            if (arg5 == 0
                    || (((eax_33 - 1) & edi_1) | (adc.d(edx_16, 0xffffffff, eax_33 u>= 1) & esi)) != 0)
                eax_40.b = 1
            
            if (ecx_18.b != 0 || eax_40.b != 0)
                int32_t eax_43 = _fegetround()
                
                if (eax_43 == 0)
                    if (ecx_18.b != 0 && (eax_40.b != 0 || var_5_2 != 0))
                        ebx = 1
                else if (eax_43 == 0x100)
                    ebx = arg4
                else if (eax_43 == 0x200)
                    ebx = arg4 ^ 1
            
            uint32_t eax_45
            int32_t edx_23
            eax_45, edx_23 = __aullshr(edi_1, esi, var_10_1)
            int32_t eax_47
            int32_t edx_24
            edx_24:eax_47 = sx.q(zx.d(ebx))
            edi_1 = eax_45 + eax_47
            esi = adc.d(edx_23, edx_24, eax_45 + eax_47 u< eax_45)
        else
            edi_1 = 0
            esi = 0
        
        int32_t eax_48
        int32_t edx_25
        eax_48, edx_25 = __crt_strtox::floating_point_value::normal_mantissa_mask(arg6)
        
        if (esi u< edx_25 || (esi u<= edx_25 && edi_1 u<= eax_48))
            goto label_52624d
        
        edi_1 = edi_1 u>> 1 | esi << 0x1f
        esi u>>= 1
        ebx_4 = var_c + 1
        int32_t eax_49
        eax_49.b = arg6[1].b == 0
        
        if (ebx_4 s<= ((eax_49 - 1) & 0x380) + 0x7f)
            goto label_526253
        
        var_38 = arg6
    else
        var_38 = arg6
    
    __crt_strtox::assemble_floating_point_infinity(arg4, var_38)
    return 3
}
