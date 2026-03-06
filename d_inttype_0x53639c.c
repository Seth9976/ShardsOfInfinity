// 函数名称: __d_inttype
// 虚拟地址: 0x53639c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __convention("regparm")__d_inttype(int32_t arg1, int32_t arg2, int32_t arg3, double arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_14 = arg3
    var_14.q = fconvert.d(fconvert.t(arg4))
    
    if ((__fpclass(var_14, arg3.w) & 0x90) != 0)
        return 
    
    int32_t var_14_1 = arg3
    var_14_1.q = fconvert.d(fconvert.t(arg4))
    long double st0_1 = __frnd(var_14_1)
    fconvert.t(arg4) - st0_1
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        return 
    
    long double x87_r7_3 = st0_1 * fconvert.t(0.5)
    int32_t var_10_2 = arg3
    int32_t var_14_2 = arg3
    int32_t var_c
    var_c.q = fconvert.d(x87_r7_3)
    var_14_2.q = fconvert.d(x87_r7_3)
    fconvert.t(var_c.q) - __frnd(var_14_2)
    unimplemented  {test ah, 0x44}
}
