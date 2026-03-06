// 函数名称: ?__acrt_get_utf8_acp_compatibility_codepage@@YAIXZ
// 虚拟地址: 0x52b454
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?__acrt_get_utf8_acp_compatibility_codepage@@YAIXZ()
{
    // 第一条实际指令: void* var_14
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, nullptr)
    int32_t result = 0xfde9
    void* var_10
    
    if (*(var_10 + 8) != 0xfde9)
        result = 0
        
        if (___acrt_AreFileApisANSI@0() == 0)
            result = 1
    
    char var_8
    
    if (var_8 != 0)
        void* ecx_1 = var_14
        *(ecx_1 + 0x350) &= 0xfffffffd
    
    return result
}
