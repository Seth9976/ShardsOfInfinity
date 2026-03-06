// 函数名称: sub_4c3020
// 虚拟地址: 0x4c3020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __convention("regparm")sub_4c3020(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: void var_d8
    void var_d8
    int32_t var_14 = __security_cookie ^ &var_d8
    float xmm0 = arg4[2]
    xmm0 - 0f
    int32_t eax_1
    eax_1:1.b =
        (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        int32_t eax_2 = *arg4
        void* eax_3 = sub_4c25b0(eax_2, arg2, arg3, eax_2, arg5)
        @__security_check_cookie@4(var_14 ^ &var_d8)
        return eax_3
    
    int32_t eax_4 = *arg4
    int128_t var_c0
    sub_4c25b0(eax_4, arg2, arg3, eax_4, &var_c0)
    int128_t var_70
    char eax_6 = sub_4c25b0(&var_70, arg2, arg3, arg4[1], &var_70)
    int32_t var_78
    int32_t var_28
    
    if (var_78 != 0 && var_28 != 0)
        eax_6 = sub_4c2b80(&var_c0, &var_70)
        float xmm3_1 = arg4[2]
        
        if (eax_6 == 0)
            int32_t eax_8 = sub_4c2d30(&var_70, &var_c0, arg5, xmm3_1, &var_70)
            @__security_check_cookie@4(var_14 ^ &var_d8)
            return eax_8
        
        if (not(0.5f > xmm3_1))
            *arg5 = var_70
            int128_t var_60
            *(arg5 + 0x10) = var_60
            int128_t var_50
            *(arg5 + 0x20) = var_50
            int128_t var_40
            *(arg5 + 0x30) = var_40
            int128_t var_30
            *(arg5 + 0x40) = var_30
            @__security_check_cookie@4(var_14 ^ &var_d8)
            return eax_6
    
    *arg5 = var_c0
    int128_t var_b0
    *(arg5 + 0x10) = var_b0
    int128_t var_a0
    *(arg5 + 0x20) = var_a0
    int128_t var_90
    *(arg5 + 0x30) = var_90
    int128_t var_80
    *(arg5 + 0x40) = var_80
    @__security_check_cookie@4(var_14 ^ &var_d8)
    return eax_6
}
