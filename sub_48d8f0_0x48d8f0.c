// 函数名称: sub_48d8f0
// 虚拟地址: 0x48d8f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_48d8f0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5418c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48e330(&ExceptionList, "sys/FailureAsset", &var_14, *(arg1 + 4))
    int32_t var_8_1 = 0
    char* const ecx_1 = &data_5559b1
    char* eax_4 = var_14
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    int32_t* result = sub_48d5b0(ecx_1, *(arg1 + 4))
    int32_t var_8_2 = 1
    
    if (data_cdf414 != 0)
        char* ecx_2 = var_14
        
        if (ecx_2 != 0 && *ecx_2 != 0)
            char* eax_5 = sub_44f000(&var_14)
            int32_t temp0_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
