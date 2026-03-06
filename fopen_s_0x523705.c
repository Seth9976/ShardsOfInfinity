// 函数名称: _fopen_s
// 虚拟地址: 0x523705
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t_fopen_s(int32_t* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    int32_t eax_1 = common_fsopen<char>(arg2, arg3, 0x80)
    *arg1 = eax_1
    
    if (eax_1 != 0)
        return 0
    
    return *__errno()
}
