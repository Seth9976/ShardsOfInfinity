// 函数名称: ___acrt_SetEnvironmentVariableA
// 虚拟地址: 0x5349eb
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___acrt_SetEnvironmentVariableA(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: BOOL result = 0
    BOOL result = 0
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, nullptr)
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x15)
    PWSTR lpValue = nullptr
    int32_t var_2c
    __builtin_memset(&var_2c, 0, 0x15)
    PWSTR lpName
    
    if (sub_5349ce(arg1, &var_44, 0) == 0)
        PWSTR lpValue_1
        lpValue = lpValue_1
        
        if (sub_5349ce(arg2, &var_2c, 0) == 0)
            result = SetEnvironmentVariableW(lpName, lpValue)
    
    char var_18
    
    if (var_18 != 0)
        __free_base(lpValue)
    
    char var_30
    
    if (var_30 != 0)
        __free_base(lpName)
    
    char var_8
    
    if (var_8 != 0)
        void* eax_3 = var_14
        *(eax_3 + 0x350) &= 0xfffffffd
    
    return result
}
