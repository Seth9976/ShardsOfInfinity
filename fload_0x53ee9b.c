// 函数名称: __fload
// 虚拟地址: 0x53ee9b
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double__fload(double arg1, int16_t arg2) __pure
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.w = arg2
    
    if ((arg2 & 0x7ff0) != 0x7ff0)
        return fconvert.t(arg1)
    
    ebx.w |= 0x7fff
    int16_t var_6_1 = ebx.w
    int32_t ebx_1 = arg1.d
    int32_t var_a_1 = arg1:4.d << 0xb | ebx_1 u>> 0xffffffeb
    return ebx_1.t
}
