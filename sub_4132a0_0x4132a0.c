// 函数名称: sub_4132a0
// 虚拟地址: 0x4132a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

double (*sub_4132a0(float arg1 @ xmm0))[0x2]
{
    // 第一条实际指令: double (* result)[0x2]
    double (* result)[0x2]
    int32_t mxcsr
    int16_t x87control
    double xmm0_1
    result, xmm0_1 = __libm_sse2_tan_precise(mxcsr, x87control, fconvert.d(arg1))
    return result
}
