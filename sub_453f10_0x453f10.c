// 函数名称: sub_453f10
// 虚拟地址: 0x453f10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_453f10(float arg1 @ xmm0)
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, result = sub_53ea80(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.d(arg1))))
    _mm_cvtpd_ps(zx.o(fconvert.d(st0)))
    return result
}
