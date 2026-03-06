// 函数名称: sub_49a2d0
// 虚拟地址: 0x49a2d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_49a2d0(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_3 = sub_4459f0(**(arg3 + 0x2e4))
    int128_t* result
    int128_t xmm0_1
    int128_t var_30
    void* eax_5
    
    if (*(*(arg3 + 0x2dc) * 0x134 + *eax_3 + 0xd9) == 0)
        if (*(arg3 + 0x2e0) == 0)
            eax_5 = *(arg3 + 0x2e4) + 0x2c
            goto label_49a317
        
        int128_t var_50
        int128_t* eax_7 = sub_49a2d0(&var_50)
        var_30 = *eax_7
        int128_t var_20_1 = eax_7[1]
        sub_4a0490(&var_30, arg3 + 0x288, &var_50, &var_30)
        result = arg4
        *result = var_50
        int128_t var_40
        xmm0_1 = var_40
    else
        eax_5 = arg3 + 0x2a8
    label_49a317:
        sub_4a0490(eax_5, arg3 + 0x288, &var_30, eax_5)
        result = arg4
        *result = var_30
        int128_t var_20
        xmm0_1 = var_20
    result[1] = xmm0_1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
