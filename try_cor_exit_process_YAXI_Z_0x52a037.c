// 函数名称: ?try_cor_exit_process@@YAXI@Z
// 虚拟地址: 0x52a037
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL __convention("regparm")?try_cor_exit_process@@YAXI@Z(int32_t arg1, int32_t arg2, HMODULE arg3, int32_t arg4)
{
    // 第一条实际指令: HMODULE var_8 = arg3
    HMODULE var_8 = arg3
    HMODULE var_c = arg3
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    var_c = nullptr
    BOOL result = GetModuleHandleExW(0, "m", &var_c)
    
    if (result != 0)
        result = GetProcAddress(var_c, "CorExitProcess")
        
        if (result != 0)
            result = result(arg4)
    
    if (var_c != 0)
        result = FreeLibrary(var_c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
