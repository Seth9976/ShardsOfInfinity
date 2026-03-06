// 函数名称: ___acrt_locale_add_lc_time_reference
// 虚拟地址: 0x537fe0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_locale_add_lc_time_reference(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || arg1 == &data_54ebc0)
    if (arg1 == 0 || arg1 == &data_54ebc0)
        return 0x7fffffff
    
    int32_t eax = *(arg1 + 0xb0)
    *(arg1 + 0xb0) += 1
    return eax + 1
}
