// 函数名称: ___acrt_FlsSetValue@8
// 虚拟地址: 0x52fa3c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __stdcall___acrt_FlsSetValue@8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi
    int32_t* var_c = esi
    char const* const var_10 = "FlsSetValue"
    int32_t* dwTlsIndex = &data_54ea9c
    int32_t eax_2 = try_get_function(6, "FlsSetValue", dwTlsIndex, var_10)
    dwTlsIndex = arg1
    int32_t** esp = &dwTlsIndex
    BOOL result
    
    if (eax_2 == 0)
        result = TlsSetValue(dwTlsIndex, arg2)
        esp = &var_c
    else
        result = eax_2()
    
    *esp
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
