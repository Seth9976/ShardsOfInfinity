// 函数名称: ___acrt_SetCurrentDirectoryA
// 虚拟地址: 0x534a91
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

BOOL___acrt_SetCurrentDirectoryA(int32_t arg1)
{
    // 第一条实际指令: BOOL result = 0
    BOOL result = 0
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, nullptr)
    int32_t var_2c
    __builtin_memset(&var_2c, 0, 0x15)
    PWSTR lpPathName
    
    if (sub_5349ce(arg1, &var_2c, 0) == 0)
        result = SetCurrentDirectoryW(lpPathName)
    
    char var_18
    
    if (var_18 != 0)
        __free_base(lpPathName)
    
    char var_8
    
    if (var_8 != 0)
        void* eax_2 = var_14
        *(eax_2 + 0x350) &= 0xfffffffd
    
    return result
}
