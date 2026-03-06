// 函数名称: sub_4b38d0
// 虚拟地址: 0x4b38d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b38d0(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg3[1] != 0x20)
        sub_44e4d0(eax_1, &data_5559b1, "ptr->assetType == ASSET_TYPE_FAB", 
            "c:\ax2017\engine\fabdef.cpp", 0xe7, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void var_7c
    int128_t* eax_4 = sub_4b0280(&var_7c, 0x593d38, arg5 * 0xb8 + *sub_4459f0(arg3), &var_7c)
    float var_54 = 1f
    int128_t xmm0 = eax_4[1]
    uint128_t xmm1 = *eax_4
    int64_t xmm0_1 = eax_4[2].q
    uint128_t var_34 = xmm1
    int64_t var_14 = xmm0_1
    int64_t var_40 = xmm1
    int32_t var_38 = _mm_bsrli_si128(xmm1, 8)
    int128_t var_28
    int128_t var_50 = var_28
    sub_4a0490(eax_4, &var_54, &var_34:8, &data_5c779c)
    int128_t var_2c
    *arg4 = var_2c
    arg4[1] = xmm0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
