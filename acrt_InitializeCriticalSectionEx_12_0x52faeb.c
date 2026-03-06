// 函数名称: ___acrt_InitializeCriticalSectionEx@12
// 虚拟地址: 0x52faeb
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __stdcall___acrt_InitializeCriticalSectionEx@12(CRITICAL_SECTION* arg1, uint32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 =
        try_get_function(0x12, "InitializeCriticalSectionEx", 0x54ead4, "InitializeCriticalSectionEx")
    BOOL result
    
    if (eax_2 == 0)
        result = InitializeCriticalSectionAndSpinCount(arg1, arg2)
    else
        result = eax_2(arg1, arg2, arg3)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
