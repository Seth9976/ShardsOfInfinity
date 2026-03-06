// 函数名称: start
// 虚拟地址: 0x53f3a8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")start(int32_t arg1, int16_t arg2 @ x87control, long double arg3 @ st0, int32_t arg4)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t var_4 = edx
    int16_t x87status
    int16_t temp0
    temp0, x87status = __fnstcw_memmem16(arg2)
    var_4.w = temp0
    bool z
    
    if (z)
        if ((arg1 & 0xfffff) != 0 || arg4 != 0)
            return 
        
        if (data_65a980 == 0)
            __startOneArgErrorHandling(1, 0x1e, data_54f3b0, "sin", var_4)
            return 
    else
        int16_t x87control
        int16_t x87status_1
        
        if (var_4.w != 0x27f)
            x87control, x87status_1 = __fldcw_memmem16(0x27f)
        long double st0_1
        bool c2_1
        st0_1, c2_1 = __fsin(arg3)
        long double x87_r0 = st0_1
        bool c1_1 = unimplemented  {fsin }
        bool c0
        bool c3
        arg1.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
        
        if (test_bit(arg1:1.b, 2))
            bool c1_2 = false
            long double x87_r7_2 = x87_r0
            long double x87_r0_1 = data_54f3fa
            
            do
                long double st0_2
                uint8_t temp0_2
                bool c2_2
                st0_2, c2_2, temp0_2 = __fprem1(x87_r7_2, x87_r0_1)
                x87_r7_2 = st0_2
                
                if (not(c2_2))
                    c0 = (temp0_2 & 4) != 0
                    c1_2 = (temp0_2 & 1) != 0
                    c3 = (temp0_2 & 2) != 0
                
                arg1.w = (c0 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9 | (c2_2 ? 1 : 0) << 0xa
                    | (c3 ? 1 : 0) << 0xe | 0x3800
            while (test_bit(arg1:1.b, 2))
            
            long double st0_3
            st0_3, c2_1 = __fsin(x87_r0_1)
            x87_r0 = st0_3
            c1_1 = unimplemented  {fsin }
        
        if (data_65a980 == 0)
            arg1.w = var_4.w
            
            if (arg1.w != 0x27f)
                arg1.w &= 0x20
                
                if (arg1.w != 0)
                    arg1.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe
                    arg1.w &= 0x20
                    
                    if (arg1.w != 0)
                        __startOneArgErrorHandling(8, 0x1e, x87_r0, "sin", var_4)
                        return 
                
                int16_t x87control_2
                int16_t x87status_3
                x87control_2, x87status_3 = __fldcw_memmem16(var_4.w)
            
            return 
    
    int16_t x87control_1
    int16_t x87status_2
    
    if (var_4.w != 0x27f)
        x87control_1, x87status_2 = __fldcw_memmem16(var_4.w)
}
