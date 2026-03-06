// 函数名称: sub_507da0
// 虚拟地址: 0x507da0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t*sub_507da0(int128_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_65ae00
    int128_t var_1c = data_59e550
    float var_2c = 0f
    int32_t var_28 = 0
    int32_t var_24 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x14)))
    int32_t var_20 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x18)))
    float var_88[0x17]
    float* eax_4 = sub_48a790(&var_88, &var_1c, &var_2c, &var_88)
    int32_t ecx_1 = eax_4[0x14]
    *arg1 = *eax_4
    arg1[1] = *(eax_4 + 0x10)
    arg1[2] = *(eax_4 + 0x20)
    arg1[3] = *(eax_4 + 0x30)
    arg1[4] = *(eax_4 + 0x40)
    arg1[5].d = ecx_1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg1
}
