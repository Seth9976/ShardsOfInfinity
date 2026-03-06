// 函数名称: sub_484130
// 虚拟地址: 0x484130
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_484130(int32_t arg1, int32_t* arg2, char* arg3, char arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* ebx = arg3
    char* var_18 = ebx
    sub_48c200(arg3)
    int32_t* eax_2 = _fopen(ebx, "wb")
    
    if (eax_2 == 0)
        eax_2.b = 0
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_2
    
    int32_t* var_2c = eax_2
    int32_t var_c = arg2[2]
    int32_t var_14
    __builtin_strncpy(&var_14, "KCPX", 4)
    int32_t var_10 = 7
    
    if (_fwrite(&var_14, 0xc, 1) == 1)
        uint32_t eax_5 = sub_483cd0(arg2)
        
        if (eax_5.b != 0)
            ebx.b = sub_483d70(eax_5, eax_2, arg2, arg4) != 0
        else
            ebx.b = 0
    else
        ebx.b = 0
    
    _fclose(eax_2)
    
    if (ebx.b == 0)
        char* var_2c_3 = var_18
        sub_52b50d()
    
    int32_t eax_7
    eax_7.b = ebx.b
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_7
}
