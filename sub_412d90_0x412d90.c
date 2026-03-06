// 函数名称: sub_412d90
// 虚拟地址: 0x412d90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_tsub_412d90(float arg1 @ xmm0)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    int32_t mxcsr
    int16_t x87control
    double xmm0_1
    result, xmm0_1 = __libm_sse2_sqrt_precise(mxcsr, x87control, fconvert.d(arg1))
    return result
}
