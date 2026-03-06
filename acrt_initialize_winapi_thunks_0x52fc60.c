// 函数名称: ___acrt_initialize_winapi_thunks
// 虚拟地址: 0x52fc60
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___acrt_initialize_winapi_thunks()
{
    // 第一条实际指令: int32_t var_8 = 0x20
    int32_t var_8 = 0x20
    void* result = &data_65a6d8
    int32_t i = 0
    int32_t __security_cookie_1 = __security_cookie
    
    do
        i += 1
        *result = __security_cookie_1
        result += 4
    while (i != (sbb.d(&data_65a760, &data_65a760, false) & 0xffffffde) + 0x22)
    
    result.b = 1
    return result
}
