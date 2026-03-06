// 函数名称: ??$common_initialize_environment_nolock@D@@YAHXZ
// 虚拟地址: 0x52ea2c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t??$common_initialize_environment_nolock@D@@YAHXZ()
{
    // 第一条实际指令: if (data_65a640 != 0)
    if (data_65a640 != 0)
        return 0
    
    ___acrt_initialize_multibyte()
    PSTR eax_1 = ___dcrt_get_narrow_environment_from_os()
    int32_t result
    
    if (eax_1 != 0)
        void* eax_2 = create_environment<char>(eax_1)
        
        if (eax_2 != 0)
            data_65a64c = eax_2
            result = 0
            data_65a640 = eax_2
        else
            result = 0xffffffff
        
        __free_base(0)
    else
        result = 0xffffffff
    
    __free_base(eax_1)
    return result
}
