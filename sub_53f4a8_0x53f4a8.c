// 函数名称: sub_53f4a8
// 虚拟地址: 0x53f4a8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")sub_53f4a8(int32_t arg1, int16_t arg2 @ x87control, long double arg3 @ st0, int32_t arg4)
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
            int80_t st0_3
            st0_3, arg1 = __startOneArgErrorHandling(1, 0x20, data_54f3b0, 0x5a1b60, var_4)
            return 
    else
        int16_t x87control
        int16_t x87status_1
        
        if (var_4.w != 0x27f)
            x87control, x87status_1 = __fldcw_memmem16(0x27f)
        long double st0_1
        bool c2_1
        st0_1, c2_1 = __fptan(arg3)
        bool c1_1 = unimplemented  {fptan }
        int16_t top
        
        if (not(c2_1))
            top = 0xffff
        
        bool c0
        bool c3
        arg1.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe
            | (top & 7) << 0xb
        int16_t top_1
        
        if (test_bit(arg1:1.b, 2))
            unimplemented  {fld st0, tword [0x54f3fa]}
            c1_1 = false
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            
            do
                long double st0_2
                uint8_t temp0_1
                bool c2_2
                st0_2, c2_2, temp0_1 = __fprem1(unimplemented  {fprem1 }, unimplemented  {fprem1 })
                unimplemented  {fprem1 }
                
                if (not(c2_2))
                    c0 = (temp0_1 & 4) != 0
                    c1_1 = (temp0_1 & 1) != 0
                    c3 = (temp0_1 & 2) != 0
                
                arg1.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_2 ? 1 : 0) << 0xa
                    | (c3 ? 1 : 0) << 0xe | ((top - 1) & 7) << 0xb
            while (test_bit(arg1:1.b, 2))
            
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            int16_t top_3 = top
            st0_1, c2_1 = __fptan(unimplemented  {fptan })
            unimplemented  {fptan }
            
            if (not(c2_1))
                top_3 -= 1
                unimplemented  {fptan }
            
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_1 = top_3 + 1
        else
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_1 = top + 1
        
        if (data_65a980 == 0)
            arg1.w = var_4.w
            
            if (arg1.w != 0x27f)
                arg1.w &= 0x20
                
                if (arg1.w != 0)
                    arg1.w = (c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9 | (c2_1 ? 1 : 0) << 0xa
                        | (c3 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
                    arg1.w &= 0x20
                    
                    if (arg1.w != 0)
                        __startOneArgErrorHandling(8, 0x20, st0_1, 0x5a1b60, var_4)
                        unimplemented  {call 0x5361c7}
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
