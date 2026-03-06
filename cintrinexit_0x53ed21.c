// 函数名称: cintrinexit
// 虚拟地址: 0x53ed21
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidcintrinexit(void* arg1 @ ebp, long double arg2 @ st0)
{
    // 第一条实际指令: if (data_65a980 == 0)
    if (data_65a980 == 0)
        *(arg1 - 0x2d0) = fconvert.d(arg2)
        bool c1_1 = unimplemented  {fst qword [ebp-0x2d0], st0}
        int16_t eax
        eax.b = *(arg1 - 0x90)
        eax.b = eax.b
        
        if (eax.b == 0)
        label_53ed5b:
            bool c0
            bool c2
            bool c3
            
            if ((*(arg1 - 0xa4) & 0x20) == 0 && (((c0 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                    | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe) & 0x20) != 0)
                *(arg1 - 0x8e) = 8
            label_53ee0e:
                void* ebx_2 = *(arg1 - 0x94) + 1
                *(arg1 - 0x8a) = ebx_2
                
                if ((*(arg1 - 0x2c8) & 1) == 0)
                    *(arg1 - 0x86) = *(arg1 + 8)
                    *(arg1 - 0x82) = *(arg1 + 0xc)
                    
                    if (*(ebx_2 + 0xc) != 1)
                        *(arg1 - 0x7e) = *(arg1 + 0x10)
                        *(arg1 - 0x7a) = *(arg1 + 0x14)
                
                *(arg1 - 0x76) = fconvert.d(arg2)
                void* eax_2
                eax_2.b = *(*(arg1 - 0x94) + 0xe)
                sub_53af6f(sx.d(eax_2.b), arg1 - 0x8e, arg1 - 0xa4)
                *(arg1 - 0x76)
        else
            if (eax.b == 0xff)
                if ((*(arg1 - 0x2ca) & 0x7ff0) != 0x7ff0)
                    goto label_53ed5b
                
            label_53edda:
                *(arg1 - 0x8e) = 3
                long double x87_r7_7 = arg2
                arg2 = fconvert.t(-1536.0)
                __fscale(x87_r7_7, arg2)
                long double x87_r7_10 = fabs(arg2)
                long double temp1_1 = fconvert.t(1.7976931348623157e+308)
                x87_r7_10 - temp1_1
                eax = (x87_r7_10 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_10, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp1_1 ? 1 : 0) << 0xe
                
                if (not(test_bit(eax:1.b, 6)) && not(test_bit(eax:1.b, 0)))
                    arg2 = arg2 * fconvert.t(inf.0)
                
                goto label_53ee0e
            
            if (eax.b == 0xfe)
                eax = *(arg1 - 0x2ca) & 0x7ff0
                
                if (eax != 0)
                    if (eax == 0x7ff0)
                        goto label_53edda
                    
                    goto label_53ed5b
                
                *(arg1 - 0x8e) = 4
                long double x87_r7_2 = arg2
                arg2 = fconvert.t(1536.0)
                __fscale(x87_r7_2, arg2)
                long double x87_r7_5 = fabs(arg2)
                long double temp2_1 = fconvert.t(2.2250738585072014e-308)
                x87_r7_5 - temp2_1
                
                if (test_bit(
                        ((x87_r7_5 < temp2_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_5, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe):1.b, 
                        0))
                    arg2 = arg2 * fconvert.t(0.0)
                
                goto label_53ee0e
            
            eax.b = eax.b
            
            if (eax.b != 0)
                *(arg1 - 0x8e) = sx.d(eax.b)
                goto label_53ee0e
    
    int16_t x87control
    int16_t x87status
    x87control, x87status = __fldcw_memmem16(*(arg1 - 0xa4))
}
