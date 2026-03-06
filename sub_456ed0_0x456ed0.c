// 函数名称: sub_456ed0
// 虚拟地址: 0x456ed0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

float* __fastcallsub_456ed0(int128_t* arg1)
{
    // 第一条实际指令: bool cond:0 = data_65ae38 == 0
    bool cond:0 = data_65ae38 == 0
    data_65ae44 = *arg1
    float xmm4 = data_65ae44:8
    float xmm3 = data_65ae44:0xc
    data_65ae54 = arg1[1].q
    int128_t var_120
    float var_d0
    int128_t var_b8
    int128_t* ecx_1
    
    if (cond:0)
        bool cond:1_1 = data_ce19b8 != 1
        float xmm2_1 = 1f / (xmm4 f- data_65ae44.d)
        float xmm4_4 = data_65ae54:4
        float xmm1_1 = 1f / (xmm3 f- data_65ae44:4)
        float xmm3_6 = data_65ae54.d
        float xmm6_7 = (xmm4 f+ data_65ae44.d) * 0.5f
        float xmm5_3 = (xmm3 f+ data_65ae44:4) * 0.5f
        float xmm7_5 = 1f / (xmm4_4 - xmm3_6)
        __builtin_memset(&var_120, 0, 0x40)
        var_120:8.d = (xmm6_7 + xmm6_7) * xmm2_1
        int128_t var_110_1
        var_110_1:8.d = (xmm5_3 + xmm5_3) * xmm1_1
        var_120.d = xmm2_1 + xmm2_1
        var_110_1:4.d = xmm1_1 + xmm1_1
        float xmm0_28
        float xmm3_8
        
        if (cond:1_1)
            xmm0_28 = xmm7_5 * xmm4_4
            xmm3_8 = xmm3_6 * xmm4_4 * -1f
        else
            xmm3_8 = xmm3_6 * xmm4_4 * -2f
            xmm0_28 = (xmm3_6 + xmm4_4) * xmm7_5
        
        ecx_1 = &var_120
        int128_t var_f0_1
        var_f0_1:8.d = 0xbf800000
        int128_t var_100_1
        var_100_1:8.d = xmm0_28 ^ (data_59e5c0.o).d
        var_100_1:0xc.d = xmm3_8 * xmm7_5
    else
        float xmm0_2 = 1f f/ data_65ae3c
        int32_t var_98_1 = 0
        int32_t var_94_1 = 0x3f800000
        float xmm6_1 = data_65ae44:4 f+ xmm3
        float xmm5 = 1f / (xmm4 f- data_65ae44.d)
        float xmm4_2 = 1f / (xmm3 f- data_65ae44:4)
        float xmm3_2 = 1f / (data_65ae54:4 f- data_65ae54.d)
        float xmm7_1 = xmm4 f+ data_65ae44.d
        __builtin_memset(&var_120, 0, 0x40)
        int128_t var_f0
        var_f0:0xc.d = 0x3f800000
        var_120:0xc.d = xmm7_1 * 0.5f * -2f * xmm5
        var_120.d = xmm5 + xmm5
        int128_t var_110
        var_110:0xc.d = xmm6_1 * 0.5f * -2f * xmm4_2
        var_110:4.d = xmm4_2 + xmm4_2
        int32_t xmm3_4 = (xmm3_2 f* data_65ae54.d) ^ (data_59e5c0.o).d
        int128_t var_100
        var_100:8.d = xmm3_2 * -2f
        int128_t var_cc = zx.o(0)
        var_b8 = zx.o(0)
        int128_t xmm0_11 = data_59dc40
        var_d0 = xmm0_2
        int128_t var_90 = var_d0.o
        float var_bc_1 = xmm0_2
        int128_t var_80_1 = var_cc
        int128_t var_70_1 = var_b8
        var_100:0xc.d = xmm3_4
        int128_t var_60_1 = xmm0_11
        float* eax_2 = sub_45c930(&var_d0, &var_90, &var_120, &var_d0)
        ecx_1 = &var_90
        var_90 = *eax_2
        int128_t var_80_2 = *(eax_2 + 0x10)
        int128_t var_70_2 = *(eax_2 + 0x20)
        int128_t var_60_2 = *(eax_2 + 0x30)
    
    float var_50[0x10]
    float* result = sub_45c930(&var_50, &data_e47098, ecx_1, &var_50)
    bool cond:2 = data_ce19b8 != 1
    var_120 = *result
    int128_t var_110_2 = *(result + 0x10)
    int128_t var_100_2 = *(result + 0x20)
    int128_t var_f0_2 = *(result + 0x30)
    
    if (not(cond:2) && data_65b224 != 0)
        __builtin_memcpy(&var_d0, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00", 
            0x20)
        int32_t var_bc_2 = 0xbf800000
        __builtin_memcpy(&var_b8:8, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
        result = sub_45c930(&var_50, &var_120, &var_d0, &var_50)
        var_120 = *result
        int128_t var_110_3 = *(result + 0x10)
        int128_t var_100_3 = *(result + 0x20)
        int128_t var_f0_3 = *(result + 0x30)
    
    sub_456e60(&var_120)
    return result
}
