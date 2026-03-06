// 函数名称: ___acrt_update_multibyte_info
// 虚拟地址: 0x530556
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___acrt_update_multibyte_info(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* result = *arg2
    void* result = *arg2
    
    if (result != data_65a774)
        result = data_5b03e4
        
        if ((*(arg1 + 0x350) & result) == 0)
            result = sub_5380e3()
            *arg2 = result
    
    return result
}
