// 函数名称: sub_53af6f
// 虚拟地址: 0x53af6f
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_53af6f(int32_t arg1, int32_t* arg2, int16_t* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_a0 = edi
    uint32_t ecx_1 = zx.d(*arg3)
    uint32_t var_94 = ecx_1
    int32_t eax_3 = *arg2
    int32_t var_a4_1
    
    if (eax_3 == 1)
    label_53afd7:
        var_a4_1 = 8
    label_53afe0:
        
        if (__handle_exc(var_a4_1, &arg2[6], ecx_1) == 0)
            int32_t var_50
            
            if (arg1 == 0x10 || arg1 == 0x16 || arg1 == 0x1d)
                double var_60_1 = fconvert.d(fconvert.t(*(arg2 + 0x10)))
                int32_t var_50_2 = (var_50 & 0xffffffe3) | 3
            else
                int32_t var_50_1 = var_50 & 0xfffffffe
            void var_90
            sub_532c9a(&var_90, &var_94, var_a4_1.b, arg1, &arg2[2], &arg2[6])
            noreturn
    else
        if (eax_3 == 2)
            var_a4_1 = 4
            goto label_53afe0
        
        if (eax_3 == 3)
            var_a4_1 = 0x11
            goto label_53afe0
        
        if (eax_3 == 4)
            var_a4_1 = 0x12
            goto label_53afe0
        
        if (eax_3 == 5)
            goto label_53afd7
        
        if (eax_3 == 8)
            var_a4_1 = 0x10
            goto label_53afe0
    int16_t x87control
    __ctrlfp(x87control, var_94.w, 0xffff)
    void* result
    
    if (*arg2 == 8)
        result = __set_errno_from_matherr(*arg2)
    else if (___acrt_has_user_matherr() == 0)
        result = __set_errno_from_matherr(*arg2)
    else
        result = ___acrt_invoke_user_matherr(arg2)
        
        if (result == 0)
            result = __set_errno_from_matherr(*arg2)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
