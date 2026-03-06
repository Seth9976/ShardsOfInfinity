// 函数名称: sub_466120
// 虚拟地址: 0x466120
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t*sub_466120(int64_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_65ae00
    float xmm2 = data_65ae08
    int32_t var_40 = 0
    float var_3c = 0f
    uint128_t xmm1 = zx.o(*(eax_2 + 0x18))
    float xmm3_1 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x14)))
    int32_t var_4c = data_65ae28:0xc
    float xmm1_1 = _mm_cvtepi32_ps(xmm1)
    float var_34 = xmm1_1
    int64_t xmm1_2 = data_65ae28:4.q
    float xmm3_3 = xmm3_1 / xmm1_1 * xmm2
    int128_t var_74 = var_40.o
    float var_7c = xmm3_3
    float var_84 = xmm3_3 ^ (data_59e5c0.o).d
    int32_t var_80 = xmm2 ^ (data_59e5c0.o).d
    float var_78 = xmm2
    int128_t var_64 = data_65ae18:4.o
    int64_t var_54 = xmm1_2
    void var_48
    void arg_8
    int64_t* eax_5 = sub_4b7dc0(&var_48, &arg_8, &var_84, &var_48)
    int64_t xmm0_6 = eax_5[2]
    float xmm2_1[0x4] = *eax_5
    float xmm4 = xmm0_6.d
    var_3c.q = 0
    int96_t var_2c = xmm2_1[0].12
    float xmm2_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
    float xmm3_7 = var_3c * -0f + xmm3_1 * -0f - 0f
    float xmm3_8 = xmm0_6:4.d
    float xmm6_3 = xmm4 * 0f + xmm2_2 * 0f + xmm3_8
    bool cond:0 = 9.99999975e-06f > sub_41b760(xmm6_3)
    float xmm7 = var_2c:8.d
    float xmm1_7
    
    if (not(cond:0))
        xmm1_7 = var_2c:4.d * 0f + var_2c.d * 0f + xmm7 + xmm3_7
    
    float xmm1_9
    
    if (cond:0 || 0 f< xmm1_7 * xmm6_3)
        xmm1_9 = xmm3_7
    else
        xmm1_9 = (xmm1_7 / xmm6_3) ^ (data_59e5c0.o).d
    
    *arg1 = _mm_unpacklo_ps(xmm2_2 * xmm1_9 f+ var_2c.d, xmm4 * xmm1_9 f+ var_2c:4.d)
    arg1[1].d = xmm3_8 * xmm1_9 + xmm7
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg1
}
