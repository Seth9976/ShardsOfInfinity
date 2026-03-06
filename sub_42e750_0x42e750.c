// 函数名称: sub_42e750
// 虚拟地址: 0x42e750
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_42e750(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = sub_42e6c0(eax_1, *(arg4 + 0x330), arg2, *(arg4 + 0x334), 5)
    int32_t eax_3 = sub_42e6c0(eax_2, *(arg4 + 0x338), arg2, *(arg4 + 0x33c), 5)
    int32_t eax_4 = sub_42e6c0(eax_3, *(arg4 + 0x330), arg2, *(arg4 + 0x334), 6)
    int32_t var_18 = sub_42e6c0(eax_4, *(arg4 + 0x338), arg2, *(arg4 + 0x33c), 6)
    int32_t i = 0
    int32_t var_14 = eax_4
    int32_t var_10 = eax_3
    int32_t var_c = eax_2
    __builtin_memset(&arg3[2], 0, 0x28)
    arg3[1] = 8
    *arg3 = 2
    
    do
        int32_t edx_5 = (&var_18)[i]
        
        if (edx_5 != 0)
            arg3[2] = edx_5
            arg3[0xa] = 1
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg3
        
        i += 1
    while (i u< 4)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg3
}
