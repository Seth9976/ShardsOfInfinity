// 函数名称: __strnicmp
// 虚拟地址: 0x52a21a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__strnicmp(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: if (data_65a674 != 0)
    if (data_65a674 != 0)
        return __strnicmp_l(arg1, arg2, arg3, nullptr)
    
    if (arg1 == 0 || arg2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x7fffffff
    
    if (arg3 u<= 0x7fffffff)
        return ___ascii_strnicmp(arg1, arg2, arg3) __tailcall
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x7fffffff
}
