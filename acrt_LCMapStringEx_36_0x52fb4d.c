// 函数名称: ___acrt_LCMapStringEx@36
// 虚拟地址: 0x52fb4d
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall___acrt_LCMapStringEx@36(int32_t arg1, uint32_t arg2, wchar16* arg3, int32_t arg4, PWSTR arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = try_get_LCMapStringEx()
    int32_t result
    
    if (eax_2 == 0)
        result = LCMapStringW(___acrt_LocaleNameToLCID@8(arg1, 0), arg2, arg3, arg4, arg5, arg6)
    else
        result = eax_2(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
