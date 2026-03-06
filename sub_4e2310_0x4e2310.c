// 函数名称: sub_4e2310
// 虚拟地址: 0x4e2310
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __convention("regparm")sub_4e2310(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_545c58
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 1
    char* var_24 = arg3
    int32_t* ecx = &var_24
    int32_t var_8_1 = 0
    char* arg_c
    char* eax_3 = arg_c
    var_24 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        eax_3 = sub_44f000(ecx)
        *(eax_3 + 4) += 1
    
    int32_t ebx
    ebx.b = sub_4e1eb0(eax_3, arg4, ecx.b).b
    int32_t var_8_2 = 1
    char* result
    
    if (data_cdf414 != 0)
        char* ecx_1 = arg_c
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            result = sub_44f000(&arg_c)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
