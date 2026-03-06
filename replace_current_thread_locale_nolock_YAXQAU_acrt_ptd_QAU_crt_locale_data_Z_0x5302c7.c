// 函数名称: ?replace_current_thread_locale_nolock@@YAXQAU__acrt_ptd@@QAU__crt_locale_data@@@Z
// 虚拟地址: 0x5302c7
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*?replace_current_thread_locale_nolock@@YAXQAU__acrt_ptd@@QAU__crt_locale_data@@@Z(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x4c) != 0)
    if (*(arg1 + 0x4c) != 0)
        ___acrt_release_locale_ref(*(arg1 + 0x4c))
        void* eax_1 = *(arg1 + 0x4c)
        
        if (eax_1 != data_65a774 && eax_1 != &data_5b01d8 && *(eax_1 + 0xc) == 0)
            ___acrt_free_locale(eax_1)
    
    void* result = arg2
    *(arg1 + 0x4c) = result
    
    if (result != 0)
        result = ___acrt_add_locale_ref(result)
    
    return result
}
