// 函数名称: ___acrt_GetModuleFileNameA
// 虚拟地址: 0x536d40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_GetModuleFileNameA(HMODULE arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void filename
    int32_t result
    
    if (GetModuleFileNameW(arg1, &filename, 0x105) != 0)
        result = _mbstowcs(&filename, arg2, arg3)
    else
        ___acrt_errno_map_os_error(GetLastError())
        result = 0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
