// 函数名称: __decomp
// 虚拟地址: 0x533084
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__decomp(int32_t arg1 @ edi, double arg2, int32_t* arg3)
{
    // 第一条实际指令: long double result = fconvert.t(arg2)
    long double result = fconvert.t(arg2)
    long double x87_r6 = float.t(0)
    x87_r6 - result
    int32_t eax
    eax.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
        | (x87_r6 == result ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    int32_t esi
    
    if (p)
        int32_t edi
        edi.w = arg2:6.w
        int32_t ecx
        int32_t edx_1
        
        if ((zx.d(edi.w) & 0x7ff0) == 0)
            ecx = arg2:4.d
            edx_1 = arg2.d
        
        if ((zx.d(edi.w) & 0x7ff0) == 0 && ((ecx & 0xfffff) != 0 || edx_1 != 0))
            x87_r6 - result
            esi = 0xfffffc03
            uint32_t eax_1
            eax_1.w = (x87_r6 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r6, result) ? 1 : 0) << 0xa
                | (x87_r6 == result ? 1 : 0) << 0xe
            int32_t ebx_1 = 0
            
            if ((eax_1:1.b & 0x41) == 0)
                ebx_1 = 1
            
            if ((arg2:6.b & 0x10) == 0)
                uint8_t eax_3
                
                do
                    ecx *= 2
                    arg2:4.d = ecx
                    eax_3 = (ecx u>> 0x10).b
                    
                    if (edx_1 s< 0)
                        ecx |= 1
                        arg2:4.d = ecx
                        eax_3 = (ecx u>> 0x10).b
                    
                    edx_1 *= 2
                    esi -= 1
                while ((eax_3 & 0x10) == 0)
                edi.w = arg2:6.w
                arg2.d = edx_1
            
            edi.w &= 0xffef
            arg2:6.w = edi.w
            
            if (ebx_1 != 0)
                arg2:6.w = edi.w | 0x8000
            
            int32_t var_14_1 = ecx
            int32_t var_18_1 = ecx
            var_18_1.q = fconvert.d(fconvert.t(arg2))
            result = __set_exp(var_18_1, 0, arg1)
        else
            int32_t var_14_2 = ecx
            int32_t var_18_2 = ecx
            var_18_2.q = fconvert.d(x87_r6)
            result = __set_exp(var_18_2, 0, arg1)
            esi = (zx.d(edi.w) u>> 4 & 0x7ff) - 0x3fe
    else
        esi = 0
    
    *arg3 = esi
    return result
}
