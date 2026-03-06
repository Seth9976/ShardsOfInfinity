// 函数名称: ___acrt_FindFirstFileExA
// 虚拟地址: 0x53b0c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HANDLE___acrt_FindFirstFileExA(int32_t arg1, FINDEX_INFO_LEVELS arg2, int32_t arg3, FINDEX_SEARCH_OPS arg4, int32_t arg5, enum FIND_FIRST_EX_FLAGS arg6)
{
    // 第一条实际指令: int32_t var_1c
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x15)
    PWSTR lpFileName
    HANDLE result
    
    if (sub_5349ce(arg1, &var_1c, 0) == 0)
        result = FindFirstFileExW(lpFileName, arg2, arg3, arg4, arg5, arg6)
    else
        result = 0xffffffff
    
    char var_8
    
    if (var_8 != 0)
        __free_base(lpFileName)
    
    return result
}
