// 函数名称: sub_4bd150
// 虚拟地址: 0x4bd150
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4bd150(int32_t* arg1, uint64_t (* arg2)[0x2] @ esi, float arg3 @ xmm0)
{
    // 第一条实际指令: int64_t var_50
    int64_t var_50
    int32_t result
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, result = sub_52c5b0(mxcsr, x87control, fconvert.d(arg3), &var_50, arg2)
    double var_48 = fconvert.d(st0)
    *arg1 = _mm_cvtpd_ps(zx.o(var_50))
    _mm_cvtpd_ps(zx.o(var_48))
    return result
}
