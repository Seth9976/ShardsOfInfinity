// 函数名称: sub_4ea960
// 虚拟地址: 0x4ea960
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __thiscallsub_4ea960(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_10 = 0
    int32_t var_c = 0x3f800000
    int32_t var_18 = _mm_cvtepi32_ps(zx.o(arg4 - arg2))
    int32_t* eax_6 = *(arg1 + 8)
    int32_t var_14 = _mm_cvtepi32_ps(zx.o(arg5 - arg3))
    int32_t var_20 = _mm_cvtepi32_ps(zx.o(arg2))
    int32_t var_1c = _mm_cvtepi32_ps(zx.o(arg3))
    int32_t result = (*(*eax_6 + 0xb0))(eax_6, 1, &var_20)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
