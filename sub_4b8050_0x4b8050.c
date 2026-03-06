// 函数名称: sub_4b8050
// 虚拟地址: 0x4b8050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int64_t*sub_4b8050(int64_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_20 = 0x3f800000
    *arg1 = 0
    arg1[1].d = 0
    int32_t var_10 = var_20
    int64_t var_18 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
    void var_28
    int32_t edx
    int64_t* eax_4 = sub_452d30(&var_28, edx, &var_18, &var_28)
    int32_t ecx_1 = eax_4[1].d
    *(arg1 + 0xc) = *eax_4
    *(arg1 + 0x14) = ecx_1
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg1
}
