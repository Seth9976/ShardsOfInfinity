// 函数名称: __updatetlocinfoEx_nolock
// 虚拟地址: 0x53815a
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*__updatetlocinfoEx_nolock(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    
    if (arg2 == 0 || arg1 == 0)
        return nullptr
    
    void* edi_1 = *arg1
    
    if (edi_1 != arg2)
        *arg1 = arg2
        ___acrt_add_locale_ref(arg2)
        
        if (edi_1 != 0)
            ___acrt_release_locale_ref(edi_1)
            
            if (*(edi_1 + 0xc) == 0 && edi_1 != &data_5b01d8)
                ___acrt_free_locale(edi_1)
    
    return arg2
}
