// 函数名称: __isleadbyte_l
// 虚拟地址: 0x5333bf
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__isleadbyte_l(char arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_14
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, arg2)
    int32_t* var_10
    int32_t result = zx.d(*(*var_10 + (zx.d(arg1) << 1))) & 0x8000
    char var_8
    
    if (var_8 != 0)
        void* ecx_2 = var_14
        *(ecx_2 + 0x350) &= 0xfffffffd
    
    return result
}
