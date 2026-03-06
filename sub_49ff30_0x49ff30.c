// 函数名称: sub_49ff30
// 虚拟地址: 0x49ff30
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_49ff30(int32_t arg1, int32_t* arg2, int64_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm7 = *arg2
    float xmm4[0x2] = *(arg3 + 4)
    float xmm5[0x2] = *arg3
    float xmm6 = arg2[2]
    int128_t xmm3 = arg3[1].d
    float xmm2_4 = xmm7 f* xmm5 + arg2[1] f* xmm4 + xmm6 f* xmm3 + 1f
    float var_18 = xmm2_4
    float var_24
    
    if (9.99999975e-06f <= xmm2_4)
        float xmm1_3 = xmm6 f* xmm4 - xmm3.d f* arg2[1]
        float xmm3_5 = xmm3 f* xmm7 - xmm6 f* xmm5
        float xmm5_2 = xmm5 f* arg2[1] - xmm7 f* xmm4
        float xmm0_17 =
            sub_412d90(xmm1_3 * xmm1_3 + xmm2_4 * xmm2_4 + xmm3_5 * xmm3_5 + xmm5_2 * xmm5_2)
        float var_18_1 = xmm2_4 / xmm0_17
        var_24 = xmm1_3 / xmm0_17
        float var_20_1 = xmm3_5 / xmm0_17
        float var_1c_2 = xmm5_2 / xmm0_17
    else if (_mm_cvtpd_ps(__andps_xmmxud_memxud(_mm_cvtps_pd(xmm5), data_59e5a0))
            f<= _mm_cvtpd_ps(__andps_xmmxud_memxud(_mm_cvtps_pd(xmm4), data_59e5a0)))
        int32_t xmm4_1 = xmm4[0] ^ (data_59e5c0.o).d
        var_24.q = _mm_unpacklo_ps(zx.o(0), xmm3.q)
        int32_t var_1c_1 = xmm4_1
    else
        var_24.q = _mm_unpacklo_ps(xmm3 ^ data_59e5c0.o, 0)
        int32_t var_1c = xmm5
    
    *arg4 = var_24.o
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
