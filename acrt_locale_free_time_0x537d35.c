// 函数名称: ___acrt_locale_free_time
// 虚拟地址: 0x537d35
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void___acrt_locale_free_time(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    free_crt_array_internal(arg1, 7)
    free_crt_array_internal(&arg1[7], 7)
    free_crt_array_internal(&arg1[0xe], 0xc)
    free_crt_array_internal(&arg1[0x1a], 0xc)
    free_crt_array_internal(&arg1[0x26], 2)
    __free_base(arg1[0x28])
    __free_base(arg1[0x29])
    __free_base(arg1[0x2a])
    free_crt_array_internal(&arg1[0x2d], 7)
    free_crt_array_internal(&arg1[0x34], 7)
    free_crt_array_internal(&arg1[0x3b], 0xc)
    free_crt_array_internal(&arg1[0x47], 0xc)
    free_crt_array_internal(&arg1[0x53], 2)
    __free_base(arg1[0x55])
    __free_base(arg1[0x56])
    __free_base(arg1[0x57])
    __free_base(arg1[0x58])
}
