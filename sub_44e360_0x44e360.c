// 函数名称: sub_44e360
// 虚拟地址: 0x44e360
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_44e360(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_408
    void arg_8
    void* eax_3 = Mod1::CheckFCreateWriter(&arg_8, 0x400, &var_408, arg1, &arg_8)
    int32_t __saved_esi
    
    if (*(&__saved_esi:3 + eax_3) != 0xa)
        if (eax_3 s>= 0x3ff)
            *(&__saved_esi:3 + eax_3) = 0xa
        else
            *(&var_408 + eax_3) = 0xa
    
    void* esi = data_65ac4c
    
    if (esi == 0)
        sub_48c200(&data_65acf8)
        esi = _fopen(&data_65acf8, U"a")
        
        if (esi == 0)
            int32_t eax_4 = OutputDebugStringA("Failed to open log file\n")
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_4
    
    void* ecx_3 = &var_408
    data_65ac4c = esi
    
    do
        eax_3.b = *ecx_3
        ecx_3 += 1
    while (eax_3.b != 0)
    
    void* var_410_1 = esi
    void var_407
    
    if (_fwrite(&var_408, ecx_3 - &var_407, 1) != 1)
        OutputDebugStringA("Failed to write to log file\n")
    
    int32_t eax_6 = _fflush(esi)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_6
}
