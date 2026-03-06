// 函数名称: sub_52e040
// 虚拟地址: 0x52e040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_52e040(int32_t arg1 @ mxcsr, int16_t arg2 @ x87control, long double arg3 @ st0, long double arg4 @ st1)
{
    // 第一条实际指令: if (data_e4abb4 != 0)
    if (data_e4abb4 != 0)
        int32_t eax_2 = arg1 & 0x7f80
        bool cond:0_1 = eax_2 != 0x1f80
        
        if (eax_2 == 0x1f80)
            int16_t x87status_1
            int16_t temp0_1
            temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
            int48_t var_c
            var_c:4.w = temp0_1
            eax_2.w = var_c:4.w
            eax_2.w &= 0x7f
            cond:0_1 = eax_2.w != 0x7f
        
        if (not(cond:0_1))
            return __CIpow_pentium4(arg3, arg4) __tailcall
    
    int32_t result
    int32_t ecx
    int32_t edx
    int16_t x87tag
    int80_t st0_1
    st0_1, result = sub_52e09d(fconvert.d(arg3):4.d, arg2, x87tag, arg3, edx, ecx, (fconvert.d(arg4)).d)
    return result
}
