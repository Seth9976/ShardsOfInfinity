// 函数名称: sub_44e260
// 虚拟地址: 0x44e260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_44e260(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void arg_8
    void* lpOutputString = &arg_8
    void var_408
    int32_t eax_3 = Mod1::CheckFCreateWriter(&arg_8, 0x400, &var_408, arg1, lpOutputString)
    
    if (*(&lpOutputString:3 + eax_3) != 0xa)
        if (eax_3 s>= 0x3ff)
            *(&lpOutputString:3 + eax_3) = 0xa
        else
            *(&var_408 + eax_3) = 0xa
    
    lpOutputString = &var_408
    int32_t result = OutputDebugStringA(lpOutputString)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
