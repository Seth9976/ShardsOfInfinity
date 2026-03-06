// 函数名称: ___acrt_GetSystemTimePreciseAsFileTime@4
// 虚拟地址: 0x52fa95
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcall___acrt_GetSystemTimePreciseAsFileTime@4(char* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* esi
    char* var_c = esi
    char const* const lpSystemTimeAsFileTime = "GetSystemTimePreciseAsFileTime"
    int32_t eax_2 =
        try_get_function(0xd, "GetSystemTimePreciseAsFileTime", 0x54eab0, lpSystemTimeAsFileTime)
    lpSystemTimeAsFileTime = arg1
    char const* const* esp = &lpSystemTimeAsFileTime
    int32_t result
    
    if (eax_2 == 0)
        result = GetSystemTimeAsFileTime(lpSystemTimeAsFileTime)
        esp = &var_c
    else
        result = eax_2()
    
    *esp
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
