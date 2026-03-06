// 函数名称: ___acrt_LCMapStringA
// 虚拟地址: 0x5335e4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_LCMapStringA(int32_t* arg1, int32_t arg2, uint32_t arg3, uint8_t* arg4, char* arg5, PWSTR arg6, int32_t arg7, uint32_t arg8, int32_t arg9)
{
    // 第一条实际指令: void* var_14
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, arg1)
    void var_10
    int32_t result = __acrt_LCMapStringA_stat(&var_10, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
    char var_8
    
    if (var_8 != 0)
        void* ecx_1 = var_14
        *(ecx_1 + 0x350) &= 0xfffffffd
    
    return result
}
