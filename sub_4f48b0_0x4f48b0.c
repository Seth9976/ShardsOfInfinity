// 函数名称: sub_4f48b0
// 虚拟地址: 0x4f48b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

long double __fastcallsub_4f48b0(int32_t arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    data_ce26f8 = 1
    _memset(&data_ce2700, 0, 0x9c)
    data_ce2728 = _mm_unpacklo_ps(zx.o(0), 0)
    data_ce2730 = 0
    data_ce271c.q = _mm_unpacklo_ps(zx.o(0), 0x41000000)
    data_ce2724 = 0x40800000
    sub_53c570()
    data_ce2734 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(-4.0)))) ^ (data_59e5c0.o).d
    sub_53c570()
    int32_t xmm0_5 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(4.0))))
    data_ce2758 = arg1
    data_ce2738 = xmm0_5 ^ (data_59e5c0.o).d
    data_ce2794 = data_5b0f3c
    return fconvert.t(-8.0)
}
