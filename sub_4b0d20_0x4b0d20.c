// 函数名称: sub_4b0d20
// 虚拟地址: 0x4b0d20
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4b0d20(int32_t arg1, int64_t* arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int128_t var_60
    int128_t var_60
    int32_t eax_1 = __security_cookie ^ &var_60
    int64_t var_20 = *arg2
    int128_t xmm0_1 = *(arg2 + 0xc)
    int32_t var_18 = arg2[1].d
    float var_34 = 1f
    int128_t var_30 = xmm0_1
    sub_4a0490(arg3 + 0x34, &var_34, &var_60, arg3 + 0x34)
    *arg4 = var_60
    int128_t var_50
    arg4[1] = var_50
    @__security_check_cookie@4(eax_1 ^ &var_60)
    return arg4
}
