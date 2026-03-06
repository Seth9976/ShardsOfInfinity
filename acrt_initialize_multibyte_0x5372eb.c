// 函数名称: ___acrt_initialize_multibyte
// 虚拟地址: 0x5372eb
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_initialize_multibyte()
{
    // 第一条实际指令: if (data_65aa6c == 0)
    if (data_65aa6c == 0)
        data_65aa5c = 0x5b0478
        data_65aa64 = 0x5b07a0
        data_65aa60 = 0x5b0698
        int32_t* var_4_1 = &data_65aa5c
        int32_t* var_8_1 = ___acrt_getptd_head()
        int32_t edi
        setmbcp_internal(edi, 0xfffffffd, 1)
        data_65aa6c = 1
    
    int32_t result
    result.b = 1
    return result
}
