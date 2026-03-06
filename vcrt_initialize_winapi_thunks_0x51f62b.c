// 函数名称: ___vcrt_initialize_winapi_thunks
// 虚拟地址: 0x51f62b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*___vcrt_initialize_winapi_thunks()
{
    // 第一条实际指令: void* result = &data_65a368
    void* result = &data_65a368
    int32_t i = 0
    uint32_t __security_cookie_1 = __security_cookie
    
    do
        i += 1
        *result = __security_cookie_1
        result += 4
    while (i != (sbb.d(0x65a37c, 0x65a37c, false) & 0xfffffffb) + 5)
    
    return result
}
