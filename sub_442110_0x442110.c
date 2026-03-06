// 函数名称: sub_442110
// 虚拟地址: 0x442110
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_442110(float arg1 @ xmm0)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    
    if (data_5bb244.d == 0xf)
        ecx = data_5bb244:4
    
    int32_t eax
    int32_t edx
    eax, edx = sub_47a160(ecx, "tblCards")
    void var_68
    int128_t* eax_2 = sub_47a330(&var_68, edx, eax, &var_68)
    int128_t xmm0 = *eax_2
    int128_t var_c0 = eax_2[1]
    int128_t var_b0 = eax_2[2]
    int128_t var_a0 = eax_2[3]
    int128_t var_90 = eax_2[4]
    float eax_3
    float edx_1
    eax_3, edx_1 = sub_479140(eax)
    float xmm3 = xmm0:0xc.d
    float var_ec = eax_3
    var_ec = var_ec + arg1 * 0f * xmm3 * 150f
    float var_e8_1 = edx_1 + xmm3 * arg1 * 150f
    return sub_4791c0(eax, &var_ec)
}
