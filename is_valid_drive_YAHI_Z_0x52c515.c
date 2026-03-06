// 函数名称: ?is_valid_drive@@YAHI@Z
// 虚拟地址: 0x52c515
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?is_valid_drive@@YAHI@Z(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result
    
    if (arg1 u> 0x1a)
        *___doserrno() = 0xf
        *__errno() = 0xd
        __invalid_parameter_noinfo()
        result = 0
    else if (arg1 != 0)
        int16_t rootPathName = arg1.w + 0x40
        int16_t var_e_1 = 0x3a
        int16_t var_c_1 = 0x5c
        int16_t var_a_1 = 0
        uint32_t eax_6 = GetDriveTypeW(&rootPathName)
        
        if (eax_6 == 0 || eax_6 == 1)
            result = 0
        else
            result = 1
    else
        result = 1
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
