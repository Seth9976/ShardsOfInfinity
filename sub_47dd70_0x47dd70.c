// 函数名称: sub_47dd70
// 虚拟地址: 0x47dd70
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_47dd70(float* arg1)
{
    // 第一条实际指令: void var_fc
    void var_fc
    int32_t eax_1 = __security_cookie ^ &var_fc
    int128_t var_f0
    int32_t edx
    int128_t* eax_3 = sub_45c3f0(&var_f0, edx, arg1, &var_f0)
    int128_t var_b0 = *eax_3
    int128_t var_a0 = eax_3[1]
    int128_t var_90 = eax_3[2]
    int128_t var_80 = eax_3[3]
    float xmm0_4 = sub_4145d0(-0.785398185f)
    float var_24 = xmm0_4
    float xmm1_1 = xmm0_4 * 0f
    float var_20 = xmm1_1
    float var_1c = xmm1_1
    int32_t edx_1
    int32_t xmm0_5
    edx_1, xmm0_5 = sub_4145b0(-0.785398185f)
    int32_t var_18 = xmm0_5
    void var_68
    int128_t* eax_5 = sub_47f2c0(&var_68, edx_1, &var_24, &var_68)
    var_f0 = *eax_5
    int128_t var_e0 = eax_5[1]
    int128_t var_d0 = eax_5[2]
    int128_t var_c0 = eax_5[3]
    float* eax_7 = sub_45c930(&var_68, &var_f0, &var_b0, &var_68)
    int128_t xmm1_2 = *(eax_7 + 0x10)
    int128_t xmm2 = *(eax_7 + 0x20)
    int128_t xmm3 = *(eax_7 + 0x30)
    void* eax_8 = data_ce19c4
    *(eax_8 + 0xa0) = *eax_7
    *(eax_8 + 0xe0) = 1
    *(eax_8 + 0xb0) = xmm1_2
    *(eax_8 + 0xc0) = xmm2
    *(eax_8 + 0xd0) = xmm3
    int32_t result = sub_45ade0(&arg1[5])
    @__security_check_cookie@4(eax_1 ^ &var_fc)
    return result
}
