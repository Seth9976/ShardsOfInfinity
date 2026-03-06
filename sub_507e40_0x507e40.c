// 函数名称: sub_507e40
// 虚拟地址: 0x507e40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_507e40()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_546868
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    float eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_f0
    int128_t* eax_3 = sub_507da0(&var_f0)
    int128_t var_98 = *eax_3
    int128_t var_88 = eax_3[1]
    int128_t var_78 = eax_3[2]
    int128_t var_68 = eax_3[3]
    int32_t var_48 = eax_3[5].d
    int32_t* var_28
    int32_t* var_f8_1 = &var_28
    int128_t var_58 = eax_3[4]
    int32_t* var_2c
    sub_42ce10(&var_2c, data_dfc4cc, 0x1d)
    int32_t var_14_1 = 0
    int32_t eax_5 = sub_4a2e30(var_28)
    int32_t var_14_2 = 0xffffffff
    int32_t* ecx_2 = var_2c
    
    if (ecx_2 != 0)
        ecx_2[7] -= 1
    
    void* eax_6 = data_65ae00
    uint128_t xmm1 = zx.o(*(eax_6 + 0x18))
    float xmm2_1 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0x14)))
    int32_t var_3c = 0
    int32_t var_38 = 0
    float xmm2_4 = _mm_min_ss(xmm2_1 - 0f, _mm_cvtepi32_ps(xmm1) - 0f) * 0.800000012f
    float var_34 = xmm2_4
    float var_30 = xmm2_4
    sub_47d1f0(eax_6, &var_3c, nullptr, &data_571d08, &data_5c77bc, eax_5)
    data_dfc4d0
    void* result = sub_4899c0(0x3f800000, eax_2, var_f0)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
