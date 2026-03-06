// 函数名称: sub_45c050
// 虚拟地址: 0x45c050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_45c050(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm0_2 = _mm_cvtepi32_ps(zx.o((arg3 u>> 0x10).b)) / 255f
    float var_14 = _mm_cvtepi32_ps(zx.o((arg3 u>> 8).b)) / 255f
    float var_10 = _mm_cvtepi32_ps(zx.o(arg3.b)) / 255f
    float var_c = _mm_cvtepi32_ps(zx.o(arg3 u>> 0x18)) / 255f
    *arg4 = xmm0_2.o
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg4
}
