// 函数名称: ___acrt_invoke_user_matherr
// 虚拟地址: 0x52f1b8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_invoke_user_matherr(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t esi_1 = ror.d(__security_cookie_1 ^ data_65a66c, __security_cookie_1.b & 0x1f)
    int32_t result
    
    if (esi_1 != 0)
        result = esi_1(arg1)
    else
        result = 0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
