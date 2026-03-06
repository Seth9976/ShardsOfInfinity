// 函数名称: sub_4d5420
// 虚拟地址: 0x4d5420
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_4d5420(int32_t arg1, int32_t* arg2, int32_t* arg3, int64_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: void var_28
    void var_28
    int32_t eax_1 = __security_cookie ^ &var_28
    *arg3 = 0x3f800000
    *(arg3 + 0x14) = *arg4
    arg3[7] = arg4[1].d
    float var_10 = arg2[2] f- arg4[1].d
    int64_t var_18 = _mm_unpacklo_ps(*arg2 f- *arg4, arg2[1] f- *(arg4 + 4))
    int64_t* eax_5 = sub_452d30(&var_28, arg2, &var_18, &var_28)
    int32_t var_10_1 = eax_5[1].d
    var_18 = *eax_5
    int128_t* result = sub_413180(&var_28, arg5, &var_18, &var_28)
    *(arg3 + 4) = *result
    @__security_check_cookie@4(eax_1 ^ &var_28)
    return result
}
