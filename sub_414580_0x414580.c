// 函数名称: sub_414580
// 虚拟地址: 0x414580
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long doublesub_414580(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: double xmm0_1 = _mm_cvtps_pd(arg1)
    double xmm0_1 = _mm_cvtps_pd(arg1)
    _mm_cvtps_pd(arg2)
    int32_t esi
    int32_t edi
    int32_t mxcsr
    int16_t x87control
    return fconvert.t(fconvert.s(__libm_sse2_pow_precise(esi, edi, mxcsr, x87control, xmm0_1)))
}
