// 函数名称: sub_4ab900
// 虚拟地址: 0x4ab900
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_4ab900()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int128_t* result = __security_cookie ^ &__saved_ebp
    int128_t* result_1 = result
    int32_t* ecx = data_ce19c8
    
    if (ecx != 0)
        (*(*ecx + 0x24))(1)
        data_ce1acc = data_5724f8
        int32_t edx_1 = sub_4ab140()
        float xmm7_2 = data_ce1acc.d ^ 0x80000000
        float xmm5_2 = data_ce1acc:4 ^ 0x80000000
        float xmm1_1 = data_ce1a4c.d
        float xmm6_2 = data_ce1acc:8 ^ 0x80000000
        float xmm0_2 = data_ce1a4c:0xc
        float xmm4_1 = data_ce1a4c:8
        float xmm3_1 = data_ce1a4c:4
        float xmm2_4 = xmm1_1 f* data_ce1acc:0xc + xmm0_2 * xmm7_2 + xmm4_1 * xmm5_2 - xmm3_1 * xmm6_2
        float xmm2_8 = xmm3_1 f* data_ce1acc:0xc + xmm0_2 * xmm5_2 + xmm1_1 * xmm6_2 - xmm4_1 * xmm7_2
        float xmm2_12 = xmm4_1 f* data_ce1acc:0xc + xmm0_2 * xmm6_2 + xmm3_1 * xmm7_2 - xmm1_1 * xmm5_2
        float xmm5_4 = xmm2_8 * xmm2_8
        float xmm6_4 = xmm2_12 * xmm2_12
        float xmm0_31 = xmm0_2 f* data_ce1acc:0xc - xmm1_1 * xmm7_2 - xmm3_1 * xmm5_2 - xmm4_1 * xmm6_2
        float xmm3_5 = xmm2_8 * xmm2_4 - xmm0_31 * xmm2_12
        int64_t var_38 = xmm3_5 + xmm3_5
        float xmm2_13 = xmm2_12 * xmm2_8
        float xmm4_4 = xmm0_31 * xmm0_31
        float xmm3_8 = xmm2_4 * xmm2_4
        float xmm1_5 = xmm0_31 * xmm2_4
        float xmm7_5 = xmm2_13 + xmm1_5
        float xmm2_14 = xmm2_13 - xmm1_5
        float xmm7_6 = xmm7_5 + xmm7_5
        float xmm0_37 = xmm5_4 - xmm6_4 + xmm4_4 - xmm3_8
        float xmm6_7 = xmm6_4 - xmm5_4 - xmm3_8 + xmm4_4
        int64_t xmm0_39 = _mm_unpacklo_ps(var_38.d, xmm0_37)
        float var_64_1 = xmm7_6
        int32_t xmm6_8 = var_38.d
        float xmm7_10 = xmm0_31 * xmm2_8 + xmm2_12 * xmm2_4
        float xmm0_42 = 0f
        float var_40_2 = xmm6_7
        float var_20_2 = 0x3f800000
        int64_t var_48 = _mm_unpacklo_ps(xmm7_10 + xmm7_10, xmm2_14 + xmm2_14)
        float xmm1_9 = xmm6_8 f* xmm0_42 + xmm0_37 * xmm6_7 + xmm7_6 * 1f
        float var_30_1 = xmm7_6 - 1f * xmm1_9
        var_38 = _mm_unpacklo_ps(xmm6_8 f- xmm0_42 * xmm1_9, xmm0_37 - xmm6_7 * xmm1_9)
        void var_28
        int64_t* eax_6 = sub_452d30(&var_28, edx_1, &var_38, &var_28)
        int32_t var_30_2 = eax_6[1].d
        var_38 = *eax_6
        int128_t var_70
        result = sub_413000(&var_28, &data_5718bc, &var_38, &var_28, &var_70:4, &var_48)
        int128_t xmm0_48 = *result
        var_70 = xmm0_48
        var_70.d = xmm0_48.d ^ 0x80000000
        int64_t var_6c_1
        var_6c_1.d = xmm0_39.d ^ 0x80000000
        var_6c_1:4.d ^= 0x80000000
        data_ce1acc = var_70
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
