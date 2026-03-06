// 函数名称: __fclose_nolock
// 虚拟地址: 0x52374c
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t__fclose_nolock(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    int32_t edi
    int32_t var_c_1 = edi
    int32_t result = 0xffffffff
    
    if (((arg1[3] u>> 0xd).b & 1) != 0)
        result = ___acrt_stdio_flush_nolock(arg1)
        ___acrt_stdio_free_buffer_nolock(arg1)
        
        if (__close(__fileno(arg1)) s< 0)
            result = 0xffffffff
        else if (arg1[7] != 0)
            __free_base(arg1[7])
            arg1[7] = 0
    
    __acrt_stdio_free_stream(arg1)
    return result
}
