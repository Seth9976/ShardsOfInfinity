// 函数名称: __isalpha_l
// 虚拟地址: 0x5234a4
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__isalpha_l(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_14
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, arg2)
    void var_10
    int32_t result = __ischartype_l(arg1, 0x103, &var_10)
    char var_8
    
    if (var_8 != 0)
        void* ecx_1 = var_14
        *(ecx_1 + 0x350) &= 0xfffffffd
    
    return result
}
