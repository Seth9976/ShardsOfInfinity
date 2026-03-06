// 函数名称: __isctype_l
// 虚拟地址: 0x5312e4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__isctype_l(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* var_24
    _LocaleUpdate::_LocaleUpdate(&var_24, arg3)
    int32_t result
    int32_t* var_20
    char var_18
    uint32_t eax_4
    
    if (arg1 s< 0xffffffff || arg1 s> 0xff)
        char eax_6 = (arg1 s>> 8).b
        uint8_t var_14
        int32_t ecx_3
        
        if (__isleadbyte_l(eax_6, &var_20) == 0)
            var_14 = arg1.b
            char var_13_2 = 0
            ecx_3 = 1
        else
            var_14 = eax_6
            char var_13_1 = arg1.b
            char var_12_1 = 0
            ecx_3 = 2
        
        int32_t var_10 = 0
        int16_t var_c_1 = 0
        BOOL eax_11 = ___acrt_GetStringTypeA(&var_20, 1, &var_14, ecx_3, &var_10, var_20[2], 1)
        
        if (eax_11 != 0)
            eax_4 = zx.d(var_10.w)
            goto label_53139a
        
        if (var_18 != eax_11.b)
            void* eax_12 = var_24
            *(eax_12 + 0x350) &= 0xfffffffd
        
        result = 0
    else
        eax_4 = zx.d(*(*var_20 + (zx.d(arg1.b) << 1)))
    label_53139a:
        result = eax_4 & arg2
        
        if (var_18 != 0)
            void* ecx_4 = var_24
            *(ecx_4 + 0x350) &= 0xfffffffd
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
