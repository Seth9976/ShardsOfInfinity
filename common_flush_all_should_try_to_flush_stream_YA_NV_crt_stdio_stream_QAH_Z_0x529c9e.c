// 函数名称: ?common_flush_all_should_try_to_flush_stream@@YA_NV__crt_stdio_stream@@QAH@Z
// 虚拟地址: 0x529c9e
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*?common_flush_all_should_try_to_flush_stream@@YA_NV__crt_stdio_stream@@QAH@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        int32_t ecx_1 = arg1[3]
        
        if (((ecx_1 u>> 0xd).b & 1) != 0)
            if (is_stream_flushable_or_commitable(ecx_1) != 0)
                return 1
            
            *arg2 += 1
    
    int32_t* result
    result.b = 0
    return result
}
