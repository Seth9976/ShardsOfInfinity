// 函数名称: ___acrt_FlsAlloc@4
// 虚拟地址: 0x52f93a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __stdcall___acrt_FlsAlloc@4(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = try_get_function(3, "FlsAlloc", 0x54ea64, "FlsAlloc")
    uint32_t result
    
    if (eax_2 == 0)
        result = TlsAlloc()
    else
        result = eax_2(arg1)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
