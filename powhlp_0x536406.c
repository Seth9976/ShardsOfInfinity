// 函数名称: __powhlp
// 虚拟地址: 0x536406
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__powhlp(double arg1, int32_t arg2, int32_t arg3, double* arg4)
{
    // 第一条实际指令: long double result_4 = fabs(fconvert.t(arg1))
    long double result_4 = fabs(fconvert.t(arg1))
    long double result
    long double result_2
    
    if (arg3 == 0x7ff00000)
        if (arg2 != 0)
            goto label_53649a
        
        result_2 = float.t(1)
        result_2 - result_4
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            result_2 - result_4
            result = result_2
            
            if ((((result_2 < result_4 ? 1 : 0) << 8
                    | (is_unordered.t(result_2, result_4) ? 1 : 0) << 0xa
                    | (result_2 == result_4 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
                result = result_4
                result_4 = float.t(0)
            
            *arg4 = fconvert.d(result_4)
        else
        label_536432:
            result = result_4
            *arg4 = fconvert.d(fconvert.t(inf.0))
    else if (arg3 != 0xfff00000 || arg2 != 0)
    label_53649a:
        result = result_4
        
        if (arg1:4.d != 0x7ff00000)
            if (arg1:4.d == 0xfff00000 && arg1.d == 0)
                int32_t var_8_1 = 0x7ff00000
                int32_t eax_3
                int32_t edx
                long double result_1
                result_1, eax_3 = __d_inttype(0xfff00000, edx, 0x7ff00000, nanf)
                result = result_1
                result_4 = float.t(0)
                long double x87_r6_1 = fconvert.t(arg2.q)
                x87_r6_1 - result_4
                int32_t ecx_1 = eax_3
                eax_3.w = (x87_r6_1 < result_4 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, result_4) ? 1 : 0) << 0xa
                    | (x87_r6_1 == result_4 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax_3:1.b & 0x41) != 0)
                    x87_r6_1 - result_4
                    eax_3.w = (x87_r6_1 < result_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, result_4) ? 1 : 0) << 0xa
                        | (x87_r6_1 == result_4 ? 1 : 0) << 0xe | 0x3800
                    bool p_4 = unimplemented  {test ah, 0x5}
                    
                    if (p_4)
                        result = result_4
                        result_4 = float.t(1)
                    else if (ecx_1 == 1)
                        result = result_4
                        result_4 = fconvert.t(-0.0)
                else
                    result = result_4
                    result_4 = fconvert.t(inf.0)
                    
                    if (ecx_1 == 1)
                        result_4 = fneg(result_4)
                
                *arg4 = fconvert.d(result_4)
        else if (arg1.d == 0)
            result_4 = float.t(0)
            result_2 = fconvert.t(arg2.q)
            result_2 - result_4
            
            if ((((result_2 < result_4 ? 1 : 0) << 8
                    | (is_unordered.t(result_2, result_4) ? 1 : 0) << 0xa
                    | (result_2 == result_4 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
                goto label_536432
            
            result_2 - result_4
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                result = result_4
                result_4 = float.t(1)
            
            *arg4 = fconvert.d(result_4)
    else
        long double result_3 = float.t(1)
        result_3 - result_4
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            result_3 - result_4
            result = result_3
            
            if ((((result_3 < result_4 ? 1 : 0) << 8
                    | (is_unordered.t(result_3, result_4) ? 1 : 0) << 0xa
                    | (result_3 == result_4 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
                result = result_4
                result_4 = fconvert.t(inf.0)
            
            *arg4 = fconvert.d(result_4)
        else
            result = result_4
            *arg4 = fconvert.d(float.t(0))
    return result
}
