// 函数名称: ?assemble_floating_point_zero@__crt_strtox@@YAX_NABVfloating_point_value@1@@Z
// 虚拟地址: 0x52642b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t?assemble_floating_point_zero@__crt_strtox@@YAX_NABVfloating_point_value@1@@Z(char arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg1
    int32_t result
    
    if (arg2[1].b == 0)
        result = __crt_strtox::floating_point_value::as_float(arg2)
        *result = zx.d(ebx.b) << 0x1f
    else
        int32_t* eax = __crt_strtox::floating_point_value::as_double(arg2)
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(zx.d(ebx.b))
        result = eax_2 << 0x1f
        *eax = 0
        eax[1] = result
    
    return result
}
