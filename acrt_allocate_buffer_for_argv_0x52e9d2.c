// 函数名称: ___acrt_allocate_buffer_for_argv
// 虚拟地址: 0x52e9d2
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t___acrt_allocate_buffer_for_argv(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 u< 0x3fffffff && arg2 u< divu.dp.d(0:0xffffffff, arg3))
    if (arg1 u< 0x3fffffff && arg2 u< divu.dp.d(0:0xffffffff, arg3))
        int32_t ecx_2 = arg2 * arg3
        int32_t esi_1 = arg1 << 2
        
        if (not.d(esi_1) u> ecx_2)
            int32_t result = __calloc_base(esi_1 + ecx_2, 1)
            __free_base(0)
            return result
    
    return 0
}
