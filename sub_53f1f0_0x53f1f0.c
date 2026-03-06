// 函数名称: sub_53f1f0
// 虚拟地址: 0x53f1f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_53f1f0(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control)
{
    // 第一条实际指令: long double x87_r0
    long double x87_r0
    
    if (data_e4abb4 != 0)
        int32_t eax_2 = arg1 & 0x7f80
        bool cond:0_1 = eax_2 != 0x1f80
        
        if (eax_2 == 0x1f80)
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
            eax_2.w = temp0_1
            eax_2.w &= 0x7f
            cond:0_1 = eax_2.w != 0x7f
        
        if (not(cond:0_1))
            return __CIasin_pentium4(x87_r0) __tailcall
    
    int32_t ecx
    return __cintrindisp1(ecx, 0x54f38a, arg2, x87_r0) __tailcall
}
