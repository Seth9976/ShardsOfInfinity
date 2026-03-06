// 函数名称: sub_4b45a0
// 虚拟地址: 0x4b45a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4b45a0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544900
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg2 = arg3
    void* var_18
    int32_t* var_38 = &var_18
    int32_t* result_1
    sub_42ce10(&result_1, arg3, 4)
    int32_t var_8_1 = 0
    int32_t esi_1 = arg5 * 0x14
    int32_t* var_38_1 = &var_18
    void* ebx_1 = var_18 + esi_1
    void* var_20 = ebx_1
    int32_t* var_1c
    sub_42ce10(&var_1c, arg3, 4)
    var_8_1.b = 1
    void* esi_2 = esi_1 + var_18
    
    if (*(esi_2 + 8) == 0)
        *(esi_2 + 8) = (*(*data_ce19b4 + 0x44))(arg3, arg5)
    
    var_8_1.b = 0
    int32_t* eax_7 = var_1c
    
    if (eax_7 != 0)
        eax_7[7] -= 1
    
    int32_t i = 0
    
    if (*(ebx_1 + 0xc) s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t* ebx_3 = *(ebx_1 + 0x10) + edi_1
            int32_t ecx_3 = arg2[1]
            arg2[1] = ecx_3 + 1
            arg2[ecx_3 * 5 + 2] = ebx_3[2]
            arg2[ecx_3 * 5 + 3] = *ebx_3
            int32_t eax_12 = ebx_3[1]
            arg2[ecx_3 * 5 + 4] = eax_12
            sub_4b4330(eax_12, arg4, ebx_3[2], &arg2[ecx_3 * 5 + 2])
            
            if (*(arg2[ecx_3 * 5 + 5] + 0x10) == 0x21 && ebx_3[1] == 3)
                arg2[ecx_3 * 5 + 5] = data_e470fc
            
            ebx_1 = var_20
            i += 1
            edi_1 += 0xc
        while (i s< *(ebx_1 + 0xc))
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
