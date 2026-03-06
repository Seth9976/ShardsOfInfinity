// 函数名称: __handle_exc
// 虚拟地址: 0x532aa0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__handle_exc(int32_t arg1, double* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi_1 = arg1 & 0x1f
    int32_t esi_1 = arg1 & 0x1f
    long double st0
    long double x87_r0
    
    if ((arg1.b & 8) != 0 && (arg3.b & 1) != 0)
        __set_statfp(x87_r0, 1)
        esi_1 &= 0xfffffff7
    else if ((arg1.b & arg3.b & 4) != 0)
        __set_statfp(x87_r0, 4)
        esi_1 &= 0xfffffffb
    else if ((arg1.b & 1) != 0 && (arg3.b & 8) != 0)
        __set_statfp(x87_r0, 8)
        int32_t eax_4 = arg3 & 0xc00
        double* ecx_3
        
        if (eax_4 == 0)
            ecx_3 = arg2
            long double x87_r0_5 = float.t(0)
            long double temp0_1 = fconvert.t(*ecx_3)
            x87_r0_5 - temp0_1
            eax_4.w = (x87_r0_5 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_5, temp0_1) ? 1 : 0) << 0xa
                | (x87_r0_5 == temp0_1 ? 1 : 0) << 0xe | 0x800
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (p_4)
            label_532b77:
                *ecx_3 = fconvert.d(fneg(fconvert.t(inf.0)))
            else
                *ecx_3 = fconvert.d(fconvert.t(inf.0))
        else if (eax_4 == 0x400)
            ecx_3 = arg2
            long double x87_r0_4 = float.t(0)
            long double temp1_1 = fconvert.t(*ecx_3)
            x87_r0_4 - temp1_1
            eax_4.w = (x87_r0_4 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_4, temp1_1) ? 1 : 0) << 0xa
                | (x87_r0_4 == temp1_1 ? 1 : 0) << 0xe | 0x800
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                goto label_532b77
            
            *ecx_3 = fconvert.d(fconvert.t(1.7976931348623157e+308))
        else if (eax_4 == 0x800)
            long double x87_r0_3 = float.t(0)
            long double temp2_1 = fconvert.t(*arg2)
            x87_r0_3 - temp2_1
            eax_4.w = (x87_r0_3 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_3, temp2_1) ? 1 : 0) << 0xa
                | (x87_r0_3 == temp2_1 ? 1 : 0) << 0xe | 0x800
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                *arg2 = fconvert.d(fconvert.t(inf.0))
            else
                *arg2 = fconvert.d(fneg(fconvert.t(1.7976931348623157e+308)))
        else if (eax_4 == 0xc00)
            long double x87_r0_1 = float.t(0)
            long double temp3_1 = fconvert.t(*arg2)
            x87_r0_1 - temp3_1
            eax_4.w = (x87_r0_1 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_1, temp3_1) ? 1 : 0) << 0xa
                | (x87_r0_1 == temp3_1 ? 1 : 0) << 0xe | 0x800
            long double x87_r0_2 = fconvert.t(1.7976931348623157e+308)
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                *arg2 = fconvert.d(x87_r0_2)
            else
                *arg2 = fconvert.d(fneg(x87_r0_2))
        esi_1 &= 0xfffffffe
    else if ((arg1.b & 2) != 0 && (arg3.b & 0x10) != 0)
        int32_t edi
        int32_t var_20_1 = edi
        long double x87_r7_1 = fconvert.t(*arg2)
        int32_t edi_3 = arg1 u>> 4 & 1
        long double x87_r6_1 = float.t(0)
        x87_r6_1 - x87_r7_1
        double* eax_5
        eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (not(p_5))
            x87_r0 = x87_r7_1
            edi_3 = 1
        else
            int32_t ecx
            int32_t var_28_1 = ecx
            int32_t var_2c_1 = ecx
            var_2c_1.q = fconvert.d(x87_r7_1)
            int32_t var_8
            st0 = __decomp(edi_3, var_2c_1, &var_8)
            int32_t edx_2 = var_8 - 0x600
            long double x87_r6_2 = float.t(0)
            long double x87_r7_3
            
            if (edx_2 s>= 0xfffffbce)
                x87_r6_2 - st0
                
                if ((((x87_r6_2 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, st0) ? 1 : 0) << 0xa
                        | (x87_r6_2 == st0 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
                    var_8 = 0
                else
                    var_8 = 1
                
                double var_14_1
                var_14_1:6.w = (fconvert.d(st0):6.w & 0xf) | 0x10
                
                if (edx_2 s< 0xfffffc03)
                    uint32_t eax_10 = var_14_1.d
                    int32_t i_1 = 0xfffffc03 - edx_2
                    uint32_t edx_3 = var_14_1:4.d
                    int32_t i
                    
                    do
                        if ((var_14_1.b & 1) != 0 && edi_3 == 0)
                            edi_3 += 1
                        
                        eax_10 u>>= 1
                        bool cond:3_1 = (var_14_1:4.b & 1) == 0
                        var_14_1.d = eax_10
                        
                        if (not(cond:3_1))
                            eax_10 |= 0x80000000
                            var_14_1.d = eax_10
                        
                        edx_3 u>>= 1
                        var_14_1:4.d = edx_3
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                x87_r7_3 = fconvert.t(var_14_1)
                
                if (var_8 != 0)
                    x87_r7_3 = fneg(x87_r7_3)
            else
                x87_r7_3 = st0 * x87_r6_2
                edi_3 = 1
            
            *arg2 = fconvert.d(x87_r7_3)
        
        if (edi_3 != 0)
            __set_statfp(x87_r0, 0x10)
        
        esi_1 &= 0xfffffffd
    
    if ((arg1.b & 0x10) != 0 && (arg3.b & 0x20) != 0)
        __set_statfp(st0, 0x20)
        esi_1 &= 0xffffffef
    
    int32_t result
    result.b = esi_1 == 0
    return result
}
