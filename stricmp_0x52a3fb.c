// 函数名称: __stricmp
// 虚拟地址: 0x52a3fb
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t__stricmp(char* arg1, char* arg2)
{
    // 第一条实际指令: if (data_65a674 != 0)
    if (data_65a674 != 0)
        return __stricmp_l(arg1, arg2, nullptr)
    
    if (arg1 != 0 && arg2 != 0)
        return ___ascii_stricmp(arg1, arg2) __tailcall
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x7fffffff
}
