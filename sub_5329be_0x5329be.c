// 函数名称: sub_5329be
// 虚拟地址: 0x5329be
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_5329be(int32_t arg1, int32_t arg2, double arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = arg4
    int32_t edi
    int32_t var_a0 = edi
    double arg_c
    double arg_1c
    
    if (__handle_exc(arg1, &arg_1c, esi) == 0)
        int32_t var_50
        int32_t var_50_1 = (var_50 & 0xffffffe3) | 3
        double var_60 = fconvert.d(fconvert.t(arg3))
        void var_90
        __raise_exc_ex(&var_90, &arg4, arg1.b, arg2, &arg_c, &arg_1c, 0)
        noreturn
    
    void* eax_6 = __errcode(arg1.b)
    long double result
    
    if (___acrt_has_user_matherr() == 0 || eax_6 == 0)
        __set_errno_from_matherr(eax_6)
        int16_t x87control
        __ctrlfp(x87control, esi.w, 0xffff)
        result = fconvert.t(arg_1c)
    else
        int32_t var_ac
        var_ac.q = fconvert.d(fconvert.t(arg_1c))
        int32_t var_b4
        var_b4.q = fconvert.d(fconvert.t(arg3))
        int32_t var_bc
        var_bc.q = fconvert.d(fconvert.t(arg_c))
        int32_t var_b8
        int32_t var_b0
        result = __umatherr(eax_6, arg2, var_bc, var_b8, var_b4, var_b0, var_ac, esi.w)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
